# HarvOS USB ELF Bootloader Design

## Annahmen aus diesem Projekt

Dieses Design ist auf den aktuellen HarvOS-MiSTer-Prototyp zugeschnitten, nicht auf eine abstrakte CPU.

| Thema | HarvOS-Stand im Projekt | Konsequenz |
| --- | --- | --- |
| ISA | 32-bit XLEN, RISC-V-artige Basiscodierung, `custom-0` fuer `CLRREG`, `CLRMEM`, `ENTROPY` | ELF32 little-endian mit HarvOS/RISC-V-ABI ist der sinnvolle Startpunkt |
| Reset/Traps | Reset bei `0x00000000`, Trap-Vektor im SoC bei `0x000000A0`, zweiter Hart bei `0x000000C0` | Boot-ROM bleibt klein; der Supervisor uebernimmt Traps und Scheduling |
| Speicher | Harvard: Instruktions-ROM ab `0`, Daten-RAM ab `0x00000400`; aktueller Prototyp ist klein, DDR-Bridge ist nur Abstraktion | Mehrere Server-ELFs brauchen externen DDR/SDRAM und eine echte Page-Table-Verwaltung |
| Schutz | 4 KiB MMU, SATP-Mode-Bit, 8-Bit-ASID in `satp[29:22]`, RAM-basierte L1/L0-Page-Tables bei gesetzter PPN, fester ASID-Slot-Fallback ohne PPN, PTE `V/R/W/X/U/A/D`, W^X-Verbot, MPU fuer IROM/DRAM/MMIO | ELF-Loader muss Segmente pro Seite mappen, Guard-Pages setzen und W+X ablehnen |
| SMP | Zwei Harts mit round-robin Datenbus | Multitasking gehoert in Supervisor/Microkernel, nicht dauerhaft in Boot-ROM |
| Secure Boot | Boot-Image-Metadaten mit SHA/HMAC-Hook, MPU-Lock und Boot-Status | Boot-ROM authentifiziert den Supervisor; Supervisor authentifiziert Apps |
| I/O | MiSTer-OSD/File-Download, SD-Pins und Storage-Service-Modelle vorhanden; USB-MMIO-HCD, UTMI-Byte-Interface, DP/DM-Fallback-PHY und Supervisor-USB/FAT/YAML/ELF-Stack sind als Prototyp implementiert | Fuer echte USB-Sticks fehlen noch Board-PHY-Constraints, Hub-/High-Speed-Policy und ein vollstaendiger DMA-Read-Pfad |

Wichtige offene Hardwarepunkte: finaler externer USB-PHY-Anschluss, Interrupt-Controller-Register, finaler DDR-Adressraum, Cache-Steuerregister, Superpage-/A-D-Bit-Policy und ELF-ABI-Flags sind noch festzulegen. Der User/Supervisor-Rueckweg ist im RTL als lokales `SRET` (`0x10200073`) vorhanden.

## Empfohlene finale Architektur

```text
HarvOS Boot-ROM
  - minimaler ROM-Code, Secure-Boot-Root, Hardware-Basistest
  - laedt/verifiziert Bootloader oder Supervisor-Image
  - sperrt MPU/Secure-Boot-Zustand
  - springt in Supervisor

HarvOS Supervisor/Microkernel
  - MiSTer-HPS-Blockdevices oder eigener USB-Host, Mass Storage, Block Cache
  - FAT32/exFAT oder ein bewusst einfacheres Boot-Dateisystem
  - App-Discovery, YAML-Policy-Pruefung, ELF32-Loader
  - Page Tables, Task-Kontexte, Timer, Scheduler, IPC, Watchdog
  - Start jeder Server-App als isolierter User-Task

User-Server-ELFs
  - webserver.elf, dbserver.elf, authserver.elf
  - erhalten Startparameter in a0 und Services nur ueber Syscalls/IPC
```

