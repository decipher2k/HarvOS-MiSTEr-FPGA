<!-- Copyright 2025 Dennis Michael Heine -->

# HarvOS MiSTer FPGA Core

HarvOS is a MiSTer FPGA core that implements the executable parts of the
HarvOS whitepaper as a small, security-oriented, 32-bit, Harvard-separated
system. The repository contains the synthesizable SystemVerilog core, a
RISC-V-style assembler and instruction-set simulator, boot-image tooling,
reference kernel and service models, formal checks, a Quartus project, and a
Verilator HDMI/SDL2 simulation harness.

The current core is a complete repository-level prototype. It includes RTL for
the CPU, memory protection, secure boot gating, SMP bus arbitration, DMA
bounce-window enforcement, video output, and observability. Some larger OS and
platform features are intentionally modeled as hooks or reference software,
not as a finished general-purpose operating system.

## Quick Start

Run all reference checks, including the processor+kernel RTL boot simulation:

```powershell
python tests\run_all.py
```

Run only the fast SoC boot simulation:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1
```

Build the reference services with the RV32I GCC toolchain:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_services.ps1 -ToolchainRoot C:\SysGCC\risc-v
```

Build the first server ELF, HarvTTP:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_harvttp.ps1 -ToolchainRoot C:\SysGCC\risc-v
```

Build or refresh the FAT32 program/data USB images:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_usb_images.ps1
```

Run the RTL HNET endpoint check. This boots the processor, reads the USB image,
transmits through `harvos_net_mmio`, and verifies the deterministic lease
`10.0.2.15` in the SoC DMA window:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1
```

Open the same HNET endpoint with Npcap enabled:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1 -ListNpcap
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1 -Npcap -NpcapDevice "Intel"
```

Run the Verilator HDMI simulation headless:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_verilator_sdl.ps1 -Headless -Frames 2
```

Build a demo external boot image from a PNG:

```powershell
python tools\make_boot_image_rom.py C:\path\to\boot.png -o release\harvos_minerva_bootrom.hbr --metadata release\harvos_minerva_bootrom.json
```

Compile the FPGA project with Quartus:

```powershell
& "C:\intelFPGA_lite\18.1\quartus\bin64\quartus_sh.exe" --flow compile Template
```

Run the production gate:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_release.ps1 -KeyFile release\production.key
```

## Repository Layout

| Path | Purpose |
| --- | --- |
| `Template.sv` | MiSTer framework wrapper and HPS/OSD boot-ROM loader |
| `rtl/mycore.v` | HarvOS top-level core instance |
| `rtl/harvos_*.sv` | CPU, MMU, MPU, DMA, secure boot, cache, kernel hook, trace, video RTL |
| `sys/` | MiSTer framework support files |
| `tools/harvos_asm.py` | Reference assembler for the HarvOS ISA subset |
| `tools/harvos_iss.py` | Reference instruction-set simulator |
| `tools/harvos_image.py` | Boot image manifest builder and verifier |
| `tools/harvos_usb_image.py` | FAT32 USB-stick image builder and verifier |
| `tools/make_boot_image_rom.py` | PNG to external RGB565 `.hbr` boot image converter |
| `software/` | Kernel ABI, C runtime stubs, service models, user program stubs |
| `tests/` | Reference regression tests and demo assembly program |
| `formal/` | SymbiYosys harness for RTL safety invariants |
| `sim/verilator_soc/` | Fast Verilator SoC boot test for CPU, secure boot, kernel hook, USB DMA path |
| `sim/verilator_sdl/` | Verilator HDMI sink and optional SDL2 output |
| `scripts/` | Build, service, simulation, and release helper scripts |
| `docs/` | Supporting design notes and implementation matrices |
| `release/` | Generated release metadata and external boot-ROM payloads |

Generated directories such as `build/`, `db/`, `incremental_db/`,
`output_files/`, and `formal/harvos_core/` are not source directories.

## Top-Level Architecture

The MiSTer integration path is:

```text
Template.sv
  hps_io loader and MiSTer video/audio shell
  mycore
    harvos_soc
      cpu0, cpu1
      fetch/data MMUs and MPUs per CPU
      SMP data bus
      data RAM and MMIO window
      secure boot gate
      DMA IOMMU-lite
      L1/L2 cache observers
      coherence directory observer
      kernel policy hook
      trace digest
    harvos_video
      external boot image RAM
      RGB/blanking/sync generator
```

Important top-level files:

| File | Description |
| --- | --- |
| `Template.sv` | MiSTer `emu` module, OSD menu, file download interface, video assignments |
| `rtl/mycore.v` | Clean simulation/synthesis boundary for the HarvOS SoC and video generator |
| `rtl/harvos_soc.sv` | Two-core SoC, internal ROM/RAM, MMIO, DMA, debug export, security hooks |
| `rtl/harvos_cpu.sv` | RV32I-style FSM CPU with custom security instructions |
| `rtl/harvos_video.sv` | HDMI-visible RGB output and boot image renderer |

## MiSTer OSD Interface

The MiSTer configuration string in `Template.sv` exposes:

| OSD item | Function |
| --- | --- |
| `Load Boot ROM` | Loads an external `.hbr` RGB565 image through the HPS file loader |
| `Aspect ratio` | Original, full screen, ARC1, or ARC2 |
| `TV Mode` | NTSC or PAL timing |
| `Reset` | Resets the core |
| `Reset and close OSD` | Resets and closes the OSD |

