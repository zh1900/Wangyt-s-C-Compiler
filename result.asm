.data
.globl main
.text
read:
    li $v0, 4
    la $a0,_prompt
    syscall
    li $v0,5
    syscall
    jr $ra
print:
    li $v0,1
    syscall
    li $v0,4
    la $a0,_ret
    syscall
    move $v0,$0
    jr $ra
fact:

	li $s0,1
	beq $a0,$s0,label0
	j label1
label0:
	move $v0, $a0
	jr $ra
	j label2
label1:
	li $s0,1
	sub $s0,$a0,$s0
	move $t0,$a0
	move $a0, $s0
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal fact
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $s0 $v0
	mul $s0,$a0,$s0
	move $s0,$s1
	move $v0, $s0
	jr $ra
label2:
main:
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal read
	lw $ra,0($sp)
	move $s1,$v0
	addi $sp,$sp,4
	move $s1,$s2
	li $s2,0
	move $s2,$s3
label3:
	blt $s2,$s1,label4
	j label5
label4:
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal read
	lw $ra,0($sp)
	move $s3,$v0
	addi $sp,$sp,4
	move $s3,$s4
	li $s4,1
	bgt $s3,$s4,label6
	j label7
label6:
	move $t0,$a0
	move $a0, $s3
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal fact
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $s4 $v0
	move $s4,$s5
	j label8
label7:
	li $s5,1
	move $s4,$s5
label8:
	move $t0,$a0
	move $a0, $s4
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	li $s5,1
	add $s2,$s2,$s5
	j label3
label5:
	li $s5,0
	move $v0, $s5
	jr $ra
