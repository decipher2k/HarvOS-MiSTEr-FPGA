/* Copyright 2025 Dennis Michael Heine */

ENTRY(_start)

PHDRS
{
  text PT_LOAD FLAGS(5);
  rodata PT_LOAD FLAGS(4);
  data PT_LOAD FLAGS(6);
}

MEMORY
{
  APP (rwx) : ORIGIN = 0x00100000, LENGTH = 512K
}

SECTIONS
{
  . = ORIGIN(APP);

  .text ALIGN(4096) : {
    *(.text.start)
    *(.text*)
  } > APP :text

  .rodata ALIGN(4096) : {
    *(.rodata*)
  } > APP :rodata

  .data ALIGN(4096) : {
    PROVIDE(__global_pointer$ = . + 0x800);
    *(.sdata*)
    *(.data*)
  } > APP :data

  .bss ALIGN(16) : {
    __bss_start = .;
    *(.sbss*)
    *(.bss*)
    *(COMMON)
    __bss_end = .;
  } > APP :data

  /DISCARD/ : {
    *(.comment*)
    *(.riscv.attributes*)
    *(.note*)
  }
}
