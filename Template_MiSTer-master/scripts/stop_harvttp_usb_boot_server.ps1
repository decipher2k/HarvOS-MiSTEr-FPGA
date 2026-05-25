# Copyright 2025 Dennis Michael Heine

param(
  [string]$OutDir = "build\harvttp_usb_boot_server"
)

$Root = Split-Path -Parent $PSScriptRoot
$OutPath = [System.IO.Path]::GetFullPath((Join-Path $Root $OutDir))
$PidPath = Join-Path $OutPath "server.pid"

if (Test-Path $PidPath) {
  $PidValue = Get-Content $PidPath -ErrorAction SilentlyContinue | Select-Object -First 1
  if ($PidValue) {
    $Process = Get-Process -Id ([int]$PidValue) -ErrorAction SilentlyContinue
    if ($Process) {
      Stop-Process -Id $Process.Id -Force
      Write-Host "stopped_harvttp_usb_boot_server_pid=$($Process.Id)"
    }
  }
}

Remove-Item -Force -ErrorAction SilentlyContinue `
  $PidPath, `
  (Join-Path $OutPath "status.json"), `
  (Join-Path $OutPath "stdout.log"), `
  (Join-Path $OutPath "stderr.log")