Ein Boot-ROM sollte die Server nicht dauerhaft selbst ausfuehren. Es hat normalerweise keinen Heap, keinen vollwertigen Interruptbetrieb, keinen robusten Dateisystem-Cache, keine Recovery-Policy und keinen Prozesslebenszyklus. Auf HarvOS ist der vorhandene `software/kernel`-Skeleton der richtige Ort, um daraus einen Supervisor zu machen.

## USB-Stick-Struktur

Programm-Stick:

```text
/
  webserver.elf
  dbserver.elf
  authserver.elf
  config/
    webserver.yaml
    dbserver.yaml
    authserver.yaml
```

Daten-Stick:

```text
/data/
  webserver/
  dbserver/
  authserver/
```

Erkennungsregel: Der Programm-Stick hat mindestens eine `.elf`-Datei im Root. Der Daten-Stick hat `/data`. Wenn beide Merkmale auf demselben Datentraeger vorkommen, sollte der Supervisor das als Policy-Fehler behandeln oder per signierter Manifestdatei eindeutig aufloesen.

## Bootsequenz

1. Reset: HarvOS-Hart 0 startet bei `0x00000000`; Hart 1 bleibt geparkt oder laeuft nur einen Park-Loop.
2. Boot-ROM initialisiert Takt, minimalen RAM, Trap-Vektor, MPU-Grundschutz und optional UART/Debug-Ausgabe.
3. Secure-Boot-Hook prueft Supervisor-Image-Hash, Signatur/HMAC, Key-Fingerprint und Image-Format.
4. Boot-ROM kopiert den Supervisor in ausfuehrbaren Speicher, macht `FENCE`/`FENCE.I`, sperrt Secure-Boot-/MPU-Zustand und uebergibt Kontrolle.
5. Supervisor initialisiert Page Tables, Heap/Frame-Allocator, Timer, Interrupts, IPC und optional den zweiten Hart.
6. Supervisor versucht zuerst echte USB-Storage-Geraete ueber den HarvOS-USB-HCD zu enumerieren. Auf MiSTer kann er danach auf zwei vom HPS bereitgestellte Block-Images zurueckfallen.
7. Supervisor klassifiziert Programm- und Daten-Stick.
8. Supervisor sucht alle Root-`*.elf`, bildet je App `ELF -> /config/name.yaml -> /data/name`.
9. Je App: YAML lesen und gegen Schema/Signatur/Policy validieren.
10. Je App: ELF-Header und Program Header validieren.
11. Je `PT_LOAD`: physische Frames allozieren, nach virtueller Zieladresse mappen, Dateianteil kopieren, BSS nullen, W^X pruefen, Cache flushen und I-Cache invalidieren.
12. Supervisor erzeugt pro gueltiger App einen Task mit `pc=ELF.entry`, `sp=UserStackTop`, `satp=SATP_MODE_BIT|(app_id<<22)|PageTableRootPPN`.
13. Startparameterblock wird in den User-Adressraum gemappt; Zeiger kommt in `a0`.
14. Scheduler startet READY-Tasks round-robin oder prioritaetsbasiert. Fehlerhafte Apps werden geloggt und uebersprungen.

## Interne Datenstrukturen

| Struktur | Zweck |
| --- | --- |
| `hvbl_boot_context_t` | globale Boot-/Discovery-Liste, Service-Maske, App- und Task-Zaehler |
| `hvbl_app_image_t` | Name, ELF-Pfad, YAML-Pfad, Datenpfad, Entry, Page-Table-Root, Stack, Capabilities |
| `hvbl_start_params_t` | ABI-Block fuer die App: App-ID, Services, Speicherbereich, Config- und Datenpfad |
| `hvbl_task_t` | Scheduler-Kontext: `pc`, `sp`, `satp`, Caps, Budget, Status |
| `hvbl_platform_ops_t` | HAL fuer USB, Dateisystem, Speicher, Cache und Logging |

Die Beispielimplementierung liegt in `software/bootloader/harvos_bootloader.c`. Sie nutzt feste Arrays statt `malloc`, weil Boot-/Supervisor-Code deterministisch bleiben soll.

