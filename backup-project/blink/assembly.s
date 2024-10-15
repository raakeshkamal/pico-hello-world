.global loop

loop:
    cpsid if
    mov r0, #25
    mov r1, #1
    bl my_gpio_put
    ldr r0, =#1000
    bl sleep_ms
    mov r0, #25
    mov r1, #0
    bl my_gpio_put
    ldr r0, =#1000
    bl sleep_ms
    cpsie if
    b loop