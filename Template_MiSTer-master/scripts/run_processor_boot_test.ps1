# Copyright 2025 Dennis Michael Heine

param(
  [UInt64]$MaxCycles = 8192,
  [string]$OutDir = "build\processor_boot",
  [string]$ProgramImage = "release\program_usb.img",
  [string]$DataImage = "release\data_usb.img",
  [switch]$Npcap,
  [string]$NpcapDevice = $env:HARVOS_NPCAP_DEVICE,
  [switch]$ListNpcap
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
Push-Location $Root

try {
  function To-NativePath([string]$Path) {
    return [System.IO.Path]::GetFullPath((Join-Path $Root $Path))
  }

  function To-VerilatorPath([string]$Path) {
    return ([System.IO.Path]::GetFullPath($Path)).Replace("\", "/")
  }

  function Quote-Rsp([string]$Arg) {
    if ($Arg -match '[\s"]') {
      return '"' + ($Arg -replace '"', '\"') + '"'
    }
    return $Arg
  }

  function Find-VsDevCmd {
    $Known = @(
      "$env:ProgramFiles\Microsoft Visual Studio\18\Community\Common7\Tools\VsDevCmd.bat",
      "$env:ProgramFiles\Microsoft Visual Studio\17\Community\Common7\Tools\VsDevCmd.bat",
      "${env:ProgramFiles(x86)}\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat",
      "${env:ProgramFiles(x86)}\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
    )
    foreach ($Candidate in $Known) {
      if ($Candidate -and (Test-Path $Candidate)) { return $Candidate }
    }

    $VsWhere = "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe"
    if (Test-Path $VsWhere) {
      $Install = & $VsWhere -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
      if ($LASTEXITCODE -eq 0 -and $Install) {
        $Cmd = Join-Path $Install "Common7\Tools\VsDevCmd.bat"
        if (Test-Path $Cmd) { return $Cmd }
      }
    }
    return $null
  }

  $OssCad = Join-Path $Root ".tools\oss-cad-suite\oss-cad-suite"
  if (Test-Path $OssCad) {
    $env:YOSYSHQ_ROOT = "$OssCad\"
    $env:VERILATOR_ROOT = Join-Path $OssCad "share\verilator"
    $env:PATH = "$OssCad\bin;$OssCad\lib;$env:PATH"
  }

  $Verilator = Join-Path $OssCad "bin\verilator_bin.exe"
  if (!(Test-Path $Verilator)) {
    $Cmd = Get-Command verilator_bin.exe -ErrorAction SilentlyContinue
    if (!$Cmd) { $Cmd = Get-Command verilator.exe -ErrorAction SilentlyContinue }
    if (!$Cmd) { throw "Verilator not found. Install OSS CAD Suite or place verilator_bin.exe in PATH." }
    $Verilator = $Cmd.Source
  }

  if (!$env:VERILATOR_ROOT) {
    throw "VERILATOR_ROOT is not set. Use the bundled OSS CAD Suite or export VERILATOR_ROOT."
  }

  $OutPath = To-NativePath $OutDir
  $ObjDir = Join-Path $OutPath "obj_dir"
  New-Item -ItemType Directory -Force -Path $OutPath | Out-Null
  New-Item -ItemType Directory -Force -Path $ObjDir | Out-Null

  $ProgramImagePath = To-NativePath $ProgramImage
  $DataImagePath = To-NativePath $DataImage
  if (!(Test-Path $ProgramImagePath) -or !(Test-Path $DataImagePath)) {
    Write-Host "building USB images for processor boot test..."
    & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $Root "scripts\build_usb_images.ps1") `
      -ProgramImage $ProgramImage `
      -DataImage $DataImage
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
  }

  $Harness = "sim/verilator_soc/harvos_soc_boot_tb.cpp"
  $HarnessSupport = @(
    "sim/verilator_soc/harvos_npcap_bridge.cpp"
  )
  $Sources = @(
    "rtl/harvos_pkg.sv",
    "rtl/harvos_pagetable.sv",
    "rtl/harvos_tlb.sv",
    "rtl/harvos_mmu.sv",
    "rtl/harvos_mpu.sv",
    "rtl/harvos_cpu.sv",
    "rtl/harvos_smp_bus2.sv",
    "rtl/harvos_l1_cache.sv",
    "rtl/harvos_l2_cache.sv",
    "rtl/harvos_coherence_dir.sv",
    "rtl/harvos_dma_iommu.sv",
    "rtl/harvos_usb_pkg.sv",
    "rtl/harvos_usb_packet_rx.sv",
    "rtl/harvos_usb_packet_engine.sv",
    "rtl/harvos_usb_fs_phy.sv",
    "rtl/harvos_usb_utmi_adapter.sv",
    "rtl/harvos_usb_host_mmio.sv",
    "rtl/harvos_imem_loader_mmio.sv",
    "rtl/harvos_net_mmio.sv",
    "rtl/harvos_mister_hps_block.sv",
    "rtl/harvos_kernel_model.sv",
    "rtl/harvos_signature.sv",
    "rtl/harvos_secure_boot.sv",
    "rtl/harvos_trace.sv",
    "rtl/harvos_ddr_bridge.sv",
    "rtl/harvos_assertions.sv",
    "rtl/harvos_soc.sv"
  )

  $VerilatorArgs = @(
    "--cc",
    "--timing",
    "--top-module", "harvos_soc",
    "-Mdir", (To-VerilatorPath $ObjDir),
    "-Irtl",
    "-Wno-fatal",
    "-Wno-WIDTH",
    "-Wno-DECLFILENAME",
    "-Wno-UNUSEDSIGNAL",
    "-Wno-UNUSEDPARAM"
  )
  $VerilatorArgs += $Sources
  $VerilatorArgs += @("--exe", $Harness)

  Write-Host "verilating harvos_soc processor boot test..."
  & $Verilator @VerilatorArgs
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

  $VsDevCmd = Find-VsDevCmd
  if (!$VsDevCmd) {
    throw "MSVC build tools not found. Install Visual Studio C++ tools or adapt this script to a MinGW g++ toolchain."
  }

  $VerilatorInclude = Join-Path $env:VERILATOR_ROOT "include"
  $GeneratedCpp = @(Get-ChildItem -Path $ObjDir -Filter "Vharvos_soc*.cpp" |
    Sort-Object Name |
    ForEach-Object { $_.FullName })
  if ($GeneratedCpp.Count -eq 0) { throw "Verilator did not generate C++ sources below $ObjDir" }

  $Exe = Join-Path $OutPath "harvos_soc_boot_tb.exe"
  $MsvcObjDir = Join-Path $OutPath "msvc_obj"
  $Rsp = Join-Path $OutPath "msvc.rsp"
  New-Item -ItemType Directory -Force -Path $MsvcObjDir | Out-Null
  $ClArgs = @(
    "/nologo",
    "/EHsc",
    "/std:c++17",
    "/O2",
    "/MD",
    "/D_CRT_SECURE_NO_WARNINGS",
    "/Fo:$MsvcObjDir\",
    "/I$ObjDir",
    "/I$VerilatorInclude",
    "/I$(Join-Path $VerilatorInclude 'vltstd')",
    (To-NativePath $Harness)
  )
  $ClArgs += @($HarnessSupport | ForEach-Object { To-NativePath $_ })
  $ClArgs += $GeneratedCpp
  $ClArgs += @(
    (Join-Path $VerilatorInclude "verilated.cpp"),
    (Join-Path $VerilatorInclude "verilated_threads.cpp"),
    "/Fe:$Exe"
  )

  Set-Content -Path $Rsp -Encoding ASCII -Value (($ClArgs | ForEach-Object { Quote-Rsp $_ }) -join "`r`n")

  Write-Host "compiling processor boot harness with MSVC..."
  $BuildCmd = "`"$VsDevCmd`" -arch=x64 -host_arch=x64 >nul && cl @`"$Rsp`""
  & cmd.exe /c $BuildCmd
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

  Write-Host "running processor+kernel RTL boot test..."
  $RunArgs = @("--cycles", "$MaxCycles", "--program-image", $ProgramImagePath, "--data-image", $DataImagePath)
  if ($ListNpcap) {
    $RunArgs += "--list-npcap"
  }
  if ($Npcap) {
    $RunArgs += "--npcap"
    if ($NpcapDevice) {
      $RunArgs += @("--npcap-device", $NpcapDevice)
    }
  }
  & $Exe @RunArgs
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
finally {
  Pop-Location
}
