# Copyright 2025 Dennis Michael Heine

param(
  [string]$KeyFile = $env:HARVOS_PRODUCTION_KEY_FILE
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
$Python = "python"

$LocalOssCad = Join-Path $Root ".tools/oss-cad-suite/oss-cad-suite"
if (Test-Path (Join-Path $LocalOssCad "bin/yosys.exe")) {
  $env:YOSYSHQ_ROOT = "$LocalOssCad\"
  $env:PATH = "$LocalOssCad\bin;$LocalOssCad\lib;$env:PATH"
}

$QuartusBin = "C:\intelFPGA_lite\18.1\quartus\bin64"
if (Test-Path (Join-Path $QuartusBin "quartus_sh.exe")) {
  $env:PATH = "$QuartusBin;$env:PATH"
}

if (!$KeyFile) {
  $KeyFile = Join-Path $Root "release/production.key"
}

if (!(Test-Path $KeyFile)) {
  throw "Production key missing. Pass -KeyFile or set HARVOS_PRODUCTION_KEY_FILE."
}

& $Python (Join-Path $Root "tests/run_all.py")
& $Python (Join-Path $Root "tools/harvos_prod_check.py") --key-file $KeyFile
