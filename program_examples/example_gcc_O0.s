main:
        pushq   %rbp
        movq    %rsp, %rbp
        movl    x(%rip), %eax
        movl    %eax, g_1(%rip)
        movl    y(%rip), %eax
        testl   %eax, %eax
        jne     .L2
        movl    $3, g_1(%rip)
        jmp     .L3
.L2:
        movl    $2, g_2(%rip)
.L3:
        movl    g_1(%rip), %eax
        popq    %rbp
        ret