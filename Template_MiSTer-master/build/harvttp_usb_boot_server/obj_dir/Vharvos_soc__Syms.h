// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHARVOS_SOC__SYMS_H_
#define VERILATED_VHARVOS_SOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vharvos_soc.h"

// INCLUDE MODULE CLASSES
#include "Vharvos_soc___024root.h"
#include "Vharvos_soc___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vharvos_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vharvos_soc* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vharvos_soc___024root          TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_harvos_soc__assertions;
    VerilatedScope* __Vscopep_harvos_soc__net_card;

    // CONSTRUCTORS
    Vharvos_soc__Syms(VerilatedContext* contextp, const char* namep, Vharvos_soc* modelp);
    ~Vharvos_soc__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
