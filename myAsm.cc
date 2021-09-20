/*
  The MyAsm programming language
  Copyright 2019 Eric J. Deiman

  This file is part of the MyAsm programming language.
  The MyAsm programming language is free software: you can redistribute it
  and/ormodify it under the terms of the GNU General Public License as published by the
  Free Software Foundation, either version 3 of the License, or (at your option) any
  later version.

  The MyAsm programming language is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  You should have received a copy of the GNU General Public License along with the
  MyAsm programming language. If not, see <https://www.gnu.org/licenses/>
*/


#include "myAsm.hh"

#include <fstream>
#include <iomanip>
#include <iostream>

#include <sys/mman.h>
#include <unistd.h>

enum struct ExOpCode {
  x0 = 0,
  x1,
  x2,
  x3,
  x4,
  x5,
  x6,
  x7
};

enum struct Mode {
  ind = 0,
  ind8,
  ind32,
  dir
};

// E: ModR/M follows; for memory a SIB also follows
// G: ModR/M.reg specifies general register
// I: immediate data follows instruction bytes
// b: byte
// v: word (16-bits), dword (32-bits), or qword (64-bits)
// z: word or dword
enum struct BasicOperands {
  EbGb = 0,
  EvGv,
  GbEb,
  GvEv,
  ralIb,
  raxIz
};

enum struct Scale {
  x1 = 0,
  x2,
  x4,
  x8
};


uint8_t
makeRex( bool x64, Register destination, Register index, Register source ) {
  auto W = static_cast< uint8_t >( x64 );
  auto R = static_cast< uint8_t >( destination ) & 0x8;
  auto X = static_cast< uint8_t >( index ) & 0x8;
  auto B = static_cast< uint8_t >( source ) & 0x8;

  return 0x40 | ( W << 3 ) | ( R >> 1 ) | ( X >> 2 ) | ( B >> 3 );
}

uint8_t
makeModRxRm( Mode mode, uint8_t rx, Register source ) {
  auto m = static_cast< uint8_t >( mode );
  auto d = rx & 7;
  auto s = static_cast< uint8_t >( source ) & 7;

  return ( m << 6 ) | ( d << 3 ) | s;  
}

uint8_t
makeModRxRm( Mode mode, ExOpCode xop, Register source ) {
  auto x = static_cast< uint8_t >( xop );

  return makeModRxRm( mode, x, source );
}

uint8_t
makeModRxRm( Mode mode, Register destination, Register source ) {
  auto x = static_cast< uint8_t >( destination );

  return makeModRxRm( mode, x, source );
}

uint8_t
makeModRxRm( uint8_t rx, Register source ) {
  auto m = static_cast< uint8_t >( Mode::dir );
  auto d = rx & 7;
  auto s = static_cast< uint8_t >( source ) & 7;

  return ( m << 6 ) | ( d << 3 ) | s;  
}

uint8_t
makeModRxRm( Register destination, Register source ) {
  return makeModRxRm( static_cast< uint8_t >( destination ), source );
}

uint8_t
makeModRxRm( ExOpCode x, Register r ) {
  return makeModRxRm( static_cast< uint8_t >( x ), r );
}

uint8_t
makeSIB( Scale scale, Register index, Register base ) {
  auto s = static_cast< uint8_t >( scale );
  auto i = static_cast< uint8_t >( index ) & 7;
  auto b = static_cast< uint8_t >( base ) & 7;

  return ( s << 6 ) | ( i << 3 ) | b ;
}

size_t
useIndr4r12( uint8_t x, Register r2, Code& where ) {

  where.push_back( makeModRxRm( Mode::ind, x, r2 ) );
  where.push_back( makeSIB( Scale::x1, Register::r4, r2 ) );

  return 2;
}

size_t
useIndr4r12( Register r1, Register r2, Code& where ) {
  return useIndr4r12( static_cast< uint8_t >( r1 ), r2, where );
}

size_t
useIndr4r12( ExOpCode x, Register r2, Code& where ) {
  return useIndr4r12( static_cast< uint8_t >( x ), r2, where );
}

