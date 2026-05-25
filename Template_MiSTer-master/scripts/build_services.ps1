# Copyright 2025 Dennis Michael Heine

param(
  [string]$ToolchainRoot = $env:HARVOS_RISCV_TOOLCHAIN,
  [string]$OutDir = "build/services"
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
if (!$ToolchainRoot) {
  $ToolchainRoot = "C:\SysGCC\risc-v"
}

$Bin = Join-Path $ToolchainRoot "bin"
$Gcc = Join-Path $Bin "riscv64-unknown-elf-gcc.exe"
$Ar = Join-Path $Bin "riscv64-unknown-elf-ar.exe"
$Objdump = Join-Path $Bin "riscv64-unknown-elf-objdump.exe"

if (!(Test-Path $Gcc)) {
  throw "RISC-V GCC not found: $Gcc"
}
if (!(Test-Path $Ar)) {
  throw "RISC-V ar not found: $Ar"
}

$OutPath = Join-Path $Root $OutDir
New-Item -ItemType Directory -Force -Path $OutPath | Out-Null

$Flags = @(
  "-std=c11",
  "-ffreestanding",
  "-nostdlib",
  "-nostartfiles",
  "-fno-builtin",
  "-Os",
  "-Wall",
  "-Wextra",
  "-Werror",
  "-march=rv32i",
  "-mabi=ilp32",
  "-mcmodel=medlow",
  "-mstrict-align",
  "-Isoftware/services/include"
)

$Objects = @()
Get-ChildItem (Join-Path $Root "software/services/src") -Filter "*.c" | ForEach-Object {
  $Obj = Join-Path $OutPath ($_.BaseName + ".o")
  & $Gcc @Flags -c $_.FullName -o $Obj
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
  $Objects += $Obj
}

$Archive = Join-Path $OutPath "libharvos_services.a"
if (Test-Path $Archive) { Remove-Item $Archive }
& $Ar rcs $Archive @Objects
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

if (Test-Path $Objdump) {
  $Disasm = Join-Path $OutPath "harvos_services.dis"
  "" | Set-Content $Disasm
  foreach ($Obj in $Objects) {
    "=== $(Split-Path -Leaf $Obj) ===" | Add-Content $Disasm
    & $Objdump -dr -M no-aliases $Obj | Add-Content $Disasm
  }
}

Write-Output "services_archive=$Archive objects=$($Objects.Count)"