The external `.hbr` boot ROM is a display payload, not CPU instruction memory.
It is loaded at runtime into `harvos_boot_ram`. It is not hard-wired into the
FPGA bitstream.

The loader accepts exactly `432 * 240 = 103680` little-endian RGB565 words.
Writes must arrive sequentially. Out-of-order writes, missing words, or extra
data prevent `bootrom_loaded` from being asserted.

## Clocking And Video

The MiSTer wrapper drives `clk_sys` from `rtl/pll.v`. The HarvOS video path
exports:

| Signal | Meaning |
| --- | --- |
| `CLK_VIDEO` | Assigned to `clk_sys` |
| `CE_PIXEL` | Pixel enable from `harvos_video` |
| `VGA_DE` | `~(HBlank | VBlank)` |
| `VGA_HS` | Horizontal sync |
| `VGA_VS` | Vertical sync |
| `VGA_R/G/B` | 8-bit RGB output |

The boot image is rendered as RGB565 expanded to RGB888:

```text
R = {rgb565[15:11], rgb565[15:13]}
G = {rgb565[10:5],  rgb565[10:9]}
B = {rgb565[4:0],   rgb565[4:2]}
```

Boot image placement:

| Mode | Placement |
| --- | --- |
| NTSC | `x = 48..479`, `y = 0..239` |
| PAL | `x = 48..479`, `y = 30..269` |
| Scandouble | Visible Y is derived from `vc[9:1]`, so boot lines are doubled |

If no valid boot image has been loaded, the video generator draws a dark status
background with rails derived from CPU, trap, entropy, kernel, trace, and cache
debug state.

## CPU Overview

The CPU is implemented in `rtl/harvos_cpu.sv`.

| Property | Value |
| --- | --- |
| Data width | 32-bit |
| Instruction format | RISC-V-style 32-bit fixed-width encodings |
| Compression | Not implemented |
| Multiplication/division | Not implemented |
| Atomics | Not implemented |
| Interrupts | Not implemented |
| Privilege enum | U = 0, S = 1, M = 3 |
| Reset privilege | Supervisor mode |
| Reset PC | CPU0 `0x00000000`, CPU1 `0x000000C0` |
| SoC trap vector | `0x000000A0` |
| CPU default trap vector parameter | `0x00000080` |
| Pipeline model | FSM: fetch, decode, execute, memory, writeback, clear-memory |

The CPU has independent instruction and data ports. Instruction fetches must
resolve into instruction ROM. Loads and stores must resolve into data RAM or
permitted MMIO. Cross-domain access raises a Harvard violation trap.

## General-Purpose Registers

All 32 integer registers exist in hardware. Register `x0` is hard-wired to
zero on every cycle.

| Register | Hardware role | Assembler alias currently accepted |
| --- | --- | --- |
| `x0` | Constant zero | `zero` |
| `x1` | General register | `ra` |
| `x2` | General register | `sp` |
| `x3` | General register | `gp` |
| `x4` | General register | `tp` |
| `x5` | General register | none |
| `x6` | General register | none |
| `x7` | General register | none |
| `x8` | General register | none |
| `x9` | General register | none |
| `x10` | General register, debug `a0` export | `a0` |
| `x11` | General register, debug `a1` export | `a1` |
| `x12` | General register | `a2` |
| `x13` | General register | `a3` |
| `x14` | General register | `a4` |
| `x15` | General register | `a5` |
| `x16` | General register | `a6` |
| `x17` | General register | `a7` |
| `x18`..`x31` | General registers | none |

Use numeric `xN` names for registers not listed as aliases. The GCC-generated
RV32I object code is consumed at the object/library level; the small reference
assembler only accepts the aliases above plus `x0` through `x31`.

## Instruction Opcode Map

All opcodes are seven-bit RISC-V-style opcodes.

| Group | Opcode | Implemented mnemonics |
| --- | --- | --- |
| `LOAD` | `0x03` | `LB`, `LH`, `LW`, `LBU`, `LHU` |
| `FENCE` | `0x0F` | `FENCE`, `FENCE.I` |
| `OP-IMM` | `0x13` | `ADDI`, `SLTI`, `SLTIU`, `XORI`, `ORI`, `ANDI`, `SLLI`, `SRLI`, `SRAI` |
| `AUIPC` | `0x17` | `AUIPC` |
| `STORE` | `0x23` | `SB`, `SH`, `SW` |
| `OP` | `0x33` | `ADD`, `SUB`, `SLL`, `SLT`, `SLTU`, `XOR`, `SRL`, `SRA`, `OR`, `AND` |
| `LUI` | `0x37` | `LUI` |
| `BRANCH` | `0x63` | `BEQ`, `BNE`, `BLT`, `BGE`, `BLTU`, `BGEU` |
| `JALR` | `0x67` | `JALR` |
| `JAL` | `0x6F` | `JAL` |
| `SYSTEM` | `0x73` | `ECALL`, `EBREAK`, `CSRRW`, `CSRRS`, `CSRRC` |
| `CUSTOM0` | `0x0B` | `CLRREG`, `CLRMEM`, `ENTROPY` |

The reference assembler also supports the pseudo directive `WORD <value>` for
inserting a raw 32-bit word.

## ALU And Immediate Instructions

