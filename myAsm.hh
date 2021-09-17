#ifndef MYASM_HH
#define MYASM_HH

#include <memory>
#include <vector>

using namespace std;

enum struct Register {
  r0 = 0,
  r1,
  r2,
  r3,
  r4,
  r5,
  r6,
  r7,
  r8,
  r9,
  r10,
  r11,
  r12,
  r13,
  r14,
  r15,
  rax = r0,
  rcx,
  rdx,
  rbx,
  rsp,
  rbp,
  rsi,
  rdi
};

enum struct IndirectReg {
  r0 = 0,
  r1,
  r2,
  r3,
  r4,
  r5,
  r6,
  r7,
  r8,
  r9,
  r10,
  r11,
  r12,
  r13,
  r14,
  r15,
  rax = r0,
  rcx,
  rdx,
  rbx,
  rsp,
  rbp,
  rsi,
  rdi
};

enum struct XmmReg {
  xmm0 = 0,
  xmm1,
  xmm2,
  xmm3,
  xmm4,
  xmm5,
  xmm6,
  xmm7,
  xmm8,
  xmm9,
  xmm10,
  xmm11,
  xmm12,
  xmm13,
  xmm14,
  xmm15,
};

enum struct BasicOpClass {
  _add = 0,
  _or,
  _adc,
  _sbb,
  _and,
  _sub,
  _xor,
  _cmp,
};

enum struct CondTest {
  Ov = 0, // overflow
  NO,     // no overflow
  B,      // below
  NB,     // not below
  E,      // equal
  NE,     // not equal
  BE,     // below or equal
  NBE,    // not below or equal
  S,      // sign
  NS,     // not sign
  P,      // parity
  NP,     // not parity
  L,      // less than
  NL,     // not less than
  LE,     // less than or equal
  NLE,    // not less than or equal,
  NAE = B,  // not above or equal
  AE = NB,  // above or equal
  Z = E,    // zero
  NZ = NE,  // not zero
  NA = BE,  // not above
  A = NBE,  // above
  PE = P,   // parity even
  PO = NP,  // parity odd
  NGE = L,  // not greater than or equal
  GE = NL,  // greater than or equal
  NG = LE,  // not greater than
  G = NLE   // greater than
};

using Code = vector< uint8_t >;

// rax = rax op immediate
size_t
makeBasicIns( BasicOpClass, int32_t, Code& );

// destination = destination op immediate
size_t
makeBasicIns( BasicOpClass, Register, int32_t, Code& );

// [destination] = [destination] op immediate
size_t
makeBasicIns( BasicOpClass, IndirectReg, int32_t, Code& );

/// destination = destination op source
size_t
makeBasicIns( BasicOpClass, Register, Register, Code& );

// [destination] = [destination] op source
size_t
makeBasicIns( BasicOpClass, IndirectReg, Register, Code& );

// destination = destination op [source]
size_t
makeBasicIns( BasicOpClass, Register, IndirectReg, Code& );

// rdx:rax = rax * source
size_t
makeMul( Register, Code& );

// rdx:rax = rax * [source]
size_t
makeMul( IndirectReg, Code& );

// destination = destination * source (note, result is truncated to fit one register)
size_t
makeMul( Register, Register, Code& );

// destination = source * immediate (signed)
size_t
makeMul( Register, Register, int32_t, Code& );

// destination = destination * [source] (note, result is truncated to fit one register)
size_t
makeMul( Register, IndirectReg, Code& );

// destination = [source] * immediate (signed)
size_t
makeMul( Register, IndirectReg, int32_t, Code& );

// rax = rdx:rax div source ; rdx = rdx:rax mod source (signed)
size_t
makeDiv( Register, Code& );

// rax = rdx:rax div [source] ; rdx = rdx:rax mod [source] (signed)
size_t
makeDiv( IndirectReg, Code& );

size_t
makeJcc( CondTest, uint32_t, Code& );

size_t
makeJmp( uint32_t, Code& );

size_t
makeJmp( Register, Code& );

// destination = source
size_t
makeMov( Register, Register, Code& );

// destination = [source]
size_t
makeMov( Register, IndirectReg, Code& );

