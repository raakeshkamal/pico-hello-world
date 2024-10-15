.global my_sqrt

my_sqrt:
    vmov s0, 1.0
loop:
    vmov.f32 s3, s0
    vmov s1, r0
    vdiv.f32 s1, s1, s0
    vadd.f32 s1, s1, s0
    vmov.f32 s0, 0.5
    vmul.f32 s0, s1, s0
    vsub.f32 s3, s3, s0
    vabs.f32 s3, s3
    vcmp.f32 s3, #0.0
    vmrs APSR_nzcv, FPSCR
    beq exit
    b loop
exit:
    vmov r0, s0
    bx lr