| Mnemonic | Opcode | `funct3` | `funct7` | Operation |
| --- | --- | --- | --- | --- |
| `ADD rd, rs1, rs2` | `0x33` | `0x0` | `0x00` | `rd = rs1 + rs2` |
| `SUB rd, rs1, rs2` | `0x33` | `0x0` | `0x20` | `rd = rs1 - rs2` |
| `SLL rd, rs1, rs2` | `0x33` | `0x1` | `0x00` | Logical left shift by `rs2[4:0]` |
| `SLT rd, rs1, rs2` | `0x33` | `0x2` | `0x00` | Signed less-than |
| `SLTU rd, rs1, rs2` | `0x33` | `0x3` | `0x00` | Unsigned less-than |
| `XOR rd, rs1, rs2` | `0x33` | `0x4` | `0x00` | Bitwise XOR |
| `SRL rd, rs1, rs2` | `0x33` | `0x5` | `0x00` | Logical right shift by `rs2[4:0]` |
| `SRA rd, rs1, rs2` | `0x33` | `0x5` | `0x20` | Arithmetic right shift by `rs2[4:0]` |
| `OR rd, rs1, rs2` | `0x33` | `0x6` | `0x00` | Bitwise OR |
| `AND rd, rs1, rs2` | `0x33` | `0x7` | `0x00` | Bitwise AND |
| `ADDI rd, rs1, imm12` | `0x13` | `0x0` | immediate | `rd = rs1 + sign_extend(imm12)` |
| `SLLI rd, rs1, shamt` | `0x13` | `0x1` | `0x00` | Logical left shift by `shamt[4:0]` |
| `SLTI rd, rs1, imm12` | `0x13` | `0x2` | immediate | Signed less-than immediate |
| `SLTIU rd, rs1, imm12` | `0x13` | `0x3` | immediate | Unsigned less-than immediate |
| `XORI rd, rs1, imm12` | `0x13` | `0x4` | immediate | Bitwise XOR immediate |
| `SRLI rd, rs1, shamt` | `0x13` | `0x5` | `0x00` | Logical right shift by `shamt[4:0]` |
| `SRAI rd, rs1, shamt` | `0x13` | `0x5` | `0x20` | Arithmetic right shift by `shamt[4:0]` |
| `ORI rd, rs1, imm12` | `0x13` | `0x6` | immediate | Bitwise OR immediate |
| `ANDI rd, rs1, imm12` | `0x13` | `0x7` | immediate | Bitwise AND immediate |
| `LUI rd, imm20` | `0x37` | n/a | n/a | `rd = imm20 << 12` |
| `AUIPC rd, imm20` | `0x17` | n/a | n/a | `rd = pc + (imm20 << 12)` |

Invalid `funct3` or `funct7` combinations trap with illegal instruction.

## Load And Store Instructions

| Mnemonic | Opcode | `funct3` | Alignment | Operation |
| --- | --- | --- | --- | --- |
| `LB rd, imm(rs1)` | `0x03` | `0x0` | byte | Sign-extended byte load |
| `LH rd, imm(rs1)` | `0x03` | `0x1` | 2-byte | Sign-extended halfword load |
| `LW rd, imm(rs1)` | `0x03` | `0x2` | 4-byte | Word load |
| `LBU rd, imm(rs1)` | `0x03` | `0x4` | byte | Zero-extended byte load |
| `LHU rd, imm(rs1)` | `0x03` | `0x5` | 2-byte | Zero-extended halfword load |
| `SB rs2, imm(rs1)` | `0x23` | `0x0` | byte | Byte store with byte enable |
| `SH rs2, imm(rs1)` | `0x23` | `0x1` | 2-byte | Halfword store with byte enables |
| `SW rs2, imm(rs1)` | `0x23` | `0x2` | 4-byte | Word store |

Misaligned halfword and word loads raise `SCAUSE_LOAD_ADDR_MISALIGNED`.
Misaligned halfword and word stores raise `SCAUSE_STORE_ADDR_MISALIGNED`.
Byte accesses are always alignment-safe.

Stores drive a four-bit byte-enable mask through the SMP bus. The data RAM and
MMIO output register merge writes byte-by-byte with `apply_wstrb`.

## Branch And Jump Instructions

| Mnemonic | Opcode | `funct3` | Comparison |
| --- | --- | --- | --- |
| `BEQ rs1, rs2, target` | `0x63` | `0x0` | Equal |
| `BNE rs1, rs2, target` | `0x63` | `0x1` | Not equal |
| `BLT rs1, rs2, target` | `0x63` | `0x4` | Signed `<` |
| `BGE rs1, rs2, target` | `0x63` | `0x5` | Signed `>=` |
| `BLTU rs1, rs2, target` | `0x63` | `0x6` | Unsigned `<` |
| `BGEU rs1, rs2, target` | `0x63` | `0x7` | Unsigned `>=` |
| `JAL rd, target` | `0x6F` | n/a | `rd = pc + 4`, `pc = target` |
| `JALR rd, rs1, imm12` | `0x67` | `0x0` | `rd = pc + 4`, `pc = (rs1 + imm12) & ~1` |

Branch and jump targets must be word-aligned. A taken branch or jump to a
misaligned target traps with `SCAUSE_INST_ADDR_MISALIGNED`.

## Fence And System Instructions

| Mnemonic | Opcode | `funct3` | Behavior |
| --- | --- | --- | --- |
| `FENCE` | `0x0F` | `0x0` | Accepted as an ordering no-op |
| `FENCE.I` | `0x0F` | `0x1` | Accepted and flushes both CPU TLBs |
| `ECALL` | `0x73` | encoded word `0x00000073` | Traps as user or supervisor ECALL |
| `EBREAK` | `0x73` | encoded word `0x00100073` | Traps as breakpoint |
| `CSRRW rd, csr, rs1` | `0x73` | `0x1` | Atomic CSR read/write |
| `CSRRS rd, csr, rs1` | `0x73` | `0x2` | Atomic CSR read/set bits |
| `CSRRC rd, csr, rs1` | `0x73` | `0x3` | Atomic CSR read/clear bits |

