// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vharvos_soc.h for the primary calling header

#include "Vharvos_soc__pch.h"

VL_ATTR_COLD void Vharvos_soc___024root___eval_static(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_static\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1342873566247671792ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6870749883664076255ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11261995236362092517ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15134123751714496239ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__total_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11146018531603496461ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12634275469988119475ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18421348389770454455ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__loaded_total_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15077591847668705701ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__tcp_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 964326587208555638ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9538654488985044322ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4854155555340050178ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13682084525648119018ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15533137398672569460ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 687042244355284371ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9088051051491462865ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14319550745447408776ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7317979713513779754ull);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vharvos_soc___024root___eval_static__TOP(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_static__TOP\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1342873566247671792ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6870749883664076255ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11261995236362092517ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_sum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15134123751714496239ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__total_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11146018531603496461ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12634275469988119475ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18421348389770454455ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__loaded_total_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15077591847668705701ull);
    vlSelf->harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__tcp_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 964326587208555638ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9538654488985044322ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4854155555340050178ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13682084525648119018ull);
    vlSelf->harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15533137398672569460ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 687042244355284371ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9088051051491462865ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14319550745447408776ull);
    vlSelf->harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7317979713513779754ull);
}

VL_ATTR_COLD void Vharvos_soc___024root___eval_initial__TOP(Vharvos_soc___024root* vlSelf);

VL_ATTR_COLD void Vharvos_soc___024root___eval_initial(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_initial\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vharvos_soc___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vharvos_soc___024root___eval_initial__TOP(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_initial__TOP\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ harvos_soc__DOT____VlemExpr_103;
    IData/*31:0*/ harvos_soc__DOT____VlemExpr_0;
    IData/*31:0*/ harvos_soc__DOT__init_i;
    harvos_soc__DOT__init_i = 0;
    CData/*0:0*/ harvos_soc__DOT__external_imem_init;
    harvos_soc__DOT__external_imem_init = 0;
    // Body
    harvos_soc__DOT__init_i = 0U;
    while (VL_GTS_III(32, 0x00057e40U, harvos_soc__DOT__init_i)) {
        vlSelfRef.harvos_soc__DOT____Vlvbound_h553a6969__0 = 0x00000013U;
        if (VL_LIKELY(((0x00057e3fU >= (0x0007ffffU 
                                        & harvos_soc__DOT__init_i))))) {
            vlSelfRef.harvos_soc__DOT__imem[(0x0007ffffU 
                                             & harvos_soc__DOT__init_i)] 
                = vlSelfRef.harvos_soc__DOT____Vlvbound_h553a6969__0;
        }
        harvos_soc__DOT__init_i = ((IData)(1U) + harvos_soc__DOT__init_i);
    }
    harvos_soc__DOT__init_i = 0U;
    while (VL_GTS_III(32, 0x000668a0U, harvos_soc__DOT__init_i)) {
        vlSelfRef.harvos_soc__DOT____Vlvbound_h503409f3__0 = 0U;
        if (VL_LIKELY(((0x0006689fU >= (0x0007ffffU 
                                        & harvos_soc__DOT__init_i))))) {
            vlSelfRef.harvos_soc__DOT__dmem[(0x0007ffffU 
                                             & harvos_soc__DOT__init_i)] 
                = vlSelfRef.harvos_soc__DOT____Vlvbound_h503409f3__0;
        }
        harvos_soc__DOT__init_i = ((IData)(1U) + harvos_soc__DOT__init_i);
    }
    harvos_soc__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INN(64, "HARVOS_IMEM_INIT=%s"s, 
                                                         vlSelfRef.harvos_soc__DOT__imem_init_file);
    harvos_soc__DOT__external_imem_init = (1U & harvos_soc__DOT____VlemExpr_0);
    if (VL_UNLIKELY((harvos_soc__DOT__external_imem_init))) {
        VL_READMEM_N(true, 32, 360000, 0, vlSelfRef.harvos_soc__DOT__imem_init_file
                     ,  &(vlSelfRef.harvos_soc__DOT__imem)
                     , 0, ~0ULL);
    } else {
        vlSelfRef.harvos_soc__DOT__imem[0U] = 0x40000093U;
        vlSelfRef.harvos_soc__DOT__imem[1U] = 0x00500113U;
        vlSelfRef.harvos_soc__DOT__imem[2U] = 0x00700193U;
        vlSelfRef.harvos_soc__DOT__imem[3U] = 0x00310233U;
        vlSelfRef.harvos_soc__DOT__imem[4U] = 0x0040a023U;
        vlSelfRef.harvos_soc__DOT__imem[5U] = 0x0000a283U;
        vlSelfRef.harvos_soc__DOT__imem[6U] = 0x00520463U;
        vlSelfRef.harvos_soc__DOT__imem[7U] = 0x00100073U;
        vlSelfRef.harvos_soc__DOT__imem[8U] = 0x00100513U;
        vlSelfRef.harvos_soc__DOT__imem[9U] = 0x00351513U;
        vlSelfRef.harvos_soc__DOT__imem[10U] = 0x00155513U;
        vlSelfRef.harvos_soc__DOT__imem[11U] = 0x00400593U;
        vlSelfRef.harvos_soc__DOT__imem[12U] = 0x00b50463U;
        vlSelfRef.harvos_soc__DOT__imem[13U] = 0x00100073U;
        vlSelfRef.harvos_soc__DOT__imem[14U] = 0x05a00513U;
        vlSelfRef.harvos_soc__DOT__imem[15U] = 0x00a08a23U;
        vlSelfRef.harvos_soc__DOT__imem[16U] = 0x0140c583U;
        vlSelfRef.harvos_soc__DOT__imem[17U] = 0x00b50463U;
        vlSelfRef.harvos_soc__DOT__imem[18U] = 0x00100073U;
        vlSelfRef.harvos_soc__DOT__imem[19U] = 0x05b00593U;
        vlSelfRef.harvos_soc__DOT__imem[20U] = 0x00b56463U;
        vlSelfRef.harvos_soc__DOT__imem[21U] = 0x00100073U;
        vlSelfRef.harvos_soc__DOT__imem[22U] = 0x00a5f463U;
        vlSelfRef.harvos_soc__DOT__imem[23U] = 0x00100073U;
        vlSelfRef.harvos_soc__DOT__imem[24U] = 0x41000493U;
        vlSelfRef.harvos_soc__DOT__imem[25U] = 0x00400413U;
        vlSelfRef.harvos_soc__DOT__imem[26U] = 0x0084900bU;
        vlSelfRef.harvos_soc__DOT__imem[27U] = 0x0000230bU;
        vlSelfRef.harvos_soc__DOT__imem[28U] = 0x0060a223U;
        vlSelfRef.harvos_soc__DOT__imem[29U] = 0x0000030bU;
        vlSelfRef.harvos_soc__DOT__imem[30U] = 0x00000393U;
        vlSelfRef.harvos_soc__DOT__imem[31U] = 0x0640006fU;
        vlSelfRef.harvos_soc__DOT__imem[40U] = 0x0000006fU;
        vlSelfRef.harvos_soc__DOT__imem[48U] = 0x40c00093U;
        vlSelfRef.harvos_soc__DOT__imem[49U] = 0x00000393U;
        vlSelfRef.harvos_soc__DOT__imem[50U] = 0x00138393U;
        vlSelfRef.harvos_soc__DOT__imem[51U] = 0x0070a023U;
        vlSelfRef.harvos_soc__DOT__imem[52U] = 0xff9ff06fU;
        vlSelfRef.harvos_soc__DOT__imem[56U] = 0xffff0637U;
        vlSelfRef.harvos_soc__DOT__imem[57U] = 0x00b00693U;
        vlSelfRef.harvos_soc__DOT__imem[58U] = 0x08d62223U;
        vlSelfRef.harvos_soc__DOT__imem[59U] = 0x00100693U;
        vlSelfRef.harvos_soc__DOT__imem[60U] = 0x08d62623U;
        vlSelfRef.harvos_soc__DOT__imem[61U] = 0x50000693U;
        vlSelfRef.harvos_soc__DOT__imem[62U] = 0x08d62a23U;
        vlSelfRef.harvos_soc__DOT__imem[63U] = 0x01000693U;
        vlSelfRef.harvos_soc__DOT__imem[64U] = 0x08d62c23U;
        vlSelfRef.harvos_soc__DOT__imem[65U] = 0x00100693U;
        vlSelfRef.harvos_soc__DOT__imem[66U] = 0x08d62e23U;
        vlSelfRef.harvos_soc__DOT__imem[67U] = 0x08862703U;
        vlSelfRef.harvos_soc__DOT__imem[68U] = 0x20077713U;
        vlSelfRef.harvos_soc__DOT__imem[69U] = 0xfe070ce3U;
        vlSelfRef.harvos_soc__DOT__imem[70U] = 0x08d62823U;
        vlSelfRef.harvos_soc__DOT__imem[71U] = 0x00000693U;
        vlSelfRef.harvos_soc__DOT__imem[72U] = 0x0cd62623U;
        vlSelfRef.harvos_soc__DOT__imem[73U] = 0x0cd62823U;
        vlSelfRef.harvos_soc__DOT__imem[74U] = 0x0cd62a23U;
        vlSelfRef.harvos_soc__DOT__imem[75U] = 0x00100693U;
        vlSelfRef.harvos_soc__DOT__imem[76U] = 0x0cd62c23U;
        vlSelfRef.harvos_soc__DOT__imem[77U] = 0x00000693U;
        vlSelfRef.harvos_soc__DOT__imem[78U] = 0x0cd62e23U;
        vlSelfRef.harvos_soc__DOT__imem[79U] = 0x00400693U;
        vlSelfRef.harvos_soc__DOT__imem[80U] = 0x0cd62223U;
        vlSelfRef.harvos_soc__DOT__imem[81U] = 0x00100693U;
        vlSelfRef.harvos_soc__DOT__imem[82U] = 0x0cd62223U;
        vlSelfRef.harvos_soc__DOT__imem[83U] = 0x0c862703U;
        vlSelfRef.harvos_soc__DOT__imem[84U] = 0x20077713U;
        vlSelfRef.harvos_soc__DOT__imem[85U] = 0xfe070ce3U;
        vlSelfRef.harvos_soc__DOT__imem[86U] = 0x00000693U;
        vlSelfRef.harvos_soc__DOT__imem[87U] = 0x0cd62e23U;
        vlSelfRef.harvos_soc__DOT__imem[88U] = 0x0e062803U;
        vlSelfRef.harvos_soc__DOT__imem[89U] = 0x0100a823U;
        vlSelfRef.harvos_soc__DOT__imem[90U] = 0x00100693U;
        vlSelfRef.harvos_soc__DOT__imem[91U] = 0x04d62223U;
        vlSelfRef.harvos_soc__DOT__imem[92U] = 0x50000793U;
        vlSelfRef.harvos_soc__DOT__imem[93U] = 0x484e46b7U;
        vlSelfRef.harvos_soc__DOT__imem[94U] = 0x55468693U;
        vlSelfRef.harvos_soc__DOT__imem[95U] = 0x00d7a023U;
        vlSelfRef.harvos_soc__DOT__imem[96U] = 0x00100693U;
        vlSelfRef.harvos_soc__DOT__imem[97U] = 0x00d7a223U;
        vlSelfRef.harvos_soc__DOT__imem[98U] = 0x50000693U;
        vlSelfRef.harvos_soc__DOT__imem[99U] = 0x06d62023U;
        vlSelfRef.harvos_soc__DOT__imem[100U] = 0x00800693U;
        vlSelfRef.harvos_soc__DOT__imem[101U] = 0x06d62223U;
        vlSelfRef.harvos_soc__DOT__imem[102U] = 0x00400693U;
        vlSelfRef.harvos_soc__DOT__imem[103U] = 0x04d62e23U;
        vlSelfRef.harvos_soc__DOT__imem[104U] = 0x00100693U;
        vlSelfRef.harvos_soc__DOT__imem[105U] = 0x04d62e23U;
        vlSelfRef.harvos_soc__DOT__imem[106U] = 0x04862703U;
        vlSelfRef.harvos_soc__DOT__imem[107U] = 0x20077713U;
        vlSelfRef.harvos_soc__DOT__imem[108U] = 0xfe070ce3U;
        vlSelfRef.harvos_soc__DOT__imem[109U] = 0x00400693U;
        vlSelfRef.harvos_soc__DOT__imem[110U] = 0x04d62e23U;
        vlSelfRef.harvos_soc__DOT__imem[111U] = 0x50000693U;
        vlSelfRef.harvos_soc__DOT__imem[112U] = 0x04d62a23U;
        vlSelfRef.harvos_soc__DOT__imem[113U] = 0x01000693U;
        vlSelfRef.harvos_soc__DOT__imem[114U] = 0x04d62c23U;
        vlSelfRef.harvos_soc__DOT__imem[115U] = 0x00200693U;
        vlSelfRef.harvos_soc__DOT__imem[116U] = 0x04d62e23U;
        vlSelfRef.harvos_soc__DOT__imem[117U] = 0x04862703U;
        vlSelfRef.harvos_soc__DOT__imem[118U] = 0x20077713U;
        vlSelfRef.harvos_soc__DOT__imem[119U] = 0xfe070ce3U;
        vlSelfRef.harvos_soc__DOT__imem[120U] = 0x00400693U;
        vlSelfRef.harvos_soc__DOT__imem[121U] = 0x04d62e23U;
        vlSelfRef.harvos_soc__DOT__imem[122U] = 0x00138393U;
        vlSelfRef.harvos_soc__DOT__imem[123U] = 0x0070a423U;
        vlSelfRef.harvos_soc__DOT__imem[124U] = 0xff9ff06fU;
    }
    harvos_soc__DOT____VlemExpr_103 = VL_VALUEPLUSARGS_INN(64, "HARVOS_DMEM_INIT=%s"s, 
                                                           vlSelfRef.harvos_soc__DOT__dmem_init_file);
    if (VL_UNLIKELY((harvos_soc__DOT____VlemExpr_103))) {
        VL_READMEM_N(true, 32, 420000, 0, vlSelfRef.harvos_soc__DOT__dmem_init_file
                     ,  &(vlSelfRef.harvos_soc__DOT__dmem)
                     , 0, ~0ULL);
    }
    vlSelfRef.utmi_xcvr_select = 1U;
}

VL_ATTR_COLD void Vharvos_soc___024root___eval_final(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_final\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vharvos_soc___024root___eval_phase__stl(Vharvos_soc___024root* vlSelf);

VL_ATTR_COLD void Vharvos_soc___024root___eval_settle(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_settle\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vharvos_soc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl\\harvos_soc.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vharvos_soc___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vharvos_soc___024root___eval_triggers_vec__stl(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_triggers_vec__stl\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vharvos_soc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vharvos_soc___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vharvos_soc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 64> Vharvos_soc__ConstPool__TABLE_hd3e3d478_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vharvos_soc__ConstPool__TABLE_h3e94c13b_0;
extern const VlUnpacked<IData/*31:0*/, 64> Vharvos_soc__ConstPool__TABLE_h73edb993_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vharvos_soc__ConstPool__TABLE_h6a41084a_0;

VL_ATTR_COLD void Vharvos_soc___024root___stl_sequent__TOP__0(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___stl_sequent__TOP__0\n"); );
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
    IData/*31:0*/ harvos_soc__DOT__hps_block_mmio_rdata;
    harvos_soc__DOT__hps_block_mmio_rdata = 0;
    CData/*0:0*/ harvos_soc__DOT__usb_host__DOT__utmi_link_connected;
    harvos_soc__DOT__usb_host__DOT__utmi_link_connected = 0;
    CData/*0:0*/ harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_line_j;
    harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_line_j = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr = 0;
    QData/*32:0*/ harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_read;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_read = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_write;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_write = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_user;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_user = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags = 0;
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
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr = 0;
    QData/*32:0*/ harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_read;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_read = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_write;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_write = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_user;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_user = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty = 0;
    CData/*0:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags = 0;
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
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__off = 0;
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__off = 0;
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__off = 0;
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__off = 0;
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__off = 0;
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__off = 0;
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__off;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__off = 0;
    IData/*18:0*/ __Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    vlSelfRef.debug_pc = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
    vlSelfRef.debug_hps_boot_word = vlSelfRef.harvos_soc__DOT__dmem[4U];
    vlSelfRef.debug_word0 = vlSelfRef.harvos_soc__DOT__dmem[0U];
    vlSelfRef.debug_entropy = vlSelfRef.harvos_soc__DOT__entropy_lfsr;
    vlSelfRef.utmi_op_mode = (2U & (- (IData)((1U & 
                                               (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                >> 5U)))));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i = (
                                                   ((- (IData)(
                                                               (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                      >> 0x00000014U));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_u = (0xfffff000U 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr);
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i = (
                                                   ((- (IData)(
                                                               (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                      >> 0x00000014U));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_u = (0xfffff000U 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = (0x000fffffU 
                                                 & (- (IData)(
                                                              (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                               >> 0x0000001fU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (0x000fffffU 
                                                 & (- (IData)(
                                                              (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                               >> 0x0000001fU))));
    vlSelfRef.debug_scause = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scause 
                              ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scause);
    vlSelfRef.debug_instr = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                             ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr);
    vlSelfRef.debug_stval = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stval 
                             ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stval);
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data 
        = ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
            ? (IData)(vlSelfRef.utmi_data_i) : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_data));
    vlSelfRef.hps_sd_buff_din[0U] = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
        [vlSelfRef.hps_sd_buff_addr];
    vlSelfRef.hps_sd_buff_din[1U] = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
        [vlSelfRef.hps_sd_buff_addr];
    vlSelfRef.debug_word1 = ((((IData)(vlSelfRef.harvos_soc__DOT__l1d0__DOT__hit_count) 
                               << 0x00000010U) | (IData)(vlSelfRef.harvos_soc__DOT__l1d0__DOT__miss_count)) 
                             ^ (vlSelfRef.harvos_soc__DOT__dmem[1U] 
                                ^ (vlSelfRef.harvos_soc__DOT__dmem[3U] 
                                   ^ (((IData)(vlSelfRef.harvos_soc__DOT__l1d1__DOT__hit_count) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.harvos_soc__DOT__l1d1__DOT__miss_count)))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_result 
        = (1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet)) 
                 | ((2U <= (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes)) 
                    & (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1) 
                        == (0x000000ffU & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc)))) 
                       & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0) 
                          == (0x000000ffU & (~ ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc) 
                                                >> 8U))))))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid 
        = ((1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state)) 
           || ((2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state)) 
               || (4U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state))));
    vlSelfRef.debug_net_boot_word = vlSelfRef.harvos_soc__DOT__dmem[64U];
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_last 
        = ((0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_word))) 
           >= vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_words
           [vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_head]);
    vlSelfRef.harvos_soc__DOT__cpu_reset = (1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__boot_ok)) 
                                                  | (IData)(vlSelfRef.reset)));
    __VdfgRegularize_h6e95ff9d_0_24 = (0x00000001ffffffffULL 
                                       & ((QData)((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len)) 
                                          + (QData)((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = ((0x0000000fU 
                                                  & (~ 
                                                     (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                                      >> 0x00000010U))) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                                     >> 0x00000014U)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__generated_payload_byte 
        = (0x000000ffU & (0xa5U ^ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                   ^ ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index) 
                                      ^ vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code 
        = (0x0000000fU & (((0x0000000fU & (~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                              >> 8U))) 
                           == (0x0000000fU & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                              >> 0x0000000cU)))
                           ? (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                              >> 8U) : ((1U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__token)
                                         ? 9U : 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = (1U 
                                                 & VL_REDXOR_8(
                                                               (0x00000025U 
                                                                & vlSelfRef.harvos_soc__DOT__usb_host__DOT__token)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (1U 
                                                 & VL_REDXOR_8(
                                                               (0x00000012U 
                                                                & vlSelfRef.harvos_soc__DOT__usb_host__DOT__token)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (1U 
                                                 & VL_REDXOR_4(
                                                               (9U 
                                                                & vlSelfRef.harvos_soc__DOT__usb_host__DOT__token)));
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
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state 
        = (((IData)(vlSelfRef.usb_dp_i) << 1U) | (IData)(vlSelfRef.usb_dm_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.usb_port_overcurrent_n) 
                                                & (0x00000018U 
                                                   == 
                                                   (0x00000018U 
                                                    & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)));
    vlSelfRef.harvos_soc__DOT__imem_loader_status = 
        ((((IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__locked) 
           << 0x00000012U) | (((IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__fault) 
                               << 0x00000011U) | ((IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__done) 
                                                  << 0x00000010U))) 
         | (0x0000ffffU & vlSelfRef.harvos_soc__DOT__imem_loader__DOT__write_count));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_ring_ready 
        = ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy)) 
           & (8U > (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count)));
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_mounted 
        = (1U & ((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted) 
                 >> (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive)));
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_readonly 
        = (1U & ((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly) 
                 >> (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive)));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up 
        = (1U & ((IData)(vlSelfRef.net_link_up) | (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                                                   >> 4U)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count));
    vlSelfRef.harvos_soc__DOT__usb_irq = (0U != (vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status 
                                                 & vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_enable));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_next_addr 
        = (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base 
           + vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress);
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
    vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status_view 
        = (vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status 
           | (0x00000010U & (- (IData)((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ready_latched)))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy) 
           & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress 
              < vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
                                                 & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)) 
                                                    & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__active_len 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)
            ? vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_len
            : vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len);
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr 
        = (VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp, 0x0000000cU) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                             >> 0x00000014U)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx 
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__102__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__102__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__102__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__102__idx]
                : 0U) : 0U);
    harvos_soc__DOT__fetch_pt_l1_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__102__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr 
        = (VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp, 0x0000000cU) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                             >> 0x00000014U)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx 
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__106__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__106__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__106__idx]
                : 0U) : 0U);
    harvos_soc__DOT__fetch_pt_l1_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__106__Vfuncout;
    vlSelfRef.utmi_term_select = (1U & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                        >> 3U));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode 
        = (IData)((0U != (0x00000012U & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl)));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_load) 
           & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state)));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load 
        = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_load) 
           & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state)));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store 
        = (((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state)) 
            & (0U != vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_count)) 
           | ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store) 
              & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store 
        = (((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state)) 
            & (0U != vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_count)) 
           | ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store) 
              & (3U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
        = ((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))
            ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr
            : vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_addr);
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
        = ((5U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))
            ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr
            : vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_addr);
    vlSelfRef.debug_word2 = (vlSelfRef.debug_net_boot_word 
                             ^ (vlSelfRef.harvos_soc__DOT__trace_digest 
                                ^ ((((IData)(vlSelfRef.harvos_soc__DOT__l2__DOT__hits) 
                                     << 0x00000010U) 
                                    | (IData)(vlSelfRef.harvos_soc__DOT__l2__DOT__misses)) 
                                   ^ (vlSelfRef.harvos_soc__DOT__dmem[2U] 
                                      ^ (((IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__invalidations) 
                                          << 0x00000010U) 
                                         | (IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__shared_reads))))));
    vlSelfRef.utmi_reset_n = (1U & (~ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                        >> 5U) | (IData)(vlSelfRef.harvos_soc__DOT__cpu_reset))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_request_ok 
        = ((0x00000800U >= vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len) 
           & (((0U == vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len) 
               | (__VdfgRegularize_h6e95ff9d_0_24 > (QData)((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base)))) 
              & ((0x00000500U <= vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base) 
                 & (0x0000000000000d00ULL >= __VdfgRegularize_h6e95ff9d_0_24))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__needs_out_data 
        = ((1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code)) 
           | (0x0dU == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__token_pid_code)));
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
    harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_line_j 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)
            ? (1U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state))
            : (2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_current_level 
        = harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_line_j;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_decoded_bit 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_current_level) 
           == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_prev_level));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_assembled 
        = (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_decoded_bit) 
            << 7U) | (0x0000007fU & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_shift) 
                                     >> 1U)));
    vlSelfRef.utmi_tx_valid = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                & (0x00000010U == (0x00000012U 
                                                   & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl))) 
                               & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active 
        = ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
               >> 1U)) & ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                           ? ((IData)(vlSelfRef.utmi_rx_active) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))
                           : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                                                & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up));
    vlSelfRef.harvos_soc__DOT__net_irq = (0U != (vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_enable 
                                                 & vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status_view));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining 
        = (vlSelfRef.harvos_soc__DOT__net_card__DOT__active_len 
           - vlSelfRef.harvos_soc__DOT__net_card__DOT__progress);
    vlSelfRef.harvos_soc__DOT__net_card__DOT__active 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
           & (vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
              < vlSelfRef.harvos_soc__DOT__net_card__DOT__active_len));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr 
        = ((0xfffff000U & harvos_soc__DOT__fetch_pt_l1_rdata0) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx 
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__103__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__103__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__103__idx]
                : 0U) : 0U);
    harvos_soc__DOT__fetch_pt_l0_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__103__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr 
        = ((0xfffff000U & harvos_soc__DOT__fetch_pt_l1_rdata1) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx 
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__107__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__107__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__107__idx]
                : 0U) : 0U);
    harvos_soc__DOT__fetch_pt_l0_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__107__Vfuncout;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power 
        = ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
               >> 4U)) & (IData)(vlSelfRef.utmi_term_select));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__port_overcurrent 
        = ((~ (IData)(vlSelfRef.usb_port_overcurrent_n)) 
           & (IData)(vlSelfRef.utmi_term_select));
    vlSelfRef.usb_port_power_en = ((IData)(vlSelfRef.usb_port_overcurrent_n) 
                                   & (IData)(vlSelfRef.utmi_term_select));
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
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ready 
        = ((IData)(vlSelfRef.net_tx_ready) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode));
    vlSelfRef.harvos_soc__DOT__d_req0 = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                                         | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store));
    vlSelfRef.harvos_soc__DOT__d_req1 = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                                         | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store));
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
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__104__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__104__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__104__idx]
                : 0U) : 0U);
    harvos_soc__DOT__data_pt_l1_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__104__Vfuncout;
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
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__108__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__108__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__108__idx]
                : 0U) : 0U);
    harvos_soc__DOT__data_pt_l1_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__108__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_29 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                             ^ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                                 >> 0x0000000aU) 
                                                ^ (IData)(__VdfgRegularize_h6e95ff9d_0_31))));
    __VdfgRegularize_h6e95ff9d_0_33 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                             ^ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                                 >> 9U) 
                                                ^ (IData)(__VdfgRegularize_h6e95ff9d_0_13))));
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
    vlSelfRef.net_rx_ready = ((~ ((0x1000U <= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count)) 
                                  | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_valid 
        = ((vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
            >> 6U) & ((~ ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
                          | (0U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count)))) 
                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0U;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 0U;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0ULL;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 1U;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0U;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 0U;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end = 0ULL;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 1U;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_tx_ready 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power) 
           & ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                  >> 5U)) & ((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state)) 
                             | (3U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state)))));
    vlSelfRef.utmi_suspend_n = vlSelfRef.usb_port_power_en;
    harvos_soc__DOT__usb_host__DOT__utmi_link_connected 
        = ((0U != (IData)(vlSelfRef.utmi_line_state)) 
           & (IData)(vlSelfRef.usb_port_power_en));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__status_word 
        = (((((((IData)(vlSelfRef.net_rx_error) << 3U) 
               | (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)
                    ? (IData)(vlSelfRef.net_rx_valid)
                    : (0U != (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count))) 
                  << 2U)) | ((((0x00000040U & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl)
                                ? (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_ring_ready)
                                : (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ready)) 
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
                 : (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ready))) 
           & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__active));
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
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr 
        = ((0xfffff000U & harvos_soc__DOT__data_pt_l1_rdata0) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx 
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__105__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__105__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__105__idx]
                : 0U) : 0U);
    harvos_soc__DOT__data_pt_l0_rdata0 = __Vfunc_harvos_soc__DOT__dmem_read_pt__105__Vfuncout;
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr 
        = ((0xfffff000U & harvos_soc__DOT__data_pt_l1_rdata1) 
           + (0x00000ffcU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                             >> 0x0000000aU)));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__off 
        = (__Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr 
           - (IData)(0x00000400U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx 
        = (0x0007ffffU & (__Vfunc_harvos_soc__DOT__dmem_read_pt__109__off 
                          >> 2U));
    __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout 
        = ((((0x00000400U <= __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr) 
             & (0x0019a680U > __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr)) 
            & (0U == (3U & __Vfunc_harvos_soc__DOT__dmem_read_pt__109__addr)))
            ? ((0x0006689fU >= __Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx)
                ? vlSelfRef.harvos_soc__DOT__dmem[__Vfunc_harvos_soc__DOT__dmem_read_pt__109__idx]
                : 0U) : 0U);
    harvos_soc__DOT__data_pt_l0_rdata1 = __Vfunc_harvos_soc__DOT__dmem_read_pt__109__Vfuncout;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
           & ((IData)(vlSelfRef.net_rx_valid) & (IData)(vlSelfRef.net_rx_ready)));
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
            if ((0x000000000015f900ULL >= harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_end)) {
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0x5bU;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0U;
            }
        } else if ((0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc)) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = 0x4bU;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0U;
        } else if (((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc) 
                    & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = 0x0000000aU;
        }
    }
    if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
            = harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr;
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr;
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags;
    }
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
            if ((0x000000000015f900ULL >= harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_end)) {
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walker__DOT__user_code_paddr;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0x5bU;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0U;
            }
        } else if ((0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc)) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = 0x4bU;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0U;
        } else if (((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc) 
                    & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = 0x0000000aU;
        }
    }
    if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
            = harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr;
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr;
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags;
    }
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_ready 
        = (1U & ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                  >> 1U) | ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                             ? ((IData)(vlSelfRef.utmi_tx_ready) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))
                             : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_tx_ready))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected 
        = (((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
             >> 1U) | ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                        ? (IData)(harvos_soc__DOT__usb_host__DOT__utmi_link_connected)
                        : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected))) 
           & (IData)(vlSelfRef.usb_port_power_en));
    vlSelfRef.harvos_soc__DOT__net_status = (0x484e0000U 
                                             ^ (vlSelfRef.harvos_soc__DOT__net_card__DOT__status_word 
                                                ^ (vlSelfRef.harvos_soc__DOT__net_card__DOT__digest 
                                                   ^ 
                                                   ((vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_count 
                                                     << 0x00000010U) 
                                                    | (0x0000ffffU 
                                                       & vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count)))));
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
    vlSelfRef.harvos_soc__DOT__dma_req = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active) 
                                          | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step));
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
                 & (0x000000000019a680ULL >= harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_end))) {
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__user_data_paddr;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0xd7U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
            }
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store)) 
                    & ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr) 
                       & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr)))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0xd7U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store)) 
                    & (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr))) {
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
                 & (0x000000000019a680ULL >= harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_end))) {
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                    = harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__user_data_paddr;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0xd7U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
            }
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store)) 
                    & ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr) 
                       & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr)))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0xd7U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) 
                     | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store)) 
                    & (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr))) {
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
    vlSelfRef.utmi_data_o = vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_data;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push_last 
        = ((IData)(vlSelfRef.net_rx_last) & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_allow 
        = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_smpuctl 
           & (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr) 
           & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_allow 
        = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_smpuctl 
           & (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr) 
           & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.harvos_soc__DOT__usb_status = (0x48550000U 
                                             | (((((0x0000000cU 
                                                    & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                       >> 1U)) 
                                                   | ((2U 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                          >> 4U)) 
                                                      | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__port_overcurrent))) 
                                                  << 0x0000000cU) 
                                                 | (((((IData)(vlSelfRef.harvos_soc__DOT__usb_irq) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__done) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy))) 
                                                    << 8U)) 
                                                | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected) 
                                                    << 7U) 
                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed) 
                                                       << 6U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))));
    vlSelfRef.harvos_soc__DOT__dma_rdata = (vlSelfRef.harvos_soc__DOT__dmem
                                            [(0x0007ffffU 
                                              & ((vlSelfRef.harvos_soc__DOT__dma_addr 
                                                  - (IData)(0x00000400U)) 
                                                 >> 2U))] 
                                            & (- (IData)(
                                                         (0x0006689fU 
                                                          >= 
                                                          (0x0007ffffU 
                                                           & ((vlSelfRef.harvos_soc__DOT__dma_addr 
                                                               - (IData)(0x00000400U)) 
                                                              >> 2U))))));
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
    if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
            = harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr;
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr;
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags;
    }
    if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
            = harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr;
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr;
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags;
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_tlb_hit 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit;
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid 
        = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags))));
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write 
        = (0U != (4U & (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_wx_fault 
        = ((IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write) 
           & (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_cause 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid)) 
               | (~ (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    } else if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_wx_fault) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode)) 
                & (~ (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user)))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow 
            = ((IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec) 
               & (~ (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write)));
        if ((((IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write) 
              & (~ (IData)(harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec))) 
             | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode)) 
         & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow 
            = (1U & (((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr) 
                      & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr))
                      ? (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scaps 
                         >> 4U) : vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scaps));
    }
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_tlb_hit 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit;
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid 
        = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags))));
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write 
        = (0U != (4U & (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_wx_fault 
        = ((IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write) 
           & (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_cause 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid)) 
               | (~ (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    } else if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_wx_fault) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode)) 
                & (~ (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user)))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow 
            = ((IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec) 
               & (~ (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write)));
        if ((((IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write) 
              & (~ (IData)(harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec))) 
             | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode)) 
         & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow 
            = (1U & (((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr) 
                      & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr))
                      ? (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scaps 
                         >> 4U) : vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scaps));
    }
    vlSelfRef.harvos_soc__DOT__net_dma_allow = ((IData)(vlSelfRef.harvos_soc__DOT__dma_allow) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_9));
    vlSelfRef.harvos_soc__DOT__net_dma_fault = ((IData)(vlSelfRef.harvos_soc__DOT__dma_fault) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_9));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
           & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
           & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_dma_fault)) 
                                                 & (IData)(vlSelfRef.harvos_soc__DOT__net_dma_allow));
    if ((0x00000040U & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl)) {
        vlSelfRef.net_tx_last = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_last;
        vlSelfRef.net_tx_word = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_data
            [(((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_head) 
               << 9U) | (0x000001ffU & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_word)))];
        vlSelfRef.net_tx_valid = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_valid;
    } else {
        if (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active) {
            vlSelfRef.net_tx_last = ((0x000003ffU & 
                                      ((IData)(1U) 
                                       + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word))) 
                                     >= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_word_count));
            vlSelfRef.net_tx_word = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data
                [(0x000001ffU & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word))];
        } else {
            vlSelfRef.net_tx_last = (4U >= vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining);
            vlSelfRef.net_tx_word = vlSelfRef.harvos_soc__DOT__dma_rdata;
        }
        vlSelfRef.net_tx_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                  & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)) 
                                     & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)
                                         ? ((3U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))
                                         : ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__active) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))));
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_tlb_hit 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit;
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid 
        = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags))));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_read 
        = (0U != (2U & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_write 
        = (0U != (4U & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty 
        = (0U != (0x80U & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_wx_fault 
        = ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_write) 
           & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_cause 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid)) 
               | (~ (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed))))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    } else if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_wx_fault) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode)) 
                & (~ (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_user)))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    } else if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow 
            = ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_read) 
               & (~ (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec) 
             | (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_cause = 0x0000000aU;
        }
    } else if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow 
            = (((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_write) 
                & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty)) 
               & (~ (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec) 
             | (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode)) 
         & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow))) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow 
            = (1U & ((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio)
                      ? (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scaps 
                         >> 4U) : vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scaps));
    }
    __Vtableidx2 = ((((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode)) 
                      << 5U) | (((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio) 
                                 << 4U) | ((0x0015f900U 
                                            > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
                                           << 3U))) 
                    | ((((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
                         & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr)) 
                        << 2U) | (((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store) 
                                   << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_load))));
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_allow 
        = Vharvos_soc__ConstPool__TABLE_hd3e3d478_0
        [__Vtableidx2];
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmio 
        = Vharvos_soc__ConstPool__TABLE_h3e94c13b_0
        [__Vtableidx2];
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_cause 
        = Vharvos_soc__ConstPool__TABLE_h73edb993_0
        [__Vtableidx2];
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_tlb_hit 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit;
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid 
        = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags))));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_read 
        = (0U != (2U & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_write 
        = (0U != (4U & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty 
        = (0U != (0x80U & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_wx_fault 
        = ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_write) 
           & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_cause 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid)) 
               | (~ (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed))))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    } else if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_wx_fault) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode)) 
                & (~ (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_user)))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    } else if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow 
            = ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_read) 
               & (~ (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec) 
             | (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_cause = 0x0000000aU;
        }
    } else if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow 
            = (((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_write) 
                & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty)) 
               & (~ (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec) 
             | (0x0015f900U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode)) 
         & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow))) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow 
            = (1U & ((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio)
                      ? (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scaps 
                         >> 4U) : vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scaps));
    }
    __Vtableidx3 = ((((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode)) 
                      << 5U) | (((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio) 
                                 << 4U) | ((0x0015f900U 
                                            > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
                                           << 3U))) 
                    | ((((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
                         & (0x0019a680U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr)) 
                        << 2U) | (((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store) 
                                   << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_load))));
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_allow 
        = Vharvos_soc__ConstPool__TABLE_hd3e3d478_0
        [__Vtableidx3];
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmio 
        = Vharvos_soc__ConstPool__TABLE_h3e94c13b_0
        [__Vtableidx3];
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_cause 
        = Vharvos_soc__ConstPool__TABLE_h73edb993_0
        [__Vtableidx3];
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step) 
           & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op) 
              & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))));
    vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant0 = 0U;
    vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant1 = 0U;
    if (((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
         & (IData)(vlSelfRef.harvos_soc__DOT__d_req1))) {
        vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant0 
            = vlSelfRef.harvos_soc__DOT__smp_bus__DOT__last_grant;
        vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant1 
            = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__smp_bus__DOT__last_grant)));
    } else if (vlSelfRef.harvos_soc__DOT__d_req0) {
        vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant0 = 1U;
    } else if (vlSelfRef.harvos_soc__DOT__d_req1) {
        vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant1 = 1U;
    }
    vlSelfRef.harvos_soc__DOT__bus_req = ((IData)(vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant0) 
                                          | (IData)(vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant1));
    if (vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant0) {
        vlSelfRef.harvos_soc__DOT__bus_we = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store) 
                                             & ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow) 
                                                & ((~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__d_be0)) 
                                                     | ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmio) 
                                                        & (5U 
                                                           == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))))) 
                                                   & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_allow))));
        vlSelfRef.harvos_soc__DOT__bus_addr = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr;
        vlSelfRef.harvos_soc__DOT__bus_wdata = (((0U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr))
                                                   ? 
                                                  (0x000000ffU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr))
                                                    ? 
                                                   (0x0000ff00U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata 
                                                       << 8U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr))
                                                     ? 
                                                    (0x00ff0000U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata 
                                                        << 0x00000010U))
                                                     : 
                                                    VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata, 0x00000018U))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3))
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr)
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata, 0x00000010U)
                                                    : 
                                                   (0x0000ffffU 
                                                    & vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata))
                                                   : vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata)) 
                                                & (- (IData)(
                                                             (5U 
                                                              != (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state)))));
        vlSelfRef.harvos_soc__DOT__bus_be = vlSelfRef.harvos_soc__DOT__d_be0;
        vlSelfRef.harvos_soc__DOT__d_ready0 = 1U;
    } else {
        vlSelfRef.harvos_soc__DOT__bus_we = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store) 
                                             & ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow) 
                                                & ((~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__d_be1)) 
                                                     | ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmio) 
                                                        & (5U 
                                                           == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))))) 
                                                   & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_allow))));
        vlSelfRef.harvos_soc__DOT__bus_addr = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr;
        vlSelfRef.harvos_soc__DOT__bus_wdata = (((0U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr))
                                                   ? 
                                                  (0x000000ffU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr))
                                                    ? 
                                                   (0x0000ff00U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata 
                                                       << 8U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr))
                                                     ? 
                                                    (0x00ff0000U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata 
                                                        << 0x00000010U))
                                                     : 
                                                    VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata, 0x00000018U))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3))
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr)
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata, 0x00000010U)
                                                    : 
                                                   (0x0000ffffU 
                                                    & vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata))
                                                   : vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata)) 
                                                & (- (IData)(
                                                             (5U 
                                                              != (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state)))));
        vlSelfRef.harvos_soc__DOT__bus_be = vlSelfRef.harvos_soc__DOT__d_be1;
        vlSelfRef.harvos_soc__DOT__d_ready0 = 0U;
    }
    vlSelfRef.harvos_soc__DOT__d_ready1 = vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant1;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop_last 
        = (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_last
           [vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd] 
           & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop));
    vlSelfRef.harvos_soc__DOT____Vcellinp__l1d0__access 
        = ((IData)(vlSelfRef.harvos_soc__DOT__d_ready0) 
           & (IData)(vlSelfRef.harvos_soc__DOT__d_req0));
    vlSelfRef.harvos_soc__DOT____Vcellinp__l1d1__access 
        = ((IData)(vlSelfRef.harvos_soc__DOT__d_ready1) 
           & (IData)(vlSelfRef.harvos_soc__DOT__d_req1));
    vlSelfRef.harvos_soc__DOT____Vcellinp__assertions__d_we 
        = ((IData)(vlSelfRef.harvos_soc__DOT__bus_we) 
           & (IData)(vlSelfRef.harvos_soc__DOT__bus_req));
    vlSelfRef.harvos_soc__DOT__l2_hit = ((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
                                         & (vlSelfRef.harvos_soc__DOT__l2__DOT__valid
                                            [(0x0000001fU 
                                              & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                 >> 2U))] 
                                            & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 7U) 
                                               == vlSelfRef.harvos_soc__DOT__l2__DOT__tag
                                               [(0x0000001fU 
                                                 & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                    >> 2U))])));
    vlSelfRef.harvos_soc__DOT__coherence__DOT__same_line 
        = (vlSelfRef.harvos_soc__DOT__coherence__DOT__valid
           [(0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                            >> 2U))] & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                         >> 0x0000000cU) 
                                        == vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag
                                        [(0x0000001fU 
                                          & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                             >> 2U))]));
    vlSelfRef.harvos_soc__DOT__d_in_range = ((0x00000400U 
                                              <= vlSelfRef.harvos_soc__DOT__bus_addr) 
                                             & (0x0019a680U 
                                                > vlSelfRef.harvos_soc__DOT__bus_addr));
    __Vtableidx4 = (((IData)(vlSelfRef.harvos_soc__DOT__kernel_ipc_depth) 
                     << 4U) | (0x0000000fU & vlSelfRef.harvos_soc__DOT__bus_addr));
    vlSelfRef.harvos_soc__DOT__kernel_allow = Vharvos_soc__ConstPool__TABLE_h6a41084a_0
        [__Vtableidx4];
    vlSelfRef.harvos_soc__DOT__hps_block_status = 0x48000000U;
    vlSelfRef.harvos_soc__DOT__hps_block_status = (
                                                   (0xfff0ffffU 
                                                    & vlSelfRef.harvos_soc__DOT__hps_block_status) 
                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly) 
                                                       << 0x00000012U) 
                                                      | ((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted) 
                                                         << 0x00000010U)));
    vlSelfRef.harvos_soc__DOT__hps_block_status = (
                                                   (0xfffff8ffU 
                                                    & vlSelfRef.harvos_soc__DOT__hps_block_status) 
                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__fault) 
                                                       << 0x0000000aU) 
                                                      | (((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__done) 
                                                          << 9U) 
                                                         | ((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__busy) 
                                                            << 8U))));
    vlSelfRef.harvos_soc__DOT__hps_block_status = (
                                                   (0xffffffefU 
                                                    & vlSelfRef.harvos_soc__DOT__hps_block_status) 
                                                   | ((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__write_op) 
                                                      << 4U));
    vlSelfRef.harvos_soc__DOT__hps_block_status = (
                                                   (0xfffffffcU 
                                                    & vlSelfRef.harvos_soc__DOT__hps_block_status) 
                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__active_drive) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive)));
    harvos_soc__DOT__hps_block_mmio_rdata = ((0x00000020U 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)
                                              ? ((0x00000010U 
                                                  & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelfRef.hps_sd_ack) 
                                                       << 4U) 
                                                      | (((IData)(vlSelfRef.hps_sd_wr) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.hps_sd_rd)))))))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                   ? 
                                                  ((4U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_readonly) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_mounted))))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : (IData)(
                                                                (vlSelfRef.harvos_soc__DOT__hps_block__DOT__size_bytes
                                                                 [vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive] 
                                                                 >> 0x00000020U)))))
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__size_bytes
                                                                [vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive])))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
                                                               [
                                                               (0x00001fffU 
                                                                & ((IData)(1U) 
                                                                   + vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index))]) 
                                                       << 0x00000010U) 
                                                      | vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
                                                      [
                                                      (0x00001fffU 
                                                       & vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index)]))))))
                                              : ((0x00000010U 
                                                  & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                   ? 
                                                  ((4U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : vlSelfRef.harvos_soc__DOT__hps_block__DOT__count)))
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_hi))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_lo))))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                   ? 
                                                  ((4U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive)))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : vlSelfRef.harvos_soc__DOT__hps_block_status)))
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : vlSelfRef.harvos_soc__DOT__hps_block__DOT__ctrl))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 0U
                                                      : 0x48505344U))))));
    vlSelfRef.harvos_soc__DOT__d_is_mmio = ((0xffff0000U 
                                             <= vlSelfRef.harvos_soc__DOT__bus_addr) 
                                            & (0xffff0100U 
                                               > vlSelfRef.harvos_soc__DOT__bus_addr));
    vlSelfRef.harvos_soc__DOT__l1_hit0 = ((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__l1d0__access) 
                                          & (vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid
                                             [(0x0000000fU 
                                               & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                                  >> 2U))] 
                                             & ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                                 >> 6U) 
                                                == vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag
                                                [(0x0000000fU 
                                                  & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                                     >> 2U))])));
    vlSelfRef.harvos_soc__DOT__l1_hit1 = ((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__l1d1__access) 
                                          & (vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid
                                             [(0x0000000fU 
                                               & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                                  >> 2U))] 
                                             & ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                                 >> 6U) 
                                                == vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag
                                                [(0x0000000fU 
                                                  & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                                     >> 2U))])));
    vlSelfRef.harvos_soc__DOT__coh_invalidate = ((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__assertions__d_we) 
                                                 & ((IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__same_line) 
                                                    & (vlSelfRef.harvos_soc__DOT__coherence__DOT__modified
                                                       [
                                                       (0x0000001fU 
                                                        & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                           >> 2U))] 
                                                       & ((IData)(vlSelfRef.harvos_soc__DOT__d_ready1) 
                                                          != vlSelfRef.harvos_soc__DOT__coherence__DOT__owner
                                                          [
                                                          (0x0000001fU 
                                                           & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                              >> 2U))]))));
    vlSelfRef.harvos_soc__DOT____Vcellinp__kernel_model__syscall_valid 
        = (((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
            & (0x00000020U == (0x000000f0U & vlSelfRef.harvos_soc__DOT__bus_addr))) 
           & (IData)(vlSelfRef.harvos_soc__DOT__d_is_mmio));
    vlSelfRef.harvos_soc__DOT__d_is_imem_loader_mmio 
        = (IData)(((0x00000030U == (0x000000f0U & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                   & (IData)(vlSelfRef.harvos_soc__DOT__d_is_mmio)));
    vlSelfRef.harvos_soc__DOT__d_is_hps_block_mmio 
        = (IData)(((0x000000c0U == (0x000000c0U & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                   & (IData)(vlSelfRef.harvos_soc__DOT__d_is_mmio)));
    vlSelfRef.harvos_soc__DOT__d_is_usb_mmio = (IData)(
                                                       ((0x00000080U 
                                                         == 
                                                         (0x000000c0U 
                                                          & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                                                        & (IData)(vlSelfRef.harvos_soc__DOT__d_is_mmio)));
    vlSelfRef.harvos_soc__DOT__d_is_net_mmio = (IData)(
                                                       ((0x00000040U 
                                                         == 
                                                         (0x000000c0U 
                                                          & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                                                        & (IData)(vlSelfRef.harvos_soc__DOT__d_is_mmio)));
    vlSelfRef.harvos_soc__DOT__kernel_policy_fault 
        = ((~ (IData)(vlSelfRef.harvos_soc__DOT__kernel_allow)) 
           & (IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__kernel_model__syscall_valid));
    vlSelfRef.harvos_soc__DOT____Vcellinp__imem_loader__mmio_req 
        = ((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
           & (IData)(vlSelfRef.harvos_soc__DOT__d_is_imem_loader_mmio));
    vlSelfRef.harvos_soc__DOT____Vcellinp__hps_block__mmio_req 
        = ((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
           & (IData)(vlSelfRef.harvos_soc__DOT__d_is_hps_block_mmio));
    vlSelfRef.harvos_soc__DOT____Vcellinp__usb_host__mmio_req 
        = ((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
           & (IData)(vlSelfRef.harvos_soc__DOT__d_is_usb_mmio));
    vlSelfRef.harvos_soc__DOT____Vcellinp__net_card__mmio_req 
        = ((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
           & (IData)(vlSelfRef.harvos_soc__DOT__d_is_net_mmio));
    vlSelfRef.harvos_soc__DOT__bus_rdata = ((IData)(vlSelfRef.harvos_soc__DOT__d_in_range)
                                             ? ((0x0006689fU 
                                                 >= 
                                                 (0x0007ffffU 
                                                  & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                                      - (IData)(0x00000400U)) 
                                                     >> 2U)))
                                                 ? vlSelfRef.harvos_soc__DOT__dmem
                                                [(0x0007ffffU 
                                                  & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                                      - (IData)(0x00000400U)) 
                                                     >> 2U))]
                                                 : 0U)
                                             : ((IData)(vlSelfRef.harvos_soc__DOT__d_is_imem_loader_mmio)
                                                 ? 
                                                ((8U 
                                                  & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                  ? 
                                                 ((4U 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                   ? 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                   & (vlSelfRef.harvos_soc__DOT__imem_loader__DOT__data_word 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                        >> 1U)))))))
                                                   : 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                   & (vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                        >> 1U))))))))
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                   ? 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                      >> 1U))))) 
                                                      & vlSelfRef.harvos_soc__DOT__imem_loader_status))
                                                   : 
                                                  (0x494c4452U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                        >> 1U)))))))))
                                                 : 
                                                ((IData)(vlSelfRef.harvos_soc__DOT__d_is_net_mmio)
                                                  ? 
                                                 ((0x00000020U 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                   ? 
                                                  ((0x00000010U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & ((((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count) 
                                                           << 0x00000010U) 
                                                          | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count)) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U))))))))
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_count 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__frame_len 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_hi 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_lo 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U))))))))
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_base 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U))))))))))
                                                   : 
                                                  ((0x00000010U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__command 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_len 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U))))))))
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_base 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status_view 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_enable 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__status_word 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U))))))))
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))
                                                      : 
                                                     (0x484e4554U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                           >> 1U)))))))))))
                                                  : 
                                                 ((IData)(vlSelfRef.harvos_soc__DOT__d_is_usb_mmio)
                                                   ? 
                                                  ((0x00000020U 
                                                    & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                    ? 
                                                   ((0x00000010U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & ((0x28000000U 
                                                           | ((((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state) 
                                                                << 0x00000013U) 
                                                               | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_busy) 
                                                                   << 0x00000012U) 
                                                                  | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done) 
                                                                      << 0x00000011U) 
                                                                     | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault) 
                                                                        << 0x00000010U)))) 
                                                              | ((0x00008000U 
                                                                  & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                                     << 0x0000000eU)) 
                                                                 | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected) 
                                                                     << 0x0000000eU) 
                                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                                        << 8U) 
                                                                       | (0x000000ffU 
                                                                          & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len))))))) 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U))))))))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & ((0x0a400000U 
                                                           | ((((((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_done) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_packet_error) 
                                                                       << 2U))) 
                                                                | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_crc_ok))) 
                                                               << 0x00000010U) 
                                                              | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet) 
                                                                  << 0x0000000fU) 
                                                                 | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_token_packet) 
                                                                     << 0x0000000eU) 
                                                                    | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_handshake) 
                                                                        << 0x0000000cU) 
                                                                       | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_code) 
                                                                           << 8U) 
                                                                          | (0x000000ffU 
                                                                             & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_payload_len)))))))) 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (((0x00000010U 
                                                            & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                                                            ? 
                                                           (0x55000000U 
                                                            | (((((0x0000000cU 
                                                                   & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                                      >> 1U)) 
                                                                  | ((2U 
                                                                      & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                                         >> 4U)) 
                                                                     | (IData)(vlSelfRef.usb_port_overcurrent_n))) 
                                                                 << 0x00000014U) 
                                                                | (((((IData)(harvos_soc__DOT__usb_host__DOT__utmi_link_connected) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.utmi_tx_ready) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.utmi_rx_active) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.utmi_rx_valid))) 
                                                                   << 0x00000010U)) 
                                                               | (((IData)(vlSelfRef.utmi_rx_error) 
                                                                   << 0x0000000fU) 
                                                                  | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_last) 
                                                                      << 0x0000000eU) 
                                                                     | (((IData)(vlSelfRef.utmi_line_state) 
                                                                         << 0x0000000cU) 
                                                                        | (0x00000fffU 
                                                                           & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count)))))))
                                                            : 
                                                           (0x46000000U 
                                                            | ((((((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_tx_ready) 
                                                                     << 4U)) 
                                                                 | ((((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_valid) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_error) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_fault)))) 
                                                                << 0x00000010U) 
                                                               | ((((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected) 
                                                                    << 0x0000000fU) 
                                                                   | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed) 
                                                                       << 0x0000000eU) 
                                                                      | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state) 
                                                                          << 0x0000000cU) 
                                                                         | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones) 
                                                                            << 9U)))) 
                                                                  | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones) 
                                                                      << 6U) 
                                                                     | (0x0000003fU 
                                                                        & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count))))))) 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))))
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__actual_len 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U))))))))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & ((0x00008000U 
                                                           | ((((IData)(vlSelfRef.usb_port_overcurrent_n) 
                                                                << 0x0000000dU) 
                                                               | (((2U 
                                                                    & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                                       >> 3U)) 
                                                                   | (1U 
                                                                      & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                                         >> 5U))) 
                                                                  << 0x0000000bU)) 
                                                              | (((IData)(vlSelfRef.utmi_term_select) 
                                                                  << 0x0000000aU) 
                                                                 | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected) 
                                                                     << 9U) 
                                                                    | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed) 
                                                                       << 8U))))) 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U))))))))))
                                                    : 
                                                   ((0x00000010U 
                                                     & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U))))))))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))))
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_enable 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_status 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U))))))))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.harvos_soc__DOT__bus_addr)
                                                       ? 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                       & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))
                                                       : 
                                                      (0x48555342U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (~ vlSelfRef.harvos_soc__DOT__bus_addr)))) 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                                            >> 1U)))))))))))
                                                   : 
                                                  ((IData)(vlSelfRef.harvos_soc__DOT__d_is_hps_block_mmio)
                                                    ? harvos_soc__DOT__hps_block_mmio_rdata
                                                    : 
                                                   ((IData)(vlSelfRef.harvos_soc__DOT__d_is_mmio)
                                                     ? 
                                                    (((((((((0U 
                                                             == 
                                                             (0x000000ffU 
                                                              & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                                                            | (4U 
                                                               == 
                                                               (0x000000ffU 
                                                                & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                                                           | (8U 
                                                              == 
                                                              (0x000000ffU 
                                                               & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                                                          | (0x0cU 
                                                             == 
                                                             (0x000000ffU 
                                                              & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                                                         | (0x10U 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                                                        | (0x14U 
                                                           == 
                                                           (0x000000ffU 
                                                            & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                                                       | (0x18U 
                                                          == 
                                                          (0x000000ffU 
                                                           & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                                                      | (0x1cU 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.harvos_soc__DOT__bus_addr)))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.harvos_soc__DOT__bus_addr))
                                                       ? vlSelfRef.harvos_soc__DOT__mmio_out
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.harvos_soc__DOT__bus_addr))
                                                        ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.harvos_soc__DOT__bus_addr))
                                                         ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scause
                                                         : 
                                                        ((0x0cU 
                                                          == 
                                                          (0x000000ffU 
                                                           & vlSelfRef.harvos_soc__DOT__bus_addr))
                                                          ? vlSelfRef.harvos_soc__DOT__entropy_lfsr
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x000000ffU 
                                                            & vlSelfRef.harvos_soc__DOT__bus_addr))
                                                           ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc
                                                           : 
                                                          ((0x14U 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSelfRef.harvos_soc__DOT__bus_addr))
                                                            ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scause
                                                            : 
                                                           ((0x18U 
                                                             == 
                                                             (0x000000ffU 
                                                              & vlSelfRef.harvos_soc__DOT__bus_addr))
                                                             ? vlSelfRef.harvos_soc__DOT__boot_status
                                                             : 
                                                            ((((((IData)(vlSelfRef.harvos_soc__DOT__net_irq) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelfRef.harvos_soc__DOT__usb_irq) 
                                                                      << 2U))) 
                                                               | (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.harvos_soc__DOT__dma_fault))) 
                                                              << 5U) 
                                                             | ((IData)(vlSelfRef.harvos_soc__DOT__dma_allow) 
                                                                << 4U)))))))))
                                                      : 0U)
                                                     : 0U))))));
}
