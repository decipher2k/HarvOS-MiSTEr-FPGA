# PHP 8.5 for HarvOS

This directory contains the real PHP 8.5 port scaffolding for HarvOS. It is not
the old HarvTTP template subset: the SAPI in `sapi/harvos` is written against
PHP/Zend's normal SAPI APIs and executes PHP source through the Zend engine.

## Source Tree

The local PHP source tree expected by the port scripts is:

```text
C:\Users\dennis\Downloads\php-8.5.6-src
```

The HarvOS overlay is intentionally kept in this repository and copied into the
PHP tree only by `scripts/build_php85_harvos.ps1 -Overlay`.

## Current Port Layer

The current layer provides:

- `sapi/harvos/config.m4` for PHP's build system.
- `sapi/harvos/php_harvos_sapi.h` as the HarvOS request/response ABI.
- `sapi/harvos/php_harvos_sapi.c` as a real Zend SAPI:
  - buffered response output into HarvTTP-owned memory
  - response header capture
  - POST body callback
  - cookie callback
  - `$_SERVER` population
  - hardening-oriented default INI settings
  - execution of PHP source from a memory-backed Zend stream

## What Still Blocks a Bootable harvttp.elf With Zend

This port cannot honestly be linked into the current freestanding `harvttp.elf`
until HarvOS has a C runtime layer that is large enough for PHP/Zend:

- malloc/free/realloc/calloc with aligned allocations and per-task limits
- setjmp/longjmp and Zend exception unwind support
- errno and the usual libc string/memory/ctype/time APIs
- stdio/file/stat/open/read/write/close or PHP stream replacements
- virtual filesystem bridge for program USB and data USB
- a larger task heap and stack model
- toolchain config headers generated for the HarvOS target

The SAPI is the correct first hardware/software boundary: HarvTTP can call
`harvos_php85_execute()` once the runtime layer exists, without exposing PHP
source as static files and without collapsing the Harvard IMEM/DMEM split.

## Prepare Overlay

```powershell
powershell -ExecutionPolicy Bypass -File .\scripts\build_php85_harvos.ps1 -Overlay
```

This creates or updates:

```text
C:\Users\dennis\Downloads\php-8.5.6-src\sapi\harvos\
```

and writes a manifest to:

```text
build\php85-harvos\port_manifest.json
```