## Pseudocode

### USB-Erkennung

```text
devices = usb.enumerate_mass_storage()
for dev in devices:
    fs = mount(dev)
    if fs failed:
        log warning
        continue
    mounted.append(fs)
```

### Dateisystem-Mounting und Klassifikation

```text
program_fs = null
data_fs = null

for fs in mounted:
    if fs.is_dir("/data"):
        data_fs = fs
    if fs.root_contains_suffix(".elf"):
        program_fs = fs

require program_fs != null
require data_fs != null
```

### ELF-Suche und Zuordnung

```text
for entry in program_fs.readdir("/"):
    if not entry.ends_with(".elf"):
        continue

    app = basename_without_suffix(entry, ".elf")
    config = "/config/" + app + ".yaml"
    data = "/data/" + app

    if not program_fs.exists(config):
        log error and skip app
    if not data_fs.is_dir(data):
        log error and skip app

    load_app(entry, config, data)
```

### ELF-Validierung

```text
eh = read ELF header
require magic == 0x7f 'E' 'L' 'F'
require class == ELF32
require endian == little
require type == ET_EXEC
require machine == EM_RISCV or final HarvOS machine id
require phoff + phnum * phentsize <= file_size
require entry is 4-byte aligned

for ph in program_headers:
    if ph.type != PT_LOAD:
        continue
    require ph.filesz <= ph.memsz
    require ph.offset + ph.filesz <= file_size
    require ph.vaddr + ph.memsz does not overflow
    require not (ph.flags has W and X)
```

### Segment-Laden

```text
for PT_LOAD ph:
    bytes = round_up(ph.memsz, 4096)
    phys = frame_alloc(bytes, 4096)
    flags = elf_flags_to_pte(ph.flags) | USER | ACCESSED
    map_pages(task.page_table, ph.vaddr, phys, bytes, flags)
    copy file[ph.offset : ph.offset + ph.filesz] to phys
    zero phys + ph.filesz for ph.memsz - ph.filesz
    flush_dcache(phys, bytes)
    if executable:
        invalidate_icache(ph.vaddr, bytes)
```

### Task-Initialisierung

```text
params = map_user_readonly(StartParams)
task.pc = elf.entry
task.sp = user_stack_top
task.satp = SATP_MODE_BIT | (app_id << 22) | ((page_table_root >> 12) & SATP_PPN_MASK)
task.caps = caps_from_signed_policy
task.a0_on_entry = params_user_pointer
task.state = READY
```

### Start aller Tasks

```text
for task in tasks:
    enqueue_ready(task)

while true:
    task = scheduler.pick_next()
    arch_switch_to_user(task)
```

Auf HarvOS heisst `arch_switch_to_user`: `satp` setzen, TLB/I-Cache synchronisieren, User-Register initialisieren, `a0` auf Startparameter setzen, `pc/sp` laden, `scaps` aus Task-Caps setzen, `sepc=task.pc` schreiben und mit dem lokalen `SRET` in User Mode springen.

## Uebergabe an Anwendungen

Der Startparameterblock wird als lesbare User-Seite gemappt. Der Einstieg bekommt in `a0` einen Zeiger auf:

```c
typedef struct {
    uint32_t app_id;
    uint32_t service_mask;
    uint32_t mem_base;
    uint32_t mem_size;
    uint32_t debug_flags;
    char config_path[96];
    char data_path[96];
} hvbl_start_params_t;
```

Optional koennen `a1` und `a2` spaeter fuer ABI-Version und Laenge des Parameterblocks verwendet werden. Pfade sind logische VFS-Pfade, keine Roh-Blockadressen. Zugriff auf Daten laeuft ueber Storage-Service-Syscalls oder IPC, nicht direkt ueber USB-MMIO.

## Sicherheit