CSR instructions are illegal in user mode. Unsupported CSR addresses also trap
with illegal instruction. `CSRRS` and `CSRRC` do not write the CSR when `rs1` is
`x0`, matching the usual read-only idiom.

## Custom Security Instructions

Custom instructions use opcode `CUSTOM0 = 0x0B`.

| Mnemonic | Opcode | `funct3` | Syntax | Behavior |
| --- | --- | --- | --- | --- |
| `CLRREG` | `0x0B` | `0x0` | `CLRREG rd` | Writes zero to `rd` |
| `CLRMEM` | `0x0B` | `0x1` | `CLRMEM rs1, rs2` | Supervisor-only clear of `rs2` 32-bit words starting at `rs1` |
| `ENTROPY` | `0x0B` | `0x2` | `ENTROPY rd` | Writes `entropy_i ^ srandom` to `rd` |

`CLRMEM` checks alignment, MMU permission, MPU permission, and rejects MMIO.
It traps if called from user mode.

## Assembler Syntax

The reference assembler is `tools/harvos_asm.py`.

Supported line features:

| Feature | Syntax |
| --- | --- |
| Comments | `# comment` or `; comment` |
| Labels | `label:` |
| Register names | `x0` through `x31`, plus the aliases listed above |
| Memory operands | `imm(rs1)` |
| Numeric immediates | Python-style integers such as `123`, `-4`, `0x100` |
| Raw word | `WORD 0x12345678` |

Assemble to hex:

```powershell
python tools\harvos_asm.py tests\boot_demo.hvasm -o tests\boot_demo.hex
```

Assemble to MIF:

```powershell
python tools\harvos_asm.py tests\boot_demo.hvasm -o tests\boot_demo.mif --format mif
```

Run in the reference ISS:

```powershell
python tools\harvos_iss.py tests\boot_demo.hex --steps 80
```

## CSRs

Implemented CSRs are defined in `rtl/harvos_pkg.sv` and mirrored in
`software/include/harvos_abi.h`.

| CSR | Address | Reset/read behavior | Write behavior |
| --- | --- | --- | --- |
| `sstatus` | `0x100` | Reads `(stored & 0x3) | 0x300`; reset `0x300` | Only bits `1:0` are writable; fixed bits `0x300` are forced |
| `stvec` | `0x101` | Trap vector; SoC initializes CPU trap vector to `0xA0` | Low two bits are cleared |
| `sepc` | `0x102` | Trap PC | Low two bits are cleared |
| `scause` | `0x103` | Trap cause | Fully writable |
| `stval` | `0x104` | Trap value | Fully writable |
| `satp` | `0x105` | Reads with mode bit `31` set | Mode bit `31` is forced set |
| `srandom` | `0x120` | Reads live entropy input | Stores software entropy salt |
| `smpuctl` | `0x130` | Reads with lock bit set | Lock bit is ORed in and cannot be cleared |
| `scaps` | `0x140` | Capability bits | Fully writable in supervisor mode |

`satp[29:22]` is used as an eight-bit ASID by the TLBs. The current page-table
walker is region-based and identity-maps valid regions; it does not fetch a
software page table from memory.

## Trap Causes

| Cause | Value | Meaning |
| --- | --- | --- |
| `SCAUSE_INST_ADDR_MISALIGNED` | `0x00000000` | Misaligned instruction fetch or target |
| `SCAUSE_INST_ACCESS_FAULT` | `0x00000001` | Instruction fetch outside executable region |
| `SCAUSE_ILLEGAL_INSTRUCTION` | `0x00000002` | Unsupported opcode, CSR, mode, or function |
| `SCAUSE_BREAKPOINT` | `0x00000003` | `EBREAK` |
| `SCAUSE_LOAD_ADDR_MISALIGNED` | `0x00000004` | Misaligned load |
| `SCAUSE_LOAD_ACCESS_FAULT` | `0x00000005` | Load access denied |
| `SCAUSE_STORE_ADDR_MISALIGNED` | `0x00000006` | Misaligned store |
| `SCAUSE_STORE_ACCESS_FAULT` | `0x00000007` | Store access denied |
| `SCAUSE_ECALL_U` | `0x00000008` | ECALL from user mode |
| `SCAUSE_ECALL_S` | `0x00000009` | ECALL from supervisor mode |
| `SCAUSE_HARVARD_VIOLATION` | `0x0000000A` | Instruction/data domain crossing or W^X conflict |

Trap entry writes `sepc`, `scause`, and `stval`, switches the CPU to supervisor
mode, sets `pc = stvec`, and raises the debug trap flag.

## Memory Map

The default SoC parameters are:

| Region | Address range | Size | Access |
| --- | --- | --- | --- |
| Instruction ROM | `0x00000000..0x000003FF` | 1 KiB | Fetch only |
| Data RAM | `0x00000400..0x000013FF` | 4 KiB | Load/store only |
| DMA bounce window | `0x00000500..0x00000CFF` | 2 KiB | Device DMA reads/writes only when IOMMU allows |
| MMIO window | `0xFFFF0000..0xFFFF00FF` | 256 bytes | Supervisor load/store |
| External video boot RAM | Separate 17-bit RGB565 address space | 131072 words | HPS loader writes, video reads |

The CPU cannot fetch from data RAM. The CPU cannot load or store instruction
ROM. Both cases are explicit Harvard violations.

