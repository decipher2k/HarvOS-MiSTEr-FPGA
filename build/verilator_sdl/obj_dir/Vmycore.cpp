// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmycore__pch.h"

//============================================================
// Constructors

Vmycore::Vmycore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmycore__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , pal{vlSymsp->TOP.pal}
    , scandouble{vlSymsp->TOP.scandouble}
    , bootrom_wr{vlSymsp->TOP.bootrom_wr}
    , bootrom_loaded{vlSymsp->TOP.bootrom_loaded}
    , ce_pix{vlSymsp->TOP.ce_pix}
    , HBlank{vlSymsp->TOP.HBlank}
    , HSync{vlSymsp->TOP.HSync}
    , VBlank{vlSymsp->TOP.VBlank}
    , VSync{vlSymsp->TOP.VSync}
    , video_r{vlSymsp->TOP.video_r}
    , video_g{vlSymsp->TOP.video_g}
    , video_b{vlSymsp->TOP.video_b}
    , bootrom_data{vlSymsp->TOP.bootrom_data}
    , bootrom_addr{vlSymsp->TOP.bootrom_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmycore::Vmycore(const char* _vcname__)
    : Vmycore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmycore::~Vmycore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmycore___024root___eval_debug_assertions(Vmycore___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycore___024root___eval_static(Vmycore___024root* vlSelf);
void Vmycore___024root___eval_initial(Vmycore___024root* vlSelf);
void Vmycore___024root___eval_settle(Vmycore___024root* vlSelf);
void Vmycore___024root___eval(Vmycore___024root* vlSelf);

void Vmycore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmycore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmycore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmycore___024root___eval_static(&(vlSymsp->TOP));
        Vmycore___024root___eval_initial(&(vlSymsp->TOP));
        Vmycore___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmycore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmycore::eventsPending() { return false; }

uint64_t Vmycore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmycore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmycore___024root___eval_final(Vmycore___024root* vlSelf);

VL_ATTR_COLD void Vmycore::final() {
    contextp()->executingFinal(true);
    Vmycore___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmycore::hierName() const { return vlSymsp->name(); }
const char* Vmycore::modelName() const { return "Vmycore"; }
unsigned Vmycore::threads() const { return 1; }
void Vmycore::prepareClone() const { contextp()->prepareClone(); }
void Vmycore::atClone() const {
    contextp()->threadPoolpOnClone();
}