| Risiko | Massnahme |
| --- | --- |
| Manipulierte ELFs | Signiertes App-Manifest oder Signatur neben jeder ELF; Hash vor dem Laden pruefen |
| Manipulierte YAML | YAML in denselben signierten Manifest-Hash aufnehmen; striktes Schema; keine Alias-/Anchor-Explosion erlauben |
| W+X-Segmente | Loader lehnt jedes Segment mit `PF_W|PF_X` ab |
| Falsche Speicherbereiche | Page-Table-Mapper begrenzt User-Mappings auf App-Regionen; MMIO bleibt Supervisor-only |
| DMA-Angriffe | vorhandene HarvOS-IOMMU-lite-Policy nutzen: nur Bounce-Buffer-Fenster |
| Datenordner-Rechte | pro App Capability oder VFS-Root auf `/data/name`; keine Pfadnormalisierung mit `..` zulassen |
| Haengende App | Timer-Scheduler plus Watchdog; App faultet statt Gesamtsystem-Stopp |
| Boot-Fehler | Recovery-Modus mit signiertem Minimal-Supervisor oder bekannt gutem Image |

## Implementierter Supervisor-Stack

Die konkrete Implementierung liegt unter `software/supervisor/`:

| Datei | Inhalt |
| --- | --- |
| `include/harvos_block.h` | generische Blockdevice-API fuer USB-Mass-Storage und spaetere SD/NVMe-Treiber |
| `include/harvos_usb_host.h`, `src/harvos_usb_host.c` | USB-Host-HAL, Device-Enumeration, Descriptor-Parsing, SetAddress/SetConfiguration, Bulk-Only-Transport, SCSI Inquiry/TestUnitReady/ReadCapacity/Read10/Write10 |
| `include/harvos_fs.h`, `src/harvos_fs.c` | FAT32/exFAT-Mounting, MBR/VBR-Erkennung, Root-/Pfad-Lookup, FAT32-LFN, exFAT-File/Stream/Name-Entries, clusterweises Lesen |
| `include/harvos_yaml.h`, `src/harvos_yaml.c` | kleines sicheres YAML-Profil fuer App-Konfigurationen mit `name`, `services`, `memory[_limit]`, `debug` |
| `include/harvos_elf_runtime.h`, `src/harvos_elf_runtime.c` | ELF32-little-RISC-V Runtime-Loader fuer `ET_EXEC` und optional `ET_DYN`, page-aligned `PT_LOAD`, W^X-Pruefung, BSS, Cache-Hooks, `PT_DYNAMIC` mit relativen RISC-V-Relokationen |
| `include/harvos_pagetable.h`, `src/harvos_pagetable.c` | zweistufiger HarvOS-Page-Table-Builder: L1/L0-PTEs im RAM, W^X-Ablehnung, explizite Guard-Pages |
| `include/harvos_runtime_memory.h`, `src/harvos_runtime_memory.c` | konkrete Supervisor-Memory-Runtime: page-aligned Bump-Allocator, physische PTE-Zugriffe, Copy/Zero, Runtime-Page-Table-Ops |
| `include/harvos_supervisor_stack.h`, `src/harvos_supervisor_stack.c` | Orchestrierung: USB-Sticks finden, Dateisysteme mounten, Programm-/Datenstick klassifizieren, YAML pruefen, ELF laden, Stack und Startparameter mappen, Task-Records erzeugen |
| `include/harvos_usb_mmio_hcd.h`, `src/harvos_usb_mmio_hcd.c` | HCD-Adapter fuer das HarvOS-USB-MMIO-Fenster bei `0xFFFF0080` |
| `include/harvos_net_mmio.h`, `src/harvos_net_mmio.c` | NIC-Adapter fuer das HarvOS-Netzwerk-MMIO-Fenster bei `0xFFFF0040` |
| `include/harvos_mister_hps_block.h`, `src/harvos_mister_hps_block.c` | MiSTer-HPS-Blockdevice-Treiber fuer `hps_io`-Images bei `0xFFFF00C0` |

