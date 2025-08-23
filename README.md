# HarvOS Core (RV32I S-mode CPU)

HarvOS is a minimal open-source RISC-V RV32I core with Supervisor-mode (S-mode) support,
Sv32 virtual memory, MPU enforcement (NX, W^X, Harvard split), and simple caches.  
It is designed for educational and research use.

## Features
- **ISA:** RV32I base integer (no M/A/C extensions yet)
- **Privilege:** Machine (M), Supervisor (S), User (U)
- **Virtual memory:** Sv32 MMU + page table walker
- **MMU permissions:** `SUM` (S-mode may access U pages) and `MXR` (exec-only readable in S-mode) respected
- **MPU:** Harvard separation, NX + W^X enforcement
- **Caches:** 
  - I$ direct-mapped, 32-byte lines, execute-only, lockable
  - D$ 2-way, 32-byte lines, write-through, early restart
- **Interrupts:** SSIP, STIP (timer), SEIP (external), prioritized
- **Timer:** 64-bit counter + compare (`stime`, `stimecmp`)
- **CSRs:** Full Supervisor CSR subset (sstatus, stvec, sepc, scause, stval, satp, sie, sip, stimecmp, etc.)
- **Traps & Exceptions:** Illegal instruction, misaligned access, ecall/ebreak, page/MPU faults

## 📘 ISA Support

HarvOS implements a **subset of the RISC-V Privileged Architecture v1.12**:  

### Implemented
- **Base ISA**:  
  - RV32I (32-bit base integer)  
  - All load/store, arithmetic, logical, branch, jump, system instructions  
- **System / CSRs**:  
  - **sstatus** (SIE bit only, others hardwired 0)  
  - **stvec, sepc, scause, stval**  
  - **satp** (Sv32 mode)  
  - **sie, sip** (supervisor interrupt enable/pending)  
  - **stime, stimecmp** (timer)  
  - **sscratch** (general use scratch reg)  
  - **FENCE, FENCE.I** (FENCE.I flushes I-cache, FENCE is a no-op)  
  - **ECALL, EBREAK** (trap to supervisor)  

### Not Implemented
- **Extensions**:  
  - RV32M (mul/div)  
  - RV32A (atomics)  
  - RV32C (compressed)  
  - Any 64-bit extensions (RV64*)  
- **Other CSRs**:  
  - PMP CSRs (not implemented; MPU handled separately)  
  - All debug CSRs (dcsr, etc.)  
  - Unused fields in sstatus are hardwired 0  
- **Unaligned access**:  
  - Traps on misaligned load/store/fetch  

### 🔒 Privilege, Traps & Memory Permissions — Summary

### Privilege levels
- **M-mode**: reset state, owns `mstatus/mie/mip/mtvec/medeleg/mideleg/mepc/mcause/mtval`.
- **S-mode**: OS kernel; uses `sstatus/sie/sip/stvec/sepc/scause/stval/satp`.
- **U-mode**: applications; traps to S (delegated) or M (non-delegated).

### Trap entry & return
- **ECALL cause**: U=8, S=9, M=11. **EBREAK** always to M.
- **Delegation**: If `medeleg[cause]=1` and trap originates in U/S, trap targets **S**; else **M**. Interrupts obey `mideleg` (SSIP/STIP/SEIP → S when delegated).
- **Vectors**: M traps → `mtvec` (base); S traps → `stvec` (base). (Vectored mode reserved for future.)
- **Returns**:
  - `MRET`: `priv ← MPP`; `MIE←MPIE`, `MPIE←1`, `MPP←U` (00); `pc ← mepc`.
  - `SRET`: `priv ← (SPP?S:U)`; `SIE←SPIE`, `SPIE←1`, `SPP←0`; `pc ← sepc`.

### MMU permissions (Sv32) with SUM/MXR
- **Instruction fetch**: requires `X=1`. `SUM` does **not** affect fetch.
- **Data access in U**: page must have `U=1` and `R/W` per op; MXR has no effect in U.
- **Data access in S**:
  - Access to U-pages requires **`SUM=1`**, else fault.
  - **Loads**: allowed when `R=1`, or when `X=1` **and** `MXR=1` (make-exec-readable).
  - **Stores**: require `W=1` (MXR does not grant store).

