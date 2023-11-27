	.file	"sample.c"
	.text
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	movl	$5, global(%rip)
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	g_12
	.data
	.align 4
	.type	g_12, @object
	.size	g_12, 4
g_12:
	.long	12
	.globl	global
	.bss
	.align 4
	.type	global, @object
	.size	global, 4
global:
	.zero	4
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"",@progbits
