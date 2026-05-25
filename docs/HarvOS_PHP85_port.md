# HarvOS PHP 8.5 Port

## Ziel

HarvOS soll PHP 8.5 nicht als Template-Ersatz, sondern ueber die echte Zend VM
ausfuehren. Dafuer wurde eine HarvOS-SAPI angelegt, die HTTP-Requests von
HarvTTP oder spaeter vom Supervisor in Zend-Requests uebersetzt.

## Neue Dateien

| Pfad | Zweck |
| --- | --- |
| `ports/php85/sapi/harvos/php_harvos_sapi.c` | HarvOS-SAPI fuer PHP/Zend. |
| `ports/php85/sapi/harvos/php_harvos_sapi.h` | Request/Response-ABI fuer HarvTTP. |
| `ports/php85/sapi/harvos/config.m4` | PHP-Buildsystem-Integration. |
| `ports/php85/include/harvos_php85_port.h` | HarvOS-Runtime-Konfigurationsdaten. |
| `scripts/build_php85_harvos.ps1` | Overlay-/Diagnose-Script fuer die lokale PHP-Quelle. |

## Request-Modell

HarvTTP uebergibt spaeter pro `.php`-Datei eine `harvos_php85_request_t`:

- Script-Name und PHP-Quelltext aus dem Programm-USB-Bundle
- Dokumentwurzel `/confg/harvttp/httproot`
- Request-URI, Query-String, Methode und optional POST-Body
- Server-/Remote-IP und Ports
- Output-Puffer und Header-Puffer

Die SAPI populaert daraus `$_SERVER`, setzt restriktive INI-Vorgaben und fuehrt
das Script durch einen memory-backed Zend stream aus. Dadurch muessen PHP-Dateien
nicht als Hostdateien existieren und der Boot-ROM/USB-Bundle-Pfad bleibt erhalten.

## Sicherheitsvorgaben

Die Default-INI der HarvOS-SAPI setzt unter anderem:

- `expose_php=0`
- `allow_url_fopen=0`
- `allow_url_include=0`
- `enable_dl=0`
- `file_uploads=0`
- kleines `memory_limit`
- kurze `max_execution_time`
- `open_basedir=/confg/harvttp/httproot:/data/harvttp`
- deaktivierte Shell-, Prozess- und Socket-Funktionen

Das ist noch keine vollstaendige Sandbox. Die echte Isolation muss ueber HarvOS
MPU/MMU, getrennte Task-Heaps, Watchdog und Supervisor-Rechte kommen.

## Noch fehlende Runtime-Schicht

PHP/Zend ist nicht freestanding. Fuer einen wirklich bootbaren PHP-ELF-Build
braucht HarvOS noch:

1. libc/Newlib-Port fuer RV32I oder eine PHP-kompatible libc-Ersatzschicht.
2. `malloc`, `free`, `realloc`, `calloc`, aligned allocation und Limits.
3. `setjmp`/`longjmp` passend zur ABI.
4. `errno`, Zeitfunktionen, ctype/string/memory APIs.
5. Datei-/Stat-/Stream-Abstraktion fuer Programm-USB und Daten-USB.
6. Generierte PHP-Konfigurationsheader fuer das HarvOS-Target.
7. Groessere Stacks/Heaps und ein Supervisor-Lademodell fuer Zend.

Bis diese Punkte da sind, bleibt HarvTTPs eingebauter Mini-PHP-Renderer der
lauffaehige Fallback. Die neue SAPI ist aber der echte PHP-8.5-Port-Ansatz, nicht
eine weitere Nachbildung der Sprache.
