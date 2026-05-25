// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vharvos_soc__pch.h"

Vharvos_soc__Syms::Vharvos_soc__Syms(VerilatedContext* contextp, const char* namep, Vharvos_soc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(4669);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_harvos_soc__assertions = new VerilatedScope{this, "harvos_soc.assertions", "assertions", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    __Vscopep_harvos_soc__net_card = new VerilatedScope{this, "harvos_soc.net_card", "net_card", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_harvos_soc__net_card->varInsert("irq_status", &(TOP.harvos_soc__DOT__net_card__DOT__irq_status), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RD, 0, 1 ,31,0);
    __Vscopep_harvos_soc__net_card->varInsert("rx_ready_latched", &(TOP.harvos_soc__DOT__net_card__DOT__rx_ready_latched), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RD, 0, 0);
    __Vscopep_harvos_soc__net_card->varInsert("rx_start_count", &(TOP.harvos_soc__DOT__net_card__DOT__rx_start_count), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RD, 0, 1 ,31,0);
    __Vscopep_harvos_soc__net_card->varInsert("rx_start_fault_count", &(TOP.harvos_soc__DOT__net_card__DOT__rx_start_fault_count), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RD, 0, 1 ,31,0);
    __Vscopep_harvos_soc__net_card->varInsert("tx_desc_count", &(TOP.harvos_soc__DOT__net_card__DOT__tx_desc_count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RD, 0, 1 ,3,0);
}

Vharvos_soc__Syms::~Vharvos_soc__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_harvos_soc__assertions, __Vscopep_harvos_soc__assertions = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harvos_soc__net_card, __Vscopep_harvos_soc__net_card = nullptr);
    // Tear down sub module instances
}
