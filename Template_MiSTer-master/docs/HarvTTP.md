<!-- Copyright 2025 Dennis Michael Heine -->

# HarvTTP Server ELF

`HarvTTP` is the first HarvOS server application ELF. The build script creates:

```text
build/apps/harvttp.elf
release/program_usb/harvttp.elf
release/program_usb.img
release/data_usb.img
```

Program USB layout:

```text
/
  harvttp.elf
  config/
    harvttp.yaml
  confg/
    harvttp/
      httproot/
        index.html
        about.html
        assets/
          style.css
          app.js
          harvttp.svg
```

Data USB layout:

```text
/data/harvttp/
```

The `.img` files are FAT32 block images. On MiSTer they are mounted through the
OSD entries `Mount Program Stick Image` and `Mount Data Stick Image`; in RTL
simulation the processor boot harness mounts the same images through the HPS
block-device bridge. The boot ROM now reads sector 0 of the program image, so
the processor-level boot test proves that a real image is visible before the
Supervisor scans `/harvttp.elf`.

The path is intentionally `/confg/harvttp/httproot` because that is the requested HarvTTP content root. The normal app YAML remains under `/config/harvttp.yaml`.

The Supervisor scans the HarvTTP webroot recursively, with a bounded depth and file count, and maps a read-only HTTP bundle into the app parameter block. HarvTTP can then serve:

- `/` and `/index.html`
- subpages such as `/about.html`
- CSS files
- JavaScript files
- images such as SVG, PNG, JPEG, and GIF

HarvTTP uses a cooperative five-thread model inside one ELF task:

| Thread | Role |
| --- | --- |
| content | discovers the preloaded webroot bundle |
| DHCP | sends DHCP Discover/Request and records the assigned IPv4 address |
| TX pump | drains the bounded transmit queue toward HNET |
| RX/HTTP | receives Ethernet frames, handles ARP, DHCP, and minimal TCP/HTTP |
| watchdog | emits audit heartbeats |

Current network scope:

- DHCP client over UDP/IPv4.
- ARP reply for the leased IPv4 address.
- Minimal HTTP/1.0 server on TCP port 80.
- Static file responses split over multiple TCP segments when needed.
- RX uses the RTL HNET hardware ring and the application drains up to 32 frames per scheduler pass.
- DMA copies between HarvTTP and the HNET bounce window are word-based rather than byte-based.
- TX uses a hybrid stack pump: send immediately when HNET is idle, otherwise enqueue into a bounded 64-frame software TX queue and drain it from the TX thread.
- The boot ROM places app start parameters and the preloaded HTTP bundle after the loaded ELF's actual memory range, preventing larger `.bss` sections from overwriting `/confg/harvttp/httproot` content.
- The Supervisor-side HNET driver now has bounded RX/TX software queues and a budgeted poll/flush API. This is the intended insertion point for a real TCP/IP stack such as lwIP or smoltcp.
- The processor boot test drives the RTL `HNET` MMIO endpoint and verifies that
  a virtual NIC response carrying the deterministic lease `10.0.2.15` reaches
  the SoC DMA window.
- The Verilator harness can optionally open Npcap and bind the RTL HNET data
  path to a real Windows capture device:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1 -ListNpcap
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1 -Npcap -NpcapDevice "Intel"
```

- `http://10.0.2.15/` is not host-routable yet. Browser access to that address
  still needs the supervisor to start the real `harvttp.elf` task and a host
  ingress path such as TAP/WinTun. Npcap is now available for raw packet I/O,
  but Npcap alone is not a routable Windows network adapter.

Limitations:

- TCP is intentionally tiny: no retransmit queue, congestion control, window scaling, or full connection table yet.
- The current browser demo still runs HarvTTP's in-ELF TCP/IP layer with a queue-based pump. The new Supervisor queue driver is a production-oriented foundation, not yet a complete lwIP/smoltcp port.
- On MiSTer the physical Ethernet jack is HPS-owned. The `HNET` MMIO NIC is wired in the SoC; physical Ethernet still needs an HPS proxy or a board-level RMII/RGMII MAC/PHY wrapper.

Build:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_harvttp.ps1 -ToolchainRoot C:\SysGCC\risc-v
```

Rebuild only the USB images from the existing release folders:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_usb_images.ps1
```

Run the processor, kernel hook, USB image, and RTL HNET endpoint test:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\run_processor_boot_test.ps1
```