## MMIO Registers

MMIO base is `0xFFFF0000`.

| Offset | Address | Access | Meaning |
| --- | --- | --- | --- |
| `0x00` | `0xFFFF0000` | R/W | `mmio_out`, byte-enable writable debug output register |
| `0x04` | `0xFFFF0004` | R | CPU0 debug PC |
| `0x08` | `0xFFFF0008` | R | CPU0 `scause` |
| `0x0C` | `0xFFFF000C` | R | Entropy LFSR |
| `0x10` | `0xFFFF0010` | R | CPU1 debug PC |
| `0x14` | `0xFFFF0014` | R | CPU1 `scause` |
| `0x18` | `0xFFFF0018` | R | Secure boot status |
| `0x1C` | `0xFFFF001C` | R | DMA status with USB/network IRQ and DMA request bits |
| `0x20..0x2F` | `0xFFFF0020..0xFFFF002F` | Access hook | Kernel model syscall window |
| `0x40..0x7F` | `0xFFFF0040..0xFFFF007F` | R/W | `HNET` network MMIO endpoint |
| `0x80..0xBF` | `0xFFFF0080..0xFFFF00BF` | R/W | `HUSB` USB host controller |
| `0xC0..0xFF` | `0xFFFF00C0..0xFFFF00FF` | R/W | `HPSD` MiSTer HPS block bridge |

The RTL kernel model treats accesses with `bus_addr[7:4] == 4'h2` as syscall
events and uses `bus_addr[3:0]` as the syscall number.

## MMU

The MMU is implemented by `rtl/harvos_mmu.sv`, `rtl/harvos_pagetable.sv`, and
`rtl/harvos_tlb.sv`.

Each CPU has:

| MMU path | TLB entries | Purpose |
| --- | --- | --- |
| Fetch MMU | 32 | Instruction fetch permission and translation |
| Data MMU | 64 | Load/store permission and translation |

The current walker is a deterministic, region-based, identity mapper:

| Virtual region | Generated PTE flags | Meaning |
| --- | --- | --- |
| Instruction ROM fetch | `V | R | X | A` | Executable code region |
| Data RAM load/store | `V | R | W | U | A | D` | User-readable/writable data |
| MMIO load/store | `V | R | W | A | D` | Supervisor MMIO |
| Data RAM fetch | none | Harvard violation |
| Instruction ROM data access | none | Harvard violation |

PTE flags:

| Flag | Value | Meaning |
| --- | --- | --- |
| `PTE_V` | `0x01` | Valid |
| `PTE_R` | `0x02` | Read |
| `PTE_W` | `0x04` | Write |
| `PTE_X` | `0x08` | Execute |
| `PTE_U` | `0x10` | User accessible |
| `PTE_G` | `0x20` | Global, currently carried but not special-cased |
| `PTE_A` | `0x40` | Accessed |
| `PTE_D` | `0x80` | Dirty |

Access rules:

| Access | Required | Explicitly denied |
| --- | --- | --- |
| Fetch | `V`, `X`, `A`, not `W` | Data RAM, W+X pages |
| Load | `V`, `R`, `A`, not `X` | Instruction ROM, executable pages |
| Store | `V`, `W`, `A`, `D`, not `X` | Instruction ROM, executable pages |
| User access | `PTE_U` plus matching `scaps` bit | Supervisor-only pages and MMIO without capability |

W^X is enforced by rejecting any page that is both writable and executable.
User mode additionally requires `scaps[0]` for normal memory and `scaps[1]` for
MMIO.

TLB behavior:

| Feature | Behavior |
| --- | --- |
| Lookup key | VPN `vaddr[31:12]` plus ASID `satp[29:22]` |
| Fill | Round-robin replacement on valid walker result |
| Flush | Reset or `FENCE.I` |
| Physical address | Identity-mapped PPN plus original page offset |

## MPU

The MPU is implemented in `rtl/harvos_mpu.sv` and sits after the MMU. It is a
hard region firewall:

| Access | Allowed when |
| --- | --- |
| Fetch | Address is inside instruction ROM and `smpuctl.lock` is set |
| Load/store data RAM | Address is inside data RAM |
| Load/store MMIO | Address is inside MMIO and CPU is not in user mode |
| Fetch from data RAM | Never, Harvard violation |
| Load/store instruction ROM | Never, Harvard violation |

The `smpuctl` lock bit is forced on after reset and cannot be cleared by CSR
writes. Secure boot also asserts an MPU lock output after signature validation.

## DMA IOMMU-Lite

The DMA guard is implemented in `rtl/harvos_dma_iommu.sv`.

| Parameter | Current SoC value |
| --- | --- |
| Window base | `D_RAM_BASE + 0x100 = 0x00000500` |
| Window size | 2048 bytes |
| DMA operation | RX/device writes and TX/device reads inside the bounce window |
| Address alignment | 4-byte aligned |
| Length alignment | 4-byte aligned |
| Zero length | Rejected |
| Overflow handling | Uses 33-bit start/end arithmetic |
| Lock requirement | Secure boot MPU lock must be asserted |

The SoC emits a periodic DMA request when `dma_tick[9:0] == 10'h3FF`.
USB and network requests take priority over that demo source. Allowed demo DMA
writes place entropy-derived words into the bounce window. Denied requests raise
the `dma_fault` bit and contribute to the video/debug trap flag.

## Secure Boot

Secure boot is implemented in `rtl/harvos_secure_boot.sv` and
`rtl/harvos_signature.sv`.