Build:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_supervisor_stack.ps1 -ToolchainRoot C:\SysGCC\risc-v
```

Der aktuelle Stack ist fuer Boot-/Supervisor-Lesezugriffe und ELF-Start vorbereitet. Der App-Loader nutzt strikte Isolation: ohne physische `read_phys_u32`/`write_phys_u32`-Operationen fuer echte L1/L0-PTEs wird ein App-Start abgelehnt. Echte USB-Sticks bleiben unterstuetzt: Der Supervisor kann `hvs_supervisor_boot_from_usb()` mit einem HarvOS-HCD verwenden. Fuer Plattformen, auf denen USB vom Host-SoC verwaltet wird, gibt es `hvs_supervisor_boot_from_blocks()`. `hvs_supervisor_boot_auto()` versucht zuerst den echten USB-HCD und nutzt danach optional die MiSTer-HPS-Blockdevices als Fallback.

FAT/exFAT-Schreiboperationen fuer laufende Serverdaten sollten als separater Storage-Service mit Journal-/Recovery-Policy erfolgen; USB-Bulk-Write10 ist bereits im Mass-Storage-Layer vorhanden.

## HarvTTP-App-ELF

`software/user/harvttp` baut das erste Server-ELF `harvttp.elf`. Die App bezieht eine IPv4-Adresse per DHCP, beantwortet ARP, lauscht mit einem minimalen HTTP/1.0-TCP-Pfad auf Port 80 und liefert statische Dateien aus dem Programm-USB-Webroot.

Das HarvTTP-Webroot liegt unter:

```text
/confg/harvttp/httproot
```

Die YAML-Konfiguration bleibt unter:

```text
/config/harvttp.yaml
```

Der Supervisor scannt das Webroot rekursiv begrenzt ein und mappt ein read-only HTTP-Bundle in den User-Adressraum. Dadurch kann das erste App-ELF bereits Unterseiten, CSS, JavaScript und Bilder ausliefern, ohne dass der allgemeine User-Filesystem-Syscall schon fertig sein muss.

Build:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build_harvttp.ps1 -ToolchainRoot C:\SysGCC\risc-v
```

## Netzwerk-MMIO/NIC-Pfad

Das SoC enthaelt jetzt zusaetzlich ein kleines `HNET`-Netzwerkdevice unter `0xFFFF0040..0xFFFF007F`. Es ist kein TCP/IP-Stack und kein vollstaendiger PHY, sondern die Verdrahtung, die ein Supervisor braucht: Registersatz, IRQ, DMA-TX/RX ueber das IOMMU-Bounce-Window und ein 32-bit-Paketstream-Interface zum naechsten MAC/PHY- oder HPS-Proxy-Layer.

| Bereich | Adresse |
| --- | --- |
| generisches Supervisor-MMIO | `0xFFFF0000..0xFFFF003F` |
| Netzwerk `HNET` | `0xFFFF0040..0xFFFF007F` |
| USB-HCD `HUSB` | `0xFFFF0080..0xFFFF00BF` |
| MiSTer-HPS-Blockbridge `HPSD` | `0xFFFF00C0..0xFFFF00FF` |

Hart 0 bekommt externe Interrupts aus `usb_irq | net_irq`. Die DMA-Arbitration priorisiert USB, danach Netzwerk, danach den internen Demo-DMA-Tick. RX-DMA schreibt Frames in das Bounce-Window; TX-DMA liest Frames daraus. Die IOMMU begrenzt beide Richtungen weiterhin auf `D_RAM_BASE + 0x100`.

Auf MiSTer ist die echte Ethernet-Buchse HPS/Linux-gehoerig. Sie taucht nicht als rohes RMII/RGMII-Signal im `emu`-Portset auf. Darum ist `Template.sv` derzeit so verdrahtet:

- `HNET` ist voll im Prozessor-MMIO sichtbar.
- Ein OSD-Schalter `Network link` kann einen simulierten Link setzen.
- Die Paketstream-Pins sind am Top-Level vorhanden, aber ohne HPS-Userspace-Proxy oder externes MAC/PHY-Toplevel noch nicht mit dem physischen Ethernet verbunden.

