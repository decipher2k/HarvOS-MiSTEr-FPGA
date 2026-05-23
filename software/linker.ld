/* Copyright 2025 Dennis Michael Heine */

ENTRY(_start)

MEMORY
{
  IROM (rx)  : ORIGIN = 0x00000000, LENGTH = 64K
  DRAM (rw)  : ORIGIN = 0x00000000, LENGTH = 64K
}

SECTIONS
{
  .text : {
    *(.text.start)
    *(.text*)
    *(.rodata*)
  } > IROM

  .data : {
    *(.data*)
  } > DRAM

  .bss : {
    *(.bss*)
    *(COMMON)
  } > DRAM
}
