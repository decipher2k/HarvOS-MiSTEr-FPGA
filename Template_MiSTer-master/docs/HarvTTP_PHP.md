# HarvTTP PHP Support

HarvTTP unterstuetzt jetzt `.php`-Dateien im Webroot als serverseitig gerenderte
Templates.

## Aktueller Stand

Der aktuelle Modus ist bewusst ein eingebetteter HarvTTP-PHP-Template-Interpreter,
nicht der volle Zend/PHP-8.5-Runtime-Port. Die PHP-8.5.6-Quelle liegt lokal unter:

`C:\Users\dennis\Downloads\php-8.5.6-src`

Diese Quelle ist fuer einen spaeteren echten Zend-Port relevant. Direktes Linken in
das jetzige `harvttp.elf` ist noch nicht realistisch, weil HarvTTP aktuell
freestanding auf RV32I laeuft und noch keine POSIX/libc-kompatible Runtime,
keinen dynamischen Heap, keine Dateisystem-Streams, keine Extensions und keine
vollstaendige SAPI-Schicht bereitstellt.

## Webroot

PHP-Dateien liegen wie normale Assets im Programm-USB:

```text
/confg/harvttp/httproot/
  index.html
  info.php
  assets/
    style.css
```

Das Boot-ROM nimmt `.php`-Dateien in das HTTP-Bundle auf, markiert sie aber mit
dem MIME-Typ `HARVOS_HTTP_MIME_PHP`. HarvTTP liefert den PHP-Quelltext nicht aus,
sondern rendert ihn in einen festen Ausgabepuffer und sendet das Ergebnis als
`text/html; charset=utf-8`.

## Unterstuetzte Syntax

Unterstuetzt sind:

```php
<?= phpversion() ?>
<?= time() ?>
<?= harvttp_ip() ?>
<?= remote_addr() ?>
<?= $_SERVER['SCRIPT_NAME'] ?>
<?php echo 'Server: ' . $_SERVER['SERVER_SOFTWARE']; ?>
<?php harvttp_info(); ?>
```

Unterstuetzte `$_SERVER`-Keys:

- `REQUEST_URI`
- `SCRIPT_NAME`
- `PHP_SELF`
- `SERVER_SOFTWARE`
- `SERVER_PROTOCOL`
- `DOCUMENT_ROOT`
- `SERVER_ADDR`
- `REMOTE_ADDR`

Nicht unterstuetzt:

- `include`, `require`, `eval`
- Dateisystemzugriffe
- Superglobals ausser `$_SERVER`
- Klassen, Arrays, Schleifen, Funktionen aus Zend/PHP
- Extensions und native PHP-Module

## Sicherheit

- `.php`-Dateien werden nicht als Source ausgeliefert.
- Dot-Segmente in URLs werden normalisiert; ein Ausbruch oberhalb von `/` wird abgelehnt.
- Es gibt keine PHP-Dateizugriffe, dadurch auch keinen Include-Traversal-Pfad.
- Renderfehler liefern `HTTP/1.0 500 Internal Server Error`.
- Der Ausgabepuffer ist auf `HARVTTP_PHP_OUTPUT_MAX` begrenzt.

## Echter PHP-8.5-Port

Der echte Port wurde als HarvOS-SAPI vorbereitet:

- `ports/php85/sapi/harvos/php_harvos_sapi.c`
- `ports/php85/sapi/harvos/php_harvos_sapi.h`
- `ports/php85/sapi/harvos/config.m4`
- `scripts/build_php85_harvos.ps1`

Diese SAPI nutzt die normale PHP/Zend-SAPI-Struktur und fuehrt PHP-Quelltext
ueber einen memory-backed Zend stream aus. Sie ist damit der echte PHP-8.5-
Andockpunkt fuer HarvTTP.

Overlay in die lokale PHP-Quelle:

```powershell
powershell -ExecutionPolicy Bypass -File .\scripts\build_php85_harvos.ps1 -Overlay
```

Die Quelle wird unter
`C:\Users\dennis\Downloads\php-8.5.6-src\sapi\harvos` vorbereitet.

## Was noch fuer ein bootbares Zend-harvttp.elf fehlt

Ein echter PHP-8.5-Port braucht mindestens:

1. HarvOS-libc oder Newlib-Port fuer RV32I.
2. Heap/Allocator und Stack-/Guard-Konzept pro Task.
3. Stream-Abstraktion fuer Programm-USB/Daten-USB.
4. Zeit-, Locale-, Fehler- und Output-APIs.
5. HarvTTP-SAPI oder Supervisor-SAPI.
6. Buildsystem fuer `C:\Users\dennis\Downloads\php-8.5.6-src` mit stark reduzierter Extension-Liste.

Punkt 5 und die Build-Overlay-Struktur sind jetzt vorhanden. Die fehlenden
Runtime-Punkte sind bewusst nicht vorgetaeuscht, weil PHP/Zend sonst nur auf dem
Host laufen wuerde und nicht als echtes ELF auf dem HarvOS-Prozessor.
