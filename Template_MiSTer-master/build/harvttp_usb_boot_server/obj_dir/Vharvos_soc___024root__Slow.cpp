// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vharvos_soc.h for the primary calling header

#include "Vharvos_soc__pch.h"

void Vharvos_soc___024root___ctor_var_reset(Vharvos_soc___024root* vlSelf);

Vharvos_soc___024root::Vharvos_soc___024root(Vharvos_soc__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vharvos_soc___024root___ctor_var_reset(this);
}

void Vharvos_soc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vharvos_soc___024root::~Vharvos_soc___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
