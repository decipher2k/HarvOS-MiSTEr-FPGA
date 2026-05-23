<!-- Copyright 2025 Dennis Michael Heine -->

# HarvOS MiSTer Core Notes

This core implements a synthesizable FPGA prototype of the CPU and hardware platform described in `HarvOS_Whitepaper.pdf`.

The whitepaper specifies instruction semantics but not a complete binary encoding table. The RTL therefore uses RISC-V-style 32-bit encodings for the shared base operations and the `custom-0` opcode for HarvOS security instructions:

- `ADD/SUB/AND/OR/XOR/SLT`, `ADDI/ANDI/ORI/XORI`
- `LW`, `SW`
- `BEQ/BNE/BLT/BGE`, `JAL`, `JALR`
- `ECALL`, `EBREAK`, `CSRRW/CSRRS/CSRRC`
- `FENCE`, `FENCE.I`
- `CLRREG`, `CLRMEM`, `ENTROPY`
- `LUI`, `AUIPC` as practical 32-bit constant/address helpers for future toolchain work

Implemented architectural features:

- Fixed 32-bit instruction fetch.
- Deterministic in-order `IF/ID/EX/MEM/WB` microsequencer.
- Separate instruction and data buses.
- MMU-style 4 KiB page translation with I/D TLB-visible state, access bits, dirty bits, user/supervisor checks, and W^X rejection.
- Dedicated page-table walker and refillable TLB modules for instruction and data paths.
- Hard MPU checks after MMU translation for executable instruction ROM, writable data RAM, and supervisor-only MMIO.
- Separate I/D address spaces: address `0` on the instruction bus is ROM; data RAM starts at `0x00000400` and data accesses into instruction ROM trap as Harvard violations.
- HarvOS CSRs from the whitepaper with reserved-bit masking and persistent `smpuctl.LOCK`.
- Precise traps with `sepc`, `scause`, and `stval`.
- Dual-core SMP FPGA prototype with a deterministic round-robin shared data bus.
- Secure-boot state machine that validates 256-bit boot-image metadata before releasing CPU reset and locking MPU-visible boot state.
- Signature verifier hook rejects mismatched image hashes, signer fingerprints, and HMAC-SHA256 signatures.
- L1/L2 cache metadata and coherence-directory hooks with hit/miss/invalidation counters.
- IOMMU-lite DMA window checks for bounce-buffer-only device writes.
- Hardware kernel-model hooks for scheduling ticks, IPC depth, syscall policy, and capability checks.
- Audit trace digest for observable events.
- DDR bridge abstraction hook for replacing internal prototype RAM with an external controller.
- Synthesis-off SystemVerilog assertions for the key hardware invariants.
- Built-in ROM self-test/demo visible through the MiSTer video output.
- Reference assembler, ISS, boot-image builder, ABI headers, linker script, simulation testbench, formal run file, user-service skeletons, service policy models, and kernel skeleton for the non-RTL whitepaper layers.

Still modeled or simplified relative to a production ASIC:

- The page table walker is prototype-populated from the fixed MiSTer memory map; the module boundary is ready for RAM-backed page tables.
- Cache modules track direct-mapped L1/L2 metadata and coherence events; the current MiSTer data path remains bus-serialized for determinism.
- SMP coherence is bus-serialized for the FPGA prototype rather than MESI.
- Secure boot compares full SHA-256/HMAC-SHA256 metadata; a production public-key accelerator can replace the compact comparator hook.
- External DDR is abstracted as on-chip prototype RAM in this MiSTer template.

These choices keep the MiSTer core small enough to build while covering the whitepaper's executable hardware invariants.
