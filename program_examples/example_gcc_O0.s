g_1:
        .long   5
g_2:
        .long   6
main:
        pushq   %rbp
        movq    %rsp, %rbp
        movl    $3, -4(%rbp)
        movl    $1, -8(%rbp)
        movl    -4(%rbp), %eax
        movl    %eax, g_1(%rip)
        cmpl    $0, -8(%rbp)
        jne     .L2
        movl    $3, g_1(%rip)
        jmp     .L3
.L2:
        movl    $2, g_2(%rip)
.L3:
        movl    g_1(%rip), %eax
        popq    %rbp
        ret