The hardware path compares three 256-bit values:

| Value | Meaning |
| --- | --- |
| `BOOT_IMAGE_HASH` | Expected image hash |
| `BOOT_PUBLIC_KEY_HASH` | Trusted public key hash |
| `BOOT_SIGNATURE` | Expected signature value |

The signature module performs constant-width equality checks and also emits a
32-bit folded digest used as `boot_status`. On success, secure boot transitions
through:

```text
BOOT_HASH -> BOOT_LOCK -> BOOT_RUN
```

Only `BOOT_RUN` asserts `boot_ok`. The CPUs are held in reset while `boot_ok`
is false. Failure sets `boot_status = 0xBAD00001` and keeps the CPUs reset.

Host-side image manifests are built by `tools/harvos_image.py`. They use
canonical JSON plus HMAC-SHA256 for deterministic local signing:

```powershell
python tools\harvos_image.py --rom tests\boot_demo.hex --services software\services\service_manifest.json -o tests\boot_image.json
python tools\harvos_image.py --rom tests\boot_demo.hex --services software\services\service_manifest.json --verify tests\boot_image.json
```

Production mode rejects the default development key:

```powershell
python tools\harvos_image.py --rom tests\boot_demo.hex --services software\services\service_manifest.json -o release\harvos_boot_image.json --production --key-file release\production.key
```

## SMP, Bus, Caches, And Coherence

The SoC contains two CPU instances:

| CPU | Reset vector | Entropy input |
| --- | --- | --- |
| CPU0 | `0x00000000` | `entropy_lfsr` |
| CPU1 | `0x000000C0` | `entropy_lfsr ^ 0x13579BDF` |

`harvos_smp_bus2` arbitrates the two data ports onto one shared memory/MMIO
bus. If both CPUs request simultaneously, the grant toggles round-robin using
`last_grant`. Both CPUs see the shared read data bus; only the granted CPU sees
ready.

Cache and coherence modules are currently observability hooks:

| Module | Function |
| --- | --- |
| `harvos_l1_cache` | Per-core direct-mapped cache observer, 16 lines, hit/miss counters |
| `harvos_l2_cache` | Shared direct-mapped cache observer, 32 lines, hit/miss counters |
| `harvos_coherence_dir` | Tracks owner/modified line state and invalidation events |

These modules do not yet stall or source CPU data in the critical path. They
provide status bits that are folded into debug video state and trace coverage.

## Kernel Model And Software ABI

The hardware kernel policy hook is `rtl/harvos_kernel_model.sv`. The reference
C kernel model is in `software/kernel/`.

System call numbers:

| Name | Number | Meaning |
| --- | --- | --- |
| `HARVOS_SYS_AUDIT` | `0` | Return audit digest |
| `HARVOS_SYS_IPC_SEND` | `1` | Queue an IPC message |
| `HARVOS_SYS_MMAP` | `2` | Validate a mapping request |
| `HARVOS_SYS_YIELD` | `3` | Yield placeholder |

Capability bits:

| Name | Bit | Meaning |
| --- | --- | --- |
| `HARVOS_CAP_MEM_MAP` | `0` | May create writable mappings |
| `HARVOS_CAP_IPC_SEND` | `1` | May send IPC |
| `HARVOS_CAP_IPC_RECV` | `2` | May receive IPC |
| `HARVOS_CAP_DMA` | `3` | May use DMA services |
| `HARVOS_CAP_MMIO` | `4` | May access MMIO in policy models |

The reference C ABI declares:

```c
long harvos_syscall3(uint32_t number, uint32_t a0, uint32_t a1, uint32_t a2);
long harvos_audit(void);
long harvos_ipc_send(uint32_t endpoint, uint32_t word0, uint32_t word1);
long harvos_mmap(uint32_t pte_flags);
long harvos_yield(void);
```

The hosted C library stub currently returns `-38` for direct syscalls because
the real target ABI is intended to place the syscall number in `a7`, arguments
in `a0..a2`, and use `ECALL`. Until a full C backend/runtime path exists, tests
exercise the kernel model directly.

Kernel model policy:

| Policy | Rule |
| --- | --- |
| Mapping must be valid | `PTE_V` is required |
| W^X | `PTE_W` and `PTE_X` together are denied |
| User executable writable | User executable mappings are denied |
| Writable mappings | Require `HARVOS_CAP_MEM_MAP` |
| IPC send | Requires `HARVOS_CAP_IPC_SEND` and queue space |
| IPC receive | Requires `HARVOS_CAP_IPC_RECV` |

## Services

Service policy is defined in `software/services/service_manifest.json`.

| Service | Capabilities | Immutable |
| --- | --- | --- |
| `init` | `MEM_MAP`, `IPC_SEND`, `IPC_RECV` | yes |
| `netd` | `IPC_SEND`, `IPC_RECV`, `DMA` | yes |
| `storaged` | `IPC_SEND`, `IPC_RECV`, `DMA` | yes |

Required global policies:

| Policy | Required value |
| --- | --- |
| `wx` | `deny` |
| `user_exec_writable` | `deny` |
| `mmio_user` | `deny` |
| `dma` | `bounce-buffer-only` |

Reference services:

| File | Model |
| --- | --- |
| `software/services/src/net_service.c` | Token-bucket network flow limiter with audit digest |
| `software/services/src/storage_service.c` | Immutable base file plus writable overlay model |
| `software/services/src/dma_mediator.c` | 2 KiB DMA bounce-window mediator |