// [destination] = source
size_t
makeMov( IndirectReg, Register, Code& );

// destination = imm64
size_t
makeMov( Register, int64_t, Code& );

// [destination] = imm32
size_t
makeMov( IndirectReg, int32_t, Code& );

size_t
makeCall( int32_t, Code& );

size_t
makeCall( Register r, Code& where );

size_t
makeRet( Code& );

enum struct ShiftOp {
  left = 4,
  right
};

enum struct IDecOp {
  inc = 0,
  dec
};

// shl or shr by one
size_t
makeShift( ShiftOp, Register, Code& );

size_t
makeShift( ShiftOp, Register, uint8_t, Code& );

// shl or shr by one
size_t
makeShift( ShiftOp, IndirectReg, Code& );

size_t
makeShift( ShiftOp, IndirectReg, uint8_t, Code& );

enum struct ComplOp {
  _not = 2,
  _neg,
  ones = _not,
  twos = _neg
};

size_t
makeCompl( ComplOp, Register, Code& );

size_t
makeCompl( ComplOp, IndirectReg, Code& );

size_t
makeSysCall( Code&);

size_t
makePush( Register, Code& );

size_t
makePush( IndirectReg, Code& );

size_t
makePush( uint32_t, Code& );

size_t
makePop( Register, Code& );

size_t
makePop( IndirectReg, Code& );

size_t
makeIDec( IDecOp, Register, Code& );

size_t
makeIDec( IDecOp, IndirectReg, Code& );

size_t
makeMovS( Code& where );

size_t
makeRep( Code& where );

size_t
makeLoop( uint8_t disp, Code& where );

size_t
makeLoopE( uint8_t disp, Code& where );

size_t
makeLoopNE( uint8_t disp, Code& where );

size_t
makeMovSD( XmmReg destination, XmmReg source, Code& where  );

size_t
makeMovSD( XmmReg destination, IndirectReg source, Code& where );

// addsd
size_t
makeAddSD( XmmReg destination, XmmReg source, Code& where );

size_t
makeAddSD( XmmReg destination, IndirectReg source, Code& where );

// subsd
size_t
makeSubSD( XmmReg destination, XmmReg source, Code& where );

size_t
makeSubSD( XmmReg destination, IndirectReg source, Code& where );

// mulsd
size_t
makeMulSD( XmmReg destination, XmmReg source, Code& where );

size_t
makeMulSD( XmmReg destination, IndirectReg source, Code& where );

// divsd
size_t
makeDivSD( XmmReg destination, XmmReg source, Code& where );

size_t
makeDivSD( XmmReg destination, IndirectReg source, Code& where );

// sqrtsd square root of scalar double-precision float
size_t
makeSqrtSD( XmmReg destination, XmmReg source, Code& where );

size_t
makeSqrtSD( XmmReg destination, IndirectReg source, Code& where );


// maxsd return the larger of 2 double-precision values
size_t
makeMaxSD( XmmReg destination, XmmReg source, Code& where );

size_t
makeMaxSD( XmmReg destination, IndirectReg source, Code& where );

// minsd return the smaller of 2 double-precision values
size_t
makeMinSD( XmmReg destination, XmmReg source, Code& where );

size_t
makeMinSD( XmmReg destination, IndirectReg source, Code& where );

// cmpsd compare double-precision values with op determined by imm value and store
//       true of false in destination register. Does not set EFLAGS
enum struct SDcmp {
  eq = 0,
  lt,
  le,
  unord,
  neq,
  nlt,
  nle,
  ord
};

size_t
makeCmpSD( XmmReg destination, XmmReg source, SDcmp op, Code& where );

size_t
makeCmpSD( XmmReg destination, IndirectReg source, SDcmp op, Code& where );

size_t
makeCvtSi2Sd( XmmReg destination, XmmReg source, Code& where );

size_t
makeCvtSi2Sd( XmmReg destination, IndirectReg source, Code& where );

// cvtsd2si convert a double precision value in an xmm register to an interger in a
//          general purpose register
size_t
makeCvtSd2Si( XmmReg destination, XmmReg source, Code& where );

size_t
makeCvtSd2Si( XmmReg destination, IndirectReg source, Code& where );

#endif

