# Copyright 2025 Dennis Michael Heine

param(
  [string]$ToolchainRoot = $env:HARVOS_RISCV_TOOLCHAIN,
  [string]$OutDir = "build\bootrom"
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
if (!$ToolchainRoot) {
  $ToolchainRoot = "C:\SysGCC\risc-v"
}

$Bin = Join-Path $ToolchainRoot "bin"
$Gcc = Join-Path $Bin "riscv64-unknown-elf-gcc.exe"
$Objdump = Join-Path $Bin "riscv64-unknown-elf-objdump.exe"
$Python = (Get-Command python -ErrorAction SilentlyContinue).Source

if (!(Test-Path $Gcc)) {
  throw "RISC-V GCC not found: $Gcc"
}
if (!$Python) {
  throw "python not found in PATH"
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
  "-Isoftware/include",
  "-Isoftware/supervisor/include"
)

$Sources = @(
  "software/bootrom/start.S",
  "software/bootrom/harvos_usb_elf_bootrom.c",
  "software/supervisor/src/harvos_fs.c",
  "software/supervisor/src/harvos_yaml.c",
  "software/supervisor/src/harvos_mister_hps_block.c"
)

$Objects = @()
foreach ($Source in $Sources) {
  $SourcePath = Join-Path $Root $Source
  $Obj = Join-Path $OutPath (([System.IO.Path]::GetFileNameWithoutExtension($Source)) + ".o")
  & $Gcc @Flags -c $SourcePath -o $Obj
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
  $Objects += $Obj
}

$Elf = Join-Path $OutPath "harvos_usb_elf_bootrom.elf"
$Map = Join-Path $OutPath "harvos_usb_elf_bootrom.map"
$Ld = Join-Path $Root "software/bootrom/harvos_usb_elf_bootrom.ld"
& $Gcc @Flags "-T$Ld" "-Wl,-Map,$Map" "-Wl,--build-id=none" @Objects "-lgcc" -o $Elf
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

if (Test-Path $Objdump) {
  & $Objdump -h -p -t -dr -M no-aliases $Elf | Set-Content (Join-Path $OutPath "harvos_usb_elf_bootrom.dis")
}

$ImemHex = Join-Path $OutPath "harvos_usb_elf_bootrom_imem.hex"
$DmemHex = Join-Path $OutPath "harvos_usb_elf_bootrom_dmem.hex"
& $Python (Join-Path $Root "tools\harvos_elf_to_memhex.py") $Elf --imem $ImemHex --dmem $DmemHex --dram-base 0x400
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

Write-Output "bootrom_elf=$Elf"
Write-Output "bootrom_imem_hex=$ImemHex"
Write-Output "bootrom_dmem_hex=$DmemHex"