Build services:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_services.ps1 -ToolchainRoot C:\SysGCC\risc-v
```

The script uses:

```text
riscv64-unknown-elf-gcc
riscv64-unknown-elf-ar
riscv64-unknown-elf-objdump
```

Target flags include `-march=rv32i`, `-mabi=ilp32`, `-ffreestanding`,
`-nostdlib`, `-nostartfiles`, and `-mstrict-align`.

## Trace And Debug

`harvos_trace` maintains a rolling digest:

```text
digest_next = rotate_left(digest, 5) ^ event_data ^ event_code
```

Event codes:

| Code | Meaning |
| --- | --- |
| `0xE0` | CPU0 trap |
| `0xE1` | CPU1 trap |
| `0xA1` | Kernel policy fault |
| `0xD0` | DMA request |
| `0x57` | Bus write |
| `0x52` | Bus read |

The SoC exports debug state to the video generator:

| Signal | Meaning |
| --- | --- |
| `debug_pc` | CPU0 PC |
| `debug_instr` | XOR of CPU0 and CPU1 current instructions |
| `debug_scause` | XOR of CPU0 and CPU1 scause |
| `debug_stval` | XOR of CPU0 and CPU1 stval |
| `debug_state` | Combined MMU, boot, kernel, cache, trace status |
| `debug_kernel_status` | Raw hardware kernel/supervisor hook status |
| `debug_hps_boot_word` | Program USB FAT32 boot-sector word observed through the HPS block bridge |
| `debug_net_boot_word` | First HNET RX DMA word, `0x0a00020f` for the deterministic `10.0.2.15` lease in simulation |
| `debug_word0` | `dmem[0]` |
| `debug_word1` | `dmem[1] ^ dmem[3] ^ l1_status0 ^ l1_status1` |
| `debug_word2` | `dmem[2] ^ dmem[64] ^ l2_status ^ coh_status ^ trace_digest` |
| `debug_entropy` | Entropy LFSR |
| `debug_trap` | Any CPU trap, DMA fault, kernel policy fault, or failed boot |

## Formal Invariants

`rtl/harvos_assertions.sv` checks the core safety properties used by
`formal/harvos_core.sby`.

Assertions include:

| Invariant | Meaning |
| --- | --- |
| CPU0 fetch range | CPU0 fetch address remains inside instruction ROM |
| CPU1 fetch range | CPU1 fetch address remains inside instruction ROM |
| Data write range | Data writes target data RAM or MMIO only |
| DMA window lower bound | Allowed DMA starts at or above the bounce window base |
| DMA alignment | Allowed DMA address and length are 4-byte aligned |
| DMA nonzero length | Allowed DMA length is nonzero |
| DMA upper bound | Allowed DMA end stays inside the bounce window |

Run formal verification:

```powershell
cd formal
sby -f harvos_core.sby
```

If `sby` is not in `PATH`, prepend the local OSS CAD Suite:

```powershell
$Oss = Resolve-Path ..\.tools\oss-cad-suite\oss-cad-suite
$env:YOSYSHQ_ROOT = "$Oss\"
$env:VERILATOR_ROOT = Join-Path $Oss "share\verilator"
$env:PATH = "$Oss\bin;$Oss\lib;$env:PATH"
sby -f harvos_core.sby
```

## Verilator Processor Boot Simulation

`scripts/run_processor_boot_test.ps1` builds a small Verilator harness around
`harvos_soc` and boots the real RTL processor from the internal ROM. The test
checks that secure boot releases the CPUs, the ROM self-test writes its known
result, the hardware kernel/supervisor hook advances, entropy changes, the USB
boot-probe powers the port, the USB DMA path becomes observable, and the boot
ROM reads sector 0 from `release/program_usb.img` through the HPS block-device
bridge without a post-boot trap.

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1
```

The generated simulator lives below `build/processor_boot/`.

## Verilator HDMI And SDL2 Simulation

The Verilator testbench targets `mycore`, not the full MiSTer wrapper. It
loads the external `.hbr` boot image through the same boot image ports used by
the MiSTer wrapper, captures RGB plus blanking/sync as an HDMI-style sink, and
compares the captured frame against the RGB565 payload.

Headless run:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_verilator_sdl.ps1 -Headless -Frames 2
```

PAL run:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_verilator_sdl.ps1 -Headless -Frames 1 -Pal
```

Scandouble run:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_verilator_sdl.ps1 -Headless -Frames 1 -Scandouble
```

SDL2 run:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_verilator_sdl.ps1 -SDL -SDL2Root C:\SDL2-devel-2.30.0-VC
```

Outputs:

| File | Meaning |
| --- | --- |
| `build/verilator_sdl/harvos_video_tb.exe` | Generated simulator executable |
| `build/verilator_sdl/frame.ppm` | Captured final frame as binary PPM |
| `build/verilator_sdl/frame.bmp` | Captured final frame as 24-bit BMP |
| `build/verilator_sdl/obj_dir/` | Verilator generated C++ |
| `build/verilator_sdl/msvc_obj/` | MSVC object files |

The test prints frame count, visible resolution, FNV checksum, boot image match
ratio, and output file paths. A valid boot frame should report a boot match
ratio of `1.000`.

## Quartus Build

Project files:

| File | Purpose |
| --- | --- |
| `Template.qpf` | Quartus project file |
| `Template.qsf` | Quartus settings |
| `files.qip` | HarvOS RTL source list |
| `sys/sys.qip` | MiSTer framework source list |
| `Template.sdc` | Core timing constraints |
| `sys/sys_top.sdc` | Framework timing constraints |

