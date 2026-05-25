/* Copyright 2025 Dennis Michael Heine */

    .section .text.start, "ax"
    .global _start
_start:
    lui sp, %hi(__boot_stack_top)
    addi sp, sp, %lo(__boot_stack_top)
    call harvos_bootrom_main
1:
    j 1b

    .section .text.hart1, "ax"
    .global _hart1_park
_hart1_park:
    j _hart1_park