size_t
useIndr5r13( uint8_t x, Register r2, Code& where ) {

  where.push_back( makeModRxRm( Mode::ind8, x, r2 ) );
  where.push_back( 0 );

  return 2;
}

size_t
useIndr5r13( Register r1, Register r2, Code& where ) {
  return useIndr5r13( static_cast< uint8_t >( r1 ), r2, where );
}

size_t
useIndr5r13( ExOpCode x, Register r2, Code& where ) {
  return useIndr5r13( static_cast< uint8_t >( x ), r2, where );
}

size_t
makeIndirect( uint8_t x, Register reg, Code& where ) {
  size_t length = 0;

  if( reg == Register::r4 || reg == Register::r12 ) {
    // use a SIB follows
    length += useIndr4r12( x, reg, where );
  }
  else if( reg == Register::r5 || reg == Register::r13 ) {
    // normally means that a disp32 follows, so send an disp8 of zero
    length += useIndr5r13( x, reg, where );
  }
  else {
    where.push_back( makeModRxRm( Mode::ind, x, reg ) );
    length++;
  }

  return length;
}

size_t
makeIndirect( Register destination, Register source, Code& where ) {
  return makeIndirect( static_cast< uint8_t >( destination ), source, where );
}

size_t
makeIndirect( ExOpCode xop, Register source, Code& where ) {
  return makeIndirect( static_cast< uint8_t >( xop ), source, where );
  
}

size_t
makeBasicIns( BasicOpClass op, Register destination, Register source, Code& where ) {
  auto o = static_cast< uint8_t >( op );
  auto rands = static_cast< uint8_t >( BasicOperands::GvEv );

  where.push_back( makeRex( true, destination, Register::r0, source ) );
  where.push_back( ( o << 3 ) | rands );
  where.push_back( makeModRxRm( destination, source ) );

  return 3;
}

size_t
makeImm32( int32_t imm, Code& where ) {
  where.push_back( imm & 0xff );
  where.push_back( ( imm >> 8 ) & 0xff );
  where.push_back( ( imm >> 16 ) & 0xff );
  where.push_back( ( imm >> 24 ) & 0xff );

  return 4;
}

size_t
makeBasicIns( BasicOpClass op, int32_t imm32, Code& where ) {
  auto o = static_cast< uint8_t >( op );
  auto rands = static_cast< uint8_t >( BasicOperands::raxIz );

  where.push_back( makeRex( true, Register::r0, Register::r0, Register::r0 ) );
  where.push_back( ( o << 3 ) | rands );

  auto i = makeImm32( imm32, where );

  return i + 2;
}

size_t
makeBasicIns( BasicOpClass op, Register destination, int32_t imm32, Code& where ) {
  if( destination == Register::rax ) {
    return makeBasicIns( op, imm32, where );
  }
  
  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, destination ) );
  where.push_back( 0x81 );
  where.push_back( makeModRxRm( xop, destination ) );

  auto i = makeImm32( imm32, where );

  return i + 3;
}

size_t
makeBasicIns( BasicOpClass op, IndirectReg destination, int32_t imm32, Code& where ) {
  auto dest = static_cast< Register >( destination );
  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, dest ) );
  where.push_back( 0x81 );

  auto i = makeIndirect( xop, dest, where );
  auto j = makeImm32( imm32, where );

  return i + j + 2;
}

vector< uint8_t > opMRtx = { 0x01, 0x09, 0x11, 0x19, 0x21, 0x29, 0x31, 0x39 };

// [destination] = [destination] op source
size_t
makeBasicIns( BasicOpClass op, IndirectReg destination, Register source, Code& where ) {
  auto dest = static_cast< Register >( destination);
  auto o = static_cast< uint8_t >( op );

  where.push_back( makeRex( true, dest, Register::r0, source ) );
  where.push_back( opMRtx[ o ] );

  auto i = makeIndirect( dest, source, where );

  return i + 2;
}

