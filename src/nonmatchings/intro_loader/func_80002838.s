.section .text
glabel func_80002838
/* 3438 80002838 27BDFFD8 */  addiu      $sp, $sp, -0x28
/* 343C 8000283C AFB00014 */  sw         $s0, 0x14($sp)
/* 3440 80002840 00808025 */  or         $s0, $a0, $zero
/* 3444 80002844 AFBF0024 */  sw         $ra, 0x24($sp)
/* 3448 80002848 3C04800A */  lui        $a0, %hi(D_800A6074)
/* 344C 8000284C AFB30020 */  sw         $s3, 0x20($sp)
/* 3450 80002850 AFB2001C */  sw         $s2, 0x1C($sp)
/* 3454 80002854 AFB10018 */  sw         $s1, 0x18($sp)
/* 3458 80002858 24846074 */  addiu      $a0, $a0, %lo(D_800A6074)
/* 345C 8000285C 00002825 */  or         $a1, $zero, $zero
/* 3460 80002860 0C015AB4 */  jal        osRecvMesg
/* 3464 80002864 24060001 */   addiu     $a2, $zero, 0x1
/* 3468 80002868 3C03800A */  lui        $v1, %hi(D_800A60A0)
/* 346C 8000286C 3C11800A */  lui        $s1, %hi(D_800A6070)
/* 3470 80002870 26316070 */  addiu      $s1, $s1, %lo(D_800A6070)
/* 3474 80002874 8C6360A0 */  lw         $v1, %lo(D_800A60A0)($v1)
.L80002878:
/* 3478 80002878 8C6E0000 */  lw         $t6, 0x0($v1)
/* 347C 8000287C 8C720004 */  lw         $s2, 0x4($v1)
/* 3480 80002880 8C730008 */  lw         $s3, 0x8($v1)
/* 3484 80002884 AE2E001C */  sw         $t6, 0x1C($s1)
/* 3488 80002888 8C6F000C */  lw         $t7, 0xC($v1)
/* 348C 8000288C 2462FFF0 */  addiu      $v0, $v1, -0x10
/* 3490 80002890 12000006 */  beqz       $s0, .L800028AC
/* 3494 80002894 AE2F0030 */   sw        $t7, 0x30($s1)
/* 3498 80002898 8C58000C */  lw         $t8, 0xC($v0)
/* 349C 8000289C 52180004 */  beql       $s0, $t8, .L800028B0
/* 34A0 800028A0 8E30002C */   lw        $s0, 0x2C($s1)
/* 34A4 800028A4 15E0FFF4 */  bnez       $t7, .L80002878
/* 34A8 800028A8 01E01825 */   or        $v1, $t7, $zero
.L800028AC:
/* 34AC 800028AC 8E30002C */  lw         $s0, 0x2C($s1)
.L800028B0:
/* 34B0 800028B0 0213082B */  sltu       $at, $s0, $s3
/* 34B4 800028B4 5020000C */  beql       $at, $zero, .L800028E8
/* 34B8 800028B8 8E390028 */   lw        $t9, 0x28($s1)
/* 34BC 800028BC 8E020008 */  lw         $v0, 0x8($s0)
.L800028C0:
/* 34C0 800028C0 26040010 */  addiu      $a0, $s0, 0x10
/* 34C4 800028C4 50400004 */  beql       $v0, $zero, .L800028D8
/* 34C8 800028C8 8E100004 */   lw        $s0, 0x4($s0)
/* 34CC 800028CC 0040F809 */  jalr       $v0
/* 34D0 800028D0 8E05000C */   lw        $a1, 0xC($s0)
/* 34D4 800028D4 8E100004 */  lw         $s0, 0x4($s0)
.L800028D8:
/* 34D8 800028D8 0213082B */  sltu       $at, $s0, $s3
/* 34DC 800028DC 5420FFF8 */  bnel       $at, $zero, .L800028C0
/* 34E0 800028E0 8E020008 */   lw        $v0, 0x8($s0)
/* 34E4 800028E4 8E390028 */  lw         $t9, 0x28($s1)
.L800028E8:
/* 34E8 800028E8 8F300000 */  lw         $s0, 0x0($t9)
/* 34EC 800028EC 0212082B */  sltu       $at, $s0, $s2
/* 34F0 800028F0 1420000B */  bnez       $at, .L80002920
/* 34F4 800028F4 00000000 */   nop
/* 34F8 800028F8 8E020008 */  lw         $v0, 0x8($s0)
.L800028FC:
/* 34FC 800028FC 26040010 */  addiu      $a0, $s0, 0x10
/* 3500 80002900 50400004 */  beql       $v0, $zero, .L80002914
/* 3504 80002904 8E100000 */   lw        $s0, 0x0($s0)
/* 3508 80002908 0040F809 */  jalr       $v0
/* 350C 8000290C 8E05000C */   lw        $a1, 0xC($s0)
/* 3510 80002910 8E100000 */  lw         $s0, 0x0($s0)
.L80002914:
/* 3514 80002914 0212082B */  sltu       $at, $s0, $s2
/* 3518 80002918 5020FFF8 */  beql       $at, $zero, .L800028FC
/* 351C 8000291C 8E020008 */   lw        $v0, 0x8($s0)
.L80002920:
/* 3520 80002920 3C04800A */  lui        $a0, %hi(D_800A6074)
/* 3524 80002924 AE320028 */  sw         $s2, 0x28($s1)
/* 3528 80002928 AE33002C */  sw         $s3, 0x2C($s1)
/* 352C 8000292C 24846074 */  addiu      $a0, $a0, %lo(D_800A6074)
/* 3530 80002930 00002825 */  or         $a1, $zero, $zero
/* 3534 80002934 0C015A30 */  jal        osSendMesg
/* 3538 80002938 00003025 */   or        $a2, $zero, $zero
/* 353C 8000293C 0C0009D9 */  jal        func_80002764
/* 3540 80002940 00000000 */   nop
/* 3544 80002944 8FBF0024 */  lw         $ra, 0x24($sp)
/* 3548 80002948 8FB00014 */  lw         $s0, 0x14($sp)
/* 354C 8000294C 8FB10018 */  lw         $s1, 0x18($sp)
/* 3550 80002950 8FB2001C */  lw         $s2, 0x1C($sp)
/* 3554 80002954 8FB30020 */  lw         $s3, 0x20($sp)
/* 3558 80002958 03E00008 */  jr         $ra
/* 355C 8000295C 27BD0028 */   addiu     $sp, $sp, 0x28
