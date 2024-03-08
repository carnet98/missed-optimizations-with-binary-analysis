main:
        pushq   %rbp
        movq    %rsp, %rbp
        movl    $2, -4(%rbp)
        movl    $3, -8(%rbp)
        movl    -4(%rbp), %edx
        movl    -8(%rbp), %eax
        addl    %edx, %eax
        movl    %eax, global(%rip)
        movl    global(%rip), %eax
        popq    %rbp
        ret