// destination = destination op [source]
size_t
makeBasicIns( BasicOpClass op, Register destination, IndirectReg source, Code& where ) {
  auto src = static_cast< Register >( source );
  auto o = static_cast< uint8_t >( op );

  where.push_back( makeRex( true, src, Register::r0, destination ) );
  where.push_back( opMRtx[ o ] + 2 );
  where.push_back( makeModRxRm( Mode::ind, src, destination ) );

  return 3;
}

size_t
makeMul( Register source, Code& where ) {

  where.push_back( makeRex( true, Register::r0, Register::r0, source ) );
  where.push_back( 0xf7 );
  where.push_back( makeModRxRm( ExOpCode::x5, source ) );

  return 3;
}

size_t
makeMul( IndirectReg source, Code& where ) {
  auto src = static_cast< Register >( source );

  where.push_back( makeRex( true, Register::r0, Register::r0, src ) );
  where.push_back( 0xf7 );

  auto i = makeIndirect( ExOpCode::x5, src, where );

  return i + 2;
}

size_t
makeMul( Register destination, Register source, Code& where ) {
  if( destination == Register::rax ) {
    return makeMul( source, where );
  }

  where.push_back( makeRex( true, destination, Register::r0, source ) );
  where.push_back( 0x0f );
  where.push_back( 0xaf );
  where.push_back( makeModRxRm( destination, source ) );

  return 4;
}

size_t
makeMul( Register destination, IndirectReg source, Code& where ) {
  auto src = static_cast< Register >( source );

  where.push_back( makeRex( true, destination, Register::r0, src ) );
  where.push_back( 0x0f );
  where.push_back( 0xaf );

  auto i = makeIndirect( destination, src, where );

  return i + 3;
}

size_t
makeMul( Register destination, Register source, int32_t imm, Code& where ) {

  where.push_back( makeRex( true, destination, Register::r0, source ) );
  where.push_back( 0x69 );
  where.push_back( makeModRxRm( destination, source ) );

  auto i = makeImm32( imm, where );

  return i + 3;
}

size_t
makeMul( Register destination, IndirectReg source, int32_t imm, Code& where ) {
  auto src = static_cast< Register >( source );

  where.push_back( makeRex( true, destination, Register::r0, src ) );
  where.push_back( 0x69 );

  auto i = makeIndirect( destination, src, where );
  auto j = makeImm32( imm, where );

  return i + j + 2;
}

size_t
makeDiv( Register source, Code& where ) {

  where.push_back( makeRex( true, Register::r0, Register::r0, source ) );
  where.push_back( 0xf7 );
  where.push_back( makeModRxRm( ExOpCode::x7, source ) );

  return 3;
}

size_t
makeDiv( IndirectReg source, Code& where ) {
  auto src = static_cast< Register >( source );

  where.push_back( makeRex( true, Register::r0, Register::r0, src ) );
  where.push_back( 0xf7 );

  auto i = makeIndirect( ExOpCode::x7, src, where );

  return i + 2;
}

size_t
makeJcc( CondTest test, uint32_t disp, Code& where ) {
  auto t = static_cast< uint8_t >( test );

  where.push_back( 0x0f );
  where.push_back( 0x80 | t );

  auto i = makeImm32( disp, where );

  return i + 2;
}

size_t
makeJmp( uint32_t disp, Code& where ) {

  where.push_back( 0xe9 );

  auto i = makeImm32( disp, where );

  return i + 1;;
}

size_t
makeJmp( Register r, Code& where ) {
  size_t length = 0;

  if( Register::r7 < r ) {
    where.push_back( makeRex( false, Register::r0, Register::r0, r ) );
    length++;
  }
  
  where.push_back( 0xff );
  where.push_back( makeModRxRm( ExOpCode::x4, r ) );

  return length + 2;
}

uint8_t
combineOpReg( uint8_t op, Register reg ) {
  auto r = static_cast< uint8_t >( reg ) & 7;

  return op | r;
}

size_t
makeMov( Register destination, Register source, Code& where ) {

  where.push_back( makeRex( true, destination, Register::r0, source ) );
  where.push_back( 0x8B );
  where.push_back( makeModRxRm( destination, source ) );

  return 3;
}

