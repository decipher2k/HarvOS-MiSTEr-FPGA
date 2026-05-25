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

Interrupt and MMIO additions:

| Item | Value |
| --- | --- |
| External interrupt `scause` | `0x8000000B` |
| Network MMIO base | `0xFFFF0040` |
| Network register span | `0x40` bytes |
| DMA bounce window | `0x00000500..0x00000CFF`, 2048 bytes |
| Network DMA policy | IOMMU bounce window, RX writes and TX reads |
| USB MMIO base | `0xFFFF0080` |
| USB register span | `0x40` bytes |
| USB DMA policy | IOMMU bounce window only |
| USB PHY status register | `0xFFFF00B0` |
| USB packet status register | `0xFFFF00B4` |
| USB retry register | `0xFFFF00B8` |
| USB packet engine status | `0xFFFF00BC` |
| MiSTer HPS block base | `0xFFFF00C0` |
| MiSTer HPS block span | `0x40` bytes |

Network and USB MMIO registers are defined in `software/include/harvos_abi.h`.

Network MMIO registers expose a small packet-DMA NIC endpoint. It is wired into the SoC as `HNET` and uses the free MMIO window at `0xFFFF0040..0xFFFF007F`:

| Offset | Name | Purpose |
| --- | --- | --- |
| `0x00` | `ID` | `0x484E4554`, ASCII `HNET` |
| `0x04` | `CTRL` | enable, loopback, clear, promiscuous, simulated link, TX checksum offload |
| `0x08` | `STATUS` | link, busy, done, fault, IRQ |
| `0x0C` | `IRQ_EN` | RX ready, RX done, TX done, fault, link change |
| `0x10` | `IRQ_STAT` | write-one-to-clear IRQ status |
| `0x14`/`0x18` | `RX_ADDR`/`RX_LEN` | RX DMA target in bounce window |
| `0x1C` | `COMMAND` | TX start, RX start, clear |
| `0x20`/`0x24` | `TX_ADDR`/`TX_LEN` | TX DMA source in bounce window |
| `0x28`/`0x2C` | `MAC_LO`/`MAC_HI` | configured local MAC address |
| `0x30` | `FRAME_LEN` | length of the last completed frame |
| `0x34`/`0x38` | `RX_COUNT`/`TX_COUNT` | frame counters |
| `0x3C` | `DEBUG` | packet digest/debug word |
| `0x40` | `RX_PENDING` | complete frames currently waiting in the hardware RX ring |
| `0x44` | `RX_WORDS` | 32-bit words currently buffered in the hardware RX ring |

`STATUS` also exposes TX/RX readiness bits used by the Supervisor queue driver:

| Bit | Name | Meaning |
| --- | --- | --- |
| 13 | `TX_READY` | external packet sink can accept TX traffic |
| 14 | `RX_VALID` | at least one complete RX frame is waiting |
| 15 | `RX_ERROR` | packet-side RX error was observed |

The RTL HNET block includes an internal RX frame ring so packet ingress can continue while the CPU is servicing prior frames. The Supervisor wraps the MMIO device with bounded RX/TX software queues in `hvs_net_driver_t`; a production TCP/IP stack should bind to that queue API instead of issuing one blocking MMIO transfer per socket event.

`IRQ_STAT.RX_READY` is raised when a complete frame enters the hardware RX ring. Drivers should read `RX_PENDING`, drain multiple frames per poll/interrupt, and then clear `RX_READY` and `RX_DONE` with write-one-to-clear.

On MiSTer the board Ethernet interface is owned by the HPS/Linux side and is not present as raw RMII/RGMII pins in this core's `emu` port list. The `HNET` block therefore terminates in an internal 32-bit packet stream at the top level, currently tied to a simulated/link-test path. A production MiSTer network path needs an HPS-side proxy over a core-specific bridge, while a custom board can connect this packet stream to an RMII/RGMII MAC/PHY wrapper.

USB `CTRL` now includes port-power and PHY selection bits:

| Bit | Name |
| --- | --- |
| 0 | enable host |
| 1 | simulated connect for ROM/simulation |
| 2 | clear sticky done/fault/IRQ |
| 3 | port power enable |
| 4 | select UTMI byte interface instead of the DP/DM fallback PHY |
| 5 | port reset |

IRQ bits: done, fault, stall, NAK-limit and over-current.

MiSTer HPS block registers expose the normal MiSTer `hps_io` virtual-disk path. This is a fallback/bridge for USB sticks handled by MiSTer's HPS side; the direct USB-HCD at `0xFFFF0080` remains the path for hardware with a real USB PHY:

| Offset | Name | Purpose |
| --- | --- | --- |
| `0x00` | `ID` | `0x48505344`, ASCII `HPSD` |
| `0x04` | `CTRL` | start, write, clear |
| `0x08` | `STATUS` | mounted bits plus busy/done/fault |
| `0x0C` | `DRIVE` | `0` program image, `1` data image |
| `0x10` | `LBA_LO` | 32-bit sector LBA |
| `0x14` | `LBA_HI` | reserved, must be zero in the current bridge |
| `0x18` | `COUNT` | sector count, max 64 |
| `0x1C` | `BUF_IDX` | 16-bit buffer index |
| `0x20` | `BUF_DATA` | two 16-bit buffer words, auto-increment |
| `0x24`/`0x28` | `SIZE` | selected mounted image size |

Memory policy:

- Writable plus executable mappings are rejected.
- User executable writable mappings are rejected.
- DMA is limited to the 2 KiB bounce-buffer window.
- MMIO is supervisor-only in the current walker; `HARVOS_CAP_MMIO` is bit 4 and is reserved for deliberate future User-MMIO mappings.
- `satp[31]` enables translation, `satp[29:22]` is the ASID, and `satp[19:0]` is the 4 KiB root page-table PPN.
- Page-table PTEs use `{phys[31:12], 4'b0000, flags[7:0]}`; invalid L0 PTEs are the guard-page representation.
- Supervisor app loading requires physical PTE read/write operations; each user task receives its own root page, ASID, stack guards, parameter guards, and content guards.

HarvTTP static content bundle:

| Field | Value |
| --- | --- |
| Bundle magic | `0x48545450`, ASCII `HTTP` |
| Bundle version | `1` |
| Max files | `16` |
| Entry path bytes | `92` |

The Supervisor uses this bundle for `/confg/harvttp/httproot` so the `harvttp.elf` user task can serve subpages, CSS, JavaScript, and images from the program USB stick.