Fuer echte Pakete gibt es zwei realistische naechste Schritte: auf MiSTer ein HPS-Netzwerkproxy ueber eine core-spezifische Bridge, oder auf eigener Hardware ein RMII/RGMII-MAC/PHY-Wrapper, der an die `net_rx_*`/`net_tx_*`-Paketstream-Signale angeschlossen wird.

## MiSTer-HPS-USB-Pfad

MiSTer stellt seine normalen USB-Ports ueber den ARM/HPS-Teil bereit. Das bedeutet nicht, dass USB-Sticks nicht funktionieren; es bedeutet, dass der FPGA-Core sie nicht als rohe D+/D-/UTMI-Pakete sieht. Stattdessen sieht der Core ueblicherweise:

- Datei-Downloads via `ioctl_*`, z.B. fuer das bestehende `.hbr`-Boot-ROM.
- Virtuelle Blockdevices via `hps_io` SD-Image-Interface.

HarvOS nutzt fuer MiSTer den zweiten Weg. Ein USB-Stick kann am MiSTer stecken; darauf liegen die beiden Disk-Images, die der HPS mountet und als Blockdevices an den Core reicht. `Template.sv` bietet zwei OSD-Mounts an:

```text
S0,IMG,Mount Program Stick Image
S1,IMG,Mount Data Stick Image
```

Diese Images koennen auf einem USB-Stick liegen, werden vom MiSTer-HPS gelesen und als zwei 512-Byte-Sektorgeraete an den Core geliefert. Im SoC liegt die Bridge bei `0xFFFF00C0..0xFFFF00FF`.

Die Release-Artefakte heissen:

```text
release/program_usb.img
release/data_usb.img
```

`program_usb.img` enthaelt `harvttp.elf`, `/config/harvttp.yaml` und den HarvTTP-Webroot unter `/confg/harvttp/httproot`. `data_usb.img` enthaelt mindestens `/data/harvttp`. Beide Images werden mit `scripts/build_usb_images.ps1` als FAT32-Images erzeugt. Das Boot-ROM platziert Startparameter und vorab geladenes HTTP-Bundle nicht mehr an festen Adressen innerhalb des App-Bereichs, sondern nach dem tatsaechlichen Ende der geladenen ELF-Segmente. Dadurch bleiben groessere `.bss`-Bereiche, Harvard-IMEM-Lock und Content-Bundle sauber getrennt.

| Offset | Register | Bedeutung |
| --- | --- | --- |
| `0x00` | `ID` | `0x48505344`, ASCII `HPSD` |
| `0x04` | `CTRL` | Bit 0 Start, Bit 1 Write, Bit 2 Clear |
| `0x08` | `STATUS` | Mounted, Busy, Done, Fault |
| `0x0C` | `DRIVE` | `0` Program-Image, `1` Data-Image |
| `0x10` | `LBA_LO` | 32-bit LBA |
| `0x14` | `LBA_HI` | aktuell reserviert, muss `0` sein |
| `0x18` | `COUNT` | Sektoranzahl, maximal 64 |
| `0x1C` | `BUF_IDX` | 16-bit-Bufferindex |
| `0x20` | `BUF_DATA` | zwei 16-bit-Worte, Auto-Increment |
| `0x24/0x28` | `SIZE` | Imagegroesse |

Damit bleibt das urspruengliche Dateisystemlayout erhalten: Das Program-Image enthaelt Root-ELFs und `/config`, das Data-Image enthaelt `/data`. Fuer den User ist das weiterhin ein USB-Stick am MiSTer; fuer den Core ist es ein sauberes Blockdevice.

Wenn wirklich die physische USB-Stick-Partition ohne Image-Datei direkt als Blockdevice im FPGA erscheinen soll, braucht es eine MiSTer-HPS-Userspace-Erweiterung, die `/dev/sdX` oder ein Verzeichnis explizit an den Core proxyt. Das ist nicht Teil der Standard-`hps_io`-Schnittstelle.