size_t
makeMov( Register destination, IndirectReg source, Code& where ) {
  auto src = static_cast< Register >( source );

  where.push_back( makeRex( true, destination, Register::r0, src ) );
  where.push_back( 0x8B );

  auto i = makeIndirect( destination, src, where );

  return i + 2;
}

size_t
makeMov( IndirectReg destination, Register source, Code& where ) {
  auto dest = static_cast< Register >( destination );

  where.push_back( makeRex( true, source, Register::r0, dest ) );
  where.push_back( 0x89 );

  auto i = makeIndirect( source, dest, where );

  return i + 2;
}

size_t
makeMov( Register destination, int64_t imm, Code& where ) {

  where.push_back( makeRex( true, Register::r0, Register::r0, destination ) );
  where.push_back( combineOpReg( 0xb8, destination ) );

  for( auto i = 0; i < 8; i++) {
    where.push_back( imm & 0xff );
    imm >>= 8;
  }

  return 10;
}

size_t
makeMov( IndirectReg destination, int32_t imm, Code& where ) {
  auto dest = static_cast< Register >( destination );

  where.push_back( makeRex( true, Register::r0, Register::r0, dest ) );
  where.push_back( 0xc7 );

  auto i = makeIndirect( ExOpCode::x0, dest, where );

  for( auto i = 0; i < 4; i++) {
    where.push_back( imm & 0xff );
    imm >>= 8;
  }

  return i + 7;
}

size_t
makeCall( int32_t disp, Code& where ) {

  where.push_back( 0xe8 );

  auto i = makeImm32( disp, where );

  return i + 1;
}

size_t
makeCall( Register r, Code& where ) {
  size_t i = 0;

  if( Register::r7 < r ) {
    where.push_back( makeRex( false, Register::r0, Register::r0, r ) );
    i++;
  }
  where.push_back( 0xff );
  where.push_back( makeModRxRm( ExOpCode::x2, r ) );

  return 2 + i;
}

size_t
makeRet( Code& where ) {
  where.push_back( 0xc3 );
  return 1;
}

// shl or shr by one
size_t
makeShift( ShiftOp op, Register reg, Code& where ) {
  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, reg ) );
  where.push_back( 0xd1 );
  where.push_back( makeModRxRm( xop, reg ) );

  return 3;
}

size_t
makeShift( ShiftOp op, Register reg, uint8_t imm8, Code& where ) {
  if( imm8 == 1 ) {
    return makeShift( op, reg, where );
  }

  if( 63 < imm8 ) {
    return 0;
  }

  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, reg ) );
  where.push_back( 0xc1 );
  where.push_back( makeModRxRm( xop, reg ) );
  where.push_back( imm8 & 0x3f );

  return 4;
}

// shl or shr by one
size_t
makeShift( ShiftOp op, IndirectReg reg, Code& where ) {
  auto r = static_cast< Register >( reg );
  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, r ) );
  where.push_back( 0xd1 );

  auto i = makeIndirect( xop, r, where );

  return i + 2;
}

size_t
makeShift( ShiftOp op, IndirectReg reg, uint8_t imm8, Code& where ) {
  if( imm8 == 1 ) {
    return makeShift( op, reg, where );
  }

  if( 63 < imm8 ) {
    return 0;
  }
  auto r = static_cast< Register >( reg );
  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, r ) );
  where.push_back( 0xc1 );

  auto i = makeIndirect( xop, r, where );

  where.push_back( imm8 & 0x3f );

  return i + 2;
}

size_t
makeCompl( ExOpCode op, Register reg, Code& where ) {

  where.push_back( makeRex( true, Register::r0, Register::r0, reg ) );
  where.push_back( 0xf7 );
  where.push_back( makeModRxRm( op, reg ) );

  return 3;
}

size_t
makeCompl( ComplOp op, Register reg, Code& where ) {
  return makeCompl( static_cast< ExOpCode >( op ), reg, where );
}

size_t
makeCompl( ExOpCode op, IndirectReg reg, Code& where ) {
  auto r = static_cast< Register >( reg );

  where.push_back( makeRex( true, Register::r0, Register::r0, r ) );
  where.push_back( 0xf7 );

  auto i = makeIndirect( op, r, where );

  return i + 2;
}

