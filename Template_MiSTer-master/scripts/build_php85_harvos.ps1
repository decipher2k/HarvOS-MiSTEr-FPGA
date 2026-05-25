# Copyright 2025 Dennis Michael Heine

param(
  [string]$PhpSource = "C:\Users\dennis\Downloads\php-8.5.6-src",
  [string]$OutDir = "build\php85-harvos",
  [switch]$Overlay,
  [switch]$AttemptConfigure
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
$OutPath = Join-Path $Root $OutDir
$OverlayPath = Join-Path $Root "ports\php85\sapi\harvos"
$TargetSapi = Join-Path $PhpSource "sapi\harvos"

New-Item -ItemType Directory -Force -Path $OutPath | Out-Null

if (!(Test-Path $PhpSource)) {
  throw "PHP source tree not found: $PhpSource"
}
if (!(Test-Path (Join-Path $PhpSource "main\php.h"))) {
  throw "PHP source tree does not look complete: missing main\php.h"
}
if (!(Test-Path (Join-Path $PhpSource "Zend\zend.h"))) {
  throw "PHP source tree does not look complete: missing Zend\zend.h"
}
if (!(Test-Path $OverlayPath)) {
  throw "HarvOS PHP overlay not found: $OverlayPath"
}

$Copied = @()
if ($Overlay) {
  New-Item -ItemType Directory -Force -Path $TargetSapi | Out-Null
  foreach ($File in @("config.m4", "php_harvos_sapi.c", "php_harvos_sapi.h")) {
    $Src = Join-Path $OverlayPath $File
    $Dst = Join-Path $TargetSapi $File
    Copy-Item -Force $Src $Dst
    $Copied += $Dst
  }
}

$ToolchainRoot = $env:HARVOS_RISCV_TOOLCHAIN
if (!$ToolchainRoot) {
  $ToolchainRoot = "C:\SysGCC\risc-v"
}
$Gcc = Join-Path $ToolchainRoot "bin\riscv64-unknown-elf-gcc.exe"
$HasGcc = Test-Path $Gcc

$RuntimeChecks = @(
  @{ name = "heap_allocator"; path = "software\lib\malloc.c"; required = $true },
  @{ name = "setjmp_longjmp"; path = "software\lib\setjmp.S"; required = $true },
  @{ name = "errno"; path = "software\lib\errno.c"; required = $true },
  @{ name = "stdio_streams"; path = "software\lib\stdio.c"; required = $true },
  @{ name = "vfs_streams"; path = "software\supervisor\src\harvos_php_vfs.c"; required = $true }
)

$Missing = @()
foreach ($Check in $RuntimeChecks) {
  $Full = Join-Path $Root $Check.path
  if ($Check.required -and !(Test-Path $Full)) {
    $Missing += $Check.name
  }
}

$Manifest = [ordered]@{
  php_source = $PhpSource
  harvos_root = $Root
  overlay_applied = [bool]$Overlay
  copied_files = $Copied
  riscv_gcc = $Gcc
  riscv_gcc_found = [bool]$HasGcc
  generated_at = (Get-Date).ToString("s")
  sapi = [ordered]@{
    name = "harvos"
    files = @(
      "sapi/harvos/config.m4",
      "sapi/harvos/php_harvos_sapi.c",
      "sapi/harvos/php_harvos_sapi.h"
    )
  }
  runtime_missing = $Missing
  next_build_command = "./buildconf --force; ./configure --host=riscv64-unknown-elf --disable-all --enable-harvos --without-pear"
}

$ManifestPath = Join-Path $OutPath "port_manifest.json"
$Manifest | ConvertTo-Json -Depth 6 | Set-Content -Encoding ascii $ManifestPath

Write-Output "php_source=$PhpSource"
Write-Output "manifest=$ManifestPath"
if ($Overlay) {
  Write-Output "overlay=$TargetSapi"
}
if ($Missing.Count) {
  Write-Output ("runtime_missing=" + ($Missing -join ","))
}

if ($AttemptConfigure) {
  if ($Missing.Count) {
    throw "Cannot configure PHP for HarvOS yet. Missing runtime components: $($Missing -join ', ')"
  }
  if (!$HasGcc) {
    throw "RISC-V GCC not found: $Gcc"
  }
  throw "Configure execution is intentionally not automated on native Windows yet; use WSL/MSYS2 with the emitted next_build_command."
}
