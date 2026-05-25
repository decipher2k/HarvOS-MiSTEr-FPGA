// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vharvos_soc.h for the primary calling header

#include "Vharvos_soc__pch.h"

extern const VlUnpacked<CData/*7:0*/, 128> Vharvos_soc__ConstPool__TABLE_h3fb9de17_0;

VL_ATTR_COLD void Vharvos_soc___024root___stl_sequent__TOP__1(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___stl_sequent__TOP__1\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    // Body
    vlSelfRef.debug_trap = (1U & ((IData)(vlSelfRef.harvos_soc__DOT__debug_trap0) 
                                  | ((IData)(vlSelfRef.harvos_soc__DOT__debug_trap1) 
                                     | ((IData)(vlSelfRef.harvos_soc__DOT__dma_fault) 
                                        | ((~ (IData)(vlSelfRef.harvos_soc__DOT__boot_ok)) 
                                           | (IData)(vlSelfRef.harvos_soc__DOT__kernel_policy_fault))))));
    vlSelfRef.harvos_soc__DOT__trace_event = ((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
                                              | ((IData)(vlSelfRef.harvos_soc__DOT__dma_req) 
                                                 | ((IData)(vlSelfRef.harvos_soc__DOT__usb_irq) 
                                                    | ((IData)(vlSelfRef.harvos_soc__DOT__net_irq) 
                                                       | ((IData)(vlSelfRef.harvos_soc__DOT__debug_trap0) 
                                                          | ((IData)(vlSelfRef.harvos_soc__DOT__debug_trap1) 
                                                             | (IData)(vlSelfRef.harvos_soc__DOT__kernel_policy_fault)))))));
    __Vtableidx1 = ((((((IData)(vlSelfRef.harvos_soc__DOT__bus_we) 
                        << 3U) | ((IData)(vlSelfRef.harvos_soc__DOT__dma_req) 
                                  << 2U)) | (((IData)(vlSelfRef.harvos_soc__DOT__usb_irq) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.harvos_soc__DOT__net_irq))) 
                     << 3U) | (((IData)(vlSelfRef.harvos_soc__DOT__kernel_policy_fault) 
                                << 2U) | (((IData)(vlSelfRef.harvos_soc__DOT__debug_trap1) 
                                           << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__debug_trap0))));
    vlSelfRef.harvos_soc__DOT__trace_code = Vharvos_soc__ConstPool__TABLE_h3fb9de17_0
        [__Vtableidx1];
    vlSelfRef.debug_kernel_status = ((((IData)(vlSelfRef.harvos_soc__DOT__kernel_policy_fault) 
                                       << 0x0000000bU) 
                                      | (((IData)(vlSelfRef.harvos_soc__DOT__kernel_allow) 
                                          << 0x0000000aU) 
                                         | ((IData)(vlSelfRef.harvos_soc__DOT__kernel_task) 
                                            << 8U))) 
                                     | (((IData)(vlSelfRef.harvos_soc__DOT__kernel_ipc_depth) 
                                         << 4U) | (0x0000000fU 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__imem_loader__mmio_req) 
                                                & ((IData)(vlSelfRef.harvos_soc__DOT__bus_we) 
                                                   & (4U 
                                                      == 
                                                      (0x0000000fU 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__hps_block__mmio_req) 
                                                 & ((IData)(vlSelfRef.harvos_soc__DOT__bus_we) 
                                                    & (4U 
                                                       == 
                                                       (0x0000003fU 
                                                        & vlSelfRef.harvos_soc__DOT__bus_addr))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((IData)(vlSelfRef.harvos_soc__DOT__bus_we) 
                                                 & (IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__usb_host__mmio_req));
    __VdfgRegularize_h6e95ff9d_0_28 = ((IData)(vlSelfRef.harvos_soc__DOT__bus_we) 
                                       & (IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__net_card__mmio_req));
    vlSelfRef.debug_state = (vlSelfRef.harvos_soc__DOT__boot_status 
                             ^ (vlSelfRef.debug_kernel_status 
                                ^ (vlSelfRef.harvos_soc__DOT__usb_status 
                                   ^ (vlSelfRef.harvos_soc__DOT__net_status 
                                      ^ (vlSelfRef.harvos_soc__DOT__hps_block_status 
                                         ^ ((((((((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_tlb_hit) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_tlb_hit) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_wx_fault) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_wx_fault))) 
                                               << 0x0000000aU) 
                                              | (((IData)(vlSelfRef.harvos_soc__DOT__debug_trap0) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode) 
                                                    << 7U))) 
                                             | ((((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state) 
                                                  << 4U) 
                                                 | (8U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_smpuctl 
                                                       << 3U))) 
                                                | ((4U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                       >> 0x0000001dU)) 
                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__wb_en) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.harvos_soc__DOT__d_req0))))) 
                                            ^ (((((
                                                   (((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_tlb_hit) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_tlb_hit) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_wx_fault) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_wx_fault))) 
                                                  << 0x0000000aU) 
                                                 | (((IData)(vlSelfRef.harvos_soc__DOT__debug_trap1) 
                                                     << 9U) 
                                                    | ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode) 
                                                       << 7U))) 
                                                | ((((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state) 
                                                     << 4U) 
                                                    | (8U 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_smpuctl 
                                                          << 3U))) 
                                                   | ((4U 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                          >> 0x0000001dU)) 
                                                      | (((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__wb_en) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.harvos_soc__DOT__d_req1))))) 
                                               ^ ((
                                                   (((IData)(vlSelfRef.harvos_soc__DOT__l1_hit0) 
                                                     << 0x0000001fU) 
                                                    | ((IData)(vlSelfRef.harvos_soc__DOT__l1_hit1) 
                                                       << 0x0000001eU)) 
                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__l2_hit) 
                                                       << 0x0000001dU) 
                                                      | (((IData)(vlSelfRef.harvos_soc__DOT__coh_invalidate) 
                                                          << 0x0000001cU) 
                                                         | (0x0fff0000U 
                                                            & ((IData)(vlSelfRef.harvos_soc__DOT__trace_count) 
                                                               << 0x00000010U))))) 
                                                  ^ vlSelfRef.harvos_soc__DOT__imem_loader_status))))))));
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__clear_cmd 
        = ((vlSelfRef.harvos_soc__DOT__bus_wdata >> 2U) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__packet_engine__reset 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
            & ((vlSelfRef.harvos_soc__DOT__bus_wdata 
                >> 2U) & (4U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)))) 
           | (IData)(vlSelfRef.harvos_soc__DOT__cpu_reset));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_cmd 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
           & (vlSelfRef.harvos_soc__DOT__bus_wdata 
              & (0x1cU == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))));
    __VdfgRegularize_h6e95ff9d_0_6 = ((0x1cU == (0x0000003fU 
                                                 & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_transfer 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_cmd) 
           & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
              & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected) 
                 & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy)) 
                    & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__port_overcurrent)) 
                       & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_request_ok))))));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx 
        = (vlSelfRef.harvos_soc__DOT__bus_wdata & (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx 
        = ((vlSelfRef.harvos_soc__DOT__bus_wdata >> 1U) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__clear_ctrl 
        = ((vlSelfRef.harvos_soc__DOT__bus_wdata >> 2U) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_6) 
              | ((4U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                 & (IData)(__VdfgRegularize_h6e95ff9d_0_28))));
}

VL_ATTR_COLD void Vharvos_soc___024root___stl_sequent__TOP__0(Vharvos_soc___024root* vlSelf);

VL_ATTR_COLD void Vharvos_soc___024root___eval_stl(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_stl\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vharvos_soc___024root___stl_sequent__TOP__0(vlSelf);
        Vharvos_soc___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vharvos_soc___024root___eval_triggers_vec__stl(Vharvos_soc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vharvos_soc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vharvos_soc___024root___eval_phase__stl(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_phase__stl\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vharvos_soc___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vharvos_soc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vharvos_soc___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vharvos_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vharvos_soc___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vharvos_soc___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vharvos_soc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vharvos_soc___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vharvos_soc___024root___ctor_var_reset(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___ctor_var_reset\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->debug_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4804012649788666537ull);
    vlSelf->debug_instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8268020225111994193ull);
    vlSelf->debug_scause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12917990754055776270ull);
    vlSelf->debug_stval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7488197672789258569ull);
    vlSelf->debug_state = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17458634628187422603ull);
    vlSelf->debug_kernel_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1347646616555371155ull);
    vlSelf->debug_hps_boot_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8845377687845639621ull);
    vlSelf->debug_net_boot_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8767211551446566612ull);
    vlSelf->debug_word0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9006799450938690187ull);
    vlSelf->debug_word1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11203128142828965939ull);
    vlSelf->debug_word2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9167712335414691912ull);
    vlSelf->debug_entropy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1587667720319245925ull);
    vlSelf->debug_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11730086753091994293ull);
    vlSelf->usb_dp_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18335692571066439406ull);
    vlSelf->usb_dm_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7793174663887924004ull);
    vlSelf->usb_dp_drive_low = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1465662913896852940ull);
    vlSelf->usb_dm_drive_low = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13327691635615892914ull);
    vlSelf->usb_port_power_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10260160390802928593ull);
    vlSelf->usb_port_overcurrent_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4668490346066443423ull);
    vlSelf->utmi_data_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12017993644124290370ull);
    vlSelf->utmi_data_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12963184237101929398ull);
    vlSelf->utmi_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13759357021974876120ull);
    vlSelf->utmi_tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11755094622035240594ull);
    vlSelf->utmi_rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10236677357559331039ull);
    vlSelf->utmi_rx_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14497972341774487504ull);
    vlSelf->utmi_rx_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4495496783742130168ull);
    vlSelf->utmi_line_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14992562077063663672ull);
    vlSelf->utmi_xcvr_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4635315087099631093ull);
    vlSelf->utmi_op_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10687755729017073500ull);
    vlSelf->utmi_term_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6439297125777989361ull);
    vlSelf->utmi_suspend_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11460993081779852585ull);
    vlSelf->utmi_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13153517703457554473ull);
    vlSelf->net_link_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3775517866118800932ull);
    vlSelf->net_rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11717938164100745531ull);
    vlSelf->net_rx_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2529376161643387044ull);
    vlSelf->net_rx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7147190766020831317ull);
    vlSelf->net_rx_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6387614547319722863ull);
    vlSelf->net_rx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14371998117049568356ull);
    vlSelf->net_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10252600203036062768ull);
    vlSelf->net_tx_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16437128474798899530ull);
    vlSelf->net_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9097926681407167973ull);
    vlSelf->net_tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10070793445978256852ull);
    vlSelf->hps_img_mounted = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5780064277253424778ull);
    vlSelf->hps_img_readonly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 763959209893624143ull);
    vlSelf->hps_img_size = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17504163055651393572ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->hps_sd_lba[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10937187355050213833ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->hps_sd_blk_cnt[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11532711249280181546ull);
    }
    vlSelf->hps_sd_rd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6065570682465230387ull);
    vlSelf->hps_sd_wr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8330692428192061201ull);
    vlSelf->hps_sd_ack = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13885684002227653639ull);
    vlSelf->hps_sd_buff_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4873255716904995008ull);
    vlSelf->hps_sd_buff_dout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2677457025604980665ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->hps_sd_buff_din[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14496567443175369191ull);
    }
    vlSelf->hps_sd_buff_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13929577095647477573ull);
    vlSelf->harvos_soc__DOT____Vlvbound_h65711260__0 = 0;
    vlSelf->harvos_soc__DOT____Vlvbound_hd7ca7cff__0 = 0;
    vlSelf->harvos_soc__DOT____Vlvbound_ha7a2ffe6__0 = 0;
    vlSelf->harvos_soc__DOT____Vlvbound_h503409f3__0 = 0;
    vlSelf->harvos_soc__DOT____Vlvbound_h553a6969__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 360000; ++__Vi0) {
        vlSelf->harvos_soc__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14541695773782409434ull);
    }
    for (int __Vi0 = 0; __Vi0 < 420000; ++__Vi0) {
        vlSelf->harvos_soc__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15193617139367586127ull);
    }
    vlSelf->harvos_soc__DOT__boot_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17767214581607811702ull);
    vlSelf->harvos_soc__DOT__boot_mpu_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9228455744557274589ull);
    vlSelf->harvos_soc__DOT__boot_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3478443913404049900ull);
    vlSelf->harvos_soc__DOT__cpu_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1697122606074102229ull);
    vlSelf->harvos_soc__DOT__d_req0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14583672225614328838ull);
    vlSelf->harvos_soc__DOT__d_be0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16334294088795738242ull);
    vlSelf->harvos_soc__DOT__d_ready0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4737709272272618804ull);
    vlSelf->harvos_soc__DOT__d_req1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4516641515437516970ull);
    vlSelf->harvos_soc__DOT__d_be1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 636177324120583237ull);
    vlSelf->harvos_soc__DOT__d_ready1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1378203127586819934ull);
    vlSelf->harvos_soc__DOT__bus_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 194972823431683823ull);
    vlSelf->harvos_soc__DOT__bus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17065499339595663123ull);
    vlSelf->harvos_soc__DOT__bus_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11173347313055337015ull);
    vlSelf->harvos_soc__DOT__bus_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17748327803107940019ull);
    vlSelf->harvos_soc__DOT__bus_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14588141169712967401ull);
    vlSelf->harvos_soc__DOT__bus_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4522179596130746456ull);
    vlSelf->harvos_soc__DOT__debug_trap0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16919309433375676846ull);
    vlSelf->harvos_soc__DOT__debug_trap1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11128059387050124530ull);
    vlSelf->harvos_soc__DOT__entropy_lfsr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12173804508126439842ull);
    vlSelf->harvos_soc__DOT__mmio_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10556905182062719066ull);
    vlSelf->harvos_soc__DOT__dma_tick = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6733170338974792805ull);
    vlSelf->harvos_soc__DOT__dma_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7063405430855168692ull);
    vlSelf->harvos_soc__DOT__dma_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9337495594219039986ull);
    vlSelf->harvos_soc__DOT__dma_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5220509683869153739ull);
    vlSelf->harvos_soc__DOT__dma_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908700757184286562ull);
    vlSelf->harvos_soc__DOT__dma_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17112809429741889188ull);
    vlSelf->harvos_soc__DOT__usb_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7004524449782322145ull);
    vlSelf->harvos_soc__DOT__usb_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14775599355689144487ull);
    vlSelf->harvos_soc__DOT__net_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15201154875096324689ull);
    vlSelf->harvos_soc__DOT__net_dma_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1972175970755832199ull);
    vlSelf->harvos_soc__DOT__net_dma_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 73103012986012304ull);
    vlSelf->harvos_soc__DOT__net_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12025128344651576223ull);
    vlSelf->harvos_soc__DOT__hps_block_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11335838811461245825ull);
    vlSelf->harvos_soc__DOT__imem_loader_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14834196789796141833ull);
    vlSelf->harvos_soc__DOT__imem_loader_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18253324823595144543ull);
    vlSelf->harvos_soc__DOT__l1_hit0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13169520544705385930ull);
    vlSelf->harvos_soc__DOT__l1_hit1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11829844824103040144ull);
    vlSelf->harvos_soc__DOT__l2_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11979226375112135215ull);
    vlSelf->harvos_soc__DOT__coh_invalidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17799630058295323780ull);
    vlSelf->harvos_soc__DOT__kernel_task = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15335916002730713087ull);
    vlSelf->harvos_soc__DOT__kernel_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6456921729566458394ull);
    vlSelf->harvos_soc__DOT__kernel_policy_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2498791700284789159ull);
    vlSelf->harvos_soc__DOT__kernel_ipc_depth = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17828438134242517879ull);
    vlSelf->harvos_soc__DOT__trace_digest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7338309770353967349ull);
    vlSelf->harvos_soc__DOT__trace_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16168118614941689230ull);
    vlSelf->harvos_soc__DOT__trace_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765745189373533460ull);
    vlSelf->harvos_soc__DOT__trace_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14713708458521840153ull);
    vlSelf->harvos_soc__DOT__d_in_range = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11571664422263661051ull);
    vlSelf->harvos_soc__DOT__d_is_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8473951414001419097ull);
    vlSelf->harvos_soc__DOT__d_is_imem_loader_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3731396578868500481ull);
    vlSelf->harvos_soc__DOT__d_is_net_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13198136127920886930ull);
    vlSelf->harvos_soc__DOT__d_is_usb_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13928647636695141411ull);
    vlSelf->harvos_soc__DOT__d_is_hps_block_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1336696063314500542ull);
    vlSelf->harvos_soc__DOT____Vcellinp__imem_loader__mmio_req = 0;
    vlSelf->harvos_soc__DOT____Vcellinp__net_card__mmio_req = 0;
    vlSelf->harvos_soc__DOT____Vcellinp__usb_host__mmio_req = 0;
    vlSelf->harvos_soc__DOT____Vcellinp__hps_block__mmio_req = 0;
    vlSelf->harvos_soc__DOT____Vcellinp__l1d0__access = 0;
    vlSelf->harvos_soc__DOT____Vcellinp__l1d1__access = 0;
    vlSelf->harvos_soc__DOT____Vcellinp__kernel_model__syscall_valid = 0;
    vlSelf->harvos_soc__DOT____Vcellinp__assertions__d_we = 0;
    vlSelf->harvos_soc__DOT__imem_loader__DOT__target_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1236721741179567737ull);
    vlSelf->harvos_soc__DOT__imem_loader__DOT__data_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10297361944195908865ull);
    vlSelf->harvos_soc__DOT__imem_loader__DOT__write_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13576300791101891939ull);
    vlSelf->harvos_soc__DOT__imem_loader__DOT__locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10772810246752458777ull);
    vlSelf->harvos_soc__DOT__imem_loader__DOT__fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6020594942292320835ull);
    vlSelf->harvos_soc__DOT__imem_loader__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16771330132912117561ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14158978808933647657ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__irq_enable = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10850921883433109397ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__irq_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13845668391592091191ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_dma_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14302798595720780274ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_dma_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4013799341106579664ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_dma_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6622077926790082491ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_dma_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10470203606558575327ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1970717043732360007ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__mac_lo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6555329256601752718ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__mac_hi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12739061290167198127ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__frame_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7752097759027274654ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12844168001102551591ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15269653441950664076ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_start_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1580082088044650281ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_start_fault_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4558936795707923378ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__digest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 284773330044008572ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__progress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15384736928582260746ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__last_tx_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3748091405245103935ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_ready_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9742884385262245485ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->harvos_soc__DOT__net_card__DOT__tx_buf_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 509177155628871292ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->harvos_soc__DOT__net_card__DOT__tx_ring_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2650215427636233747ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->harvos_soc__DOT__net_card__DOT__tx_desc_words[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3119769827138647405ull);
    }
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_offload_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12195358708445714123ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_offload_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 276759810651143400ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_ring_submit_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11181563235662165645ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_load_desc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 441693385579577377ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_desc_head = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10106826863913482320ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_desc_tail = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15408811626337576121ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_desc_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12166843258839506781ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_ring_stream_word = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7397357241947003126ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_word_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1254386620242732426ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_stream_word = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15468387790185372725ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_ip_sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4519926094257820447ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_tcp_sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7894214326508487042ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_total_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7546764659051067306ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->harvos_soc__DOT__net_card__DOT__rx_ring_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 65804480965459689ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->harvos_soc__DOT__net_card__DOT__rx_ring_last[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14967631881169795641ull);
    }
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_ring_rd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14123427405853769075ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_ring_wr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15962384139822989103ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_ring_count = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17559189647653849963ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_frame_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4829535789352658821ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9952415664217646037ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1645055346826235885ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8021321284966021855ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__rx_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1715647995213426153ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__link_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9346252109368357116ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__clear_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5785106342130730759ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__link_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15593167527265557550ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__start_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5744878992013395523ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__start_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1475568116715789725ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__active_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2681128505894781875ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__remaining = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7748357218222179102ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3421177086981615364ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14136310859376716070ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_desc_ring_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9861294499351476498ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_ring_stream_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7086715117348563411ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__tx_ring_stream_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12325956577695601384ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__direct_rx_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10805935764757105531ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__dma_step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894689598595421564ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__selected_rx_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16759491470763933587ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__ring_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5260576374647792079ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__ring_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11001588717131805023ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__ring_pop_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2453622709045455523ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__ring_push_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6772458886020318842ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__irq_status_view = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6699305675990366894ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__status_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9412845271910331619ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2521741833940009638ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__irq_enable = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1386905406098281746ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__irq_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15657372973479399010ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__command = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2078575127960869790ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__dma_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15232575889684952504ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__dma_total_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8718646055076280878ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__dma_progress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12793594140736516439ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__token = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13177658032568196368ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__frame = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3805667672788797520ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__actual_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7152702782775598986ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__retry_ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11423130751185901616ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15957277890896176978ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14013216019585400825ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8636153740551356690ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_done_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11809434445555663355ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_connected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6459367790692740116ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_low_speed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4966006577147260260ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8200071159459798753ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8504633128239654097ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_rx_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 442927876136707653ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1728177623962776217ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16501137461417874966ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_rx_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9472086860985002546ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2023721680299200180ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17981651779871911275ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16697304499647972853ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10277240119847712114ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_rx_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 868525139081375179ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5442514312355175040ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8100178121656590843ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1309380036108429592ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13902760824803296969ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_handshake = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11490062581282043147ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_retry_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10151606413628236926ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__pe_actual_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12184274718340394543ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__start_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12169266398973100699ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__port_overcurrent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11685526070314681764ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__connected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6629690465062425081ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__dma_request_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14131376055914336072ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__start_transfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13988420141023298319ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__dma_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7774632350528563908ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__dma_next_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10526733042594996929ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power = 0;
    vlSelf->harvos_soc__DOT__usb_host__DOT____Vcellinp__packet_engine__reset = 0;
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13427049728187304568ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14242205396699047551ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17555321202729157875ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11881667006337881970ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15516609659403748726ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13170072130037589686ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11813848103120819946ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16903072088721935515ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6394697971739192718ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15411397605595726361ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14653395101305857296ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1089246398420628830ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1979196704363558678ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_prev_level = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6806873931933311842ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16481398484450485985ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2082655844691148300ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10873742532691346076ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 384453052846389485ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10604137357443569611ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_assembled = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10881448046190118744ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_current_level = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12566390289481880294ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_decoded_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12752882750980198105ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12428851200762257376ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16666992751304351655ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12733346330507454625ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13080567734658312369ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2809303329216040912ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13872929761550620775ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11989727873077092577ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1214278037578880968ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17626850531622538070ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_code = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5078864835130611266ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16705931641943241303ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_crc_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16681693069385989182ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2761241591615689554ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_token_packet = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16579267151573266000ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4721245822027682456ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_payload_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7068576721642369495ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3707851286063937821ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5721454573929032048ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__needs_out_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13139373219923524478ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__generated_payload_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12071028902785410318ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__active_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3863218311799310161ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 892856507873309333ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15428701061024052086ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1877218980863122454ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9212507262596189332ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5799714668059315991ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11033533613979061462ull);
    vlSelf->harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13076635149047398015ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8180145332102373651ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__lba_lo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17968632303578121949ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__lba_hi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5991434762183527781ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11332097404071029432ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__buffer_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11117519645671589098ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__drive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16315427986128953748ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__active_drive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6860148564273938752ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__mounted = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13705343316757411018ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__readonly = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16301063204382860107ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->harvos_soc__DOT__hps_block__DOT__size_bytes[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13737391280594366153ull);
    }
    vlSelf->harvos_soc__DOT__hps_block__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12630009243348930406ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5261315473143395004ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10475854323390284206ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__write_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6485718469680296404ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->harvos_soc__DOT__hps_block__DOT__buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7447853419776285000ull);
    }
    vlSelf->harvos_soc__DOT__hps_block__DOT__clear_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14144623577886988169ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__selected_mounted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 813233883647268586ull);
    vlSelf->harvos_soc__DOT__hps_block__DOT__selected_readonly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6196630102096543844ull);
    vlSelf->harvos_soc__DOT__secure_boot__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18075489872610525953ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14883214834670765501ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17328040057201090435ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5662559437259485702ull);
    }
    vlSelf->harvos_soc__DOT__cpu0__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11655835581605358610ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17608778343186449937ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2771889304346254661ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2592223591240649532ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__rs1_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3607557588073133516ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__rd_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5556857642222546214ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1169512206784235736ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7465524978901142208ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7611115559673903495ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__mem_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8997536876554703708ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__mem_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13465872390207480344ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16502449672559864239ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8182920236714472188ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11076323002833884287ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__clr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4236400962528724361ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__clr_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12433049846073897897ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_sstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9694932119426987323ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_stvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 133398606215054458ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_sepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11773725527926479892ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_scause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4783038769928586758ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_stval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15069432841524327491ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_satp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10790600970910148110ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_srandom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1571494064331815821ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_smpuctl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4027149219959809361ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__csr_scaps = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7193649314671774378ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__tlb_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14750803452784966732ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2717477894720001093ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__imm_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6112586234453090415ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14625399580313442720ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 664769746910672137ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9659072586110865355ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1054336659123778023ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1509676839114078784ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__active_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7958694261419590239ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__active_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11960650183981831508ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__active_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 511578582356618893ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17598669269283540400ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2335335877217634325ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13147778654734551145ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5624406189007881001ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17225534812227250518ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12994030174981263358ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17575481233897002911ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12648567176055517807ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1430882686907567063ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4684656147174579817ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9680288916641679220ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 742314694633761488ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1737865273717373871ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5047888360168943290ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14739657888794657882ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13214825798405128767ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7112237372528961260ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8155475115586427087ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11799127612270680984ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15748156170631922802ull);
    }
    vlSelf->harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13174868017217652279ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9356589315683802412ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9704286592243011831ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9687205652827192793ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3204091503842296171ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14243692325049173524ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2081741757109582509ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12927863413641076714ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6364349558904882568ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17568213153547231295ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5245719964292490624ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6336128725675013987ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6743506831267972341ull);
    }
    vlSelf->harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17624923816974854718ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17328174292146888902ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1025996033951888062ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2725046638493018463ull);
    }
    vlSelf->harvos_soc__DOT__cpu1__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6535682354283150410ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11403846074232619303ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11053683471103354142ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12410144617069536949ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__rs1_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1287240497181454737ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__rd_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7263391060010338492ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5183846554811182030ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7981874252970851019ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16307141346084488716ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__mem_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5684551969599372186ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__mem_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7266220513594049097ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 558687244071484703ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7636187266035110718ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9674037051948423189ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__clr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17141241309322304873ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__clr_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3611433784455430703ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_sstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7110869738653215134ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_stvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15327554611482121664ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_sepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13048307712791074964ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_scause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10728216667302720604ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_stval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13755566401065889953ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_satp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14894889446946242582ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_srandom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7033789284534188149ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_smpuctl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6406483969173266031ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__csr_scaps = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1865241847780805300ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__tlb_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10599039726289035487ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7443326854405083001ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__imm_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17258232378935160009ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6178548717782350720ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14693425830698151062ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13883101803661596879ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9888725727657022719ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5351696307142042360ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__active_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 224075114577902724ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__active_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 901133176723639361ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__active_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1732576404035142357ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2397871356503862982ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13506968095618994230ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5576039711838747194ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 402680555321405207ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5914208411541342116ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15313923639995897592ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10422877025745031436ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9322017733346253061ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11917862420254977087ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11440330358963565638ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6819922193548330632ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3610741992850816433ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9794938205395699054ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5480085157856540947ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1436687904802003404ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5636712237239356919ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8840479995064427009ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9694272402150014599ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13606704009845157815ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6245680348409919345ull);
    }
    vlSelf->harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6469673417861214967ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9079297608178385446ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3690909812759343929ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5555383842746980054ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5597160159978228478ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3493715459736444624ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3541385087274099960ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9504636547375915234ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5518016148417689648ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15050363378268264362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4026862008449253795ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9361430919166718836ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1396021411770685364ull);
    }
    vlSelf->harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12677698747485989724ull);
    vlSelf->harvos_soc__DOT__smp_bus__DOT__last_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12972674695609027912ull);
    vlSelf->harvos_soc__DOT__smp_bus__DOT__grant0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14809245184264246242ull);
    vlSelf->harvos_soc__DOT__smp_bus__DOT__grant1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7153744766750442482ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->harvos_soc__DOT__l1d0__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2898017070446720385ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->harvos_soc__DOT__l1d0__DOT__tag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 17203279369687903687ull);
    }
    vlSelf->harvos_soc__DOT__l1d0__DOT__hit_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1398357787396693135ull);
    vlSelf->harvos_soc__DOT__l1d0__DOT__miss_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10064687942100050015ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->harvos_soc__DOT__l1d1__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2718426295796833765ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->harvos_soc__DOT__l1d1__DOT__tag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6012166999269111147ull);
    }
    vlSelf->harvos_soc__DOT__l1d1__DOT__hit_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2409537358065105479ull);
    vlSelf->harvos_soc__DOT__l1d1__DOT__miss_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3890100923281726162ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__l2__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11493056914512793020ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__l2__DOT__tag[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5912238242774162049ull);
    }
    vlSelf->harvos_soc__DOT__l2__DOT__hits = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1281284064470860283ull);
    vlSelf->harvos_soc__DOT__l2__DOT__misses = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6577019454397074604ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__coherence__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14524654342437974684ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__coherence__DOT__owner[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10231470754475640995ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__coherence__DOT__modified[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15235524685047356795ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->harvos_soc__DOT__coherence__DOT__line_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11660473130695515230ull);
    }
    vlSelf->harvos_soc__DOT__coherence__DOT__invalidations = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6096528538061100376ull);
    vlSelf->harvos_soc__DOT__coherence__DOT__shared_reads = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8128988348087067714ull);
    vlSelf->harvos_soc__DOT__coherence__DOT__same_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11151033400102863098ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__Vdly__harvos_soc__DOT__entropy_lfsr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__imem_loader__DOT__target_addr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__imem_loader__DOT__data_word = 0;
    vlSelf->__Vdly__harvos_soc__DOT__imem_loader__DOT__write_count = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__ctrl = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__dma_total_len = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__retry_ctrl = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__fs_rx_active = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0 = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1 = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok = 0;
    vlSelf->__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__pc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__instr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_val = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__rs2_val = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_q = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__rd_q = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__next_pc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__mem_addr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__mem_funct3 = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__clr_addr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__clr_count = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stvec = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_satp = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_srandom = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_smpuctl = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scaps = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__pc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__instr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_val = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__rs2_val = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_q = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__rd_q = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__next_pc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__mem_addr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__mem_funct3 = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__clr_addr = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__clr_count = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stvec = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_satp = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_srandom = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_smpuctl = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scaps = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 0;
    vlSelf->__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0;
    vlSelf->__VdlyVal__harvos_soc__DOT__imem__v0 = 0;
    vlSelf->__VdlyDim0__harvos_soc__DOT__imem__v0 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__imem__v0 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v0 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v1 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v32 = 0;
    vlSelf->__VdlyVal__harvos_soc__DOT__cpu0__DOT__regs__v33 = 0;
    vlSelf->__VdlyDim0__harvos_soc__DOT__cpu0__DOT__regs__v33 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v33 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v34 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v0 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v1 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v32 = 0;
    vlSelf->__VdlyVal__harvos_soc__DOT__cpu1__DOT__regs__v33 = 0;
    vlSelf->__VdlyDim0__harvos_soc__DOT__cpu1__DOT__regs__v33 = 0;
    vlSelf->__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v33 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
