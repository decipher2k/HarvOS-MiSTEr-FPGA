<!-- Copyright 2025 Dennis Michael Heine -->

# HarvOS Prototype Build And Verify

Reference software path:

```powershell
python tools/harvos_asm.py tests/boot_demo.hvasm -o tests/boot_demo.hex
python tools/harvos_iss.py tests/boot_demo.hex --steps 80
python tools/harvos_image.py --rom tests/boot_demo.hex --services software/services/service_manifest.json -o tests/boot_image.json
python tests/run_all.py
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_usb_images.ps1
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1 -Npcap -NpcapDevice "Intel"
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_services.ps1 -ToolchainRoot C:\SysGCC\risc-v
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_supervisor_stack.ps1 -ToolchainRoot C:\SysGCC\risc-v
```

The host runner validates:

- assembly and reference ISS execution,
- boot-image hash/signature metadata,
- FAT32 program/data USB images containing `harvttp.elf`, `/config/harvttp.yaml`, `/confg/harvttp/httproot`, and `/data/harvttp`,
- the real RTL processor boot path through secure boot, ROM self-test, kernel hook, USB DMA probe, HPS program-image sector read, and HNET MMIO TX/RX,
- the deterministic HNET lease word `10.0.2.15` reaching the SoC DMA window through the Verilator virtual NIC endpoint,
- optional Npcap binding of the Verilator HNET endpoint to a Windows capture device when `-Npcap` is passed,
- kernel capability and W^X policy,
- user-space service models for network rate limiting, immutable storage overlay, and DMA bounce windows.
- the supervisor USB/filesystem/YAML/ELF runtime stack when the RV32I toolchain is available.

RTL analysis for the USB-MMIO integration:

```powershell
C:\intelFPGA_lite\18.1\quartus\bin64\quartus_map.exe --read_settings_files=on --write_settings_files=off Template -c Template --analysis_and_elaboration
```

FPGA path:

1. Open `Template.qpf` in Quartus.
2. Build the project with `files.qip` as the source list.
3. The MiSTer top is `Template.sv`, and the HarvOS core starts at `rtl/mycore.v`.
4. Build a demo boot payload and load it from the MiSTer OSD entry `Load Boot ROM`:

```powershell
python tools/make_boot_image_rom.py C:\path\to\boot.png -o release\harvos_minerva_bootrom.hbr --metadata release\harvos_minerva_bootrom.json
```

The `.hbr` file is raw little-endian RGB565 at 432x240 pixels. It is downloaded by `hps_io` into runtime boot RAM; it is not compiled into the FPGA image.

Formal path:

```powershell
cd formal
sby harvos_core.sby
```

External tools such as Quartus, Verilator, Yosys, SymbiYosys, GCC, or Clang must be installed separately.

Production gate:

```powershell
scripts/build_release.ps1
```

The gate writes `release/production_report.json`. A report with only `external_tools` blocked means the repository checks and signed image checks passed, but this machine still needs the FPGA/formal toolchain installed before it can be called production-ready.
