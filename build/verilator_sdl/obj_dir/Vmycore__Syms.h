// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMYCORE__SYMS_H_
#define VERILATED_VMYCORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmycore.h"

// INCLUDE MODULE CLASSES
#include "Vmycore___024root.h"
#include "Vmycore___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vmycore__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmycore* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmycore___024root              TOP;

    // CONSTRUCTORS
    Vmycore__Syms(VerilatedContext* contextp, const char* namep, Vmycore* modelp);
    ~Vmycore__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
