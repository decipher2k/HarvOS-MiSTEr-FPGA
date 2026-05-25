# Copyright 2025 Dennis Michael Heine

param(
  [string]$ProgramImage = "release/program_usb.img",
  [string]$Bind = "127.0.0.1",
  [int]$Port = 80,
  [string]$OutDir = "build/harvos_server"
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
$OutPath = Join-Path $Root $OutDir
$PidPath = Join-Path $OutPath "server.pid"
$StatusPath = Join-Path $OutPath "status.json"
$StdoutPath = Join-Path $OutPath "stdout.log"
$StderrPath = Join-Path $OutPath "stderr.log"
$ImagePath = [System.IO.Path]::GetFullPath((Join-Path $Root $ProgramImage))

New-Item -ItemType Directory -Force -Path $OutPath | Out-Null

if (!(Test-Path $ImagePath)) {
  & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $Root "scripts/build_usb_images.ps1")
  if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}

if (Test-Path $PidPath) {
  $OldPid = [int](Get-Content $PidPath)
  $OldProc = Get-Process -Id $OldPid -ErrorAction SilentlyContinue
  if ($OldProc) {
    Stop-Process -Id $OldPid -ErrorAction SilentlyContinue
    Start-Sleep -Milliseconds 300
  }
}

$Existing = Get-NetTCPConnection -LocalPort $Port -State Listen -ErrorAction SilentlyContinue |
  Where-Object { $_.LocalAddress -eq $Bind -or $_.LocalAddress -eq "0.0.0.0" -or $_.LocalAddress -eq "::" } |
  Select-Object -First 1
if ($Existing) {
  throw "Port $Port is already in use by PID $($Existing.OwningProcess). Stop it or pass -Port <free-port>."
}

$Tool = Join-Path $Root "tools/harvos_server_bridge.py"
$Args = @(
  $Tool,
  "--image", $ImagePath,
  "--host", $Bind,
  "--port", "$Port",
  "--status", $StatusPath
)

$Proc = Start-Process -FilePath "python" -ArgumentList $Args -WindowStyle Hidden `
  -RedirectStandardOutput $StdoutPath -RedirectStandardError $StderrPath -PassThru
Set-Content -Path $PidPath -Encoding ASCII -Value $Proc.Id

for ($i = 0; $i -lt 40; $i++) {
  Start-Sleep -Milliseconds 250
  if ($Proc.HasExited) {
    $Err = if (Test-Path $StderrPath) { Get-Content $StderrPath -Raw } else { "" }
    throw "HarvOS server bridge exited early: $Err"
  }
  try {
    $Resp = Invoke-WebRequest -UseBasicParsing -Uri "http://$Bind`:$Port/__harvos/ip" -TimeoutSec 1
    if ($Resp.StatusCode -eq 200) {
      $Status = Get-Content $StatusPath -Raw | ConvertFrom-Json
      Write-Output "harvos_server_ip=$($Status.server_ip)"
      Write-Output "host_url=http://$Bind`:$Port/"
      Write-Output "pid=$($Proc.Id)"
      exit 0
    }
  } catch {
  }
}

throw "HarvOS server bridge did not become reachable on http://$Bind`:$Port/"