size_t
makeCompl( ComplOp op, IndirectReg reg, Code& where ) {
  return makeCompl( static_cast< ExOpCode >( op ), reg, where );
}

size_t
makeSysCall( Code& where ) {

  where.push_back( 0x0f );
  where.push_back( 0x05 );

  return 2;
}

size_t
makePush( Register reg, Code& where ) {
  size_t length = 0;

  if( Register::r7 < reg ) {
    where.push_back( makeRex( false, Register::r0, Register::r0, reg ) );
    length++;
  }
  where.push_back( combineOpReg( 0x50, reg ) );

  return length + 1;
}

size_t
makePush( IndirectReg reg, Code& where ) {
  auto r = static_cast< Register >( reg );
  size_t length = 0;

  if( Register::r7 < r ) {
    where.push_back( makeRex( false, Register::r0, Register::r0, r ) );
    length++;
  }

  where.push_back( 0xff );

  auto i = makeIndirect( ExOpCode::x6, r, where );

  return i + length + 1;
}

size_t
makePush( uint32_t imm, Code& where ) {

  where.push_back( 0x68 );

  auto i = makeImm32( imm, where );

  return i + 4;
}

size_t
makePop( Register reg, Code& where ) {
  size_t length = 0;

  if( Register::r7 < reg ) {
    where.push_back( makeRex( false, Register::r0, Register::r0, reg ) );
    length++;
  }
  where.push_back( combineOpReg( 0x58, reg ) );

  return length + 1;
}

size_t
makePop( IndirectReg reg, Code& where ) {
  auto r = static_cast< Register >( reg );
  size_t length = 0;

  if( Register::r7 < r ) {
    where.push_back( makeRex( false, Register::r0, Register::r0, r ) );
    length++;
  }

  where.push_back( 0x8f );

  auto i = makeIndirect( ExOpCode::x0, r, where );

  return i + length + 1;
}

size_t
makeIDec( IDecOp op, Register reg, Code& where ) {
  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, reg ) );
  where.push_back( 0xff );
  where.push_back( makeModRxRm( xop, reg ) );

  return 3;
}

size_t
makeIDec( IDecOp op, IndirectReg reg, Code& where ) {
  auto r = static_cast< Register >( reg );
  auto xop = static_cast< ExOpCode >( op );

  where.push_back( makeRex( true, Register::r0, Register::r0, r ) );
  where.push_back( 0xff );

  auto i = makeIndirect( xop, r, where );

  return i + 2;
}

size_t
makeMovS( Code& where ) {
  where.push_back( 0xa4 );
  return 1;
}

size_t
makeRep( Code& where ) {
  where.push_back( 0xf3 );
  return 1;
}

size_t
makeLoop( uint8_t disp, Code& where ) {
  where.push_back( 0xe2 );
  where.push_back( disp );
  return 2;
}

size_t
makeLoopE( uint8_t disp, Code& where ) {
  where.push_back( 0xe1 );
  where.push_back( disp );
  return 2;
}

size_t
makeLoopNE( uint8_t disp, Code& where ) {
  where.push_back( 0xe0 );
  where.push_back( disp );
  return 2;
}

// ----------------------------------------------------------------------
// Some double precision floating point instruction

enum struct XmmOp {
  mov  = 0x10,
  cvtsi2sd = 0x2a,
  cvtsd2si = 0x2d,
  sqrt = 0x51,
  add  = 0x58,
  mul,
  sub  = 0x5c,
  min,
  div,
  max,
  cmp = 0xc2
};

size_t
makeSDInsPrefix( XmmReg destination, XmmReg source, XmmOp op, Code& where, bool x64 = false ) {
  auto s = static_cast< Register >( source );
  auto d = static_cast< Register >( destination );
  size_t c = 0;

  where.push_back( 0xf2 );

  if( x64 && !( Register::r7 < s || Register::r7 < d ) ) {
    where.push_back( makeRex( x64, Register::r0, Register::r0, Register::r0 ) );
    c++;
  }
  else {
    if( Register::r7 < s || Register::r7 < d ) {
      where.push_back( makeRex( x64, d, Register::r0, s ) );
      c++;
    }
  }

  where.push_back( 0x0f );
  where.push_back( static_cast< uint8_t >( op ) );

  return c + 3;
}

