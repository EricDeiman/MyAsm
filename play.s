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

  imul %r14
  imul %r14, %r15

  jmp *(%r12)
  add %rax, (%rbp)

  shlq $0x7,(%rsp)
