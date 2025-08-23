// harvos_pkg.svh shim for synthesis on Quartus
// If the flattened package is already included, do nothing to avoid redefinition.
// Otherwise, fall back to the original file in rtl/harvos/.
`ifndef HARVOS_PKG_SVH_SHIM
`define HARVOS_PKG_SVH_SHIM 1
`ifdef HARVOS_PKG_FLAT_SVH
  // no-op: flat package provides needed types/consts
`else
  `include "harvos/harvos_pkg.svh"
`endif
`endif