size_t
makeSDIns( XmmReg destination, XmmReg source, XmmOp op, Code& where, bool x64 = false ) {
  auto d = static_cast< Register >( destination );
  auto s = static_cast< Register> ( source );;

  auto c = makeSDInsPrefix( destination, source, op, where, x64 );
  where.push_back( makeModRxRm( d, s ) );

  return c + 1; 
}

size_t
makeSDIns( XmmReg destination, IndirectReg source, XmmOp op, Code& where, bool x64 = false ) {
  auto xmmS = static_cast< XmmReg >( source );
  auto d = static_cast< Register >( destination );
  auto s = static_cast< Register >( source );

  auto c = makeSDInsPrefix( destination, xmmS, op, where, x64 );

  auto i = makeIndirect( d, s, where );

  return c + i;
}

// movsd move scalar double-precision floating point between memory and regs
size_t
makeMovSD( XmmReg destination, XmmReg source, Code& where  ) {
  return makeSDIns( destination, source, XmmOp::mov, where );
}

size_t
makeMovSD( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::mov, where );
}

// addsd
size_t
makeAddSD( XmmReg destination, XmmReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::add, where );
}

size_t
makeAddSD( XmmReg destination, IndirectReg source, Code& where ){
  return makeSDIns( destination, source, XmmOp::add, where );
}

// subsd
size_t
makeSubSD( XmmReg destination, XmmReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::sub, where );
}

size_t
makeSubSD( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::sub, where );
}

// mulsd
size_t
makeMulSD( XmmReg destination, XmmReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::mul, where );
}

size_t
makeMulSD( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::mul, where );
}

// divsd
size_t
makeDivSD( XmmReg destination, XmmReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::div, where );
}

size_t
makeDivSD( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::div, where );
}

// sqrtsd square root of scalar double-precision float
size_t
makeSqrtSD( XmmReg destination, XmmReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::sqrt, where );
}

size_t
makeSqrtSD( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::sqrt, where );
}


// maxsd return the larger of 2 double-precision values
size_t
makeMaxSD( XmmReg destination, XmmReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::max, where );
}

size_t
makeMaxSD( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::max, where );
}

// minsd return the smaller of 2 double-precision values
size_t
makeMinSD( XmmReg destination, XmmReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::min, where );
}

size_t
makeMinSD( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::min, where );
}

// cmpsd compare double-precision values with op determined by imm value and store
//       true of false in destination register. Does not set EFLAGS
size_t
makeCmpSD( XmmReg destination, XmmReg source, SDcmp op, Code& where ) {
  auto i = makeSDIns( destination, source, XmmOp::cmp, where );

  where.push_back( static_cast< uint8_t >( op ) );

  return i + 1;
}

size_t
makeCmpSD( XmmReg destination, IndirectReg source, SDcmp op, Code& where ) {
  auto i =  makeSDIns( destination, source, XmmOp::cmp, where );
  where.push_back( static_cast< uint8_t >( op ) );

  return i + 1;
}

// comisd compare double-precision values and set EFLAGS
size_t
makeComiSDprefix( XmmReg destination, XmmReg source, Code& where ) {
  auto s = static_cast< Register >( source );
  auto d = static_cast< Register >( destination );
  size_t c = 0;

  if( Register::r7 < s || Register::r7 < d ) {
    where.push_back( makeRex( false, d, Register::r0, s ) );
    c++;
  }
  where.push_back( 0x66 );
  where.push_back( 0x0f );
  where.push_back( 0x2f );

  return c + 3;
}

size_t
makeComiSD( XmmReg destination, XmmReg source, Code& where ) {
  auto d = static_cast< Register >( destination );
  auto s = static_cast< Register >( source );

  auto i = makeComiSDprefix( destination, source, where );
  where.push_back( makeModRxRm( d, s ) );

  return i + 1;
}

