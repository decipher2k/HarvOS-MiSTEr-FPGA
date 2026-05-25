// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycore.h for the primary calling header

#include "Vmycore__pch.h"

void Vmycore___024root___ctor_var_reset(Vmycore___024root* vlSelf);

Vmycore___024root::Vmycore___024root(Vmycore__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmycore___024root___ctor_var_reset(this);
}

void Vmycore___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmycore___024root::~Vmycore___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
