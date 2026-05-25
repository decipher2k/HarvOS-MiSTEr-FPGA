# Copyright 2025 Dennis Michael Heine

param(
  [string]$OutDir = "build/harvos_server"
)

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
$OutPath = Join-Path $Root $OutDir
$PidPath = Join-Path $OutPath "server.pid"
$StatusPath = Join-Path $OutPath "status.json"

if (Test-Path $PidPath) {
  $PidValue = [int](Get-Content $PidPath)
  Stop-Process -Id $PidValue -ErrorAction SilentlyContinue
  Remove-Item -Force $PidPath -ErrorAction SilentlyContinue
  Remove-Item -Force $StatusPath -ErrorAction SilentlyContinue
  Write-Output "stopped=$PidValue"
} else {
  Write-Output "stopped=none"
}
