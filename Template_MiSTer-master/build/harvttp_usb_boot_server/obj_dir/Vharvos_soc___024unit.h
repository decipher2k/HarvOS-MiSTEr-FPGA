// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vharvos_soc.h for the primary calling header

#ifndef VERILATED_VHARVOS_SOC___024UNIT_H_
#define VERILATED_VHARVOS_SOC___024UNIT_H_  // guard

#include "verilated.h"


class Vharvos_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vharvos_soc___024unit final {
  public:

    // INTERNAL VARIABLES
    Vharvos_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vharvos_soc___024unit();
    ~Vharvos_soc___024unit();
    void ctor(Vharvos_soc__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vharvos_soc___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