## USB-MMIO-IP im HarvOS-SoC

Fuer Hardware mit eigener USB-PHY bleibt der direkte USB-Host im SoC erhalten.

Der SoC enthaelt jetzt `rtl/harvos_usb_host_mmio.sv`. Das IP ist im bestehenden Supervisor-MMIO-Fenster unter `0xFFFF0080..0xFFFF00BF` gemappt und wird ueber `files.qip` sowie den Verilator-Buildpfad eingebunden.

| Offset | Register | Bedeutung |
| --- | --- | --- |
| `0x00` | `ID` | `0x48555342`, ASCII `HUSB` |
| `0x04` | `CTRL` | Bit 0 Enable, Bit 1 Simulated connect, Bit 2 Clear, Bit 3 Port-Power, Bit 4 UTMI select, Bit 5 Port-Reset |
| `0x08` | `STATUS` | Connected, busy, done, fault, IRQ-pending |
| `0x0C` | `IRQ_ENABLE` | Done, Fault, STALL, NAK-Limit, Overcurrent |
| `0x10` | `IRQ_STATUS` | Write-one-to-clear IRQ bits |
| `0x14` | `DMA_ADDR` | physische DMA-Zieladresse, erwartet Bounce-Window |
| `0x18` | `DMA_LEN` | Transferlaenge in Bytes; Hardware schreibt wortweise |
| `0x1C` | `COMMAND` | Bit 0 startet Transfer |
| `0x20` | `PORT` | Port-/Connect-Status |
| `0x24` | `FRAME` | laufender Frame-/Zeitzaehler |
| `0x28` | `ACTUAL` | tatsaechlich abgeschlossene Bytezahl |
| `0x2C` | `TOKEN` | einfacher Transfer-/Debug-Token fuer den HCD-Adapter |
| `0x30` | `PHY` | ausgewaehlter PHY-/UTMI-Status |
| `0x34` | `PACKET` | RX-Packet-Decode: PID, CRC, Payload-Laenge, Handshake |
| `0x38` | `RETRY` | Retry-Limit, aktuell Bits `3:0` |
| `0x3C` | `ENGINE` | Packet-Engine-State, Retry-Zaehler, letztes Handshake |

DMA wird ueber die vorhandene HarvOS-IOMMU-lite gefuehrt und bleibt auf das Bounce-Buffer-Fenster `D_RAM_BASE + 0x100` begrenzt. Das USB-IP treibt `usb_irq`; Hart 0 bekommt diesen Interrupt als externen IRQ. Der CPU-Kern erzeugt bei gesetztem `sstatus[0]` einen Trap mit `scause = 0x8000000B`.

Der eingebettete ROM-Demo-Code in `harvos_soc.sv` wurde erweitert: Nach den bisherigen ISA-/Security-Checks programmiert Hart 0 das USB-MMIO-Fenster mit Enable, Simulated-connect und Port-Power, startet einen 16-Byte-DMA-Transfer in das Bounce-Window, wartet auf `DONE`, quittiert den IRQ-Status und laeuft danach in den bisherigen Heartbeat.

Unterhalb des MMIO-Blocks gibt es jetzt mehrere USB-RTL-Schichten:

| RTL-Datei | Aufgabe |
| --- | --- |
| `rtl/harvos_usb_pkg.sv` | USB-PID-Konstanten, CRC5 fuer Token, CRC16 fuer Data-Pakete |
| `rtl/harvos_usb_packet_rx.sv` | RX-Packet-Decode, PID-Komplementpruefung, DATA-CRC-Pruefung, ACK/NAK/STALL-Erkennung |
| `rtl/harvos_usb_packet_engine.sv` | Token-/Data-/ACK-Transaktionen, NAK/STALL/Retry/Timeout-Policy |
| `rtl/harvos_usb_utmi_adapter.sv` | UTMI-nahe 8-bit-Link-Schnittstelle mit `TxValid/TxReady/RxValid/RxActive`, `XcvrSelect`, `OpMode`, `TermSelect`, Suspend/Reset |
| `rtl/harvos_usb_fs_phy.sv` | 48-MHz-Full-Speed-Fallback ueber DP/DM: Line-State, TX-NRZI, Bit-Stuffing, RX-Unstuffing, EOP/SE0-Erkennung |
| `rtl/harvos_usb_host_mmio.sv` | MMIO-Register, IRQs, Port-Power, PHY-Auswahl und Bounce-DMA-Anbindung |

