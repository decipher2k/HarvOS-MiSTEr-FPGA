<!-- Copyright 2025 Dennis Michael Heine -->

# HarvOS Production Readiness

This repository now has a production gate. A release is production-ready only when:

- reference ISA, image, kernel-policy, service-policy tests pass,
- a production image is signed and verified with a non-default key file,
- RTL structure checks pass,
- external FPGA/formal tools are installed and pass their flows,
- Quartus timing closure and hardware validation are complete.

Run the local gate:

```powershell
scripts/build_release.ps1
```

For a real release, create `release/production.key` from a secure secret store or HSM-backed process before running the gate. Key files are ignored by git. The current standard-library implementation uses HMAC-SHA256 for deterministic release signing. A deployment with untrusted update channels should replace this with a hardware-rooted asymmetric signature accelerator and matching boot ROM verifier.

Known release blockers in this environment:

- Quartus tools are not in `PATH`.
- Verilator/Yosys/SymbiYosys are not in `PATH`.
- FPGA timing closure has not been run on this machine.
