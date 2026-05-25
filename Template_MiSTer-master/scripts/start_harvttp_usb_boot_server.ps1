# Copyright 2025 Dennis Michael Heine

param(
  [string]$OutDir = "build\harvttp_usb_boot_server",
  [string]$Bootrom = "build\bootrom\harvos_usb_elf_bootrom.elf",
  [string]$BootromImem = "build\bootrom\harvos_usb_elf_bootrom_imem.hex",
  [string]$BootromDmem = "build\bootrom\harvos_usb_elf_bootrom_dmem.hex",
  [string]$ProgramImage = "release\program_usb.img",
  [string]$DataImage = "release\data_usb.img",
  [string]$NpcapDevice = $env:HARVOS_NPCAP_DEVICE,
  [int]$WaitSeconds = 60,
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
    if ($Arg -match '[\s"]') { return '"' + ($Arg -replace '"', '\"') + '"' }
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
  if (!$env:VERILATOR_ROOT) { throw "VERILATOR_ROOT is not set." }

  & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $Root "scripts\build_harvttp.ps1") -NoUsbImages
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
  & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $Root "scripts\build_usb_elf_bootrom.ps1")
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
  & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $Root "scripts\build_usb_images.ps1")
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

  $OutPath = To-NativePath $OutDir
  $ObjDir = Join-Path $OutPath "obj_dir"
  $MsvcObjDir = Join-Path $OutPath "msvc_obj"
  New-Item -ItemType Directory -Force -Path $OutPath,$ObjDir,$MsvcObjDir | Out-Null

  $Harness = "sim/verilator_soc/harvttp_usb_boot_server_tb.cpp"
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
    "--cc", "--timing",
    "--top-module", "harvos_soc",
    "-Mdir", (To-VerilatorPath $ObjDir),
    "-Irtl",
    "-GIMEM_WORDS=360000",
    "-GDMEM_WORDS=420000",
    "-GAPP_ECALL_NO_TRAP=1",
    "-GENABLE_DEMO_DMA=0",
    "-Wno-fatal", "-Wno-WIDTH", "-Wno-DECLFILENAME", "-Wno-UNUSEDSIGNAL", "-Wno-UNUSEDPARAM"
  )
  $VerilatorArgs += $Sources
  $VerilatorArgs += @("--exe", $Harness)

  Write-Host "verilating HarvTTP USB-boot CPU server..."
  & $Verilator @VerilatorArgs
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

  $VsDevCmd = Find-VsDevCmd
  if (!$VsDevCmd) { throw "MSVC build tools not found." }
  $VerilatorInclude = Join-Path $env:VERILATOR_ROOT "include"
  $GeneratedCpp = @(Get-ChildItem -Path $ObjDir -Filter "Vharvos_soc*.cpp" | Sort-Object Name | ForEach-Object { $_.FullName })
  $Exe = Join-Path $OutPath "harvttp_usb_boot_server.exe"
  $Rsp = Join-Path $OutPath "msvc.rsp"
  $ClArgs = @(
    "/nologo", "/EHsc", "/std:c++17", "/O2", "/MD", "/D_CRT_SECURE_NO_WARNINGS",
    "/Fo:$MsvcObjDir\",
    "/I$ObjDir", "/I$VerilatorInclude", "/I$(Join-Path $VerilatorInclude 'vltstd')",
    (To-NativePath $Harness),
    (To-NativePath "sim/verilator_soc/harvos_npcap_bridge.cpp")
  )
  $ClArgs += $GeneratedCpp
  $ClArgs += @((Join-Path $VerilatorInclude "verilated.cpp"), (Join-Path $VerilatorInclude "verilated_threads.cpp"), "/Fe:$Exe")
  Set-Content -Path $Rsp -Encoding ASCII -Value (($ClArgs | ForEach-Object { Quote-Rsp $_ }) -join "`r`n")

  Write-Host "compiling HarvTTP USB-boot CPU server harness..."
  $BuildCmd = "`"$VsDevCmd`" -arch=x64 -host_arch=x64 >nul && cl @`"$Rsp`""
  & cmd.exe /c $BuildCmd
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

  if ($ListNpcap) {
    & $Exe --list-npcap
    exit $LASTEXITCODE
  }

  $PidPath = Join-Path $OutPath "server.pid"
  $StatusPath = Join-Path $OutPath "status.json"
  $StdoutPath = Join-Path $OutPath "stdout.log"
  $StderrPath = Join-Path $OutPath "stderr.log"
  if (Test-Path $PidPath) {
    $OldPid = Get-Content $PidPath -ErrorAction SilentlyContinue | Select-Object -First 1
    if ($OldPid -and (Get-Process -Id ([int]$OldPid) -ErrorAction SilentlyContinue)) {
      Stop-Process -Id ([int]$OldPid) -Force
    }
  }
  Remove-Item -Force -ErrorAction SilentlyContinue $PidPath,$StatusPath,$StdoutPath,$StderrPath

  $RunArgs = @(
    "--program-image", (To-NativePath $ProgramImage),
    "--data-image", (To-NativePath $DataImage),
    "--status", $StatusPath,
    "+HARVOS_IMEM_INIT=$(To-VerilatorPath (To-NativePath $BootromImem))",
    "+HARVOS_DMEM_INIT=$(To-VerilatorPath (To-NativePath $BootromDmem))"
  )
  if ($NpcapDevice) { $RunArgs += @("--npcap-device", $NpcapDevice) }

  Write-Host "starting HarvTTP via USB image -> bootrom -> CPU..."
  $Process = Start-Process -FilePath $Exe -ArgumentList $RunArgs -WorkingDirectory $Root `
    -WindowStyle Hidden -RedirectStandardOutput $StdoutPath -RedirectStandardError $StderrPath -PassThru
  Set-Content -Path $PidPath -Encoding ASCII -Value $Process.Id

  $Deadline = (Get-Date).AddSeconds($WaitSeconds)
  $ServerIp = ""
  do {
    Start-Sleep -Milliseconds 500
    if ($Process.HasExited) { break }
    if (Test-Path $StatusPath) {
      try {
        $Status = Get-Content $StatusPath -Raw | ConvertFrom-Json
        $ServerIp = [string]$Status.server_ip
      } catch {
        $ServerIp = ""
      }
    }
  } while (!$ServerIp -and (Get-Date) -lt $Deadline)

  Write-Host "harvttp_usb_boot_server_pid=$($Process.Id)"
  if ($ServerIp) {
    Write-Host "harvttp_usb_boot_server_ip=$ServerIp"
    Write-Host "harvttp_usb_boot_server_url=http://$ServerIp/"
  } else {
    Write-Host "harvttp_usb_boot_server_ip="
    Write-Host "HarvTTP is running through the CPU boot path, but DHCP has not completed yet."
    if (Test-Path $StdoutPath) { Write-Host "stdout_tail:"; Get-Content $StdoutPath -Tail 12 }
    if (Test-Path $StderrPath) { Write-Host "stderr_tail:"; Get-Content $StderrPath -Tail 12 }
  }
}
finally {
  Pop-Location
}
