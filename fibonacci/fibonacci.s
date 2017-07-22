	.file	"fibonacci.c"
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -80(%rbp)
	movl	$1, -76(%rbp)
	movl	$2, -88(%rbp)
	jmp	.L2
.L3:
	movl	-88(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-80(%rbp,%rax,4), %edx
	movl	-88(%rbp), %eax
	subl	$2, %eax
	cltq
	movl	-80(%rbp,%rax,4), %eax
	addl	%eax, %edx
	movl	-88(%rbp), %eax
	cltq
	movl	%edx, -80(%rbp,%rax,4)
	addl	$1, -88(%rbp)
.L2:
	cmpl	$14, -88(%rbp)
	jle	.L3
	movl	$0, -84(%rbp)
	jmp	.L4
.L5:
	movl	-84(%rbp), %eax
	cltq
	movl	-80(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -84(%rbp)
.L4:
	cmpl	$14, -84(%rbp)
	jle	.L5
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	call	__stack_chk_fail
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
