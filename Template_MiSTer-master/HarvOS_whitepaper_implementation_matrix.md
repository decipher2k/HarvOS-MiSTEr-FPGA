<!-- Copyright 2025 Dennis Michael Heine -->

# HarvOS Whitepaper Implementation Matrix

This file maps the whitepaper to the MiSTer FPGA implementation. "RTL" means synthesizable SystemVerilog is present in the core. "Hook" means a hardware boundary or prototype model exists and can be replaced by a production implementation. "Process" means the whitepaper section is a method, policy, or market/roadmap item rather than logic.

| Whitepaper area | Status | Main files |
| --- | --- | --- |
| Strict Harvard separation | RTL | `rtl/harvos_cpu.sv`, `rtl/harvos_mmu.sv`, `rtl/harvos_mpu.sv`, `rtl/harvos_pagetable.sv`, `rtl/harvos_soc.sv` |
| Fixed 32-bit ISA subset | RTL | `rtl/harvos_pkg.sv`, `rtl/harvos_cpu.sv` |
| ALU/immediate/load/store/control flow/system/security opcodes | RTL | `rtl/harvos_cpu.sv`, `rtl/harvos_soc.sv` |
| CSRs, privilege checks, precise traps | RTL | `rtl/harvos_cpu.sv` |
| MMU, 4 KiB PTE flags, W^X, user/supervisor checks | RTL | `rtl/harvos_mmu.sv`, `rtl/harvos_pagetable.sv` |
| ITLB/DTLB refill and flush | RTL | `rtl/harvos_tlb.sv`, `rtl/harvos_cpu.sv` |
| MPU regions and lock behavior | RTL | `rtl/harvos_mpu.sv`, `rtl/harvos_cpu.sv` |
| Entropy CSR/instruction source | RTL | `rtl/harvos_soc.sv`, `rtl/harvos_cpu.sv` |
| SMP prototype | RTL | `rtl/harvos_soc.sv`, `rtl/harvos_smp_bus2.sv` |
| L1/L2 cache model | Hook | `rtl/harvos_l1_cache.sv`, `rtl/harvos_l2_cache.sv` |
| Coherence/invalidation tracking | Hook | `rtl/harvos_coherence_dir.sv` |
| DMA bounce buffer and IOMMU-lite | RTL | `rtl/harvos_dma_iommu.sv`, `rtl/harvos_soc.sv` |
| Secure boot and MPU lock release | RTL + image tooling | `rtl/harvos_secure_boot.sv`, `rtl/harvos_signature.sv`, `tools/harvos_image.py` |
| Kernel scheduling/syscall/capability/IPC policy model | Hook | `rtl/harvos_kernel_model.sv` |
| Audit/observability | RTL | `rtl/harvos_trace.sv`, `rtl/harvos_video.sv` |
| DDR/external memory integration | Hook | `rtl/harvos_ddr_bridge.sv` |
| Formal invariant checks | RTL assertions | `rtl/harvos_assertions.sv` |
| OS services, filesystems, networking, user-space drivers | Firmware skeleton + reference services | `software/kernel/harvos_kernel.c`, `software/services/service_manifest.json`, `software/services/src/*.c`, `software/user/*/main.c` |
| Compiler, assembler, linker, C ABI | Reference toolchain | `tools/harvos_asm.py`, `tools/harvos_iss.py`, `software/include/harvos_abi.h`, `software/linker.ld`, `software/lib/crt0.hvasm` |
| Simulation regression | Testbench + host runner | `sim/harvos_soc_tb.sv`, `tests/run_reference_tests.ps1`, `tests/run_all.py`, `tests/*_smoke.py` |
| ASIC frequency, floorplan, power, market analysis | Process/business scope | documented only; not synthesizable |

The result is a complete repository-level prototype of the executable ideas in the whitepaper: RTL for hardware invariants, reference tools for the ISA, boot-image tooling, firmware skeletons for OS policy, user-space service skeletons, and simulation/formal entry points. ASIC production economics and market analysis remain documentation/process items because they are not implementable as code.
