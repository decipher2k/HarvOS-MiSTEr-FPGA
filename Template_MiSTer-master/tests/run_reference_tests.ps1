# Copyright 2025 Dennis Michael Heine

$ErrorActionPreference = "Stop"
$Root = Split-Path -Parent $PSScriptRoot
$Python = "python"
$Asm = Join-Path $Root "tools/harvos_asm.py"
$Iss = Join-Path $Root "tools/harvos_iss.py"
$Program = Join-Path $Root "tests/boot_demo.hvasm"
$Hex = Join-Path $Root "tests/boot_demo.hex"

& $Python $Asm $Program -o $Hex
& $Python $Iss $Hex --steps 80
& $Python (Join-Path $Root "tools/harvos_image.py") --rom $Hex --services (Join-Path $Root "software/services/service_manifest.json") -o (Join-Path $Root "tests/boot_image.json")
& $Python (Join-Path $Root "tests/usb_image_smoke.py")
& powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $Root "scripts/run_processor_boot_test.ps1")
& $Python (Join-Path $Root "tests/kernel_model_smoke.py")
& $Python (Join-Path $Root "tests/service_model_smoke.py")
