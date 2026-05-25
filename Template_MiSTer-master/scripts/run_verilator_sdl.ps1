# Copyright 2025 Dennis Michael Heine

param(
  [string]$BootRom = "release\harvos_minerva_bootrom.hbr",
  [int]$Frames = 2,
  [string]$OutDir = "build\verilator_sdl",
  [string]$SDL2Root = $env:SDL2_ROOT,
  [switch]$SDL,
  [switch]$Headless,
  [switch]$Pal,
  [switch]$Scandouble,
  [UInt64]$MaxCycles = 0
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

  $BootRomPath = To-NativePath $BootRom
  if (!(Test-Path $BootRomPath)) { throw "Boot ROM not found: $BootRomPath" }

  $OutPath = To-NativePath $OutDir
  $ObjDir = Join-Path $OutPath "obj_dir"
  New-Item -ItemType Directory -Force -Path $OutPath | Out-Null
  New-Item -ItemType Directory -Force -Path $ObjDir | Out-Null

  $Harness = "sim/verilator_sdl/harvos_video_tb.cpp"
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
    "rtl/harvos_net_mmio.sv",
    "rtl/harvos_mister_hps_block.sv",
    "rtl/harvos_kernel_model.sv",
    "rtl/harvos_signature.sv",
    "rtl/harvos_secure_boot.sv",
    "rtl/harvos_trace.sv",
    "rtl/harvos_ddr_bridge.sv",
    "rtl/harvos_assertions.sv",
    "rtl/harvos_soc.sv",
    "rtl/harvos_boot_ram.sv",
    "rtl/harvos_video.sv",
    "rtl/mycore.v"
  )

  $VerilatorArgs = @(
    "--cc",
    "--timing",
    "--top-module", "mycore",
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

  Write-Host "verilating mycore..."
  & $Verilator @VerilatorArgs
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

  $VsDevCmd = Find-VsDevCmd
  if (!$VsDevCmd) {
    throw "MSVC build tools not found. Install Visual Studio C++ tools or adapt this script to a MinGW g++ toolchain."
  }

  $VerilatorInclude = Join-Path $env:YOSYSHQ_ROOT "share\verilator\include"
  $GeneratedCpp = @(Get-ChildItem -Path $ObjDir -Filter "Vmycore*.cpp" | Sort-Object Name | ForEach-Object { $_.FullName })
  if ($GeneratedCpp.Count -eq 0) { throw "Verilator did not generate C++ sources below $ObjDir" }

  $Exe = Join-Path $OutPath "harvos_video_tb.exe"
  $Ppm = Join-Path $OutPath "frame.ppm"
  $Bmp = Join-Path $OutPath "frame.bmp"
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
  $ClArgs += $GeneratedCpp
  $ClArgs += @(
    (Join-Path $VerilatorInclude "verilated.cpp"),
    (Join-Path $VerilatorInclude "verilated_threads.cpp"),
    "/Fe:$Exe"
  )

  if ($SDL) {
    if (!$SDL2Root) {
      throw "SDL2 root not set. Pass -SDL2Root C:\path\to\SDL2-devel or set SDL2_ROOT."
    }
    $SDL2Root = [System.IO.Path]::GetFullPath($SDL2Root)
    $SDLInclude = Join-Path $SDL2Root "include"
    $SDLInclude2 = Join-Path $SDL2Root "include\SDL2"
    $SDLLibCandidates = @(
      (Join-Path $SDL2Root "lib\x64"),
      (Join-Path $SDL2Root "lib"),
      (Join-Path $SDL2Root "VisualC\x64\Release"),
      (Join-Path $SDL2Root "build\Release")
    )
    $SDLLib = $SDLLibCandidates | Where-Object { Test-Path (Join-Path $_ "SDL2.lib") } | Select-Object -First 1
    if (!$SDLLib) { throw "SDL2.lib not found below $SDL2Root" }

    $ClArgs += @(
      "/DHARVOS_WITH_SDL",
      "/I$SDLInclude",
      "/I$SDLInclude2",
      "/link",
      "/LIBPATH:$SDLLib",
      "SDL2.lib"
    )

    $DllCandidates = @(
      (Join-Path $SDLLib "SDL2.dll"),
      (Join-Path $SDL2Root "lib\x64\SDL2.dll"),
      (Join-Path $SDL2Root "bin\SDL2.dll"),
      (Join-Path $SDL2Root "VisualC\x64\Release\SDL2.dll")
    )
    $Dll = $DllCandidates | Where-Object { Test-Path $_ } | Select-Object -First 1
    if ($Dll) { Copy-Item -Force $Dll $OutPath }
  }

  Set-Content -Path $Rsp -Encoding ASCII -Value (($ClArgs | ForEach-Object { Quote-Rsp $_ }) -join "`r`n")

  Write-Host "compiling harness with MSVC..."
  $BuildCmd = "`"$VsDevCmd`" -arch=x64 -host_arch=x64 >nul && cl @`"$Rsp`""
  & cmd.exe /c $BuildCmd
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

  $RunArgs = @(
    "--bootrom", $BootRomPath,
    "--frames", "$Frames",
    "--ppm", $Ppm,
    "--bmp", $Bmp
  )
  if ($MaxCycles -gt 0) { $RunArgs += @("--max-cycles", "$MaxCycles") }
  if ($Pal) { $RunArgs += "--pal" }
  if ($Scandouble) { $RunArgs += "--scandouble" }
  if ($SDL) { $RunArgs += "--sdl" } else { $RunArgs += "--headless" }

  Write-Host "running HDMI simulation..."
  & $Exe @RunArgs
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
finally {
  Pop-Location
}
