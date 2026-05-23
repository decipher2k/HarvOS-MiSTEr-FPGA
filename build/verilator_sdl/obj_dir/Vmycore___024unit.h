// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycore.h for the primary calling header

#ifndef VERILATED_VMYCORE___024UNIT_H_
#define VERILATED_VMYCORE___024UNIT_H_  // guard

#include "verilated.h"


class Vmycore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmycore___024unit final {
  public:

    // INTERNAL VARIABLES
    Vmycore__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmycore___024unit();
    ~Vmycore___024unit();
    void ctor(Vmycore__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vmycore___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
