  imul %r14
  imul %r14, %r15

  jmp *(%r12)
  add %rax, (%rbp)

  shlq $0x7,(%rsp)