`Template.sv` fuehrt `USER_IN[0]`/`USER_IN[1]` als DP/DM in den Core und steuert `USER_OUT[0]`/`USER_OUT[1]` zum Low-Drive der Leitungen. `USER_OUT[2]` ist als Port-Power-Enable vorgesehen. Der PLL-Ausgang fuer `clk_sys` ist auf 48 MHz gesetzt, damit die Fallback-PHY mit `BIT_TICKS=4` Full-Speed-Bitzeiten erzeugen kann.

Die UTMI-Signale sind bis `mycore`/`harvos_soc` durchgereicht, in `Template.sv` aber bewusst tied-off, weil das MiSTer-Template keine echten UTMI/ULPI-Pins im `emu`-Portset bereitstellt. Fuer ein echtes Board muessen `utmi_data_i/o`, `utmi_tx_valid`, `utmi_tx_ready`, `utmi_rx_valid`, `utmi_rx_active`, `utmi_rx_error`, `utmi_line_state`, `utmi_xcvr_select`, `utmi_op_mode`, `utmi_term_select`, `utmi_suspend_n`, `utmi_reset_n` und `usb_port_power_en` auf einen externen PHY und Power-Switch constrained werden.

## Grenzen und Risiken

Der aktuelle RTL-Prototyp ist fuer Sicherheits- und ISA-Invarianten stark, aber trotz Supervisor-Stack noch nicht als vollstaendiges Server-Bootsystem fertig. Es fehlen mindestens:

- USB-zertifizierbare PHY-Integration: Die RTL-Grenze fuer UTMI ist vorhanden und die Fallback-PHY dekodiert/sendet Pakete, aber MiSTer-USER-Pins sind keine USB-PHY. Fuer echte USB-Sticks braucht das Board einen UTMI/ULPI-PHY, Pullups/Pulldowns, ESD/Power-Switch, Overcurrent-Signal und saubere Constraints.
- Vollstaendiger Host-Datenpfad: Der aktuelle DMA-Pfad schreibt Device-to-Memory-Bounce-Daten; Host-to-Device-Nutzdaten werden im RTL noch nicht aus RAM gelesen.
- USB-Hub-/High-Speed-/Split-Transaction-Support fehlt; der aktuelle Stand ist Full-Speed-orientiert.
- Block-Cache, Schreib-Journal und Recovery-Policy fuer produktive FAT/exFAT-Schreibzugriffe.
- vollstaendiger dynamischer ELF-Linker fuer Symbolrelokationen; implementiert sind `ET_EXEC` und `ET_DYN` mit relativen RISC-V-Relokationen.
- vollstaendiges Supervisor-Kontextswitch-ABI um das vorhandene lokale `SRET`, inklusive Save/Restore aller User-Register und Trap-Rueckkehrpfade.
- Demand-Mapping, Superpages und Hardware-Update von Accessed/Dirty-Bits; aktuell muessen PTEs vom Supervisor vorbereitet werden.
- DDR/SDRAM-Backing fuer mehrere Apps; die Demo-Speicher sind zu klein.
- signiertes App-Manifest, das ELF- und YAML-Hashes bindet.
- persistenter Journal-/Recovery-Pfad fuer `/data`.

Deshalb: Boot-ROM initialisiert und verifiziert, Bootloader/Supervisor laedt, Supervisor betreibt die langlebige Runtime. Genau diese Trennung passt zu den vorhandenen HarvOS-Komponenten `harvos_secure_boot`, MMU/MPU, Kernel-Skeleton, IPC und Service-Manifest.