Compile:

```powershell
& "C:\intelFPGA_lite\18.1\quartus\bin64\quartus_sh.exe" --flow compile Template
```

Primary output:

```text
output_files/Template.rbf
```

Useful reports:

| File | Meaning |
| --- | --- |
| `output_files/Template.flow.rpt` | Overall Quartus flow status |
| `output_files/Template.sta.summary` | Timing summary |
| `output_files/Template.fit.summary` | Fitter summary |
| `output_files/Template.map.summary` | Mapper summary |

The latest known successful compile produced an RBF at
`output_files/Template.rbf` and closed timing with positive setup and hold
slack. Re-run Quartus after RTL changes before publishing a release.

## Production Gate

The production configuration is `config/production.json`.

Required external tools:

| Tool | Purpose |
| --- | --- |
| `quartus_sh` | Quartus compile flow |
| `quartus_map` | Quartus mapping stage |
| `verilator` | RTL simulation |
| `sby` | Formal verification |
| `yosys` | Formal synthesis |

Security gates:

| Gate | Required value |
| --- | --- |
| Default dev key | Not allowed |
| Image signature | Required |
| W^X policy | `deny` |
| DMA policy | `bounce-buffer-only` |
| Formal | Required |
| FPGA timing | Required |

Run:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_release.ps1 -KeyFile release\production.key
```

The script runs reference tests and `tools/harvos_prod_check.py`. The report is
written to:

```text
release/production_report.json
```

A release is production-ready only when `production_ready` is true and
`blockers` is empty.

## End-To-End Development Flow

Recommended local loop:

```powershell
python -m py_compile tools\harvos_asm.py tools\harvos_iss.py tools\harvos_image.py tools\make_boot_image_rom.py tools\harvos_prod_check.py tests\run_all.py tests\kernel_model_smoke.py tests\service_model_smoke.py
python tests\run_all.py
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_usb_images.ps1
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_services.ps1 -ToolchainRoot C:\SysGCC\risc-v
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_verilator_sdl.ps1 -Headless -Frames 2
cd formal
sby -f harvos_core.sby
cd ..
& "C:\intelFPGA_lite\18.1\quartus\bin64\quartus_sh.exe" --flow compile Template
```

For boot-screen work:

```powershell
python tools\make_boot_image_rom.py C:\Users\dennis\Documents\GitHub\MINERVA_closed\fantasy-pi\boot.png -o release\harvos_minerva_bootrom.hbr --metadata release\harvos_minerva_bootrom.json
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_verilator_sdl.ps1 -Headless -Frames 2 -BootRom release\harvos_minerva_bootrom.hbr
```

## Current Implementation Scope

Implemented in synthesizable RTL:

| Area | Status |
| --- | --- |
| 32-bit RV32I-style fixed ISA subset | Implemented |
| Custom clear/entropy instructions | Implemented |
| CSRs and precise trap metadata | Implemented |
| Strict Harvard separation | Implemented |
| MMU permission checks and TLBs | Implemented |
| MPU region firewall | Implemented |
| W^X enforcement | Implemented |
| User capability plumbing | Implemented |
| Two-core SMP prototype | Implemented |
| Byte-enable stores | Implemented |
| Secure boot gate | Implemented |
| DMA bounce-window IOMMU-lite | Implemented |
| Video boot image renderer | Implemented |
| Trace digest | Implemented |
| Formal safety assertions | Implemented |

Modeled as hooks or reference software:

| Area | Scope |
| --- | --- |
| Page tables | Region-based identity walker, not memory-resident page tables |
| Caches | Observability/status models, not CPU data-source caches |
| Coherence | Directory/invalidation observation, not a full coherency fabric |
| DDR | Bridge shell only |
| Kernel | Hardware policy hook plus hosted C reference model |
| Services | Hosted C reference services and manifest policy |
| Syscall ABI | Declared C ABI; target ECALL runtime still skeletal |
| Secure signature cryptography | RTL equality gate plus host HMAC tooling, not a hardware asymmetric verifier |

Not implemented:

| Area | Note |
| --- | --- |
| Compressed `C` extension | Unsupported |
| Multiply/divide `M` extension | Unsupported |
| Atomic `A` extension | Unsupported |
| Interrupt controller | Unsupported |
| `SRET`/`MRET` | Unsupported |
| Full RISC-V privileged architecture | Only the HarvOS CSR subset is implemented |
| General-purpose OS userspace | Skeleton/reference models only |

## Source Of Truth

When this README and the code differ, the implementation files are the source
of truth:

| Topic | Source |
| --- | --- |
| ISA constants, CSRs, PTE flags, trap causes | `rtl/harvos_pkg.sv` |
| CPU behavior | `rtl/harvos_cpu.sv` |
| SoC memory map and debug wiring | `rtl/harvos_soc.sv` |
| MMU and TLB behavior | `rtl/harvos_mmu.sv`, `rtl/harvos_pagetable.sv`, `rtl/harvos_tlb.sv` |
| MPU behavior | `rtl/harvos_mpu.sv` |
| DMA guard | `rtl/harvos_dma_iommu.sv` |
| MiSTer wrapper and boot image loader | `Template.sv` |
| Video output | `rtl/harvos_video.sv` |
| Assembler syntax | `tools/harvos_asm.py` |
| ISS behavior | `tools/harvos_iss.py` |
| Kernel ABI | `software/include/harvos_abi.h` |
| Service policy | `software/services/service_manifest.json` |
| Production checks | `tools/harvos_prod_check.py`, `config/production.json` |