### Additional system instructions
- **`FENCE.I`**: flushes I-cache (already implemented).
- **`SFENCE.VMA`**: flushes TLB (entirely; ASID/VA variants reserved for future).
- **`WFI`**: implemented as a hint no-op.


## Exceptions & Interrupts

## ✅ RV32I Instruction Coverage

| Category          | Instructions                              | HarvOS |
|-------------------|-------------------------------------------|--------|
| **Integer Reg-Imm** | LUI, AUIPC                                | ✔ |
|                   | ADDI, SLTI, SLTIU, ANDI, ORI, XORI        | ✔ |
|                   | SLLI, SRLI, SRAI                          | ✔ |
| **Integer Reg-Reg** | ADD, SUB, SLT, SLTU, AND, OR, XOR         | ✔ |
|                   | SLL, SRL, SRA                             | ✔ |
| **Branches**      | BEQ, BNE, BLT, BGE, BLTU, BGEU            | ✔ |
| **Jumps**         | JAL, JALR                                 | ✔ |
| **Loads**         | LB, LH, LW, LBU, LHU                      | ✔ (misaligned traps) |
| **Stores**        | SB, SH, SW                                | ✔ (misaligned traps) |
| **Memory Ordering** | FENCE, FENCE.I                          | ✔ (FENCE=NOP, FENCE.I flushes I$) |
| **System**        | ECALL, EBREAK                             | ✔ (trap to S-mode) |
|                   | CSRRW, CSRRS, CSRRC, CSR*I variants       | ✔ (only supported CSRs) |
|                   | Privileged CSRs (see list above)          | ✔ |
| **Unsupported**   | MUL/DIV (RV32M), Atomics (A), Compressed (C) | ✘ |

### Notes
- **Misaligned**: LW/LH/SW/SH to non-aligned addresses trap. No hardware realignment.  
- **CSR writes**: Unsupported/RO CSRs trap as *illegal instruction*.  
- **FENCE.I**: flushes I$, synchronous.  

- **Traps / Exceptions**:  
  - Illegal instruction  
  - Misaligned instruction address  
  - Misaligned load/store address  
  - Page fault (instruction/data load/store)  
  - Breakpoint (EBREAK)  
  - Environment call (ECALL from S-mode)  
- **Interrupts**:  
  - Supervisor software interrupt (SSIP)  
  - Supervisor timer interrupt (STIP)  
  - Supervisor external interrupt (SEIP)  
  - Prioritized in the order SEIP > STIP > SSIP  


## Status

### New in this release
- Added **Machine (M)** and **User (U)** modes, incl. machine CSRs and **`MRET`/`SRET`**.
- Implemented **SUM/MXR** behavior in the Sv32 MMU.
- **Interrupts**: delegation via `mideleg` and exception delegation via `medeleg`; priorities E > T > S.
- **`SFENCE.VMA`** (TLB flush) and **`WFI`** (hint) supported.

## Status
✅ Runs testbenches with page faults, interrupts, caches  
✅ RV32I instruction set implemented  
✅ Compliance-ready (passes directed tests; rv32ui/rv32si still to be run)  

Not included:
- No RV32M/A/C extensions
- No peripherals beyond timer/irq stub

## Getting Started
Synthesize using Intel Quarkus Prime

### 🎓 Educational Use

HarvOS is designed as a **teaching and research platform** to illustrate:  
- RISC-V RV32I instruction set and supervisor-mode CSRs  
- Sv32 virtual memory and page table walking  
- Memory protection (NX, W^X)  
- Harvard architecture with separate I$ / D$  
- Trap/interrupt handling flow  

⚠️ **Not deterministic**: Because HarvOS uses caches, a page table walker, and asynchronous interrupts, instruction timing is not guaranteed cycle-by-cycle.  
It should **not** be used for real-time or safety-critical applications.  

For predictable cycle timing (e.g. classroom demos), you can configure the core to run in a simplified mode:  
- Disable caches (force uncached access)  
- Mask interrupts (`sie = 0`)  
- Use static page mappings (no PTW misses)  

## License
Apache 2.0 with Solderpad hardware license supplement (see LICENSE).

## AI Notice
HarvOS has been created using ChatGPT 5

## Trademark Notice
“RISC-V” and the RISC-V logos are trademarks of RISC-V International.  
This project is not affiliated with or endorsed by RISC-V International.
