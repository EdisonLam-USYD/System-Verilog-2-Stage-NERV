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
	li a0, 400
	mv	a4,a0			# a0 is op, a4 is a_nInput
	li	a5,1073741824	# a5 is one
	bgeu	a0,a5,.L7	# jump if op > one
.L3:
	srli	a5,a5,2		# one shift right by 2
	bltu	a4,a5,.L3	# while loop check
	beq	a5,zero,.L11	# jump if one == 0
.L2:
	li	a0,0			# a0 is now made into res
	j	.L6
.L7:
	li	a5,1073741824
	j	.L2
.L5:
	srli	a0,a0,1 	# res shift right by 1
	srli	a5,a5,2		# one shift right by 2
	beq	a5,zero,.L12	# while loop condition
.L6:
	add	a3,a0,a5 		# temp = res + one
	bgtu	a3,a4,.L5	# jump if temp > op (ie. op >= temp) (skips if statement)
	sub	a4,a4,a3		# op -= res + one;
	add	a0,a3,a5		# res = temp + one; (i.e. res = res + 2*one)
	j	.L5
.L12:
	ebreak
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
	lui	s1,%hi(table)
	addi	s1,s1,%lo(table)
	li	s0,0
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
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-16
	sw	ra,12(sp)
	call	sqrttable
	li	a0,0
	lw	ra,12(sp)
	addi	sp,sp,16
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