size_t
makeComiSD( XmmReg destination, IndirectReg source, Code& where ) {
  auto xmmS = static_cast< XmmReg >( source );
  auto d = static_cast< Register >( destination );
  auto s = static_cast< Register >( source );

  auto i = makeComiSDprefix( destination, xmmS, where );
  auto j = makeIndirect( d, s, where );

  return i + j;
}

// cvtsi2sd convert an interger general purpose regisger to a double-precision value in
//          an xmm register
size_t
makeCvtSi2Sd( XmmReg destination, Register source, Code& where ) {
  auto s = static_cast< XmmReg >( source );
  return makeSDIns( destination, s, XmmOp::cvtsi2sd, where, true );
}

size_t
makeCvtSi2Sd( XmmReg destination, IndirectReg source, Code& where ) {
  return makeSDIns( destination, source, XmmOp::cvtsi2sd, where );
}

// cvtsd2si convert a double precision value in an xmm register to an interger in a
//          general purpose register
size_t
makeCvtSd2Si( Register destination, XmmReg source, Code& where ) {
  auto d = static_cast< XmmReg >( destination );
  return makeSDIns( d, source, XmmOp::cvtsd2si, where, true );
}

size_t
makeCvtSd2Si( Register destination, IndirectReg source, Code& where ) {
  auto d = static_cast< XmmReg >( destination );
  return makeSDIns( d, source, XmmOp::cvtsd2si, where, true );
}

