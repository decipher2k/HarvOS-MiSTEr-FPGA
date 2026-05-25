// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vharvos_soc.h for the primary calling header

#include "Vharvos_soc__pch.h"

void Vharvos_soc___024root___nba_sequent__TOP__1(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___nba_sequent__TOP__1\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ harvos_soc__DOT__fetch_pt_l1_rdata0;
    harvos_soc__DOT__fetch_pt_l1_rdata0 = 0;
    IData/*31:0*/ harvos_soc__DOT__fetch_pt_l0_rdata0;
    harvos_soc__DOT__fetch_pt_l0_rdata0 = 0;
    IData/*31:0*/ harvos_soc__DOT__data_pt_l1_rdata0;
    harvos_soc__DOT__data_pt_l1_rdata0 = 0;
    IData/*31:0*/ harvos_soc__DOT__data_pt_l0_rdata0;
    harvos_soc__DOT__data_pt_l0_rdata0 = 0;
    IData/*31:0*/ harvos_soc__DOT__fetch_pt_l1_rdata1;
    harvos_soc__DOT__fetch_pt_l1_rdata1 = 0;
    IData/*31:0*/ harvos_soc__DOT__fetch_pt_l0_rdata1;
    harvos_soc__DOT__fetch_pt_l0_rdata1 = 0;
    IData/*31:0*/ harvos_soc__DOT__data_pt_l1_rdata1;
    harvos_soc__DOT__data_pt_l1_rdata1 = 0;
    IData/*31:0*/ harvos_soc__DOT__data_pt_l0_rdata1;
    harvos_soc__DOT__data_pt_l0_rdata1 = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr = 0;
    QData/*32:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_off;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_off = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_paddr;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_paddr = 0;
    QData/*32:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_end;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_end = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr = 0;
    QData/*32:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_off;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_off = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_paddr;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_paddr = 0;
    QData/*32:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_end;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_end = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__102__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__102__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__off = 0;
    SData/*9:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__168__timer;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__168__timer = 0;
    SData/*15:0*/ __Vfunc_usb_crc16_next__175__Vfuncout;
    __Vfunc_usb_crc16_next__175__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_usb_crc16_next__175__crc_in;
    __Vfunc_usb_crc16_next__175__crc_in = 0;
    CData/*7:0*/ __Vfunc_usb_crc16_next__175__data;
    __Vfunc_usb_crc16_next__175__data = 0;
    SData/*15:0*/ __Vfunc_usb_crc16_next__175__crc;
    __Vfunc_usb_crc16_next__175__crc = 0;
    CData/*0:0*/ __Vfunc_usb_crc16_next__175__mix;
    __Vfunc_usb_crc16_next__175__mix = 0;
    SData/*15:0*/ __Vfunc_usb_crc16_next__176__Vfuncout;
    __Vfunc_usb_crc16_next__176__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_usb_crc16_next__176__crc_in;
    __Vfunc_usb_crc16_next__176__crc_in = 0;
    CData/*7:0*/ __Vfunc_usb_crc16_next__176__data;
    __Vfunc_usb_crc16_next__176__data = 0;
    SData/*15:0*/ __Vfunc_usb_crc16_next__176__crc;
    __Vfunc_usb_crc16_next__176__crc = 0;
    CData/*0:0*/ __Vfunc_usb_crc16_next__176__mix;
    __Vfunc_usb_crc16_next__176__mix = 0;
    CData/*0:0*/ __Vfunc_usb_pid_valid__177__Vfuncout;
    __Vfunc_usb_pid_valid__177__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_usb_pid_valid__177__pid_byte;
    __Vfunc_usb_pid_valid__177__pid_byte = 0;
    CData/*0:0*/ __Vfunc_usb_pid_is_data__178__Vfuncout;
    __Vfunc_usb_pid_is_data__178__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_usb_pid_is_data__178__pid;
    __Vfunc_usb_pid_is_data__178__pid = 0;
    CData/*0:0*/ __Vfunc_usb_pid_is_token__179__Vfuncout;
    __Vfunc_usb_pid_is_token__179__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_usb_pid_is_token__179__pid;
    __Vfunc_usb_pid_is_token__179__pid = 0;
    CData/*1:0*/ __Vfunc_usb_handshake_code__180__Vfuncout;
    __Vfunc_usb_handshake_code__180__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_usb_handshake_code__180__pid;
    __Vfunc_usb_handshake_code__180__pid = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    QData/*32:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    // Body
    vlSelfRef.harvos_soc__DOT__net_card__DOT__link_prev 
        = ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__cpu_reset))) 
           && (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status_view 
        = (vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status 
           | (0x00000010U & (- (IData)((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ready_latched)))));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode 
        = (IData)((0U != (0x00000012U & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
                                                 & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)) 
                                                    & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__active_len 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)
            ? vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_len
            : vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len);
    vlSelfRef.debug_hps_boot_word = vlSelfRef.harvos_soc__DOT__dmem[4U];
    vlSelfRef.debug_word0 = vlSelfRef.harvos_soc__DOT__dmem[0U];
    vlSelfRef.debug_word1 = ((((IData)(vlSelfRef.harvos_soc__DOT__l1d0__DOT__hit_count) 
                               << 0x00000010U) | (IData)(vlSelfRef.harvos_soc__DOT__l1d0__DOT__miss_count)) 
                             ^ (vlSelfRef.harvos_soc__DOT__dmem[1U] 
                                ^ (vlSelfRef.harvos_soc__DOT__dmem[3U] 
                                   ^ (((IData)(vlSelfRef.harvos_soc__DOT__l1d1__DOT__hit_count) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.harvos_soc__DOT__l1d1__DOT__miss_count)))));
    vlSelfRef.debug_net_boot_word = vlSelfRef.harvos_soc__DOT__dmem[64U];
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_next_addr 
        = (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base 
           + vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress);
    if (vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__packet_engine__reset) {
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc = 0xffffU;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_busy = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len = 0U;
    } else {
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done = 0U;
        if ((8U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 0U;
        } else if ((4U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_busy = 0U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 0U;
                } else {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_busy = 0U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
                if ((0U != (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay))) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay 
                        = (0x0000ffffU & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay) 
                                          - (IData)(1U)));
                } else {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc = 0xffffU;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 1U;
                }
            } else if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid) 
                        & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_ready))) {
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 6U;
            }
        } else if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
                if ((2U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)) {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake = 1U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len 
                        = (0x0000ffffU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len);
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 6U;
                } else if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_done) {
                    if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_error) {
                        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count) 
                             < (0x0000000fU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl))) {
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay = 0x0100U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 5U;
                        } else {
                            vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 7U;
                        }
                    } else if ((1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake))) {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake = 1U;
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len 
                            = (0x0000ffffU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len);
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 6U;
                    } else if ((2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake))) {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake = 2U;
                        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count) 
                             < (0x0000000fU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl))) {
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay = 0x0100U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 5U;
                        } else {
                            vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 7U;
                        }
                    } else if ((3U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake))) {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake = 3U;
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 7U;
                    } else if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet) 
                                & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_crc_ok))) {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake = 1U;
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len 
                            = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_payload_len;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 4U;
                    } else if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count) 
                                < (0x0000000fU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl))) {
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay = 0x0100U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 5U;
                    } else {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 7U;
                    }
                } else if ((0x0000bb80U <= vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count)) {
                    if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count) 
                         < (0x0000000fU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl))) {
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay = 0x0100U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 5U;
                    } else {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 7U;
                    }
                } else {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count 
                        = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count);
                }
            } else if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid) 
                        & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_ready))) {
                if (((0U != (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index)) 
                     & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index) 
                        <= (0x0000ffffU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len)))) {
                    __Vfunc_usb_crc16_next__175__data 
                        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__generated_payload_byte;
                    __Vfunc_usb_crc16_next__175__crc_in 
                        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc;
                    __Vfunc_usb_crc16_next__175__crc 
                        = __Vfunc_usb_crc16_next__175__crc_in;
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ (IData)(__Vfunc_usb_crc16_next__175__data)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__175__data) 
                                    >> 1U)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__175__data) 
                                    >> 2U)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__175__data) 
                                    >> 3U)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__175__data) 
                                    >> 4U)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__175__data) 
                                    >> 5U)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__175__data) 
                                    >> 6U)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__175__data) 
                                    >> 7U)));
                    __Vfunc_usb_crc16_next__175__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__175__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__175__mix) {
                        __Vfunc_usb_crc16_next__175__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__175__crc));
                    }
                    __Vfunc_usb_crc16_next__175__Vfuncout 
                        = __Vfunc_usb_crc16_next__175__crc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc 
                        = __Vfunc_usb_crc16_next__175__Vfuncout;
                }
                if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index) 
                     == (0x0000ffffU & ((IData)(2U) 
                                        + vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len)))) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 3U;
                } else {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
            if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid) 
                 & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_ready))) {
                if ((2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index))) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc = 0xffffU;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state 
                        = (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__needs_out_data) 
                            & (0U != (0x0000ffffU & vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len)))
                            ? 2U : (((9U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code)) 
                                     | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__needs_out_data))
                                     ? 3U : 6U));
                } else {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index)));
                }
            }
        } else {
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_busy = 0U;
            if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_transfer) {
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear = 1U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count = 0U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake = 0U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc = 0xffffU;
                if ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                     & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected))) {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_busy = 1U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 1U;
                } else {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_busy = 0U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 7U;
                }
            }
        }
    }
    vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr 
        = vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__target_addr;
    vlSelfRef.harvos_soc__DOT__imem_loader__DOT__data_word 
        = vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__data_word;
    vlSelfRef.harvos_soc__DOT__imem_loader__DOT__write_count 
        = vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__write_count;
    __VdfgRegularize_h6e95ff9d_0_31 = (1U & (~ (VL_REDXOR_8(
                                                            (0x00000084U 
                                                             & vlSelfRef.harvos_soc__DOT__usb_host__DOT__token)) 
                                                ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))));
    __VdfgRegularize_h6e95ff9d_0_32 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                             ^ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                                 >> 8U) 
                                                ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30))));
    __VdfgRegularize_h6e95ff9d_0_13 = (1U & (~ (VL_REDXOR_8(
                                                            (0x00000042U 
                                                             & vlSelfRef.harvos_soc__DOT__usb_host__DOT__token)) 
                                                ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_val;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs2_val;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_q = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_q;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__rd_q = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rd_q;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__wb_data = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__next_pc = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__next_pc;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stvec;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sepc 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_srandom 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_srandom;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stval 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval;
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v0) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v1) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[31U] = 0U;
    }
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v32) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v33) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs[vlSelfRef.__VdlyDim0__harvos_soc__DOT__cpu1__DOT__regs__v33] 
            = vlSelfRef.__VdlyVal__harvos_soc__DOT__cpu1__DOT__regs__v33;
    }
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__instr;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__wb_en = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_smpuctl 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_smpuctl;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scause 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scaps 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scaps;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_funct3;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_load 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_count 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_count;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_satp;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_addr 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_addr;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_addr;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__state = vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_val;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs2_val;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_q = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_q;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__rd_q = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rd_q;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__wb_data = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__next_pc = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__next_pc;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stvec;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sepc 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_srandom 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_srandom;
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__imem__v0) {
        vlSelfRef.harvos_soc__DOT__imem[vlSelfRef.__VdlyDim0__harvos_soc__DOT__imem__v0] 
            = vlSelfRef.__VdlyVal__harvos_soc__DOT__imem__v0;
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stval 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval;
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v0) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v1) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[31U] = 0U;
    }
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v32) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v33) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs[vlSelfRef.__VdlyDim0__harvos_soc__DOT__cpu0__DOT__regs__v33] 
            = vlSelfRef.__VdlyVal__harvos_soc__DOT__cpu0__DOT__regs__v33;
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__instr;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__wb_en = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_smpuctl 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_smpuctl;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scause 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause;
    vlSelfRef.harvos_soc__DOT__entropy_lfsr = vlSelfRef.__Vdly__harvos_soc__DOT__entropy_lfsr;
    vlSelfRef.harvos_soc__DOT__usb_irq = (0U != (vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status 
                                                 & vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_enable));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scaps 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scaps;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_funct3;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_load 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_count 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_count;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_satp;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_addr 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_addr;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr 
        = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_addr;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__state = vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up 
        = (1U & ((IData)(vlSelfRef.net_link_up) | (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                                                   >> 4U)));
    vlSelfRef.harvos_soc__DOT__net_irq = (0U != (vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_enable 
                                                 & vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status_view));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__selected_rx_word 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)
            ? ((IData)(vlSelfRef.net_rx_valid) ? vlSelfRef.net_rx_word
                : ((2U & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl)
                    ? (0x01010101U ^ vlSelfRef.harvos_soc__DOT__net_card__DOT__last_tx_word)
                    : (vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_lo 
                       ^ (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_count 
                          ^ (0x484e0000U | (0x0000ffffU 
                                            & vlSelfRef.harvos_soc__DOT__net_card__DOT__progress))))))
            : vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_data
           [vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd]);
    vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining 
        = (vlSelfRef.harvos_soc__DOT__net_card__DOT__active_len 
           - vlSelfRef.harvos_soc__DOT__net_card__DOT__progress);
    vlSelfRef.harvos_soc__DOT__net_card__DOT__active 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
           & (vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
              < vlSelfRef.harvos_soc__DOT__net_card__DOT__active_len));
    vlSelfRef.debug_word2 = (vlSelfRef.debug_net_boot_word 
                             ^ (vlSelfRef.harvos_soc__DOT__trace_digest 
                                ^ ((((IData)(vlSelfRef.harvos_soc__DOT__l2__DOT__hits) 
                                     << 0x00000010U) 
                                    | (IData)(vlSelfRef.harvos_soc__DOT__l2__DOT__misses)) 
                                   ^ (vlSelfRef.harvos_soc__DOT__dmem[2U] 
                                      ^ (((IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__invalidations) 
                                          << 0x00000010U) 
                                         | (IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__shared_reads))))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code 
        = (0x0000000fU & (((0x0000000fU & (~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                              >> 8U))) 
                           == (0x0000000fU & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                              >> 0x0000000cU)))
                           ? (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                              >> 8U) : ((1U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__token)
                                         ? 9U : 1U)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__retry_ctrl;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__dma_total_len;
    __VdfgRegularize_h6e95ff9d_0_29 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                             ^ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                                 >> 0x0000000aU) 
                                                ^ (IData)(__VdfgRegularize_h6e95ff9d_0_31))));
    __VdfgRegularize_h6e95ff9d_0_33 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                             ^ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                                 >> 9U) 
                                                ^ (IData)(__VdfgRegularize_h6e95ff9d_0_13))));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i = (
                                                   ((- (IData)(
                                                               (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                      >> 0x00000014U));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_u = (0xfffff000U 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (0x000fffffU 
                                                 & (- (IData)(
                                                              (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                               >> 0x0000001fU))));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags = 0U;
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr = 0U;
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U];
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
    }
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 0U;
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U];
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr 
        = (VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp, 0x0000000cU) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                             >> 0x00000014U)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__106__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx]
            : 0U);
    harvos_soc__DOT__fetch_pt_l1_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_load) 
           & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state)));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store 
        = (((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state)) 
            & (0U != vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_count)) 
           | ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store) 
              & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
        = ((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))
            ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr
            : vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_addr);
    vlSelfRef.debug_stval = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stval 
                             ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stval);
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i = (
                                                   ((- (IData)(
                                                               (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                      >> 0x00000014U));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_u = (0xfffff000U 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = (0x000fffffU 
                                                 & (- (IData)(
                                                              (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                               >> 0x0000001fU))));
    vlSelfRef.debug_instr = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                             ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr);
    vlSelfRef.debug_scause = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scause 
                              ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scause);
    vlSelfRef.debug_entropy = vlSelfRef.harvos_soc__DOT__entropy_lfsr;
    vlSelfRef.debug_pc = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags = 0U;
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr = 0U;
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U];
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 0U;
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U];
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr 
        = (VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp, 0x0000000cU) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                             >> 0x00000014U)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__102__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx]
            : 0U);
    harvos_soc__DOT__fetch_pt_l1_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__102__Vfuncout;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_load) 
           & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state)));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store 
        = (((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state)) 
            & (0U != vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_count)) 
           | ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store) 
              & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
        = ((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))
            ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr
            : vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_addr);
    if (vlSelfRef.harvos_soc__DOT__cpu_reset) {
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive = 0U;
    } else if (((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__hps_block__mmio_req) 
                & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
        if ((4U != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
            if ((0x0cU == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive 
                    = (1U & vlSelfRef.harvos_soc__DOT__bus_wdata);
            }
        }
    }
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_mounted 
        = (1U & ((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted) 
                 >> (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive)));
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_readonly 
        = (1U & ((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly) 
                 >> (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                                                & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__status_word 
        = (((((((IData)(vlSelfRef.net_rx_error) << 3U) 
               | (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)
                    ? (IData)(vlSelfRef.net_rx_valid)
                    : (0U != (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count))) 
                  << 2U)) | (((IData)(vlSelfRef.net_tx_ready) 
                              << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.harvos_soc__DOT__net_irq) 
                                   << 3U) | ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__fault) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__done) 
                                     << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy))) 
                                << 8U)) | ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up) 
                                           << 7U));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step 
        = (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)
             ? ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)
                 ? ((IData)(vlSelfRef.net_rx_valid) 
                    | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode))
                 : ((0U != (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count)) 
                    & (0U != (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count))))
             : ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)
                 ? ((1U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))
                 : ((IData)(vlSelfRef.net_tx_ready) 
                    | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)))) 
           & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__active));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__needs_out_data 
        = ((1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code)) 
           | (0x0dU == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__generated_payload_byte 
        = (0x000000ffU & (0xa5U ^ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                   ^ ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index) 
                                      ^ vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid 
        = ((1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state)) 
           || ((2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state)) 
               || (4U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count));
    __VdfgRegularize_h6e95ff9d_0_24 = (0x00000001ffffffffULL 
                                       & ((QData)((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len)) 
                                          + (QData)((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base))));
    if ((1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_last 
            = (2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index));
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_data 
            = (0x000000ffU & ((0U == (3U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index)))
                               ? ((0x000000f0U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code)) 
                                                  << 4U)) 
                                  | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code))
                               : ((1U == (3U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index)))
                                   ? vlSelfRef.harvos_soc__DOT__usb_host__DOT__token
                                   : ((0x000000f8U 
                                       & ((~ ((((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                                << 4U) 
                                               | (((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                                   << 3U) 
                                                  | (((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                                      ^ (IData)(__VdfgRegularize_h6e95ff9d_0_29)) 
                                                     << 2U))) 
                                              | ((((IData)(__VdfgRegularize_h6e95ff9d_0_31) 
                                                   ^ (IData)(__VdfgRegularize_h6e95ff9d_0_33)) 
                                                  << 1U) 
                                                 | ((IData)(__VdfgRegularize_h6e95ff9d_0_13) 
                                                    ^ (IData)(__VdfgRegularize_h6e95ff9d_0_32))))) 
                                          << 3U)) | 
                                      (7U & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                             >> 8U))))));
    } else if ((2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))) {
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_last 
            = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index) 
               == (0x0000ffffU & ((IData)(2U) + vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len)));
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_data 
            = (0x000000ffU & ((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index))
                               ? ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                     ? (0x0000000fU 
                                        & (~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                              >> 0x00000010U)))
                                     : 0x0000000cU) 
                                   << 4U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                              ? (0x0000000fU 
                                                 & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                                    >> 0x00000010U))
                                              : 3U))
                               : (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index) 
                                   <= (0x0000ffffU 
                                       & vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len))
                                   ? (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__generated_payload_byte)
                                   : (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index) 
                                       == (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len)))
                                       ? (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc))
                                       : (~ ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc) 
                                             >> 8U))))));
    } else {
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_last 
            = (4U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state));
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_data 
            = (0x000000ffU & ((4U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))
                               ? 0xd2U : 0U));
    }
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy) 
           & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress 
              < vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len));
    if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__packet_engine__reset) 
         | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear))) {
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc = 0xffffU;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0 = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1 = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_done = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_code = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_crc_ok = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_token_packet = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_payload_len = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_error = 0U;
    } else {
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_done = 0U;
        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active) 
             & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__active_d)))) {
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc = 0xffffU;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0 = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1 = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_crc_ok = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_token_packet = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_payload_len = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_error = 0U;
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active) 
             & ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                    >> 1U)) & ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                                ? ((IData)(vlSelfRef.utmi_rx_error) 
                                   & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                      >> 4U)) : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_error))))) {
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen = 1U;
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active) 
             & ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                    >> 1U)) & ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                                ? ((IData)(vlSelfRef.utmi_rx_valid) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_valid))))) {
            if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid) {
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes)));
                if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet) 
                     & (2U <= (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes)))) {
                    __Vfunc_usb_crc16_next__176__data 
                        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1;
                    __Vfunc_usb_crc16_next__176__crc_in 
                        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc;
                    __Vfunc_usb_crc16_next__176__crc 
                        = __Vfunc_usb_crc16_next__176__crc_in;
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ (IData)(__Vfunc_usb_crc16_next__176__data)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__176__data) 
                                    >> 1U)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__176__data) 
                                    >> 2U)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__176__data) 
                                    >> 3U)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__176__data) 
                                    >> 4U)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__176__data) 
                                    >> 5U)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__176__data) 
                                    >> 6U)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__mix 
                        = (1U & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                 ^ ((IData)(__Vfunc_usb_crc16_next__176__data) 
                                    >> 7U)));
                    __Vfunc_usb_crc16_next__176__crc 
                        = (0x00007fffU & ((IData)(__Vfunc_usb_crc16_next__176__crc) 
                                          >> 1U));
                    if (__Vfunc_usb_crc16_next__176__mix) {
                        __Vfunc_usb_crc16_next__176__crc 
                            = (0xa001U ^ (IData)(__Vfunc_usb_crc16_next__176__crc));
                    }
                    __Vfunc_usb_crc16_next__176__Vfuncout 
                        = __Vfunc_usb_crc16_next__176__crc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc 
                        = __Vfunc_usb_crc16_next__176__Vfuncout;
                }
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1 
                    = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0 
                    = vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data;
            } else {
                __Vfunc_usb_pid_valid__177__pid_byte 
                    = vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data;
                __Vfunc_usb_pid_is_data__178__pid = 
                    (0x0000000fU & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data));
                __Vfunc_usb_pid_is_token__179__pid 
                    = (0x0000000fU & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data));
                __Vfunc_usb_handshake_code__180__pid 
                    = (0x0000000fU & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data));
                __Vfunc_usb_pid_valid__177__Vfuncout 
                    = ((0x0000000fU & ((IData)(__Vfunc_usb_pid_valid__177__pid_byte) 
                                       >> 4U)) == (0x0000000fU 
                                                   & (~ (IData)(__Vfunc_usb_pid_valid__177__pid_byte))));
                __Vfunc_usb_pid_is_data__178__Vfuncout 
                    = ((3U == (IData)(__Vfunc_usb_pid_is_data__178__pid)) 
                       | (0x0bU == (IData)(__Vfunc_usb_pid_is_data__178__pid)));
                __Vfunc_usb_pid_is_token__179__Vfuncout 
                    = ((((1U == (IData)(__Vfunc_usb_pid_is_token__179__pid)) 
                         | (9U == (IData)(__Vfunc_usb_pid_is_token__179__pid))) 
                        | (5U == (IData)(__Vfunc_usb_pid_is_token__179__pid))) 
                       | (0x0dU == (IData)(__Vfunc_usb_pid_is_token__179__pid)));
                __Vfunc_usb_handshake_code__180__Vfuncout 
                    = ((8U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                        ? ((4U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                            ? ((2U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                ? ((1U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                    ? 0U : 3U) : 0U)
                            : ((2U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                ? ((1U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                    ? 0U : 2U) : 0U))
                        : ((4U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                            ? ((2U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                ? ((1U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                    ? 0U : 2U) : 0U)
                            : ((2U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                ? ((1U & (IData)(__Vfunc_usb_handshake_code__180__pid))
                                    ? 0U : 1U) : 0U)));
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid = 1U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_code 
                    = (0x0000000fU & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data));
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok 
                    = __Vfunc_usb_pid_valid__177__Vfuncout;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet 
                    = __Vfunc_usb_pid_is_data__178__Vfuncout;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_token_packet 
                    = __Vfunc_usb_pid_is_token__179__Vfuncout;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake 
                    = __Vfunc_usb_handshake_code__180__Vfuncout;
            }
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__active_d) 
             & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active)))) {
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_done 
                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_crc_ok 
                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_result;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_payload_len 
                = (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet) 
                    & (2U <= (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes)))
                    ? (0x0000ffffU & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes) 
                                      - (IData)(2U)))
                    : 0U);
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_error 
                = (1U & (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen) 
                          | (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok))) 
                         | (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_result))));
        }
    }
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr 
        = ((0xfffff000U & harvos_soc__DOT__fetch_pt_l1_rdata1) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__107__off 
                          >> 2U));
    if (vlSelfRef.harvos_soc__DOT__cpu_reset) {
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_fault = 0U;
        vlSelfRef.harvos_soc__DOT__imem_loader__DOT__locked = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_prev_level = 1U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_shift = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_rx_active = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_valid = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_data = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_error = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed = 0U;
    } else {
        if (((vlSelfRef.harvos_soc__DOT__bus_wdata 
              >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))) {
            vlSelfRef.harvos_soc__DOT__imem_loader__DOT__locked = 1U;
        }
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_valid = 0U;
        if ((1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power)) 
                   | (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                      >> 5U)))) {
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_fault = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_rx_active = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_error = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected 
                = ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                    >> 1U) & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power));
        } else {
            if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active) {
                __Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__168__timer 
                    = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT____VlemCall_1__bit_tick_done 
                    = (3U == (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__168__timer));
                if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT____VlemCall_1__bit_tick_done) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer = 0U;
                    if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state))) {
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_rx_active = 0U;
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_prev_level = 1U;
                    } else {
                        if ((6U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones))) {
                            if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_decoded_bit) {
                                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_error = 1U;
                            }
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones = 0U;
                        } else {
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones 
                                = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_decoded_bit)
                                    ? (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones)))
                                    : 0U);
                            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_shift 
                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_assembled;
                            if ((7U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index))) {
                                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index = 0U;
                                if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync = 0U;
                                } else {
                                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_data 
                                        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_assembled;
                                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_valid = 1U;
                                }
                            } else {
                                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index)));
                            }
                        }
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_prev_level 
                            = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_current_level;
                    }
                } else {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer)));
                }
            } else if (((~ ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active) 
                            | (0U != (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state)))) 
                        & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)
                            ? (2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state))
                            : (1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state))))) {
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_rx_active = 1U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_error = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones = 0U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_shift = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync = 1U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_prev_level = 1U;
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer = 0U;
            }
            if ((2U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)) {
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected = 1U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed = 0U;
            } else if ((0x1000U <= (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count))) {
                if ((2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state))) {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected = 1U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed = 0U;
                } else if ((1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state))) {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected = 1U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed = 1U;
                } else if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state))) {
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected = 0U;
                }
            }
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state) 
             == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state))) {
            if ((0xffffU != (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count))) {
                vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count)));
            }
        } else {
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count)));
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state 
                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state;
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count = 0U;
        }
    }
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx]
            : 0U);
    harvos_soc__DOT__fetch_pt_l0_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout;
    vlSelfRef.harvos_soc__DOT__d_req1 = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                                         | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store));
    vlSelfRef.harvos_soc__DOT__d_be1 = (0x0000000fU 
                                        & (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3))
                                             ? ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3))
                                                 ? 
                                                ((2U 
                                                  & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr)
                                                  ? 0x0cU
                                                  : 3U)
                                                 : 
                                                (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3)))))) 
                                           | (- (IData)(
                                                        (5U 
                                                         == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))))));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr 
        = ((0x00100000U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr) 
           & (0x00110000U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr 
        = ((0x6ffff000U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr) 
           & (0x70000000U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr 
        = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
            >= ((IData)(0x70001000U) + VL_SHIFTL_III(32,32,32, 
                                                     ((0x000000ffU 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                          >> 0x00000016U)) 
                                                      - (IData)(1U)), 0x0000000cU))) 
           & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
              < ((IData)(0x70002000U) + VL_SHIFTL_III(32,32,32, 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                           >> 0x00000016U)) 
                                                       - (IData)(1U)), 0x0000000cU))));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr 
        = (VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp, 0x0000000cU) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                             >> 0x00000014U)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__108__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx]
            : 0U);
    harvos_soc__DOT__data_pt_l1_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr 
        = ((0xfffff000U & harvos_soc__DOT__fetch_pt_l1_rdata0) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__103__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx]
            : 0U);
    harvos_soc__DOT__fetch_pt_l0_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout;
    vlSelfRef.harvos_soc__DOT__d_req0 = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                                         | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store));
    vlSelfRef.harvos_soc__DOT__d_be0 = (0x0000000fU 
                                        & (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3))
                                             ? ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr))
                                             : ((1U 
                                                 == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3))
                                                 ? 
                                                ((2U 
                                                  & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr)
                                                  ? 0x0cU
                                                  : 3U)
                                                 : 
                                                (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3)))))) 
                                           | (- (IData)(
                                                        (5U 
                                                         == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))))));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr 
        = ((0x00100000U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr) 
           & (0x00110000U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr 
        = ((0x6ffff000U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr) 
           & (0x70000000U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr 
        = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
            >= ((IData)(0x70001000U) + VL_SHIFTL_III(32,32,32, 
                                                     ((0x000000ffU 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                          >> 0x00000016U)) 
                                                      - (IData)(1U)), 0x0000000cU))) 
           & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
              < ((IData)(0x70002000U) + VL_SHIFTL_III(32,32,32, 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                           >> 0x00000016U)) 
                                                       - (IData)(1U)), 0x0000000cU))));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr 
        = (VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp, 0x0000000cU) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                             >> 0x00000014U)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__104__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx]
            : 0U);
    harvos_soc__DOT__data_pt_l1_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout;
    vlSelfRef.net_rx_ready = ((~ ((0x1000U <= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count)) 
                                  | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.harvos_soc__DOT__net_status = (0x484e0000U 
                                             ^ (vlSelfRef.harvos_soc__DOT__net_card__DOT__status_word 
                                                ^ (vlSelfRef.harvos_soc__DOT__net_card__DOT__digest 
                                                   ^ 
                                                   ((vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_count 
                                                     << 0x00000010U) 
                                                    | (0x0000ffffU 
                                                       & vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count)))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_request_ok 
        = ((0x00000800U >= vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len) 
           & (((0U == vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len) 
               | (__VdfgRegularize_h6e95ff9d_0_24 > (QData)((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base)))) 
              & ((0x00000500U <= vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base) 
                 & (0x0000000000000d00ULL >= __VdfgRegularize_h6e95ff9d_0_24))));
    __VdfgRegularize_h6e95ff9d_0_9 = ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active)) 
                                      & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step));
    vlSelfRef.harvos_soc__DOT__dma_addr = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active)
                                            ? vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_next_addr
                                            : ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step)
                                                ? (vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
                                                   + 
                                                   ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)
                                                     ? vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_base
                                                     : vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_base))
                                                : ((IData)(0x00000500U) 
                                                   + 
                                                   (0x0000003cU 
                                                    & (IData)(vlSelfRef.harvos_soc__DOT__dma_tick)))));
    if (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active) {
        vlSelfRef.net_tx_last = ((0x000003ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word))) 
                                 >= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_word_count));
        vlSelfRef.net_tx_word = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data
            [(0x000001ffU & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word))];
    } else {
        vlSelfRef.net_tx_last = (4U >= vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining);
        vlSelfRef.net_tx_word = vlSelfRef.harvos_soc__DOT__dmem
            [(0x000003ffU & ((vlSelfRef.harvos_soc__DOT__dma_addr 
                              - (IData)(0x00000400U)) 
                             >> 2U))];
    }
    vlSelfRef.harvos_soc__DOT__dma_req = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active) 
                                          | ((0x03ffU 
                                              == (0x000003ffU 
                                                  & (IData)(vlSelfRef.harvos_soc__DOT__dma_tick))) 
                                             | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet;
    vlSelfRef.harvos_soc__DOT__imem_loader_status = 
        ((((IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__locked) 
           << 0x00000012U) | (((IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__fault) 
                               << 0x00000011U) | ((IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__done) 
                                                  << 0x00000010U))) 
         | (0x0000ffffU & vlSelfRef.harvos_soc__DOT__imem_loader__DOT__write_count));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0U;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 0U;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0ULL;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 1U;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags = 0U;
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[30U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[31U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[32U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[33U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[34U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[35U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[36U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[37U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[38U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[39U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[40U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[41U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[42U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[43U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[44U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[45U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[46U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[47U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[48U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[49U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[50U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[51U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[52U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[53U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[54U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[55U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[56U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[57U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[58U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[59U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[60U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[61U];
    }
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr = 0U;
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[32U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[33U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[34U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[35U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[36U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[37U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[38U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[39U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[40U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[41U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[42U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[43U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[44U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[45U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[46U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[47U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[48U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[49U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[50U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[51U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[52U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[53U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[54U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[55U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[56U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[57U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[58U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[59U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[60U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[61U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[62U];
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[62U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
    }
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 0U;
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[63U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[63U] 
             == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[63U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[63U];
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[63U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr 
        = ((0xfffff000U & harvos_soc__DOT__data_pt_l1_rdata1) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__109__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx]
            : 0U);
    harvos_soc__DOT__data_pt_l0_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0U;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 0U;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0ULL;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 1U;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags = 0U;
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[30U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[31U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[32U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[33U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[34U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[35U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[36U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[37U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[38U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[39U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[40U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[41U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[42U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[43U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[44U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[45U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[46U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[47U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[48U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[49U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[50U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[51U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[52U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[53U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[54U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[55U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[56U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[57U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[58U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[59U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[60U];
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[61U];
    }
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr = 0U;
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[32U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[33U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[34U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[35U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[36U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[37U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[38U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[39U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[40U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[41U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[42U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[43U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[44U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[45U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[46U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[47U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[48U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[49U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[50U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[51U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[52U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[53U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[54U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[55U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[56U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[57U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[58U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[59U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[60U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[61U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[62U];
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[62U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 0U;
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[63U]) 
          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[63U] 
             == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                 >> 0x0cU))) & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[63U] 
                                == (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[63U];
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[63U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr 
        = ((0xfffff000U & harvos_soc__DOT__data_pt_l1_rdata0) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx 
        = (0x000003ffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__105__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr) 
             & (0x00001400U > __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr)))
            ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx]
            : 0U);
    harvos_soc__DOT__data_pt_l0_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
           & ((IData)(vlSelfRef.net_rx_valid) & (IData)(vlSelfRef.net_rx_ready)));
    vlSelfRef.utmi_data_o = vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_data;
    vlSelfRef.harvos_soc__DOT__dma_allow = 0U;
    vlSelfRef.harvos_soc__DOT__dma_fault = 0U;
    if (vlSelfRef.harvos_soc__DOT__dma_req) {
        vlSelfRef.harvos_soc__DOT__dma_allow = ((((IData)(vlSelfRef.harvos_soc__DOT__boot_mpu_lock) 
                                                  & (0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.harvos_soc__DOT__dma_addr))) 
                                                 & (0x00000500U 
                                                    <= vlSelfRef.harvos_soc__DOT__dma_addr)) 
                                                & (0x0000000000000d00ULL 
                                                   >= 
                                                   (0x00000001ffffffffULL 
                                                    & (4ULL 
                                                       + (QData)((IData)(vlSelfRef.harvos_soc__DOT__dma_addr))))));
        vlSelfRef.harvos_soc__DOT__dma_fault = (1U 
                                                & (~ (IData)(vlSelfRef.harvos_soc__DOT__dma_allow)));
    }
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_result 
        = (1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet)) 
                 | ((2U <= (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes)) 
                    & (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1) 
                        == (0x000000ffU & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc)))) 
                       & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0) 
                          == (0x000000ffU & (~ ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc) 
                                                >> 8U))))))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__active_d 
        = ((1U & (~ ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__packet_engine__reset) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear)))) 
           && (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active));
    if ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
         >> 0x1fU)) {
        if ((0U != (0x000fffffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp))) {
            if (((((0U != (1U & harvos_soc__DOT__fetch_pt_l1_rdata1)) 
                   & (0U == (0x0eU & harvos_soc__DOT__fetch_pt_l1_rdata1))) 
                  & (0U != (1U & harvos_soc__DOT__fetch_pt_l0_rdata1))) 
                 & (0U != (0x0eU & harvos_soc__DOT__fetch_pt_l0_rdata1)))) {
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr 
                    = ((0xfffff000U & harvos_soc__DOT__fetch_pt_l0_rdata1) 
                       | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags 
                    = (0x000000ffU & harvos_soc__DOT__fetch_pt_l0_rdata1);
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0U;
            }
        } else if (((0U != (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                           >> 0x00000016U))) 
                    & ((0x00100000U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc) 
                       & (0x00110000U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc)))) {
            harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr 
                = ((IData)(0x00100000U) + (VL_SHIFTL_III(32,32,32, 
                                                         ((0x000000ffU 
                                                           & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                              >> 0x00000016U)) 
                                                          - (IData)(1U)), 0x00000010U) 
                                           + (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                                              - (IData)(0x00100000U))));
            harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end 
                = (0x00000001ffffffffULL & (4ULL + (QData)((IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr))));
            if ((0x0000000000000400ULL >= harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end)) {
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0x5bU;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0U;
            }
        } else if ((0x00000400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc)) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0x4bU;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0U;
        } else if (((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc) 
                    & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0x0000000aU;
        }
    }
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit)
            ? harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr
            : vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr);
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0U;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 0U;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_off = 0U;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_end = 0ULL;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load)
            ? 5U : 7U);
    if ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
         >> 0x1fU)) {
        if ((0U != (0x000fffffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp))) {
            if (((((0U != (1U & harvos_soc__DOT__data_pt_l1_rdata1)) 
                   & (0U == (0x0eU & harvos_soc__DOT__data_pt_l1_rdata1))) 
                  & (0U != (1U & harvos_soc__DOT__data_pt_l0_rdata1))) 
                 & (0U != (0x0eU & harvos_soc__DOT__data_pt_l0_rdata1)))) {
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                    = ((0xfffff000U & harvos_soc__DOT__data_pt_l0_rdata1) 
                       | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr));
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags 
                    = (0x000000ffU & harvos_soc__DOT__data_pt_l0_rdata1);
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
            }
        } else if ((((0U != (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                            >> 0x00000016U))) 
                     & ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                        | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store))) 
                    & ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr) 
                       | ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr) 
                          | ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr) 
                             | ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                                 >= ((IData)(0x70010000U) 
                                     + VL_SHIFTL_III(32,32,32, 
                                                     ((0x000000ffU 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                          >> 0x00000016U)) 
                                                      - (IData)(1U)), 0x00000010U))) 
                                & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                                   < ((IData)(0x70020000U) 
                                      + VL_SHIFTL_III(32,32,32, 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                           >> 0x00000016U)) 
                                                       - (IData)(1U)), 0x00000010U))))))))) {
            harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_off 
                = ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr)
                    ? (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                       - (IData)(0x00100000U)) : ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr)
                                                   ? 
                                                  ((IData)(0x00008000U) 
                                                   + 
                                                   (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                                                    - (IData)(0x6ffff000U)))
                                                   : 
                                                  ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr)
                                                    ? 
                                                   ((IData)(0x00009000U) 
                                                    + 
                                                    (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                                                     - 
                                                     ((IData)(0x70001000U) 
                                                      + 
                                                      VL_SHIFTL_III(32,32,32, 
                                                                    ((0x000000ffU 
                                                                      & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                                         >> 0x00000016U)) 
                                                                     - (IData)(1U)), 0x0000000cU))))
                                                    : 
                                                   ((IData)(0x0000a000U) 
                                                    + 
                                                    (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                                                     - 
                                                     ((IData)(0x70010000U) 
                                                      + 
                                                      VL_SHIFTL_III(32,32,32, 
                                                                    ((0x000000ffU 
                                                                      & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                                         >> 0x00000016U)) 
                                                                     - (IData)(1U)), 0x00000010U)))))));
            harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_paddr 
                = ((IData)(0x00000400U) + (VL_SHIFTL_III(32,32,32, 
                                                         ((0x000000ffU 
                                                           & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                              >> 0x00000016U)) 
                                                          - (IData)(1U)), 0x00000011U) 
                                           + harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_off));
            harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_end 
                = (0x00000001ffffffffULL & (4ULL + (QData)((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_paddr))));
            if (((0x00020000U > harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_off) 
                 & (0x0000000000001400ULL >= harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_end))) {
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_paddr;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0xd7U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
            }
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store)) 
                    & ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr) 
                       & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr)))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0xd7U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store)) 
                    & (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0x0000000aU;
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store)) 
                    & ((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr) 
                       & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr)))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0xc7U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
        }
    }
    if ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
         >> 0x1fU)) {
        if ((0U != (0x000fffffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp))) {
            if (((((0U != (1U & harvos_soc__DOT__fetch_pt_l1_rdata0)) 
                   & (0U == (0x0eU & harvos_soc__DOT__fetch_pt_l1_rdata0))) 
                  & (0U != (1U & harvos_soc__DOT__fetch_pt_l0_rdata0))) 
                 & (0U != (0x0eU & harvos_soc__DOT__fetch_pt_l0_rdata0)))) {
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr 
                    = ((0xfffff000U & harvos_soc__DOT__fetch_pt_l0_rdata0) 
                       | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags 
                    = (0x000000ffU & harvos_soc__DOT__fetch_pt_l0_rdata0);
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0U;
            }
        } else if (((0U != (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                           >> 0x00000016U))) 
                    & ((0x00100000U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc) 
                       & (0x00110000U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc)))) {
            harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr 
                = ((IData)(0x00100000U) + (VL_SHIFTL_III(32,32,32, 
                                                         ((0x000000ffU 
                                                           & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                              >> 0x00000016U)) 
                                                          - (IData)(1U)), 0x00000010U) 
                                           + (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                                              - (IData)(0x00100000U))));
            harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end 
                = (0x00000001ffffffffULL & (4ULL + (QData)((IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr))));
            if ((0x0000000000000400ULL >= harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end)) {
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0x5bU;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0U;
            }
        } else if ((0x00000400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc)) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0x4bU;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0U;
        } else if (((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc) 
                    & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0x0000000aU;
        }
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit)
            ? harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr
            : vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr);
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0U;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 0U;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_off = 0U;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_end = 0ULL;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load)
            ? 5U : 7U);
    if ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
         >> 0x1fU)) {
        if ((0U != (0x000fffffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp))) {
            if (((((0U != (1U & harvos_soc__DOT__data_pt_l1_rdata0)) 
                   & (0U == (0x0eU & harvos_soc__DOT__data_pt_l1_rdata0))) 
                  & (0U != (1U & harvos_soc__DOT__data_pt_l0_rdata0))) 
                 & (0U != (0x0eU & harvos_soc__DOT__data_pt_l0_rdata0)))) {
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                    = ((0xfffff000U & harvos_soc__DOT__data_pt_l0_rdata0) 
                       | (0x00000fffU & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr));
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags 
                    = (0x000000ffU & harvos_soc__DOT__data_pt_l0_rdata0);
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
            }
        } else if ((((0U != (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                            >> 0x00000016U))) 
                     & ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                        | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store))) 
                    & ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr) 
                       | ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr) 
                          | ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr) 
                             | ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                                 >= ((IData)(0x70010000U) 
                                     + VL_SHIFTL_III(32,32,32, 
                                                     ((0x000000ffU 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                          >> 0x00000016U)) 
                                                      - (IData)(1U)), 0x00000010U))) 
                                & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                                   < ((IData)(0x70020000U) 
                                      + VL_SHIFTL_III(32,32,32, 
                                                      ((0x000000ffU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                           >> 0x00000016U)) 
                                                       - (IData)(1U)), 0x00000010U))))))))) {
            harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_off 
                = ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_text_vaddr)
                    ? (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                       - (IData)(0x00100000U)) : ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_stack_vaddr)
                                                   ? 
                                                  ((IData)(0x00008000U) 
                                                   + 
                                                   (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                                                    - (IData)(0x6ffff000U)))
                                                   : 
                                                  ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_params_vaddr)
                                                    ? 
                                                   ((IData)(0x00009000U) 
                                                    + 
                                                    (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                                                     - 
                                                     ((IData)(0x70001000U) 
                                                      + 
                                                      VL_SHIFTL_III(32,32,32, 
                                                                    ((0x000000ffU 
                                                                      & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                                         >> 0x00000016U)) 
                                                                     - (IData)(1U)), 0x0000000cU))))
                                                    : 
                                                   ((IData)(0x0000a000U) 
                                                    + 
                                                    (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                                                     - 
                                                     ((IData)(0x70010000U) 
                                                      + 
                                                      VL_SHIFTL_III(32,32,32, 
                                                                    ((0x000000ffU 
                                                                      & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                                         >> 0x00000016U)) 
                                                                     - (IData)(1U)), 0x00000010U)))))));
            harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_paddr 
                = ((IData)(0x00000400U) + (VL_SHIFTL_III(32,32,32, 
                                                         ((0x000000ffU 
                                                           & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                              >> 0x00000016U)) 
                                                          - (IData)(1U)), 0x00000011U) 
                                           + harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_off));
            harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_end 
                = (0x00000001ffffffffULL & (4ULL + (QData)((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_paddr))));
            if (((0x00020000U > harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_off) 
                 & (0x0000000000001400ULL >= harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_end))) {
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_paddr;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0xd7U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
            }
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store)) 
                    & ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr) 
                       & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr)))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0xd7U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store)) 
                    & (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0x0000000aU;
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store)) 
                    & ((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr) 
                       & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr)))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0xc7U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
        }
    }
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push_last 
        = ((IData)(vlSelfRef.net_rx_last) & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push));
    vlSelfRef.harvos_soc__DOT__net_dma_allow = ((IData)(vlSelfRef.harvos_soc__DOT__dma_allow) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_9));
    vlSelfRef.harvos_soc__DOT__net_dma_fault = ((IData)(vlSelfRef.harvos_soc__DOT__dma_fault) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_9));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_rx_active;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_allow 
        = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_smpuctl 
           & (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr) 
           & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit)
            ? harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr
            : vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr);
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_allow 
        = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_smpuctl 
           & (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr) 
           & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit)
            ? harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr
            : vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_dma_fault)) 
                                                 & (IData)(vlSelfRef.harvos_soc__DOT__net_dma_allow));
}
