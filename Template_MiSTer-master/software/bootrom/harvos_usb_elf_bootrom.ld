/* Copyright 2025 Dennis Michael Heine */

ENTRY(_start)

PHDRS
{
  text PT_LOAD FLAGS(5);
  data PT_LOAD FLAGS(6);
}

MEMORY
{
  IROM (rx) : ORIGIN = 0x00000000, LENGTH = 0x000F0000
  DRAM (rw) : ORIGIN = 0x00010000, LENGTH = 0x000F0000
}

SECTIONS
{
  .text : ALIGN(4) {
    *(.text.start)
  } > IROM :text

  .hart1 0x000000C0 : ALIGN(4) {
    *(.text.hart1)
  } > IROM :text

  .text_rest : ALIGN(4) {
    *(.text*)
  } > IROM :text

  .rodata : ALIGN(4) {
    *(.srodata*)
    *(.rodata*)
  } > DRAM :data

  .data : ALIGN(4) {
    *(.sdata*)
    *(.data*)
  } > DRAM :data

  .bss (NOLOAD) : ALIGN(16) {
    __bss_start = .;
    *(.sbss*)
    *(.bss*)
    *(COMMON)
    __bss_end = .;
  } > DRAM :data

  __boot_stack_top = ORIGIN(DRAM) + LENGTH(DRAM);

  /DISCARD/ : {
    *(.comment*)
    *(.riscv.attributes*)
    *(.note*)
  }
}
