main:
        movl    $3, g_1(%rip)
        movl    $3, %eax
        movl    $2, g_2(%rip)
        ret
g_2:
        .long   6
g_1:
        .long   5