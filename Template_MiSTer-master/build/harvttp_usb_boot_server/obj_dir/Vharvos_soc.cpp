// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vharvos_soc__pch.h"

//============================================================
// Constructors

Vharvos_soc::Vharvos_soc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vharvos_soc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , debug_trap{vlSymsp->TOP.debug_trap}
    , usb_dp_i{vlSymsp->TOP.usb_dp_i}
    , usb_dm_i{vlSymsp->TOP.usb_dm_i}
    , usb_dp_drive_low{vlSymsp->TOP.usb_dp_drive_low}
    , usb_dm_drive_low{vlSymsp->TOP.usb_dm_drive_low}
    , usb_port_power_en{vlSymsp->TOP.usb_port_power_en}
    , usb_port_overcurrent_n{vlSymsp->TOP.usb_port_overcurrent_n}
    , utmi_data_o{vlSymsp->TOP.utmi_data_o}
    , utmi_data_i{vlSymsp->TOP.utmi_data_i}
    , utmi_tx_valid{vlSymsp->TOP.utmi_tx_valid}
    , utmi_tx_ready{vlSymsp->TOP.utmi_tx_ready}
    , utmi_rx_valid{vlSymsp->TOP.utmi_rx_valid}
    , utmi_rx_active{vlSymsp->TOP.utmi_rx_active}
    , utmi_rx_error{vlSymsp->TOP.utmi_rx_error}
    , utmi_line_state{vlSymsp->TOP.utmi_line_state}
    , utmi_xcvr_select{vlSymsp->TOP.utmi_xcvr_select}
    , utmi_op_mode{vlSymsp->TOP.utmi_op_mode}
    , utmi_term_select{vlSymsp->TOP.utmi_term_select}
    , utmi_suspend_n{vlSymsp->TOP.utmi_suspend_n}
    , utmi_reset_n{vlSymsp->TOP.utmi_reset_n}
    , net_link_up{vlSymsp->TOP.net_link_up}
    , net_rx_valid{vlSymsp->TOP.net_rx_valid}
    , net_rx_last{vlSymsp->TOP.net_rx_last}
    , net_rx_error{vlSymsp->TOP.net_rx_error}
    , net_rx_ready{vlSymsp->TOP.net_rx_ready}
    , net_tx_valid{vlSymsp->TOP.net_tx_valid}
    , net_tx_last{vlSymsp->TOP.net_tx_last}
    , net_tx_ready{vlSymsp->TOP.net_tx_ready}
    , hps_img_mounted{vlSymsp->TOP.hps_img_mounted}
    , hps_img_readonly{vlSymsp->TOP.hps_img_readonly}
    , hps_sd_rd{vlSymsp->TOP.hps_sd_rd}
    , hps_sd_wr{vlSymsp->TOP.hps_sd_wr}
    , hps_sd_ack{vlSymsp->TOP.hps_sd_ack}
    , hps_sd_buff_wr{vlSymsp->TOP.hps_sd_buff_wr}
    , hps_sd_buff_addr{vlSymsp->TOP.hps_sd_buff_addr}
    , hps_sd_buff_dout{vlSymsp->TOP.hps_sd_buff_dout}
    , debug_pc{vlSymsp->TOP.debug_pc}
    , debug_instr{vlSymsp->TOP.debug_instr}
    , debug_scause{vlSymsp->TOP.debug_scause}
    , debug_stval{vlSymsp->TOP.debug_stval}
    , debug_state{vlSymsp->TOP.debug_state}
    , debug_kernel_status{vlSymsp->TOP.debug_kernel_status}
    , debug_hps_boot_word{vlSymsp->TOP.debug_hps_boot_word}
    , debug_net_boot_word{vlSymsp->TOP.debug_net_boot_word}
    , debug_word0{vlSymsp->TOP.debug_word0}
    , debug_word1{vlSymsp->TOP.debug_word1}
    , debug_word2{vlSymsp->TOP.debug_word2}
    , debug_entropy{vlSymsp->TOP.debug_entropy}
    , net_rx_word{vlSymsp->TOP.net_rx_word}
    , net_tx_word{vlSymsp->TOP.net_tx_word}
    , hps_img_size{vlSymsp->TOP.hps_img_size}
    , hps_sd_lba{vlSymsp->TOP.hps_sd_lba}
    , hps_sd_blk_cnt{vlSymsp->TOP.hps_sd_blk_cnt}
    , hps_sd_buff_din{vlSymsp->TOP.hps_sd_buff_din}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vharvos_soc::Vharvos_soc(const char* _vcname__)
    : Vharvos_soc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vharvos_soc::~Vharvos_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vharvos_soc___024root___eval_debug_assertions(Vharvos_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vharvos_soc___024root___eval_static(Vharvos_soc___024root* vlSelf);
void Vharvos_soc___024root___eval_initial(Vharvos_soc___024root* vlSelf);
void Vharvos_soc___024root___eval_settle(Vharvos_soc___024root* vlSelf);
void Vharvos_soc___024root___eval(Vharvos_soc___024root* vlSelf);

void Vharvos_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vharvos_soc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vharvos_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vharvos_soc___024root___eval_static(&(vlSymsp->TOP));
        Vharvos_soc___024root___eval_initial(&(vlSymsp->TOP));
        Vharvos_soc___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vharvos_soc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vharvos_soc::eventsPending() { return false; }

uint64_t Vharvos_soc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vharvos_soc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vharvos_soc___024root___eval_final(Vharvos_soc___024root* vlSelf);

VL_ATTR_COLD void Vharvos_soc::final() {
    contextp()->executingFinal(true);
    Vharvos_soc___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vharvos_soc::hierName() const { return vlSymsp->name(); }
const char* Vharvos_soc::modelName() const { return "Vharvos_soc"; }
unsigned Vharvos_soc::threads() const { return 1; }
void Vharvos_soc::prepareClone() const { contextp()->prepareClone(); }
void Vharvos_soc::atClone() const {
    contextp()->threadPoolpOnClone();
}
