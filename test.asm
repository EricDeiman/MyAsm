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


test.bin:     file format binary


Disassembly of section .data:

0000000000000000 <.data>:
   0:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   7:	00 00 
   9:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
  10:	00 00 
  12:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
