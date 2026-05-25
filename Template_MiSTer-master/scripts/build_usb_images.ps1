# Copyright 2025 Dennis Michael Heine

param(
  [string]$ProgramUsbDir = "release/program_usb",
  [string]$DataUsbDir = "release/data_usb",
  [string]$ProgramImage = "release/program_usb.img",
  [string]$DataImage = "release/data_usb.img",
  [int]$SizeMiB = 33,
  [string]$Python = "python"
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot

$ProgramUsbPath = Join-Path $Root $ProgramUsbDir
$DataUsbPath = Join-Path $Root $DataUsbDir
$ProgramImagePath = Join-Path $Root $ProgramImage
$DataImagePath = Join-Path $Root $DataImage
$Tool = Join-Path $Root "tools/harvos_usb_image.py"

if (!(Test-Path $ProgramUsbPath)) {
  throw "Program USB directory not found: $ProgramUsbPath"
}

New-Item -ItemType Directory -Force -Path (Join-Path $DataUsbPath "data/harvttp") | Out-Null
$Keep = Join-Path $DataUsbPath "data/harvttp/.keep"
if (!(Test-Path $Keep)) {
  New-Item -ItemType File -Force -Path $Keep | Out-Null
}

& $Python $Tool build $ProgramUsbPath -o $ProgramImagePath --label HARVPROG --size-mib $SizeMiB
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

& $Python $Tool build $DataUsbPath -o $DataImagePath --label HARVDATA --size-mib $SizeMiB
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

& $Python $Tool inspect $ProgramImagePath `
  --require /harvttp.elf `
  --require /config/harvttp.yaml `
  --require /confg/harvttp/httproot/index.php `
  --require /confg/harvttp/httproot/index.html `
  --require /confg/harvttp/httproot/about.html `
  --require /confg/harvttp/httproot/assets/style.css `
  --require /confg/harvttp/httproot/assets/app.js `
  --require /confg/harvttp/httproot/assets/harvttp.svg
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

& $Python $Tool inspect $DataImagePath `
  --require /data `
  --require /data/harvttp
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

Write-Output "program_usb_image=$ProgramImagePath"
Write-Output "data_usb_image=$DataImagePath"
