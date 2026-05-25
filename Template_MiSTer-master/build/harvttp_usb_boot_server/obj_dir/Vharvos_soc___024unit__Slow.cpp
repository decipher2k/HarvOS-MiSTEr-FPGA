// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vharvos_soc.h for the primary calling header

#include "Vharvos_soc__pch.h"


Vharvos_soc___024unit::Vharvos_soc___024unit() = default;
Vharvos_soc___024unit::~Vharvos_soc___024unit() = default;

void Vharvos_soc___024unit::ctor(Vharvos_soc__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vharvos_soc___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vharvos_soc___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
