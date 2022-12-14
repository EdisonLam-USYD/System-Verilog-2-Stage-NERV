	.file	"program.c"
	.option nopic
	.attribute arch, "rv32i2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	isqrt
	.type	isqrt, @function
isqrt:
	mv	a4,a0
	li	a5,1073741824
	bgeu	a0,a5,.L7
.L3:
	srli	a5,a5,2
	bltu	a4,a5,.L3
	beq	a5,zero,.L11
.L2:
	li	a0,0
	j	.L6
.L7:
	li	a5,1073741824
	j	.L2
.L5:
	srli	a0,a0,1
	srli	a5,a5,2
	beq	a5,zero,.L12
.L6:
	add	a3,a0,a5
	bgtu	a3,a4,.L5
	sub	a4,a4,a3
	add	a0,a3,a5
	j	.L5
.L12:
	ret
.L11:
	mv	a0,a5
	ret
	.size	isqrt, .-isqrt
	.align	2
	.globl	sqrttable
	.type	sqrttable, @function
sqrttable:
	addi	sp,sp,-16
	sw	ra,12(sp)
	sw	s0,8(sp)
	sw	s1,4(sp)
	sw	s2,0(sp)
	lui	s1,%hi(table+200)
	addi	s1,s1,%lo(table+200)
	li	s0,50
	li	s2,1000
.L14:
	mv	a0,s0
	call	isqrt
	sw	a0,0(s1)
	addi	s0,s0,50
	addi	s1,s1,200
	bne	s0,s2,.L14
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s1,4(sp)
	lw	s2,0(sp)
	addi	sp,sp,16
	jr	ra
	.size	sqrttable, .-sqrttable
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"isqrt(%d)=%d\n"
	.text
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	sw	s1,20(sp)
	sw	s2,16(sp)
	sw	s3,12(sp)
	call	sqrttable
	lui	s1,%hi(table)
	addi	s1,s1,%lo(table)
	li	s0,0
	lui	s3,%hi(.LC0)
	li	s2,1000
.L18:
	lw	a2,0(s1)
	mv	a1,s0
	addi	a0,s3,%lo(.LC0)
	call	printf
	addi	s0,s0,50
	addi	s1,s1,200
	bne	s0,s2,.L18
	li	a0,0
	lw	ra,28(sp)
	lw	s0,24(sp)
	lw	s1,20(sp)
	lw	s2,16(sp)
	lw	s3,12(sp)
	addi	sp,sp,32
	jr	ra
	.size	main, .-main
	.globl	table
	.bss
	.align	2
	.type	table, @object
	.size	table, 3996
table:
	.zero	3996
	.ident	"GCC: () 12.2.0"
