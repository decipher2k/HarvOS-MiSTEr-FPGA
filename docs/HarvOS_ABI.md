<!-- Copyright 2025 Dennis Michael Heine -->

# HarvOS Prototype ABI

The MiSTer prototype follows the whitepaper ABI:

- `a0` to `a5`: syscall arguments.
- `a7`: syscall number.
- `a0`: return value.
- `ECALL`: synchronous syscall trap.
- `x0`: hardwired zero.
- `ra`: return address.
- `sp`: stack pointer.

Implemented syscall numbers:

| Number | Name | Arguments |
| --- | --- | --- |
| 0 | `audit` | none |
| 1 | `ipc_send` | `endpoint`, `word0`, `word1` |
| 2 | `mmap` | `pte_flags` |
| 3 | `yield` | none |

Memory policy:

- Writable plus executable mappings are rejected.
- User executable writable mappings are rejected.
- DMA is limited to bounce-buffer windows.
- MMIO is supervisor-only unless a capability explicitly permits it.
