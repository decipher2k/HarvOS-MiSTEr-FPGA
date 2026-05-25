# HarvOS Security Audit - Prozessor, Boot-ROM und HarvTTP

Datum: 2026-05-24

## Scope

Geprueft wurden die sicherheitsrelevanten Teile des aktuellen Projektstands:

- CPU/SoC: `harvos_cpu`, `harvos_mmu`, `harvos_mpu`, DMA-IOMMU, HNET, USB-MMIO, IMEM-Loader
- Boot-ROM: USB/HPS-Block-Boot, FAT/exFAT-Abstraktion, YAML, ELF32-Loader, Startparameter
- HarvTTP: DHCP, ARP, IPv4, TCP, HTTP, Asset-Bundle, kooperativer Scheduler
- YAML-Konfigurationsparser

## Behobene Findings

### 1. ELF konnte theoretisch Boot-ROM-/Low-Memory-Code ueberschreiben

Schweregrad: hoch

Der Boot-ROM-ELF-Loader validierte ELF-Header, W^X und Entry-Segment, aber nicht streng genug,
dass PT_LOAD-Segmente nur im App-Ladefenster liegen. Ein manipuliertes ELF haette ein
ausfuehrbares Segment bei niedrigen IMEM-Adressen deklarieren koennen.

Fix:

- App-Segmente muessen jetzt in `0x00100000..BOOT_APP_LOAD_LIMIT` liegen.
- Leere, ueberlaufende oder zu niedrige Segmente werden abgelehnt.
- IMEM-Loader-Status wird nach jedem Write und nach Lock geprueft.

Betroffene Datei:

- `software/bootrom/harvos_usb_elf_bootrom.c`

### 2. Manipulierte HTTP-Bundle-Eintraege konnten Out-of-Bounds Reads ausloesen

Schweregrad: hoch

HarvTTP hat Bundle-Header grob geprueft, aber nicht jeden Eintrag. Ein defekter oder
manipulierter Bundle-Eintrag konnte Offset/Size ausserhalb des Bundles deklarieren oder
einen nicht nullterminierten Pfad liefern.

Fix:

- `bundle_validate()` prueft Magic, Version, Entry-Size, File-Count, Data-Offset und Total-Size.
- Jeder Asset-Eintrag muss einen sicheren, nullterminierten absoluten Pfad haben.
- Jeder Offset/Size-Bereich muss vollstaendig innerhalb des Bundles liegen.

Betroffene Datei:

- `software/user/harvttp/main.c`

### 3. HTTP-Pfadparser truncierte zu lange Pfade still

Schweregrad: mittel

Zu lange Request-Pfade wurden gekuerzt statt abgelehnt. Das ist gefaehrlich, weil ein
Angreifer damit auf einen anderen Asset-Pfad gemappt werden kann als angefordert.

Fix:

- Zu lange Pfade werden abgelehnt.
- Control Characters und Backslashes werden abgelehnt.
- Dot-Segmente werden normalisiert: `.` wird ignoriert, `..` geht genau ein
  Verzeichnis hoch, ein Ausbruch oberhalb von `/` wird abgelehnt.
- Root- und Trailing-Slash-Umschreibung prueft die Zielpuffergroesse.

Betroffene Datei:

- `software/user/harvttp/main.c`

### 4. HTTP-Requests ohne vollstaendigen TCP-Handshake wurden akzeptiert

Schweregrad: hoch

HarvTTP konnte bei einem `GET` ohne bestehenden Peer-State einen neuen Peer anlegen und
antworten. Das erlaubt State-Bypass und Reflexionsverhalten.

Fix:

- HTTP-Payload wird nur noch fuer existierende Peers nach SYN/SYN-ACK akzeptiert.
- ACK und Client-Sequence muessen zum gespeicherten Peer-State passen.
- Unsolicited SYN/ACK wird verworfen.
- TCP auf Port 80 wird nur noch fuer Frames an die eigene MAC verarbeitet.

Betroffene Datei:

- `software/user/harvttp/main.c`

### 5. Eingehende IPv4/TCP/DHCP-Pakete wurden zu tolerant geparst

Schweregrad: mittel

HarvTTP pruefte Laengen, aber nicht alle Headerintegritaetsfelder.

Fix:

- IPv4-Version und IPv4-Headerchecksumme werden fuer DHCP und TCP geprueft.
- DHCP-UDP-Laenge wird gegen IP-Total-Length validiert.
- Optionale DHCP-UDP-Checksumme wird validiert, wenn sie gesetzt ist.
- TCP-Checksumme wird validiert.

Betroffene Datei:

- `software/user/harvttp/main.c`

### 6. YAML-Zahlen und Service-Listen waren zu locker

Schweregrad: mittel

`parse_u32()` erkannte Integer-Ueberlauf nicht. Service-Listen konnten ohne schliessende
Klammer akzeptiert werden.

Fix:

- Dezimalwerte werden mit Overflow-Check geparst.
- Bracketed Service-Listen muessen korrekt geschlossen sein und duerfen keine Tokens nach
der schliessenden Klammer enthalten.

Betroffene Datei:

- `software/supervisor/src/harvos_yaml.c`

### 7. USB/HNET DMA-Start pruefte DMA-Grenzen erst indirekt ueber die IOMMU

Schweregrad: mittel

Die DMA-IOMMU blockierte falsche DMA-Ziele, aber HNET/USB starteten Transfers teilweise
trotz ungueltiger Basis/Laenge und faulteten erst waehrend des Transfers.

Fix:

- HNET prueft DMA-Basis, Laenge, Fenstergrenzen und verbietet gleichzeitiges RX/TX-Starten.
- USB prueft DMA-Basis und Laenge vor Transferstart.

Betroffene Dateien:

- `rtl/harvos_net_mmio.sv`
- `rtl/harvos_usb_host_mmio.sv`

## Gepruefte bestehende Schutzmechanismen

- Harvard-Trennung bleibt aktiv: Fetch geht ueber IMEM, Datenzugriffe ueber DMEM/MMIO.
- Normale Stores in IMEM loesen Harvard-Verletzungen aus.
- IMEM-Loader ist der einzige Schreibpfad in IMEM.
- Boot-ROM setzt nach dem ELF-Load den IMEM-Lock.
- Boot-ROM lehnt W+X-ELF-Segmente ab.
- User-Tasks koennen eigene L1/L0-Page-Tables mit ASID-getaggtem TLB nutzen;
  rootlose Boot-/Demo-Pfade behalten den festen ASID-Slot-Fallback.
- Der Supervisor-App-Loader verlangt strikte Isolation-Ops und setzt Stack-,
  Parameter- und Content-Guard-Pages als invalidierte L0-PTEs.
- DMA-IOMMU begrenzt USB/HNET auf das DMA-Fenster.
- User-Mode-MMIO ist durch MPU/MMU nicht erlaubt.

## Rest-Risiken

- Secure Boot ist aktuell ein Prototyp mit festen RTL-Parametern, kein vollstaendiger
  Produktions-Key-Lifecycle.
- HarvTTP hat weiterhin einen Minimal-TCP/IP-Stack, keine vollstaendige Retransmission,
  kein Congestion Control und kein TLS.
- Die neue RAM-basierte L1/L0-Isolation trennt User-Tasks hardwareseitig und
  unterstuetzt Guard-Pages; Demand-Mapping, Superpages, A/D-Bit-Updates,
  per-Task-Heap-Wachstum und ausgereifte Restart-Policy fehlen weiterhin.
- HNET uebertraegt 32-Bit-Worte; fuer generische Clients muss Software den Tail von
  nicht wortaligned Frames nullen. HarvTTP und der Supervisor-Treiber tun das.
- TCP-Checksum-Offload auf Host/Npcap-Setups kann bei realem Bridging dazu fuehren, dass
  ausgehende Host-Pakete vor dem Offload mit ungueltiger TCP-Checksumme sichtbar sind.
  Fuer Strict-Checksum-Betrieb sollte Offload am Testinterface deaktiviert oder ein
  TAP/WinTun-Pfad verwendet werden.

## Verifikation

Ausgefuehrt:

- `scripts/build_harvttp.ps1 -NoUsbImages`
- `scripts/build_usb_elf_bootrom.ps1`
- `python tests/run_all.py`
- `scripts/build_usb_images.ps1`
- `python tests/harvttp_server_smoke.py`
- HarvTTP-USB-Boot-Harness wurde neu gebaut und kurz gestartet; ohne aktive DHCP/Npcap-Route
  wurde erwartungsgemaess keine erreichbare Server-IP gemeldet.
