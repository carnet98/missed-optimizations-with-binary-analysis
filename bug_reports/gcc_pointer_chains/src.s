	.file	"src.c"
	.text
	.p2align 4
	.globl	foo
	.type	foo, @function
foo:
.LFB0:
	.cfi_startproc
	movq	d(%rip), %rax
	movq	(%rax), %rax
	movl	$1, (%rax)
	ret
	.cfi_endproc
.LFE0:
	.size	foo, .-foo
	.p2align 4
	.globl	bar
	.type	bar, @function
bar:
.LFB1:
	.cfi_startproc
	movq	d(%rip), %rax
	movq	(%rax), %rax
	movl	$1, (%rax)
	ret
	.cfi_endproc
.LFE1:
	.size	bar, .-bar
	.p2align 4
	.globl	baz
	.type	baz, @function
baz:
.LFB2:
	.cfi_startproc
	movq	c(%rip), %rax
	movl	$1, (%rax)
	ret
	.cfi_endproc
.LFE2:
	.size	baz, .-baz
	.section	.data.rel.local,"aw"
	.align 8
	.type	d, @object
	.size	d, 8
d:
	.quad	c
	.align 8
	.type	c, @object
	.size	c, 8
c:
	.quad	b
	.globl	b
	.bss
	.align 4
	.type	b, @object
	.size	b, 4
b:
	.zero	4
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"",@progbits
