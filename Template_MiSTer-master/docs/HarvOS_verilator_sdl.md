<!-- Copyright 2025 Dennis Michael Heine -->

# HarvOS Verilator SDL2 HDMI Test

This testbench verilates `rtl/mycore.v`, loads an external `.hbr` boot ROM through
the boot loader ports, captures the RGB/blanking/sync output as an HDMI-style
sink, and verifies that the captured frame contains the boot image.

## Headless run

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/run_verilator_sdl.ps1 -Headless
```

The headless run writes `build/verilator_sdl/frame.ppm` and
`build/verilator_sdl/frame.bmp`, then prints the captured visible size,
checksum, and boot image match ratio.

## SDL2 run

Install an SDL2 development package for Visual C++ and pass its root directory:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/run_verilator_sdl.ps1 -SDL -SDL2Root C:\SDL2-devel-2.30.0-VC
```

The script also honors `SDL2_ROOT`. SDL2 mode uses the same checks as headless
mode and additionally presents completed frames in a resizable window.

## Options

- `-BootRom <file>` selects the external boot ROM. The default is
  `release/harvos_minerva_bootrom.hbr`.
- `-Frames <n>` selects how many completed frames are simulated.
- `-Pal` switches the core to PAL timing.
- `-Scandouble` enables scandoubled video timing.
- `-MaxCycles <n>` overrides the simulation watchdog.

The test intentionally targets `mycore` rather than the full MiSTer wrapper.
That keeps the HPS loader and PLL outside the simulation while still testing the
core-facing boot ROM interface and HDMI-visible video behavior.
