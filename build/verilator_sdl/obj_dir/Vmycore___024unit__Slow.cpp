// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycore.h for the primary calling header

#include "Vmycore__pch.h"


Vmycore___024unit::Vmycore___024unit() = default;
Vmycore___024unit::~Vmycore___024unit() = default;

void Vmycore___024unit::ctor(Vmycore__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vmycore___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vmycore___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
