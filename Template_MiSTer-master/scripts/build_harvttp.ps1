# Copyright 2025 Dennis Michael Heine

param(
  [string]$ToolchainRoot = $env:HARVOS_RISCV_TOOLCHAIN,
  [string]$OutDir = "build/apps",
  [string]$ProgramUsbDir = "release/program_usb",
  [string]$DataUsbDir = "release/data_usb",
  [switch]$NoUsbImages
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
if (!$ToolchainRoot) {
  $ToolchainRoot = "C:\SysGCC\risc-v"
}

$Bin = Join-Path $ToolchainRoot "bin"
$Gcc = Join-Path $Bin "riscv64-unknown-elf-gcc.exe"
$Objdump = Join-Path $Bin "riscv64-unknown-elf-objdump.exe"

if (!(Test-Path $Gcc)) {
  throw "RISC-V GCC not found: $Gcc"
}

$OutPath = Join-Path $Root $OutDir
$ProgramUsbPath = Join-Path $Root $ProgramUsbDir
$AppRoot = Join-Path $Root "software/user/harvttp"
New-Item -ItemType Directory -Force -Path $OutPath | Out-Null
New-Item -ItemType Directory -Force -Path $ProgramUsbPath | Out-Null

$Flags = @(
  "-std=c11",
  "-ffreestanding",
  "-nostdlib",
  "-nostartfiles",
  "-fno-builtin",
  "-O3",
  "-Wall",
  "-Wextra",
  "-Werror",
  "-march=rv32i",
  "-mabi=ilp32",
  "-mcmodel=medlow",
  "-mstrict-align",
  "-Isoftware/include"
)

$Objects = @()
Get-ChildItem $AppRoot -Filter "*.c" | Sort-Object Name | ForEach-Object {
  $Obj = Join-Path $OutPath ("harvttp_" + $_.BaseName + ".o")
  & $Gcc @Flags -c $_.FullName -o $Obj
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
  $Objects += $Obj
}

$Elf = Join-Path $OutPath "harvttp.elf"
$Map = Join-Path $OutPath "harvttp.map"
$Ld = Join-Path $AppRoot "harvttp.ld"
& $Gcc @Flags "-T$Ld" "-Wl,-Map,$Map" "-Wl,--build-id=none" @Objects "-lgcc" -o $Elf
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

if (Test-Path $Objdump) {
  & $Objdump -h -p -t -dr -M no-aliases $Elf | Set-Content (Join-Path $OutPath "harvttp.dis")
}

Copy-Item -Force $Elf (Join-Path $ProgramUsbPath "harvttp.elf")

$SampleUsb = Join-Path $AppRoot "usb"
if (Test-Path $SampleUsb) {
  Copy-Item -Force -Recurse (Join-Path $SampleUsb "*") $ProgramUsbPath
}

Write-Output "harvttp_elf=$Elf"
Write-Output "program_usb=$(Join-Path $ProgramUsbPath 'harvttp.elf')"

if (!$NoUsbImages) {
  & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $Root "scripts/build_usb_images.ps1") `
    -ProgramUsbDir $ProgramUsbDir `
    -DataUsbDir $DataUsbDir
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