vector< vector< uint8_t > >
nopTable = {
  vector< uint8_t >{},
  vector< uint8_t >{ 0x90 },
  vector< uint8_t >{ 0x66, 0x90 },
  vector< uint8_t >{ 0x0f, 0x1f, 0x00 },
  vector< uint8_t >{ 0x0f, 0x1f, 0x40, 0x00 },
  vector< uint8_t >{ 0x0f, 0x1f, 0x44, 0x00, 0x00 },
  vector< uint8_t >{ 0x66, 0x0f, 0x1f, 0x44, 0x00, 0x00 },
  vector< uint8_t >{ 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00 },
  vector< uint8_t >{ 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
  vector< uint8_t >{ 0x66, 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

size_t
makeNop( size_t length, Code& where ) {
  auto left = length;
  auto nopTableSize = nopTable.size() - 1;

  while( nopTableSize <  left ) {
    where.insert( where.end(),
                  nopTable[ nopTableSize ].begin(),
                  nopTable[ nopTableSize ].end() );
    left -= nopTableSize;
  }

  if( 0 < left ) {
    where.insert( where.end(),
                  nopTable[ left ].begin(),
                  nopTable[ left ].end() );
  }

  return length;
}

/**
 * the first 6 integer arguments are passed to functions in the following order:
 * rdi, rsi, rdx, rcx, r8, r9
 */

int
main( int, char ** ) {

  // g++ -o myasm myAsm.cc ; ./myasm ;  objdump -M intel -m i386:x86-64 -b binary -D test.bin > test.asm

#define ENCODING_TEST

#ifdef RUNTEST
  auto memory = mmap( nullptr, getpagesize(), PROT_READ | PROT_WRITE,
                      MAP_PRIVATE | MAP_ANONYMOUS, -1, 0 );
  auto current = static_cast< uint8_t * >( memory );

  Code machineCode;

  makePush( Register::rbp, machineCode );
  makeMov( Register::rbp, Register::rsp, machineCode );

  makeMov( Register::r9, 21, machineCode );
  makeCvtSi2Sd( XmmReg::xmm9, Register::r9, machineCode );
  makeAddSD( XmmReg::xmm9, XmmReg::xmm9, machineCode );
  makeMovSD( XmmReg::xmm0, XmmReg::xmm9, machineCode );

  // makeMovSD( XmmReg::xmm9, XmmReg::xmm0, machineCode );
  // makeAddSD( XmmReg::xmm9, XmmReg::xmm9, machineCode );
  // makeMovSD( XmmReg::xmm0, XmmReg::xmm9, machineCode );

  makePop( Register::rbp, machineCode );
  makeRet( machineCode );

  auto mcode = machineCode.data();

  for( unsigned i = 0; i < machineCode.size(); i++ ) {
    *current++ = *mcode++;
  }

  mprotect( memory, getpagesize(), PROT_READ | PROT_EXEC );

  auto fn = reinterpret_cast< double (*)() >( memory );

  cout << "And the answer to life, the universe, and everyting is " << fn() << endl;
#endif

#ifdef ENCODING_TEST
  Code code;

  makeNop( 22, code );

  // for( auto d = 0; d < 16; d++ ) {
  //   for( auto s = 0; s < 16; s++ ) {
  //     makeBasicIns( BasicOpClass::_sub, 0x76543210, code );
  //     makeBasicIns( BasicOpClass::_sub, Register( d ), 0x76543210, code );
  //     makeBasicIns( BasicOpClass::_sub, IndirectReg( d ), 0x76543210, code );
  //     makeBasicIns( BasicOpClass::_sub, Register( d ), Register( s ), code );
  //     makeBasicIns( BasicOpClass::_sub, IndirectReg( d ), Register( s ), code );
  //     makeBasicIns( BasicOpClass::_sub, Register( d ), IndirectReg( s ), code );
  //     makeMul( Register( s ), code );
  //     makeMul( IndirectReg( s ), code );
  //     makeMul( Register( d ), Register( s ), code );
  //     makeMul( Register( d ), Register( s ), 0x76543210, code );
  //     makeMul( Register( d ), IndirectReg( s ), code );
  //     makeMul( Register( d ), IndirectReg( s ), 0x76543210, code );
  //     makeDiv( Register( s ), code );
  //     makeDiv( IndirectReg( s ), code );
  //     makeJcc( CondTest::GE, 0x76543210, code );
  //     makeJmp( 0x76543210, code );
  //     makeJmp( Register( s ), code );
  //     makeMov( Register( d ), Register( s ), code );
  //     makeMov( Register( d ), IndirectReg( s ), code );
  //     makeMov( IndirectReg( d ), Register( s ), code );
  //     makeMov( Register( d ), 0x98765432109, code );
  //     makeMov( Register( d ), 0x76543210, code );
  //     makeCall( 0x76543210, code );
  //     makeCall( Register( s ), code );
  //     makeRet( code );
  //     makeShift( ShiftOp::right, Register( s ), code );
  //     makeShift( ShiftOp::right, Register( s ), 0x12, code );
  //     makeShift( ShiftOp::right, IndirectReg( s ), code );
  //     makeShift( ShiftOp::right, IndirectReg( s ), 0x12, code );
  //     makeCompl( ComplOp::_neg, Register( s ), code );
  //     makeCompl( ComplOp::_neg, IndirectReg( s ), code );
  //     makeSysCall( code );
  //     makePush( Register( s ), code );
  //     makePush( IndirectReg( s ), code );
  //     makePush( 0x76543210, code );
  //     makePop( Register( s ), code );
  //     makePop( IndirectReg( s ), code );
  //     makeIDec( IDecOp::inc, Register( s ), code );
  //     makeIDec( IDecOp::inc, IndirectReg( s ), code );
  //     makeMovS( code );
  //     makeRep( code );
  //     makeLoop( 0x12, code );
  //     makeLoopE( 0x12, code );
  //     makeLoopNE( 0x12, code );
  //     makeMovSD( XmmReg( d ), XmmReg( s ), code );
  //     makeMovSD( XmmReg( d ), IndirectReg( s ), code );
  //     makeSubSD( XmmReg( d ), XmmReg( s ), code );
  //     makeSubSD( XmmReg( d ), IndirectReg( s ), code );
  //     makeCvtSd2Si( Register( d ), XmmReg( s ), code );
  //     makeCvtSd2Si( Register( d ), IndirectReg( s ), code );
  //     makeCvtSi2Sd( XmmReg( d ), Register( s ), code );
  //     makeCvtSi2Sd( XmmReg( d ), IndirectReg( s ), code );
  //   }
  // }

  ofstream ofs{ "test.bin", ios::binary };

  for( auto i : code ) {
    ofs << i;
  }
#endif

  return 0;
}
