// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycore.h for the primary calling header

#include "Vmycore__pch.h"

void Vmycore___024root___eval_triggers_vec__ico(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_triggers_vec__ico\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vmycore___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vmycore___024root___ico_sequent__TOP__0(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___ico_sequent__TOP__0\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ mycore__DOT__video__DOT__visible_y;
    mycore__DOT__video__DOT__visible_y = 0;
    IData/*31:0*/ mycore__DOT__video__DOT__paint__DOT__status_mix;
    mycore__DOT__video__DOT__paint__DOT__status_mix = 0;
    CData/*7:0*/ mycore__DOT__video__DOT__paint__DOT__rail;
    mycore__DOT__video__DOT__paint__DOT__rail = 0;
    // Body
    vlSelfRef.mycore__DOT__soc__DOT__cpu_reset = (1U 
                                                  & ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__boot_ok)) 
                                                     | (IData)(vlSelfRef.reset)));
    mycore__DOT__video__DOT__visible_y = ((IData)(vlSelfRef.scandouble)
                                           ? VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.mycore__DOT__video__DOT__vc), 1U)
                                           : (IData)(vlSelfRef.mycore__DOT__video__DOT__vc));
    vlSelfRef.video_r = 0U;
    vlSelfRef.video_g = 0U;
    vlSelfRef.video_b = 0U;
    mycore__DOT__video__DOT__paint__DOT__status_mix 
        = (((((((((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                   ^ (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                      ^ vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) 
                  ^ vlSelfRef.mycore__DOT__debug_scause) 
                 ^ (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                    ^ vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stval)) 
                ^ (vlSelfRef.mycore__DOT__soc__DOT__boot_status 
                   ^ ((((((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_tlb_hit) 
                            << 3U) | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_tlb_hit) 
                                      << 2U)) | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_wx_fault) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_wx_fault))) 
                         << 0x0000000aU) | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap0) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode) 
                                               << 7U))) 
                       | ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state) 
                            << 4U) | (8U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl 
                                            << 3U))) 
                          | ((4U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                    >> 0x0000001dU)) 
                             | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__wb_en) 
                                 << 1U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0))))) 
                      ^ ((((((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_tlb_hit) 
                               << 3U) | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_tlb_hit) 
                                         << 2U)) | 
                             (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_wx_fault) 
                               << 1U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_wx_fault))) 
                            << 0x0000000aU) | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap1) 
                                                << 9U) 
                                               | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode) 
                                                  << 7U))) 
                          | ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state) 
                               << 4U) | (8U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl 
                                               << 3U))) 
                             | ((4U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                       >> 0x0000001dU)) 
                                | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__wb_en) 
                                    << 1U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1))))) 
                         ^ (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__l1_hit0) 
                               << 0x0000001fU) | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__l1_hit1) 
                                                  << 0x0000001eU)) 
                             | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__l2_hit) 
                                 << 0x0000001dU) | 
                                (((IData)(vlSelfRef.mycore__DOT__soc__DOT__coh_invalidate) 
                                  << 0x0000001cU) | 
                                 (0x0fff0000U & ((IData)(vlSelfRef.mycore__DOT__soc__DOT__trace_count) 
                                                 << 0x00000010U))))) 
                            ^ ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_policy_fault) 
                                 << 0x0000000bU) | 
                                (((IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_allow) 
                                  << 0x0000000aU) | 
                                 ((IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_task) 
                                  << 8U))) | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_ipc_depth) 
                                               << 4U) 
                                              | (0x0000000fU 
                                                 & vlSelfRef.mycore__DOT__soc__DOT__bus_addr)))))))) 
               ^ vlSelfRef.mycore__DOT__soc__DOT__dmem[0U]) 
              ^ ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__hit_count) 
                   << 0x00000010U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__miss_count)) 
                 ^ (vlSelfRef.mycore__DOT__soc__DOT__dmem[1U] 
                    ^ (vlSelfRef.mycore__DOT__soc__DOT__dmem[3U] 
                       ^ (((IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__hit_count) 
                           << 0x00000010U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__miss_count)))))) 
             ^ (vlSelfRef.mycore__DOT__soc__DOT__trace_digest 
                ^ ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__hits) 
                     << 0x00000010U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__misses)) 
                   ^ ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__invalidations) 
                        << 0x00000010U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__shared_reads)) 
                      ^ (vlSelfRef.mycore__DOT__soc__DOT__dmem[2U] 
                         ^ vlSelfRef.mycore__DOT__soc__DOT__dmem[64U]))))) 
            ^ vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr) 
           ^ vlSelfRef.mycore__DOT__video__DOT__frame_ctr);
    mycore__DOT__video__DOT__paint__DOT__rail = (0x000000fcU 
                                                 & (mycore__DOT__video__DOT__paint__DOT__status_mix 
                                                    << 2U));
    if (vlSelfRef.mycore__DOT__video__DOT__active) {
        vlSelfRef.video_r = 2U;
        vlSelfRef.video_g = 4U;
        vlSelfRef.video_b = 6U;
        if (((IData)(vlSelfRef.bootrom_loaded) & (IData)(vlSelfRef.mycore__DOT__video__DOT__boot_draw_q))) {
            vlSelfRef.video_r = ((0x000000f8U & ((IData)(vlSelfRef.mycore__DOT__video__DOT__boot_pixel) 
                                                 >> 8U)) 
                                 | (7U & ((IData)(vlSelfRef.mycore__DOT__video__DOT__boot_pixel) 
                                          >> 0x0dU)));
            vlSelfRef.video_g = ((0x000000fcU & ((IData)(vlSelfRef.mycore__DOT__video__DOT__boot_pixel) 
                                                 >> 3U)) 
                                 | (3U & ((IData)(vlSelfRef.mycore__DOT__video__DOT__boot_pixel) 
                                          >> 9U)));
            vlSelfRef.video_b = ((0x000000f8U & ((IData)(vlSelfRef.mycore__DOT__video__DOT__boot_pixel) 
                                                 << 3U)) 
                                 | (7U & ((IData)(vlSelfRef.mycore__DOT__video__DOT__boot_pixel) 
                                          >> 2U)));
        } else {
            if (((0x0000003fU & (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)) 
                 == (0x0000003fU & mycore__DOT__video__DOT__paint__DOT__status_mix))) {
                if (vlSelfRef.mycore__DOT__debug_trap) {
                    vlSelfRef.video_r = 0x78U;
                    vlSelfRef.video_g = 0x00000018U;
                    vlSelfRef.video_b = 0x0000001cU;
                } else {
                    vlSelfRef.video_r = 0U;
                    vlSelfRef.video_g = (0x000000ffU 
                                         & ((IData)(0x18U) 
                                            + (0x0000001fU 
                                               & ((IData)(mycore__DOT__video__DOT__paint__DOT__rail) 
                                                  >> 3U))));
                    vlSelfRef.video_b = (0x000000ffU 
                                         & ((IData)(0x30U) 
                                            + (0x0000003fU 
                                               & ((IData)(mycore__DOT__video__DOT__paint__DOT__rail) 
                                                  >> 2U))));
                }
            }
            if (((0x0030U > (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)) 
                 | (0x01e0U <= (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)))) {
                if (vlSelfRef.mycore__DOT__debug_trap) {
                    vlSelfRef.video_r = 0x5aU;
                    vlSelfRef.video_g = 8U;
                    vlSelfRef.video_b = 0x0cU;
                } else {
                    vlSelfRef.video_r = 4U;
                    vlSelfRef.video_g = 0x0eU;
                    vlSelfRef.video_b = 0x18U;
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x000003ffU 
                                                & ((IData)(mycore__DOT__video__DOT__visible_y) 
                                                   - 
                                                   (0x001eU 
                                                    & (- (IData)((IData)(vlSelfRef.pal))))));
    vlSelfRef.mycore__DOT__video__DOT__boot_draw = 
        ((IData)(vlSelfRef.mycore__DOT__video__DOT__active) 
         & ((0x0030U <= (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)) 
            & ((0x01e0U > (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)) 
               & (((IData)(mycore__DOT__video__DOT__visible_y) 
                   >= (0x001eU & (- (IData)((IData)(vlSelfRef.pal))))) 
                  & ((IData)(mycore__DOT__video__DOT__visible_y) 
                     < (0x000003ffU & ((IData)(0x00f0U) 
                                       + (0x001eU & 
                                          (- (IData)((IData)(vlSelfRef.pal)))))))))));
}

void Vmycore___024root___eval_ico(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_ico\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmycore___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycore___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmycore___024root___eval_phase__ico(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_phase__ico\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmycore___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmycore___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vmycore___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmycore___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmycore___024root___eval_triggers_vec__act(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_triggers_vec__act\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vmycore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vmycore___024root___nba_sequent__TOP__0(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___nba_sequent__TOP__0\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ mycore__DOT__video__DOT__visible_y;
    mycore__DOT__video__DOT__visible_y = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__old_word;
    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__old_word = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__new_word;
    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__new_word = 0;
    CData/*3:0*/ __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__be;
    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__be = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout;
    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__old_word;
    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__old_word = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__new_word;
    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__new_word = 0;
    CData/*3:0*/ __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__be;
    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__be = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__49__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__49__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__50__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__50__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__tval = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__Vfuncout;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3 = 0;
    CData/*1:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__addr = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value = 0;
    CData/*7:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__byte_value;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__byte_value = 0;
    SData/*15:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__half_value;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__half_value = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__55__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__55__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__56__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__56__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__57__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__57__cause = 0;
    SData/*11:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__60__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__60__tval = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__Vfuncout;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr = 0;
    SData/*11:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__63__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__63__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__64__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__64__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__65__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__65__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__66__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__66__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__67__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__67__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__68__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__68__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__69__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__69__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__70__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__70__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__71__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__71__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__72__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__72__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__73__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__73__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__74__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__74__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__75__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__75__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__76__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__76__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__77__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__77__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__78__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__78__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__79__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__79__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__80__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__80__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__81__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__81__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__82__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__82__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__83__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__83__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__84__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__84__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__85__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__85__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__86__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__86__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__87__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__87__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__88__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__88__tval = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__store_supported__89__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__store_supported__89__f3 = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3 = 0;
    CData/*1:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__91__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__91__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__92__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__92__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__93__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__93__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__94__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__94__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__95__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__95__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__96__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__96__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__97__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__97__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__98__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__98__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__99__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__99__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__100__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__100__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__101__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__101__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__102__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__102__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__103__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__103__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__104__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__104__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__105__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__105__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__106__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__106__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__107__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__107__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__108__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__108__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__109__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__109__tval = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3 = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3 = 0;
    CData/*1:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__112__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__112__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__113__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__113__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__114__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__114__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__115__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__115__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__116__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__116__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__125__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__125__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__126__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__126__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__tval = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__Vfuncout;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3 = 0;
    CData/*1:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__addr = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value = 0;
    CData/*7:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__byte_value;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__byte_value = 0;
    SData/*15:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__half_value;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__half_value = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__131__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__131__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__132__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__132__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__133__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__133__cause = 0;
    SData/*11:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__136__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__136__tval = 0;
    IData/*31:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__Vfuncout;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr = 0;
    SData/*11:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__139__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__139__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__140__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__140__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__141__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__141__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__142__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__142__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__143__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__143__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__144__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__144__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__145__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__145__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__146__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__146__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__147__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__147__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__148__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__148__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__149__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__149__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__150__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__150__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__151__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__151__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__152__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__152__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__153__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__153__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__154__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__154__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__155__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__155__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__156__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__156__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__157__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__157__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__158__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__158__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__159__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__159__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__160__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__160__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__161__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__161__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__162__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__162__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__163__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__163__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__164__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__164__tval = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__store_supported__165__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__store_supported__165__f3 = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3 = 0;
    CData/*1:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__167__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__167__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__168__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__168__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__169__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__169__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__170__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__170__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__171__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__171__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__172__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__172__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__173__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__173__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__174__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__174__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__175__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__175__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__176__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__176__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__177__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__177__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__178__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__178__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__179__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__179__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__180__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__180__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__181__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__181__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__182__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__182__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__183__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__183__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__184__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__184__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__185__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__185__tval = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3 = 0;
    CData/*2:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3 = 0;
    CData/*1:0*/ __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__addr;
    __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__addr = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__188__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__188__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__189__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__189__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__190__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__190__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__191__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__191__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__192__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__192__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__tval = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__cause;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__cause = 0;
    IData/*31:0*/ __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__tval;
    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__tval = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__entropy_lfsr;
    __Vdly__mycore__DOT__soc__DOT__entropy_lfsr = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__dma_tick;
    __Vdly__mycore__DOT__soc__DOT__dma_tick = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__mmio_out;
    __Vdly__mycore__DOT__soc__DOT__mmio_out = 0;
    CData/*1:0*/ __Vdly__mycore__DOT__soc__DOT__secure_boot__DOT__state;
    __Vdly__mycore__DOT__soc__DOT__secure_boot__DOT__state = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__instr;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__instr = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_val;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_val = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs2_val;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs2_val = 0;
    CData/*4:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_q;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_q = 0;
    CData/*4:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rd_q;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rd_q = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc = 0;
    CData/*0:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0;
    CData/*0:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_addr = 0;
    CData/*2:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3 = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_addr = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_count;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_count = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_satp;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_satp = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps = 0;
    CData/*1:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 0;
    CData/*2:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0;
    CData/*4:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0;
    CData/*5:0*/ __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__instr;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__instr = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_val;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_val = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs2_val;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs2_val = 0;
    CData/*4:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_q;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_q = 0;
    CData/*4:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rd_q;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rd_q = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc = 0;
    CData/*0:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0;
    CData/*0:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_addr = 0;
    CData/*2:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3 = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_addr = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_count;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_count = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_satp;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_satp = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps = 0;
    CData/*1:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 0;
    CData/*2:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0;
    CData/*4:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0;
    CData/*5:0*/ __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__hit_count;
    __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__hit_count = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__miss_count;
    __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__miss_count = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__hit_count;
    __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__hit_count = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__miss_count;
    __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__miss_count = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__l2__DOT__hits;
    __Vdly__mycore__DOT__soc__DOT__l2__DOT__hits = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__l2__DOT__misses;
    __Vdly__mycore__DOT__soc__DOT__l2__DOT__misses = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__coherence__DOT__invalidations;
    __Vdly__mycore__DOT__soc__DOT__coherence__DOT__invalidations = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__coherence__DOT__shared_reads;
    __Vdly__mycore__DOT__soc__DOT__coherence__DOT__shared_reads = 0;
    CData/*1:0*/ __Vdly__mycore__DOT__soc__DOT__kernel_task;
    __Vdly__mycore__DOT__soc__DOT__kernel_task = 0;
    CData/*3:0*/ __Vdly__mycore__DOT__soc__DOT__kernel_ipc_depth;
    __Vdly__mycore__DOT__soc__DOT__kernel_ipc_depth = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__soc__DOT__trace_digest;
    __Vdly__mycore__DOT__soc__DOT__trace_digest = 0;
    SData/*15:0*/ __Vdly__mycore__DOT__soc__DOT__trace_count;
    __Vdly__mycore__DOT__soc__DOT__trace_count = 0;
    CData/*0:0*/ __Vdly__ce_pix;
    __Vdly__ce_pix = 0;
    SData/*9:0*/ __Vdly__mycore__DOT__video__DOT__hc;
    __Vdly__mycore__DOT__video__DOT__hc = 0;
    SData/*9:0*/ __Vdly__mycore__DOT__video__DOT__vc;
    __Vdly__mycore__DOT__video__DOT__vc = 0;
    IData/*31:0*/ __Vdly__mycore__DOT__video__DOT__frame_ctr;
    __Vdly__mycore__DOT__video__DOT__frame_ctr = 0;
    IData/*31:0*/ __VdlyVal__mycore__DOT__soc__DOT__dmem__v0;
    __VdlyVal__mycore__DOT__soc__DOT__dmem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__mycore__DOT__soc__DOT__dmem__v0;
    __VdlyDim0__mycore__DOT__soc__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__dmem__v0;
    __VdlySet__mycore__DOT__soc__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyVal__mycore__DOT__soc__DOT__dmem__v1;
    __VdlyVal__mycore__DOT__soc__DOT__dmem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__mycore__DOT__soc__DOT__dmem__v1;
    __VdlyDim0__mycore__DOT__soc__DOT__dmem__v1 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__dmem__v1;
    __VdlySet__mycore__DOT__soc__DOT__dmem__v1 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v0;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v1;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v32;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v32 = 0;
    IData/*31:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v0;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v1;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v32;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v32 = 0;
    IData/*31:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*7:0*/ __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*5:0*/ __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v0 = 0;
    CData/*3:0*/ __VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16;
    __VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v0;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v0 = 0;
    IData/*25:0*/ __VdlyVal__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16;
    __VdlyVal__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16 = 0;
    CData/*3:0*/ __VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16;
    __VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v0 = 0;
    CData/*3:0*/ __VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16;
    __VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v0;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v0 = 0;
    IData/*25:0*/ __VdlyVal__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16;
    __VdlyVal__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16 = 0;
    CData/*3:0*/ __VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16;
    __VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v0 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__valid__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v32;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v0;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v0 = 0;
    IData/*24:0*/ __VdlyVal__mycore__DOT__soc__DOT__l2__DOT__tag__v32;
    __VdlyVal__mycore__DOT__soc__DOT__l2__DOT__tag__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__tag__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__tag__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v32;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v0;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v0 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__valid__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v32;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v0;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v0 = 0;
    CData/*0:0*/ __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__owner__v32;
    __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__owner__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__owner__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__owner__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v32;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v0;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v0 = 0;
    CData/*0:0*/ __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__modified__v32;
    __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__modified__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__modified__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__modified__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v32;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v0;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v0 = 0;
    IData/*19:0*/ __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32;
    __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32 = 0;
    CData/*4:0*/ __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32;
    __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32 = 0;
    SData/*15:0*/ __VdlyVal__mycore__DOT__video__DOT__boot_image__DOT__ram__v0;
    __VdlyVal__mycore__DOT__video__DOT__boot_image__DOT__ram__v0 = 0;
    IData/*16:0*/ __VdlyDim0__mycore__DOT__video__DOT__boot_image__DOT__ram__v0;
    __VdlyDim0__mycore__DOT__video__DOT__boot_image__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__mycore__DOT__video__DOT__boot_image__DOT__ram__v0;
    __VdlySet__mycore__DOT__video__DOT__boot_image__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    IData/*31:0*/ __Vilp7;
    IData/*31:0*/ __Vilp8;
    IData/*31:0*/ __Vilp9;
    IData/*31:0*/ __Vilp10;
    // Body
    __VdlySet__mycore__DOT__video__DOT__boot_image__DOT__ram__v0 = 0U;
    __Vdly__mycore__DOT__soc__DOT__trace_count = vlSelfRef.mycore__DOT__soc__DOT__trace_count;
    __Vdly__mycore__DOT__soc__DOT__secure_boot__DOT__state 
        = vlSelfRef.mycore__DOT__soc__DOT__secure_boot__DOT__state;
    __Vdly__mycore__DOT__soc__DOT__kernel_task = vlSelfRef.mycore__DOT__soc__DOT__kernel_task;
    __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__hit_count 
        = vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__hit_count;
    __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__miss_count 
        = vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__miss_count;
    __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__hit_count 
        = vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__hit_count;
    __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__miss_count 
        = vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__miss_count;
    __Vdly__ce_pix = vlSelfRef.ce_pix;
    __Vdly__mycore__DOT__video__DOT__vc = vlSelfRef.mycore__DOT__video__DOT__vc;
    __Vdly__mycore__DOT__video__DOT__frame_ctr = vlSelfRef.mycore__DOT__video__DOT__frame_ctr;
    __Vdly__mycore__DOT__video__DOT__hc = vlSelfRef.mycore__DOT__video__DOT__hc;
    __Vdly__mycore__DOT__soc__DOT__coherence__DOT__invalidations 
        = vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__invalidations;
    __Vdly__mycore__DOT__soc__DOT__l2__DOT__hits = vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__hits;
    __Vdly__mycore__DOT__soc__DOT__l2__DOT__misses 
        = vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__misses;
    if ((1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu_reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr)))) {
                VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:37: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"mycore.soc.assertions", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("rtl\\harvos_assertions.sv", 37, "");
            }
            if (VL_UNLIKELY(((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr)))) {
                VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:38: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"mycore.soc.assertions", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("rtl\\harvos_assertions.sv", 38, "");
            }
        }
        if (vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__assertions__d_we) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (((0x00000400U 
                                             <= vlSelfRef.mycore__DOT__soc__DOT__bus_addr) 
                                            & (0x00001400U 
                                               > vlSelfRef.mycore__DOT__soc__DOT__bus_addr)) 
                                           | ((0xffff0000U 
                                               <= vlSelfRef.mycore__DOT__soc__DOT__bus_addr) 
                                              & (0xffff0100U 
                                                 > vlSelfRef.mycore__DOT__soc__DOT__bus_addr)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:39: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"mycore.soc.assertions", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("rtl\\harvos_assertions.sv", 39, "");
                }
            }
        }
        if (((0x03ffU == (0x000003ffU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick))) 
             & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_allow))) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0x00000500U > ((IData)(0x00000500U) 
                                                 + 
                                                 (0x0000003cU 
                                                  & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:42: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"mycore.soc.assertions", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("rtl\\harvos_assertions.sv", 42, "");
                }
                if (VL_UNLIKELY(((0x0000000000000540ULL 
                                  < (0x00000001ffffffffULL 
                                     & (4ULL + (QData)((IData)(
                                                               ((IData)(0x00000500U) 
                                                                + 
                                                                (0x0000003cU 
                                                                 & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick))))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:46: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"mycore.soc.assertions", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("rtl\\harvos_assertions.sv", 46, "");
                }
            }
        }
    }
    __Vdly__mycore__DOT__soc__DOT__kernel_ipc_depth 
        = vlSelfRef.mycore__DOT__soc__DOT__kernel_ipc_depth;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v32 = 0U;
    __Vdly__mycore__DOT__soc__DOT__coherence__DOT__shared_reads 
        = vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__shared_reads;
    __Vdly__mycore__DOT__soc__DOT__mmio_out = vlSelfRef.mycore__DOT__soc__DOT__mmio_out;
    __Vdly__mycore__DOT__soc__DOT__entropy_lfsr = vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr;
    __VdlySet__mycore__DOT__soc__DOT__dmem__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__dmem__v1 = 0U;
    __Vdly__mycore__DOT__soc__DOT__dma_tick = vlSelfRef.mycore__DOT__soc__DOT__dma_tick;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16 = 0U;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs2_val 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_q 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_q;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rd_q 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rd_q;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__wb_data;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__next_pc;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v1 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33 = 0U;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__wb_en;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stval;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__instr 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scause;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs2_val 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_q 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_q;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rd_q 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rd_q;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__wb_data;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__next_pc;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v1 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33 = 0U;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__wb_en;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stval;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__instr 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scause;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_load;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_load;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_count 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_count;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_count 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_count;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_addr 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_addr 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_addr 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_addr 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0U;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state;
    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0U;
    __Vdly__mycore__DOT__soc__DOT__trace_digest = vlSelfRef.mycore__DOT__soc__DOT__trace_digest;
    if (vlSelfRef.bootrom_wr) {
        __VdlyVal__mycore__DOT__video__DOT__boot_image__DOT__ram__v0 
            = vlSelfRef.bootrom_data;
        __VdlyDim0__mycore__DOT__video__DOT__boot_image__DOT__ram__v0 
            = vlSelfRef.bootrom_addr;
        __VdlySet__mycore__DOT__video__DOT__boot_image__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.reset) {
        __Vdly__mycore__DOT__soc__DOT__trace_count = 0U;
        __Vdly__mycore__DOT__soc__DOT__mmio_out = 0U;
        __Vdly__mycore__DOT__soc__DOT__entropy_lfsr = 0x1aceb00cU;
        __Vdly__mycore__DOT__soc__DOT__dma_tick = 0U;
        __Vdly__mycore__DOT__soc__DOT__trace_digest = 0x48415256U;
        __Vdly__mycore__DOT__soc__DOT__secure_boot__DOT__state = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__boot_ok = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__boot_mpu_lock = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__boot_status = 0U;
        __Vdly__ce_pix = 0U;
        __Vdly__mycore__DOT__video__DOT__hc = 0U;
        __Vdly__mycore__DOT__video__DOT__vc = 0U;
        vlSelfRef.HBlank = 0U;
        vlSelfRef.HSync = 0U;
        vlSelfRef.VBlank = 0U;
        vlSelfRef.VSync = 0U;
        __Vdly__mycore__DOT__video__DOT__frame_ctr = 0U;
    } else {
        if (vlSelfRef.mycore__DOT__soc__DOT__trace_event) {
            __Vdly__mycore__DOT__soc__DOT__trace_count 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__trace_count)));
            __Vdly__mycore__DOT__soc__DOT__trace_digest 
                = ((((vlSelfRef.mycore__DOT__soc__DOT__trace_digest 
                      << 5U) | (vlSelfRef.mycore__DOT__soc__DOT__trace_digest 
                                >> 0x0000001bU)) ^ 
                    ((IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_req)
                      ? vlSelfRef.mycore__DOT__soc__DOT__bus_addr
                      : ((0x03ffU == (0x000003ffU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)))
                          ? ((IData)(0x00000500U) + 
                             (0x0000003cU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)))
                          : vlSelfRef.mycore__DOT__debug_scause))) 
                   ^ ((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap0)
                       ? 0xe0U : ((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap1)
                                   ? 0xe1U : ((IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_policy_fault)
                                               ? 0xa1U
                                               : ((0x03ffU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)))
                                                   ? 0xd0U
                                                   : 
                                                  ((IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_we)
                                                    ? 0x57U
                                                    : 0x52U))))));
        }
        if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_req) 
             & (IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_we))) {
            if ((1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_in_range)))) {
                if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_is_mmio) 
                     & (0U == (0x000000ffU & vlSelfRef.mycore__DOT__soc__DOT__bus_addr)))) {
                    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__be 
                        = vlSelfRef.mycore__DOT__soc__DOT__bus_be;
                    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__new_word 
                        = vlSelfRef.mycore__DOT__soc__DOT__bus_wdata;
                    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__old_word 
                        = vlSelfRef.mycore__DOT__soc__DOT__mmio_out;
                    __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout 
                        = __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__old_word;
                    if ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__be))) {
                        __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout 
                            = ((0xffffff00U & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout) 
                               | (0x000000ffU & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__new_word));
                    }
                    if ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__be))) {
                        __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout 
                            = ((0xffff00ffU & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout) 
                               | (0x0000ff00U & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__new_word));
                    }
                    if ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__be))) {
                        __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout 
                            = ((0xff00ffffU & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout) 
                               | (0x00ff0000U & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__new_word));
                    }
                    if ((8U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__be))) {
                        __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout 
                            = ((0x00ffffffU & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout) 
                               | (0xff000000U & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__new_word));
                    }
                    __Vdly__mycore__DOT__soc__DOT__mmio_out 
                        = __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__36__Vfuncout;
                }
            }
            if (vlSelfRef.mycore__DOT__soc__DOT__d_in_range) {
                __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__be 
                    = vlSelfRef.mycore__DOT__soc__DOT__bus_be;
                __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__new_word 
                    = vlSelfRef.mycore__DOT__soc__DOT__bus_wdata;
                __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__old_word 
                    = vlSelfRef.mycore__DOT__soc__DOT__dmem
                    [(0x000003ffU & ((vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                      - (IData)(0x00000400U)) 
                                     >> 2U))];
                vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb 
                    = __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__old_word;
                if ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__be))) {
                    vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb 
                        = ((0xffffff00U & vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb) 
                           | (0x000000ffU & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__new_word));
                }
                if ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__be))) {
                    vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb 
                        = ((0xffff00ffU & vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb) 
                           | (0x0000ff00U & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__new_word));
                }
                if ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__be))) {
                    vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb 
                        = ((0xff00ffffU & vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb) 
                           | (0x00ff0000U & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__new_word));
                }
                if ((8U & (IData)(__Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__be))) {
                    vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb 
                        = ((0x00ffffffU & vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb) 
                           | (0xff000000U & __Vfunc_mycore__DOT__soc__DOT__apply_wstrb__35__new_word));
                }
                __VdlyVal__mycore__DOT__soc__DOT__dmem__v0 
                    = vlSelfRef.mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb;
                __VdlyDim0__mycore__DOT__soc__DOT__dmem__v0 
                    = (0x000003ffU & ((vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                       - (IData)(0x00000400U)) 
                                      >> 2U));
                __VdlySet__mycore__DOT__soc__DOT__dmem__v0 = 1U;
            }
        }
        __Vdly__mycore__DOT__soc__DOT__entropy_lfsr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr 
                << 1U) | (1U & VL_REDXOR_32((0x80200003U 
                                             & vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr))));
        __Vdly__mycore__DOT__soc__DOT__dma_tick = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)));
        if (((0x03ffU == (0x000003ffU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick))) 
             & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_allow))) {
            __VdlyVal__mycore__DOT__soc__DOT__dmem__v1 
                = (vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr 
                   ^ (0xd00d0000U | (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)));
            __VdlyDim0__mycore__DOT__soc__DOT__dmem__v1 
                = (0x000003ffU & ((vlSelfRef.mycore__DOT__soc__DOT__dma_addr 
                                   - (IData)(0x00000400U)) 
                                  >> 2U));
            __VdlySet__mycore__DOT__soc__DOT__dmem__v1 = 1U;
        }
        if ((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__secure_boot__DOT__state))) {
            vlSelfRef.mycore__DOT__soc__DOT__boot_status = 0xfec3357fU;
            __Vdly__mycore__DOT__soc__DOT__secure_boot__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__secure_boot__DOT__state))) {
            vlSelfRef.mycore__DOT__soc__DOT__boot_mpu_lock = 1U;
            __Vdly__mycore__DOT__soc__DOT__secure_boot__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__secure_boot__DOT__state))) {
            vlSelfRef.mycore__DOT__soc__DOT__boot_ok = 1U;
            vlSelfRef.mycore__DOT__soc__DOT__boot_mpu_lock = 1U;
        } else {
            vlSelfRef.mycore__DOT__soc__DOT__boot_ok = 0U;
            vlSelfRef.mycore__DOT__soc__DOT__boot_mpu_lock = 0U;
        }
        __Vdly__ce_pix = (1U & ((IData)(vlSelfRef.scandouble) 
                                | (~ (IData)(vlSelfRef.ce_pix))));
        if (vlSelfRef.ce_pix) {
            if ((0x027dU == (IData)(vlSelfRef.mycore__DOT__video__DOT__hc))) {
                if (((IData)(vlSelfRef.mycore__DOT__video__DOT__vc) 
                     == ((IData)(vlSelfRef.pal) ? ((IData)(vlSelfRef.scandouble)
                                                    ? 0x026fU
                                                    : 0x0137U)
                          : ((IData)(vlSelfRef.scandouble)
                              ? 0x020bU : 0x0105U)))) {
                    __Vdly__mycore__DOT__video__DOT__frame_ctr 
                        = ((IData)(1U) + vlSelfRef.mycore__DOT__video__DOT__frame_ctr);
                    __Vdly__mycore__DOT__video__DOT__vc = 0U;
                } else {
                    __Vdly__mycore__DOT__video__DOT__vc 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mycore__DOT__video__DOT__vc)));
                }
                __Vdly__mycore__DOT__video__DOT__hc = 0U;
            } else {
                __Vdly__mycore__DOT__video__DOT__hc 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)));
            }
            if ((0x0211U == (IData)(vlSelfRef.mycore__DOT__video__DOT__hc))) {
                vlSelfRef.HBlank = 1U;
            } else if ((0U == (IData)(vlSelfRef.mycore__DOT__video__DOT__hc))) {
                vlSelfRef.HBlank = 0U;
            }
            if ((0x0220U == (IData)(vlSelfRef.mycore__DOT__video__DOT__hc))) {
                vlSelfRef.HSync = 1U;
                if (vlSelfRef.pal) {
                    if (((IData)(vlSelfRef.mycore__DOT__video__DOT__vc) 
                         == ((IData)(vlSelfRef.scandouble)
                              ? 0x0261U : 0x0130U))) {
                        vlSelfRef.VSync = 1U;
                    } else if (((IData)(vlSelfRef.mycore__DOT__video__DOT__vc) 
                                == ((IData)(vlSelfRef.scandouble)
                                     ? 0x0269U : 0x0134U))) {
                        vlSelfRef.VSync = 0U;
                    }
                    if (((IData)(vlSelfRef.mycore__DOT__video__DOT__vc) 
                         == ((IData)(vlSelfRef.scandouble)
                              ? 0x0259U : 0x012cU))) {
                        vlSelfRef.VBlank = 1U;
                    } else if ((0U == (IData)(vlSelfRef.mycore__DOT__video__DOT__vc))) {
                        vlSelfRef.VBlank = 0U;
                    }
                } else {
                    if (((IData)(vlSelfRef.mycore__DOT__video__DOT__vc) 
                         == ((IData)(vlSelfRef.scandouble)
                              ? 0x01eaU : 0x00f5U))) {
                        vlSelfRef.VSync = 1U;
                    } else if (((IData)(vlSelfRef.mycore__DOT__video__DOT__vc) 
                                == ((IData)(vlSelfRef.scandouble)
                                     ? 0x01f0U : 0x00f8U))) {
                        vlSelfRef.VSync = 0U;
                    }
                    if (((IData)(vlSelfRef.mycore__DOT__video__DOT__vc) 
                         == ((IData)(vlSelfRef.scandouble)
                              ? 0x01e0U : 0x00f0U))) {
                        vlSelfRef.VBlank = 1U;
                    } else if ((0U == (IData)(vlSelfRef.mycore__DOT__video__DOT__vc))) {
                        vlSelfRef.VBlank = 0U;
                    }
                }
            }
            if ((0x024eU == (IData)(vlSelfRef.mycore__DOT__video__DOT__hc))) {
                vlSelfRef.HSync = 0U;
            }
        }
    }
    if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu_reset) 
         | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__tlb_flush))) {
        __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 1U;
    } else {
        if (((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit)) 
             & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid))) {
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 1U;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags;
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl)));
        }
        if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
             & ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit)) 
                & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid)))) {
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 1U;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags;
            __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl)));
        }
    }
    if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu_reset) 
         | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__tlb_flush))) {
        __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 1U;
    } else {
        if (((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit)) 
             & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid))) {
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 1U;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags;
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl)));
        }
        if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
             & ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit)) 
                & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid)))) {
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 1U;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags;
            __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl)));
        }
    }
    if (vlSelfRef.mycore__DOT__soc__DOT__cpu_reset) {
        __Vdly__mycore__DOT__soc__DOT__kernel_task = 0U;
        __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__hit_count = 0U;
        __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__miss_count = 0U;
        __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__hit_count = 0U;
        __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__miss_count = 0U;
        __Vdly__mycore__DOT__soc__DOT__coherence__DOT__invalidations = 0U;
        __Vdly__mycore__DOT__soc__DOT__l2__DOT__hits = 0U;
        __Vdly__mycore__DOT__soc__DOT__l2__DOT__misses = 0U;
        __Vdly__mycore__DOT__soc__DOT__kernel_ipc_depth = 0U;
        __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v0 = 1U;
        __Vdly__mycore__DOT__soc__DOT__coherence__DOT__shared_reads = 0U;
        __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v0 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v0 = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__last_grant = 0U;
        __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v0 = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc = 0x000000c0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__instr = 0x00000013U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_val = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs2_val = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_q = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rd_q = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc = 0x000000c0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_addr = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3 = 2U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_addr = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_count = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus = 0x00000300U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec = 0x000000a0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_satp = 0x80000000U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__tlb_flush = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
        __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v1 = 1U;
        __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v0 = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__instr = 0x00000013U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_val = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs2_val = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_q = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rd_q = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_addr = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3 = 2U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_addr = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_count = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus = 0x00000300U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec = 0x000000a0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_satp = 0x80000000U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl = 1U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__tlb_flush = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 0U;
        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
        __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v1 = 1U;
    } else {
        if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)))) {
            __Vdly__mycore__DOT__soc__DOT__kernel_task 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_task)));
        }
        if (vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__l1d0__access) {
            if (vlSelfRef.mycore__DOT__soc__DOT__l1_hit0) {
                __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__hit_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__hit_count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1_hit0)))) {
                __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__miss_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__miss_count)));
                __VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16 
                    = (0x0000000fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16 = 1U;
                __VdlyVal__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16 
                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                       >> 6U);
                __VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16 
                    = (0x0000000fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16 = 1U;
            }
        }
        if (vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__l1d1__access) {
            if (vlSelfRef.mycore__DOT__soc__DOT__l1_hit1) {
                __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__hit_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__hit_count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1_hit1)))) {
                __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__miss_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__miss_count)));
                __VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16 
                    = (0x0000000fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16 = 1U;
                __VdlyVal__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16 
                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                       >> 6U);
                __VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16 
                    = (0x0000000fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16 = 1U;
            }
        }
        if (vlSelfRef.mycore__DOT__soc__DOT__bus_req) {
            if (vlSelfRef.mycore__DOT__soc__DOT__coh_invalidate) {
                __Vdly__mycore__DOT__soc__DOT__coherence__DOT__invalidations 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__invalidations)));
            }
            if (vlSelfRef.mycore__DOT__soc__DOT__l2_hit) {
                __Vdly__mycore__DOT__soc__DOT__l2__DOT__hits 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__hits)));
            }
            if ((1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__l2_hit)))) {
                __Vdly__mycore__DOT__soc__DOT__l2__DOT__misses 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__misses)));
                __VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__valid__v32 
                    = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                      >> 2U));
                __VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v32 = 1U;
                __VdlyVal__mycore__DOT__soc__DOT__l2__DOT__tag__v32 
                    = (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                       >> 7U);
                __VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__tag__v32 
                    = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                      >> 2U));
                __VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v32 = 1U;
            }
            __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__valid__v32 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v32 = 1U;
            __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32 
                = (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                   >> 0x0000000cU);
            __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32 = 1U;
            __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__owner__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__d_ready1;
            __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__owner__v32 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v32 = 1U;
            __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__modified__v32 
                = vlSelfRef.mycore__DOT__soc__DOT__bus_we;
            __VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__modified__v32 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v32 = 1U;
            if ((((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_we)) 
                  & (IData)(vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__same_line)) 
                 & (vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner
                    [(0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                     >> 2U))] != (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_ready1)))) {
                __Vdly__mycore__DOT__soc__DOT__coherence__DOT__shared_reads 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__shared_reads)));
            }
        }
        if ((((IData)(vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__kernel_model__syscall_valid) 
              & (IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_allow)) 
             & (1U == (0x0000000fU & vlSelfRef.mycore__DOT__soc__DOT__bus_addr)))) {
            __Vdly__mycore__DOT__soc__DOT__kernel_ipc_depth 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_ipc_depth)));
        } else if (((0xffU == (0x000000ffU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick))) 
                    & (0U != (IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_ipc_depth)))) {
            __Vdly__mycore__DOT__soc__DOT__kernel_ipc_depth 
                = (0x0000000fU & ((IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_ipc_depth) 
                                  - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant0) 
             | (IData)(vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant1))) {
            vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__last_grant 
                = vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant1;
        }
        __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v32 = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__tlb_flush = 0U;
        if ((4U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))) {
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))) {
                if ((0U == vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_count)) {
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                        = ((IData)(4U) + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc);
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                } else if ((0U != (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr))) {
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__125__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 6U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__125__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow) {
                    if ((1U & ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_allow)) 
                               | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmio)))) {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__126__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 7U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__126__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    } else if (vlSelfRef.mycore__DOT__soc__DOT__d_ready1) {
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_addr 
                            = ((IData)(4U) + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr);
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_count 
                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_count 
                               - (IData)(1U));
                    } else {
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 5U;
                    }
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr;
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__cause 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__127__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                }
            } else {
                if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__wb_en) 
                     & (0U != (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rd_q)))) {
                    __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__wb_data;
                    __VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rd_q;
                    __VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33 = 1U;
                }
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__next_pc;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))) {
                if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow) {
                    if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_allow) {
                        if (vlSelfRef.mycore__DOT__soc__DOT__d_ready1) {
                            if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_load) {
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value 
                                    = vlSelfRef.mycore__DOT__soc__DOT__bus_rdata;
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__addr 
                                    = (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_addr);
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3;
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__byte_value 
                                    = (0x000000ffU 
                                       & ((0U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__addr))
                                           ? __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value
                                           : ((1U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__addr))
                                               ? (__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value 
                                                  >> 8U)
                                               : ((2U 
                                                   == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__addr))
                                                   ? 
                                                  (__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value 
                                                   >> 0x10U)
                                                   : 
                                                  (__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value 
                                                   >> 0x18U)))));
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__half_value 
                                    = (0x0000ffffU 
                                       & ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__addr))
                                           ? (__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value 
                                              >> 0x10U)
                                           : __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value));
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3))
                                        ? ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3))
                                            ? __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value
                                            : ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3))
                                                ? (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__half_value)
                                                : (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__byte_value)))
                                        : ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3))
                                            ? __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__value
                                            : ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__f3))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__half_value) 
                                                                   >> 0x0fU)))) 
                                                    << 0x00000010U) 
                                                   | (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__half_value))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__byte_value) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__byte_value)))));
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                    = __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_data__128__Vfuncout;
                            } else {
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__next_pc;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            }
                        } else {
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 3U;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_addr;
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__cause 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_cause;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__cause;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__129__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_addr;
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__cause 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__130__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                }
            } else {
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc 
                    = ((IData)(4U) + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc);
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken = 0U;
                if ((0x00000040U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                    if ((0x00000020U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        if ((0x00000010U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__131__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__131__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__132__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__132__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00000073U 
                                         == vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__133__cause 
                                            = ((0U 
                                                == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode))
                                                ? 8U
                                                : 9U);
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__133__cause;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    } else if ((0x00100073U 
                                                == vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 3U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    } else if ((((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                        >> 0x0000000cU)))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                       >> 0x0000000cU))))) {
                                        __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                               >> 0x00000014U);
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_8__csr_implemented 
                                            = (((((
                                                   ((((0x0100U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr)) 
                                                      || (0x0101U 
                                                          == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr))) 
                                                     || (0x0102U 
                                                         == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr))) 
                                                    || (0x0103U 
                                                        == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr))) 
                                                   || (0x0104U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr))) 
                                                  || (0x0105U 
                                                      == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr))) 
                                                 || (0x0120U 
                                                     == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr))) 
                                                || (0x0130U 
                                                    == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr))) 
                                               || (0x0140U 
                                                   == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_implemented__135__addr)));
                                        if ((1U & (
                                                   (0U 
                                                    == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode)) 
                                                   | (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_8__csr_implemented))))) {
                                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__136__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__136__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                        } else {
                                            __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                   >> 0x00000014U);
                                            __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__Vfuncout 
                                                = (
                                                   ((((((((0x0100U 
                                                           == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr)) 
                                                          | (0x0101U 
                                                             == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))) 
                                                         | (0x0102U 
                                                            == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))) 
                                                        | (0x0103U 
                                                           == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))) 
                                                       | (0x0104U 
                                                          == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))) 
                                                      | (0x0105U 
                                                         == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))) 
                                                     | (0x0120U 
                                                        == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))) 
                                                    | (0x0130U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr)))
                                                    ? 
                                                   ((0x0100U 
                                                     == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                     ? 
                                                    (0x00000300U 
                                                     | (3U 
                                                        & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus))
                                                     : 
                                                    ((0x0101U 
                                                      == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                      ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec
                                                      : 
                                                     ((0x0102U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                       ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc
                                                       : 
                                                      ((0x0103U 
                                                        == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                        ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scause
                                                        : 
                                                       ((0x0104U 
                                                         == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                         ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stval
                                                         : 
                                                        ((0x0105U 
                                                          == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                          ? 
                                                         (0x80000000U 
                                                          | vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp)
                                                          : 
                                                         ((0x0120U 
                                                           == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                           ? 
                                                          (0x13579bdfU 
                                                           ^ vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr)
                                                           : 
                                                          (1U 
                                                           | vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl))))))))
                                                    : 
                                                   ((0x0140U 
                                                     == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__addr))
                                                     ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps
                                                     : 0U));
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old 
                                                = __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__csr_read_value__137__Vfuncout;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new 
                                                = (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                        >> 0x0000000cU)))
                                                    ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                         >> 0x0000000cU)))
                                                     ? 
                                                    (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old 
                                                     | vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old 
                                                      & (~ vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val))
                                                      : vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old)));
                                            if (((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_q)))) {
                                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value 
                                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new;
                                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr 
                                                    = 
                                                    (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                     >> 0x00000014U);
                                                if (
                                                    ((((((((0x0100U 
                                                            == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr)) 
                                                           | (0x0101U 
                                                              == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) 
                                                          | (0x0102U 
                                                             == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) 
                                                         | (0x0103U 
                                                            == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) 
                                                        | (0x0104U 
                                                           == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) 
                                                       | (0x0105U 
                                                          == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) 
                                                      | (0x0120U 
                                                         == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) 
                                                     | (0x0130U 
                                                        == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr)))) {
                                                    if (
                                                        (0x0100U 
                                                         == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus 
                                                            = 
                                                            (0x00000300U 
                                                             | (3U 
                                                                & __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value));
                                                    } else if (
                                                               (0x0101U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value);
                                                    } else if (
                                                               (0x0102U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value);
                                                    } else if (
                                                               (0x0103U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
                                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value;
                                                    } else if (
                                                               (0x0104U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value;
                                                    } else if (
                                                               (0x0105U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                            = 
                                                            (0x80000000U 
                                                             | __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value);
                                                    } else if (
                                                               (0x0120U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom 
                                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value;
                                                    } else {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl 
                                                            = 
                                                            (1U 
                                                             | vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl);
                                                    }
                                                } else if (
                                                           (0x0140U 
                                                            == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__addr))) {
                                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps 
                                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__write_csr__138__value;
                                                }
                                            }
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old;
                                        }
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__139__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__139__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__140__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__140__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__141__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__141__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                               + ((
                                                   ((0x00000ffeU 
                                                     & ((- (IData)(
                                                                   (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                                    >> 0x0000001fU))) 
                                                        << 1U)) 
                                                    | (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                       >> 0x0000001fU)) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                           >> 0x0000000bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                             >> 0x00000014U))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                           >> 0x00000014U)))));
                                        if ((0U != 
                                             (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target))) {
                                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__142__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__142__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                        } else {
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc);
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                        }
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__143__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__143__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__144__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__144__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__145__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__145__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((0U != (7U 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                   >> 0x0000000cU)))) {
                                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__146__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__146__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    } else {
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                            = (0xfffffffeU 
                                               & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                                  + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i));
                                        if ((0U != 
                                             (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target))) {
                                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__147__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__147__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                        } else {
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc);
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                        }
                                    }
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__148__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__148__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__149__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__149__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00002000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)
                                            ? ((0x00001000U 
                                                & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)
                                                ? (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                                   >= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val)
                                                : (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                                   < vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val))
                                            : ((0x00001000U 
                                                & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)
                                                ? VL_GTES_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val)
                                                : VL_LTS_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val)));
                                } else if ((0x00002000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__150__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__150__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00001000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)
                                            ? (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                               != vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val)
                                            : (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                               == vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val));
                                }
                                if (((((((0U == (7U 
                                                 & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                    >> 0x0000000cU))) 
                                         | (1U == (7U 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                      >> 0x0000000cU)))) 
                                        | (4U == (7U 
                                                  & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                     >> 0x0000000cU)))) 
                                       | (5U == (7U 
                                                 & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                    >> 0x0000000cU)))) 
                                      | (6U == (7U 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                   >> 0x0000000cU)))) 
                                     | (7U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                           + (((- (IData)(
                                                          (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000dU) 
                                              | ((((2U 
                                                    & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                       >> 0x0000001eU)) 
                                                   | (1U 
                                                      & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                         >> 7U))) 
                                                  << 0x0000000bU) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                          >> 7U))))));
                                    if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken) 
                                         & (0U != (3U 
                                                   & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target)))) {
                                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__151__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__151__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken)
                                                ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target
                                                : ((IData)(4U) 
                                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    }
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__152__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__152__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__153__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__153__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__154__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__154__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((0x00000020U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                    if ((0x00000010U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__155__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__155__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_u;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__156__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__156__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__157__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__157__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00002000U 
                                         & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                        if ((0x00001000U 
                                             & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                                   & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val);
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                        } else {
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                                   | vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val);
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                        }
                                    } else if ((0x00001000U 
                                                & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                        if ((0U == 
                                             (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                              >> 0x00000019U))) {
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                                   >> 
                                                   (0x0000001fU 
                                                    & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val));
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                        } else if (
                                                   (0x20U 
                                                    == 
                                                    (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                     >> 0x00000019U))) {
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                                = VL_SHIFTRS_III(32,32,5, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val));
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                        } else {
                                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__158__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__158__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                        }
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                               ^ vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val);
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    }
                                } else if ((0x00002000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                                < vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = (VL_LTS_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                >> 0x00000019U))) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                               << (0x0000001fU 
                                                   & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val));
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__159__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__159__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else if ((0x20U == 
                                            (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                             >> 0x00000019U))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                           - vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val);
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                } else if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                   >> 0x00000019U))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                           + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val);
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__160__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__160__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__161__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__161__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__162__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__162__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__163__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__163__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__164__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__164__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__store_supported__165__f3 
                                = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_6__store_supported 
                                = (((0U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__store_supported__165__f3)) 
                                    | (1U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__store_supported__165__f3))) 
                                   | (2U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__store_supported__165__f3)));
                            if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_6__store_supported) {
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                       + ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                   >> 7U)))));
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__addr 
                                    = (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target);
                                __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3 
                                    = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                             >> 0x0000000cU));
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_7__memory_misaligned 
                                    = ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3))
                                        ? ((1U & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3) 
                                                  >> 1U)) 
                                           || ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__addr))))
                                        : ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3)) 
                                               || (0U 
                                                   != (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__addr)))
                                            : ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__166__addr)))));
                                if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_7__memory_misaligned) {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__167__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 6U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__167__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_addr 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3 
                                        = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                 >> 0x0000000cU));
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 3U;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__168__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__168__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__169__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__169__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__170__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__170__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((0x00000010U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                    if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__171__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__171__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                       + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_u);
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__172__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__172__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__173__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__173__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((0x00004000U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00002000U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                               & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i);
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                               | vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i);
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                >> 0x00000019U))) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                               >> (0x0000001fU 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                      >> 0x14U)));
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                 >> 0x00000019U))) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                                 >> 0x14U)));
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__174__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__174__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                           ^ vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i);
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00001000U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                        = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                            < vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i)
                                            ? 1U : 0U);
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                        = (VL_LTS_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i)
                                            ? 1U : 0U);
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                            >> 0x00000019U))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                           << (0x0000001fU 
                                               & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                  >> 0x14U)));
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__175__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__175__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                       + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i);
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__176__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__176__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__177__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__177__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                    if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                                if (((0U == (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                   >> 0x0000000cU))) 
                                     | (1U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = ((IData)(4U) 
                                           + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc);
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__tlb_flush 
                                        = (1U == (7U 
                                                  & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                     >> 0x0000000cU)));
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__178__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__178__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__179__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__179__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__180__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__180__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                            if ((0U == (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                              >> 0x0000000cU)))) {
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                            } else if ((1U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU)))) {
                                if ((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode))) {
                                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__181__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__181__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_addr 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_count 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val;
                                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 5U;
                                }
                            } else if ((2U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU)))) {
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
                                    = (0x13579bdfU 
                                       ^ (vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr 
                                          ^ vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom));
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 4U;
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__182__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__182__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__183__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__183__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__184__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__184__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__185__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__185__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                    if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr)) {
                        __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3 
                            = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                     >> 0x0000000cU));
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_4__load_supported 
                            = (((((0U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3)) 
                                  | (1U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3))) 
                                 | (2U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3))) 
                                | (4U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3))) 
                               | (5U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__load_supported__186__f3)));
                        if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_4__load_supported) {
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i);
                            __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__addr 
                                = (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target);
                            __Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3 
                                = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_5__memory_misaligned 
                                = ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3))
                                    ? ((1U & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3) 
                                              >> 1U)) 
                                       || ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3)) 
                                           && (1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__addr))))
                                    : ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3))
                                        ? ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3)) 
                                           || (0U != (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__addr)))
                                        : ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__f3)) 
                                           && (1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu1__DOT__memory_misaligned__187__addr)))));
                            if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_5__memory_misaligned) {
                                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__188__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 4U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__188__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                            } else {
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_addr 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3 
                                    = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                             >> 0x0000000cU));
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 3U;
                                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rd_q 
                                    = (0x0000001fU 
                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                          >> 7U));
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__189__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__189__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__190__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__190__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__191__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 2U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__191__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))) {
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_q 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                  >> 0x0fU));
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 2U;
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rd_q 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                  >> 7U));
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs
                [(0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                 >> 0x0fU))];
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs2_val 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs
                [(0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                 >> 0x14U))];
        } else {
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
            __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
            if ((0U != (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc))) {
                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__192__tval 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__192__tval;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
            } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow) {
                if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_allow) {
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__instr 
                        = ((0x00000100U > (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
                                           >> 2U)) ? vlSelfRef.mycore__DOT__soc__DOT__imem
                           [(0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
                                            >> 2U))]
                            : 0x00000013U);
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 1U;
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                    __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__cause 
                        = (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram)
                             ? 0x0000000aU : 1U) & 
                           (- (IData)((1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_allow))))));
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__193__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
                }
            } else {
                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__tval 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__cause 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_cause;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__cause;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__debug_trap1 = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
                    = __Vtask_mycore__DOT__soc__DOT__cpu1__DOT__enter_trap__194__tval;
                __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
            }
        }
        __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v32 = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__tlb_flush = 0U;
        if ((4U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))) {
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))) {
                if ((0U == vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_count)) {
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                        = ((IData)(4U) + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc);
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                } else if ((0U != (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr))) {
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__49__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 6U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__49__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow) {
                    if ((1U & ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_allow)) 
                               | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmio)))) {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__50__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 7U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__50__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    } else if (vlSelfRef.mycore__DOT__soc__DOT__d_ready0) {
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_addr 
                            = ((IData)(4U) + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr);
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_count 
                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_count 
                               - (IData)(1U));
                    } else {
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 5U;
                    }
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr;
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__cause 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__51__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                }
            } else {
                if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__wb_en) 
                     & (0U != (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rd_q)))) {
                    __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__wb_data;
                    __VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rd_q;
                    __VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33 = 1U;
                }
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__next_pc;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))) {
                if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow) {
                    if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_allow) {
                        if (vlSelfRef.mycore__DOT__soc__DOT__d_ready0) {
                            if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_load) {
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value 
                                    = vlSelfRef.mycore__DOT__soc__DOT__bus_rdata;
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__addr 
                                    = (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_addr);
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3;
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__byte_value 
                                    = (0x000000ffU 
                                       & ((0U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__addr))
                                           ? __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value
                                           : ((1U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__addr))
                                               ? (__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value 
                                                  >> 8U)
                                               : ((2U 
                                                   == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__addr))
                                                   ? 
                                                  (__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value 
                                                   >> 0x10U)
                                                   : 
                                                  (__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value 
                                                   >> 0x18U)))));
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__half_value 
                                    = (0x0000ffffU 
                                       & ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__addr))
                                           ? (__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value 
                                              >> 0x10U)
                                           : __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value));
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3))
                                        ? ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3))
                                            ? __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value
                                            : ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3))
                                                ? (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__half_value)
                                                : (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__byte_value)))
                                        : ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3))
                                            ? __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__value
                                            : ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__f3))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__half_value) 
                                                                   >> 0x0fU)))) 
                                                    << 0x00000010U) 
                                                   | (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__half_value))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__byte_value) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__byte_value)))));
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                    = __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_data__52__Vfuncout;
                            } else {
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__next_pc;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            }
                        } else {
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 3U;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_addr;
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__cause 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_cause;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__cause;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__53__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_addr;
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__cause 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__54__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                }
            } else {
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc 
                    = ((IData)(4U) + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc);
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken = 0U;
                if ((0x00000040U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                    if ((0x00000020U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        if ((0x00000010U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__55__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__55__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__56__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__56__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00000073U 
                                         == vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__57__cause 
                                            = ((0U 
                                                == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode))
                                                ? 8U
                                                : 9U);
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__57__cause;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    } else if ((0x00100073U 
                                                == vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 3U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    } else if ((((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                        >> 0x0000000cU)))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                       >> 0x0000000cU))))) {
                                        __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                               >> 0x00000014U);
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_8__csr_implemented 
                                            = (((((
                                                   ((((0x0100U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr)) 
                                                      || (0x0101U 
                                                          == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr))) 
                                                     || (0x0102U 
                                                         == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr))) 
                                                    || (0x0103U 
                                                        == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr))) 
                                                   || (0x0104U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr))) 
                                                  || (0x0105U 
                                                      == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr))) 
                                                 || (0x0120U 
                                                     == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr))) 
                                                || (0x0130U 
                                                    == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr))) 
                                               || (0x0140U 
                                                   == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_implemented__59__addr)));
                                        if ((1U & (
                                                   (0U 
                                                    == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode)) 
                                                   | (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_8__csr_implemented))))) {
                                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__60__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__60__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                        } else {
                                            __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                   >> 0x00000014U);
                                            __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__Vfuncout 
                                                = (
                                                   ((((((((0x0100U 
                                                           == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr)) 
                                                          | (0x0101U 
                                                             == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))) 
                                                         | (0x0102U 
                                                            == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))) 
                                                        | (0x0103U 
                                                           == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))) 
                                                       | (0x0104U 
                                                          == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))) 
                                                      | (0x0105U 
                                                         == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))) 
                                                     | (0x0120U 
                                                        == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))) 
                                                    | (0x0130U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr)))
                                                    ? 
                                                   ((0x0100U 
                                                     == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                     ? 
                                                    (0x00000300U 
                                                     | (3U 
                                                        & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus))
                                                     : 
                                                    ((0x0101U 
                                                      == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                      ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec
                                                      : 
                                                     ((0x0102U 
                                                       == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                       ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc
                                                       : 
                                                      ((0x0103U 
                                                        == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                        ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scause
                                                        : 
                                                       ((0x0104U 
                                                         == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                         ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stval
                                                         : 
                                                        ((0x0105U 
                                                          == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                          ? 
                                                         (0x80000000U 
                                                          | vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp)
                                                          : 
                                                         ((0x0120U 
                                                           == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                           ? vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr
                                                           : 
                                                          (1U 
                                                           | vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl))))))))
                                                    : 
                                                   ((0x0140U 
                                                     == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__addr))
                                                     ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps
                                                     : 0U));
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old 
                                                = __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__csr_read_value__61__Vfuncout;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new 
                                                = (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                        >> 0x0000000cU)))
                                                    ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                         >> 0x0000000cU)))
                                                     ? 
                                                    (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old 
                                                     | vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old 
                                                      & (~ vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val))
                                                      : vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old)));
                                            if (((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_q)))) {
                                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value 
                                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new;
                                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr 
                                                    = 
                                                    (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                     >> 0x00000014U);
                                                if (
                                                    ((((((((0x0100U 
                                                            == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr)) 
                                                           | (0x0101U 
                                                              == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) 
                                                          | (0x0102U 
                                                             == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) 
                                                         | (0x0103U 
                                                            == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) 
                                                        | (0x0104U 
                                                           == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) 
                                                       | (0x0105U 
                                                          == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) 
                                                      | (0x0120U 
                                                         == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) 
                                                     | (0x0130U 
                                                        == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr)))) {
                                                    if (
                                                        (0x0100U 
                                                         == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus 
                                                            = 
                                                            (0x00000300U 
                                                             | (3U 
                                                                & __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value));
                                                    } else if (
                                                               (0x0101U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value);
                                                    } else if (
                                                               (0x0102U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value);
                                                    } else if (
                                                               (0x0103U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value;
                                                    } else if (
                                                               (0x0104U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value;
                                                    } else if (
                                                               (0x0105U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                            = 
                                                            (0x80000000U 
                                                             | __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value);
                                                    } else if (
                                                               (0x0120U 
                                                                == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom 
                                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value;
                                                    } else {
                                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl 
                                                            = 
                                                            (1U 
                                                             | vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl);
                                                    }
                                                } else if (
                                                           (0x0140U 
                                                            == (IData)(__Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__addr))) {
                                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps 
                                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__write_csr__62__value;
                                                }
                                            }
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old;
                                        }
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__63__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__63__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__64__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__64__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__65__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__65__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                               + ((
                                                   ((0x00000ffeU 
                                                     & ((- (IData)(
                                                                   (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                                    >> 0x0000001fU))) 
                                                        << 1U)) 
                                                    | (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                       >> 0x0000001fU)) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                           >> 0x0000000bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                             >> 0x00000014U))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                           >> 0x00000014U)))));
                                        if ((0U != 
                                             (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target))) {
                                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__66__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__66__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                        } else {
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc);
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                        }
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__67__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__67__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__68__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__68__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__69__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__69__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((0U != (7U 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                   >> 0x0000000cU)))) {
                                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__70__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__70__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    } else {
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                            = (0xfffffffeU 
                                               & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                                  + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i));
                                        if ((0U != 
                                             (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target))) {
                                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__71__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__71__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                        } else {
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc);
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                        }
                                    }
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__72__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__72__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__73__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__73__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00002000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)
                                            ? ((0x00001000U 
                                                & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)
                                                ? (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                                   >= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val)
                                                : (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                                   < vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val))
                                            : ((0x00001000U 
                                                & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)
                                                ? VL_GTES_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val)
                                                : VL_LTS_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val)));
                                } else if ((0x00002000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__74__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__74__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00001000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)
                                            ? (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                               != vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val)
                                            : (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                               == vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val));
                                }
                                if (((((((0U == (7U 
                                                 & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                    >> 0x0000000cU))) 
                                         | (1U == (7U 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                      >> 0x0000000cU)))) 
                                        | (4U == (7U 
                                                  & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                     >> 0x0000000cU)))) 
                                       | (5U == (7U 
                                                 & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                    >> 0x0000000cU)))) 
                                      | (6U == (7U 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                   >> 0x0000000cU)))) 
                                     | (7U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                           + (((- (IData)(
                                                          (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000dU) 
                                              | ((((2U 
                                                    & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                       >> 0x0000001eU)) 
                                                   | (1U 
                                                      & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                         >> 7U))) 
                                                  << 0x0000000bU) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                          >> 7U))))));
                                    if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken) 
                                         & (0U != (3U 
                                                   & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target)))) {
                                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__75__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__75__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken)
                                                ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target
                                                : ((IData)(4U) 
                                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    }
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__76__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__76__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__77__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__77__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__78__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__78__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((0x00000020U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                    if ((0x00000010U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__79__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__79__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_u;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__80__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__80__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__81__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__81__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00002000U 
                                         & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                        if ((0x00001000U 
                                             & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                                   & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val);
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                        } else {
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                                   | vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val);
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                        }
                                    } else if ((0x00001000U 
                                                & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                        if ((0U == 
                                             (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                              >> 0x00000019U))) {
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                                   >> 
                                                   (0x0000001fU 
                                                    & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val));
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                        } else if (
                                                   (0x20U 
                                                    == 
                                                    (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                     >> 0x00000019U))) {
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                                = VL_SHIFTRS_III(32,32,5, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val));
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                        } else {
                                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__82__tval 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__82__tval;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                        }
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                               ^ vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val);
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    }
                                } else if ((0x00002000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                                < vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = (VL_LTS_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                >> 0x00000019U))) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                               << (0x0000001fU 
                                                   & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val));
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__83__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__83__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else if ((0x20U == 
                                            (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                             >> 0x00000019U))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                           - vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val);
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                } else if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                   >> 0x00000019U))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                           + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val);
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__84__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__84__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__85__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__85__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__86__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__86__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__87__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__87__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__88__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__88__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__store_supported__89__f3 
                                = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_6__store_supported 
                                = (((0U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__store_supported__89__f3)) 
                                    | (1U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__store_supported__89__f3))) 
                                   | (2U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__store_supported__89__f3)));
                            if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_6__store_supported) {
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                       + ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                   >> 7U)))));
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__addr 
                                    = (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target);
                                __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3 
                                    = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                             >> 0x0000000cU));
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_7__memory_misaligned 
                                    = ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3))
                                        ? ((1U & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3) 
                                                  >> 1U)) 
                                           || ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__addr))))
                                        : ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3)) 
                                               || (0U 
                                                   != (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__addr)))
                                            : ((1U 
                                                & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__90__addr)))));
                                if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_7__memory_misaligned) {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__91__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 6U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__91__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_addr 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3 
                                        = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                 >> 0x0000000cU));
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 3U;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__92__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__92__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__93__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__93__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__94__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__94__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((0x00000010U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                    if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__95__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__95__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                       + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_u);
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__96__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__96__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__97__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__97__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((0x00004000U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00002000U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                               & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i);
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                               | vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i);
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                >> 0x00000019U))) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                               >> (0x0000001fU 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                      >> 0x14U)));
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                 >> 0x00000019U))) {
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                                 >> 0x14U)));
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__98__tval 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__98__tval;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                           ^ vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i);
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00001000U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                        = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                            < vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i)
                                            ? 1U : 0U);
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                        = (VL_LTS_III(32, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i)
                                            ? 1U : 0U);
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if ((0U == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                            >> 0x00000019U))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                           << (0x0000001fU 
                                               & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                  >> 0x14U)));
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__99__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__99__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                    = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                       + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i);
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__100__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__100__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__101__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__101__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((8U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                    if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                                if (((0U == (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                   >> 0x0000000cU))) 
                                     | (1U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = ((IData)(4U) 
                                           + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc);
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__tlb_flush 
                                        = (1U == (7U 
                                                  & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                     >> 0x0000000cU)));
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                } else {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__102__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__102__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__103__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__103__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__104__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__104__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                            if ((0U == (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                              >> 0x0000000cU)))) {
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                            } else if ((1U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU)))) {
                                if ((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode))) {
                                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__105__tval 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__105__tval;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                                } else {
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_addr 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_count 
                                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val;
                                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 5U;
                                }
                            } else if ((2U == (7U & 
                                               (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU)))) {
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
                                    = (vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr 
                                       ^ vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom);
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 4U;
                            } else {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__106__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__106__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__107__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__107__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__108__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__108__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((4U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__109__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__109__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                } else if ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                    if ((1U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr)) {
                        __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3 
                            = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                     >> 0x0000000cU));
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_4__load_supported 
                            = (((((0U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3)) 
                                  | (1U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3))) 
                                 | (2U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3))) 
                                | (4U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3))) 
                               | (5U == (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__load_supported__110__f3)));
                        if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_4__load_supported) {
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                                   + vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i);
                            __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__addr 
                                = (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target);
                            __Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3 
                                = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_5__memory_misaligned 
                                = ((4U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3))
                                    ? ((1U & ((IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3) 
                                              >> 1U)) 
                                       || ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3)) 
                                           && (1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__addr))))
                                    : ((2U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3))
                                        ? ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3)) 
                                           || (0U != (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__addr)))
                                        : ((1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__f3)) 
                                           && (1U & (IData)(__Vfunc_mycore__DOT__soc__DOT__cpu0__DOT__memory_misaligned__111__addr)))));
                            if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_5__memory_misaligned) {
                                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__112__tval 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 4U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__112__tval;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                            } else {
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_addr 
                                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3 
                                    = (7U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                             >> 0x0000000cU));
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 1U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 3U;
                                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rd_q 
                                    = (0x0000001fU 
                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                          >> 7U));
                            }
                        } else {
                            __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__113__tval 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__113__tval;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__114__tval 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__114__tval;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                        __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__115__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 2U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__115__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))) {
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_q 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                  >> 0x0fU));
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 2U;
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rd_q 
                = (0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                  >> 7U));
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs
                [(0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                 >> 0x0fU))];
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs2_val 
                = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs
                [(0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                 >> 0x14U))];
        } else {
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
            __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
            if ((0U != (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc))) {
                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__116__tval 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__116__tval;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
            } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow) {
                if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_allow) {
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__instr 
                        = ((0x00000100U > (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
                                           >> 2U)) ? vlSelfRef.mycore__DOT__soc__DOT__imem
                           [(0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
                                            >> 2U))]
                            : 0x00000013U);
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 1U;
                } else {
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__tval 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                    __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__cause 
                        = (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram)
                             ? 0x0000000aU : 1U) & 
                           (- (IData)((1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_allow))))));
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__cause;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__117__tval;
                    __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
                }
            } else {
                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__tval 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__cause 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_cause;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__cause;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store = 0U;
                vlSelfRef.mycore__DOT__soc__DOT__debug_trap0 = 1U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state = 0U;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
                    = __Vtask_mycore__DOT__soc__DOT__cpu0__DOT__enter_trap__118__tval;
                __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc 
                    = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
            }
        }
    }
    vlSelfRef.mycore__DOT__video__DOT__boot_draw_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.mycore__DOT__video__DOT__boot_draw));
    vlSelfRef.mycore__DOT__video__DOT__boot_pixel = vlSelfRef.mycore__DOT__video__DOT__boot_image__DOT__ram
        [(0x0001ffffU & ((- (IData)((IData)(vlSelfRef.mycore__DOT__video__DOT__boot_draw))) 
                         & (VL_SHIFTL_III(17,17,32, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0, 8U) 
                            + (VL_SHIFTL_III(17,17,32, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0, 7U) 
                               + (VL_SHIFTL_III(17,17,32, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0, 5U) 
                                  + (VL_SHIFTL_III(17,17,32, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0, 4U) 
                                     + (0x000003ffU 
                                        & ((IData)(vlSelfRef.mycore__DOT__video__DOT__hc) 
                                           - (IData)(0x0030U)))))))))];
    vlSelfRef.mycore__DOT__soc__DOT__trace_count = __Vdly__mycore__DOT__soc__DOT__trace_count;
    vlSelfRef.mycore__DOT__soc__DOT__kernel_task = __Vdly__mycore__DOT__soc__DOT__kernel_task;
    vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__hit_count 
        = __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__hit_count;
    vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__miss_count 
        = __Vdly__mycore__DOT__soc__DOT__l1d0__DOT__miss_count;
    vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__hit_count 
        = __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__hit_count;
    vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__miss_count 
        = __Vdly__mycore__DOT__soc__DOT__l1d1__DOT__miss_count;
    vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__invalidations 
        = __Vdly__mycore__DOT__soc__DOT__coherence__DOT__invalidations;
    vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__hits 
        = __Vdly__mycore__DOT__soc__DOT__l2__DOT__hits;
    vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__misses 
        = __Vdly__mycore__DOT__soc__DOT__l2__DOT__misses;
    vlSelfRef.mycore__DOT__soc__DOT__kernel_ipc_depth 
        = __Vdly__mycore__DOT__soc__DOT__kernel_ipc_depth;
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__valid__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__valid__v32] = 1U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l2__DOT__valid__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__valid__v32] = 1U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag[__VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__line_tag__v32;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l2__DOT__tag__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag[__VdlyDim0__mycore__DOT__soc__DOT__l2__DOT__tag__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__l2__DOT__tag__v32;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__modified__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified[__VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__modified__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__modified__v32;
    }
    vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__shared_reads 
        = __Vdly__mycore__DOT__soc__DOT__coherence__DOT__shared_reads;
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__coherence__DOT__owner__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner[__VdlyDim0__mycore__DOT__soc__DOT__coherence__DOT__owner__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__coherence__DOT__owner__v32;
    }
    vlSelfRef.mycore__DOT__soc__DOT__mmio_out = __Vdly__mycore__DOT__soc__DOT__mmio_out;
    if (__VdlySet__mycore__DOT__soc__DOT__dmem__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__dmem[__VdlyDim0__mycore__DOT__soc__DOT__dmem__v0] 
            = __VdlyVal__mycore__DOT__soc__DOT__dmem__v0;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__dmem__v1) {
        vlSelfRef.mycore__DOT__soc__DOT__dmem[__VdlyDim0__mycore__DOT__soc__DOT__dmem__v1] 
            = __VdlyVal__mycore__DOT__soc__DOT__dmem__v1;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[15U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__valid__v16] = 1U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[15U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__valid__v16] = 1U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[15U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag[__VdlyDim0__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16] 
            = __VdlyVal__mycore__DOT__soc__DOT__l1d0__DOT__tag__v16;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[15U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16) {
        vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag[__VdlyDim0__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16] 
            = __VdlyVal__mycore__DOT__soc__DOT__l1d1__DOT__tag__v16;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32] = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32] = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1) {
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vilp2 = 1U;
        while ((__Vilp2 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vilp3 = 1U;
        while ((__Vilp3 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vilp4 = 1U;
        while ((__Vilp4 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vilp4] = 0U;
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        __Vilp5 = 1U;
        while ((__Vilp5 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vilp5] = 0U;
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64] = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1) {
        __Vilp6 = 1U;
        while ((__Vilp6 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vilp6] = 0U;
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
        __Vilp7 = 1U;
        while ((__Vilp7 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vilp7] = 0U;
            __Vilp7 = ((IData)(1U) + __Vilp7);
        }
        __Vilp8 = 1U;
        while ((__Vilp8 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[__Vilp8] = 0U;
            __Vilp8 = ((IData)(1U) + __Vilp8);
        }
        __Vilp9 = 1U;
        while ((__Vilp9 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vilp9] = 0U;
            __Vilp9 = ((IData)(1U) + __Vilp9);
        }
        __Vilp10 = 1U;
        while ((__Vilp10 <= 0x0000003fU)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vilp10] = 0U;
            __Vilp10 = ((IData)(1U) + __Vilp10);
        }
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64] = 1U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    }
    vlSelfRef.mycore__DOT__soc__DOT__trace_digest = __Vdly__mycore__DOT__soc__DOT__trace_digest;
    vlSelfRef.mycore__DOT__soc__DOT__dma_tick = __Vdly__mycore__DOT__soc__DOT__dma_tick;
    if (__VdlySet__mycore__DOT__video__DOT__boot_image__DOT__ram__v0) {
        vlSelfRef.mycore__DOT__video__DOT__boot_image__DOT__ram[__VdlyDim0__mycore__DOT__video__DOT__boot_image__DOT__ram__v0] 
            = __VdlyVal__mycore__DOT__video__DOT__boot_image__DOT__ram__v0;
    }
    vlSelfRef.mycore__DOT__soc__DOT__secure_boot__DOT__state 
        = __Vdly__mycore__DOT__soc__DOT__secure_boot__DOT__state;
    vlSelfRef.ce_pix = __Vdly__ce_pix;
    vlSelfRef.mycore__DOT__video__DOT__vc = __Vdly__mycore__DOT__video__DOT__vc;
    vlSelfRef.mycore__DOT__video__DOT__frame_ctr = __Vdly__mycore__DOT__video__DOT__frame_ctr;
    vlSelfRef.mycore__DOT__video__DOT__hc = __Vdly__mycore__DOT__video__DOT__hc;
    vlSelfRef.mycore__DOT__soc__DOT__dma_addr = ((IData)(0x00000500U) 
                                                 + 
                                                 (0x0000003cU 
                                                  & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)));
    vlSelfRef.mycore__DOT__soc__DOT__dma_allow = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__dma_fault = 0U;
    if ((0x03ffU == (0x000003ffU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)))) {
        vlSelfRef.mycore__DOT__soc__DOT__dma_allow 
            = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__boot_mpu_lock) 
               & ((0x00000500U <= ((IData)(0x00000500U) 
                                   + (0x0000003cU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick)))) 
                  & (0x0000000000000540ULL >= (0x00000001ffffffffULL 
                                               & (4ULL 
                                                  + (QData)((IData)(
                                                                    ((IData)(0x00000500U) 
                                                                     + 
                                                                     (0x0000003cU 
                                                                      & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick))))))))));
        vlSelfRef.mycore__DOT__soc__DOT__dma_fault 
            = (1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_allow)));
    }
    mycore__DOT__video__DOT__visible_y = ((IData)(vlSelfRef.scandouble)
                                           ? VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.mycore__DOT__video__DOT__vc), 1U)
                                           : (IData)(vlSelfRef.mycore__DOT__video__DOT__vc));
    vlSelfRef.mycore__DOT__video__DOT__active = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.HBlank) 
                                                     | (IData)(vlSelfRef.VBlank))));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_val 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_val;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs2_val 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs2_val;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rs1_q 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rs1_q;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__rd_q 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__rd_q;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__wb_data 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_data;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__next_pc 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__next_pc;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom;
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v1) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__regs[__VdlyDim0__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu1__DOT__regs__v33;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__wb_en 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__wb_en;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_stval 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_stval;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__instr;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scause 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scause;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__pc;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mode;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__csr_satp;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_load 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_load;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_count 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_count;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_addr 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__mem_addr;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__clr_addr;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state 
        = __Vdly__mycore__DOT__soc__DOT__cpu1__DOT__state;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_val 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_val;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs2_val 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs2_val;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rs1_q 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rs1_q;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__rd_q 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__rd_q;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__wb_data 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_data;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__next_pc 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__next_pc;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom;
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v0) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v1) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[1U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[2U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[3U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[4U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[5U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[6U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[7U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[8U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[9U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[10U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[11U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[12U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[13U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[14U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[15U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[16U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[17U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[18U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[19U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[20U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[21U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[22U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[23U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[24U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[25U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[26U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[27U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[28U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[29U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[30U] = 0U;
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[31U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v32) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[0U] = 0U;
    }
    if (__VdlySet__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__regs[__VdlyDim0__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33] 
            = __VdlyVal__mycore__DOT__soc__DOT__cpu0__DOT__regs__v33;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu_reset = (1U 
                                                  & ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__boot_ok)) 
                                                     | (IData)(vlSelfRef.reset)));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__wb_en 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__wb_en;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_stval 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_stval;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__instr;
    vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr = __Vdly__mycore__DOT__soc__DOT__entropy_lfsr;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scause;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__pc;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mode;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__csr_satp;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_load 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_load;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_count 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_count;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_addr 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__mem_addr;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__clr_addr;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state 
        = __Vdly__mycore__DOT__soc__DOT__cpu0__DOT__state;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x000003ffU 
                                                & ((IData)(mycore__DOT__video__DOT__visible_y) 
                                                   - 
                                                   (0x001eU 
                                                    & (- (IData)((IData)(vlSelfRef.pal))))));
    vlSelfRef.mycore__DOT__video__DOT__boot_draw = 
        ((IData)(vlSelfRef.mycore__DOT__video__DOT__active) 
         & ((0x0030U <= (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)) 
            & ((0x01e0U > (IData)(vlSelfRef.mycore__DOT__video__DOT__hc)) 
               & (((IData)(mycore__DOT__video__DOT__visible_y) 
                   >= (0x001eU & (- (IData)((IData)(vlSelfRef.pal))))) 
                  & ((IData)(mycore__DOT__video__DOT__visible_y) 
                     < (0x000003ffU & ((IData)(0x00f0U) 
                                       + (0x001eU & 
                                          (- (IData)((IData)(vlSelfRef.pal)))))))))));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_i 
        = (((- (IData)((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
              >> 0x00000014U));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__imm_u 
        = (0xfffff000U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (0x000fffffU 
                                                & (- (IData)(
                                                             (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__instr 
                                                              >> 0x0000001fU))));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 1U;
    if ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
         >> 0x1fU)) {
        if ((0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 1U;
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0x4bU;
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0U;
        } else if (((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc) 
                    & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0x0000000aU;
        }
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags = 0U;
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr = 0U;
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U];
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 0U;
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U];
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc));
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load 
        = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_load) 
           & (3U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state)));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store 
        = (((5U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state)) 
            & (0U != vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_count)) 
           | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_store) 
              & (3U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
        = ((5U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))
            ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__clr_addr
            : vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_addr);
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_i 
        = (((- (IData)((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
              >> 0x00000014U));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__imm_u 
        = (0xfffff000U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (0x000fffffU 
                                                & (- (IData)(
                                                             (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__instr 
                                                              >> 0x0000001fU))));
    vlSelfRef.mycore__DOT__debug_scause = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scause 
                                           ^ vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scause);
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 1U;
    if ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
         >> 0x1fU)) {
        if ((0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc)) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 1U;
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0x4bU;
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0U;
        } else if (((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc) 
                    & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0x0000000aU;
        }
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags = 0U;
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U];
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U];
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr = 0U;
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
}
