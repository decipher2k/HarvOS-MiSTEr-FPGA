// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycore.h for the primary calling header

#include "Vmycore__pch.h"

VL_ATTR_COLD void Vmycore___024root___stl_sequent__TOP__0(Vmycore___024root* vlSelf);

VL_ATTR_COLD void Vmycore___024root___eval_stl(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_stl\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vmycore___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmycore___024root___eval_triggers_vec__stl(Vmycore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycore___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmycore___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vmycore___024root___eval_phase__stl(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_phase__stl\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmycore___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmycore___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmycore___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmycore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmycore___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycore___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmycore___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmycore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycore___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmycore___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmycore___024root___ctor_var_reset(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___ctor_var_reset\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->pal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 929341440414483732ull);
    vlSelf->scandouble = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16082046415637526195ull);
    vlSelf->bootrom_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3228308410045366232ull);
    vlSelf->bootrom_addr = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15081764940070424077ull);
    vlSelf->bootrom_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8042947190353180848ull);
    vlSelf->bootrom_loaded = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14985248574997283936ull);
    vlSelf->ce_pix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5281599081232318353ull);
    vlSelf->HBlank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11498850426090054997ull);
    vlSelf->HSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6896655602068565636ull);
    vlSelf->VBlank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16624563863309448368ull);
    vlSelf->VSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1468081538417712294ull);
    vlSelf->video_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12793713714358348114ull);
    vlSelf->video_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11042820042119555995ull);
    vlSelf->video_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1316279001193991330ull);
    vlSelf->mycore__DOT__debug_scause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5682446995072655662ull);
    vlSelf->mycore__DOT__debug_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8536083912940578377ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 35298363969752235ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12609543050495271266ull);
    }
    vlSelf->mycore__DOT__soc__DOT__boot_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3236421134079112904ull);
    vlSelf->mycore__DOT__soc__DOT__boot_mpu_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 795371345844948422ull);
    vlSelf->mycore__DOT__soc__DOT__boot_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17736330230391151854ull);
    vlSelf->mycore__DOT__soc__DOT__cpu_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6064548895461913913ull);
    vlSelf->mycore__DOT__soc__DOT__d_req0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13733622255817185241ull);
    vlSelf->mycore__DOT__soc__DOT__d_ready0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15267761140872018166ull);
    vlSelf->mycore__DOT__soc__DOT__d_req1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4269448829909604418ull);
    vlSelf->mycore__DOT__soc__DOT__d_ready1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13027258212468579711ull);
    vlSelf->mycore__DOT__soc__DOT__bus_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3820601931779537892ull);
    vlSelf->mycore__DOT__soc__DOT__bus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10517849050596868776ull);
    vlSelf->mycore__DOT__soc__DOT__bus_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15293898437050657002ull);
    vlSelf->mycore__DOT__soc__DOT__bus_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4031172557842955751ull);
    vlSelf->mycore__DOT__soc__DOT__bus_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10377001404785199183ull);
    vlSelf->mycore__DOT__soc__DOT__bus_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9992025642818411378ull);
    vlSelf->mycore__DOT__soc__DOT__debug_trap0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10157047701979026637ull);
    vlSelf->mycore__DOT__soc__DOT__debug_trap1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15650419053653452172ull);
    vlSelf->mycore__DOT__soc__DOT__entropy_lfsr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15829658666329860364ull);
    vlSelf->mycore__DOT__soc__DOT__mmio_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7807118345486855901ull);
    vlSelf->mycore__DOT__soc__DOT__dma_tick = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11216075787920583504ull);
    vlSelf->mycore__DOT__soc__DOT__dma_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 680916773495998120ull);
    vlSelf->mycore__DOT__soc__DOT__dma_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6535027439325523346ull);
    vlSelf->mycore__DOT__soc__DOT__dma_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 563828083112030872ull);
    vlSelf->mycore__DOT__soc__DOT__l1_hit0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6447622578969177662ull);
    vlSelf->mycore__DOT__soc__DOT__l1_hit1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1882485687003963679ull);
    vlSelf->mycore__DOT__soc__DOT__l2_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14958238758672379991ull);
    vlSelf->mycore__DOT__soc__DOT__coh_invalidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18377996313466822316ull);
    vlSelf->mycore__DOT__soc__DOT__kernel_task = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4251362104775018772ull);
    vlSelf->mycore__DOT__soc__DOT__kernel_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 448332602403856298ull);
    vlSelf->mycore__DOT__soc__DOT__kernel_policy_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2768677720527250207ull);
    vlSelf->mycore__DOT__soc__DOT__kernel_ipc_depth = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1730562759423713155ull);
    vlSelf->mycore__DOT__soc__DOT__trace_digest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1657186434316516627ull);
    vlSelf->mycore__DOT__soc__DOT__trace_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13070076202066577084ull);
    vlSelf->mycore__DOT__soc__DOT__trace_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9648374510305363686ull);
    vlSelf->mycore__DOT__soc__DOT__d_in_range = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2559574932292621772ull);
    vlSelf->mycore__DOT__soc__DOT__d_is_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10806857926291579206ull);
    vlSelf->mycore__DOT__soc__DOT____Vcellinp__l1d0__access = 0;
    vlSelf->mycore__DOT__soc__DOT____Vcellinp__l1d1__access = 0;
    vlSelf->mycore__DOT__soc__DOT____Vcellinp__kernel_model__syscall_valid = 0;
    vlSelf->mycore__DOT__soc__DOT____Vcellinp__assertions__d_we = 0;
    vlSelf->mycore__DOT__soc__DOT__secure_boot__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18068464563277653063ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6180145380113789309ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 219014792845723395ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14958964741744771680ull);
    }
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5736759170172382710ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4900966220175592189ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3743487676419827746ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6955709965378264398ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__rs1_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6288576601383844161ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__rd_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9428086539508328927ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10078433161956886015ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15348330544399844853ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4462792763477603618ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__mem_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8008259840904737685ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__mem_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6887670445252432683ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13922714698430765263ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 52617007350078201ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16666497650382127854ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__clr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3084918448517653870ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__clr_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15920840484014243164ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4285213626185731959ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5070953293299655873ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15266233496663622680ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_scause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17171701819946304198ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_stval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1135292851766235181ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_satp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3819093947016716672ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7890971152318656083ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18127326523706606590ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12027365557638192651ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__tlb_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13076959811760008025ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3705027400981512823ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__imm_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12577615579593110641ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16525854524494013758ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6283947370932609618ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12457091780929530249ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 604851576656885186ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8823830004549626440ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18101938511354223853ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6737964273255413999ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9139993639579648365ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6937521549025797758ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9862259537328770148ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8550066442817281753ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7879061781949342753ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5674192932691117706ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16682706419569644126ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16406666375454811289ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3559719576636318033ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12690172353748373201ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7054066542255942879ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6653722452893144440ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1438918618684872401ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3326566951784818209ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10204505376718321868ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 18088504851591256184ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12799291374589583843ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6315277347259324579ull);
    }
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14460871535205238250ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16626183468763279631ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10851054367473455906ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16991066074281589186ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13726955733876313272ull);
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6207633839694223571ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10346113037354253469ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3121444002260965202ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6718850370530023101ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4230384339054034725ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16608006527069623914ull);
    }
    vlSelf->mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17946789690185453534ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3149927366240696366ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9729088887661618702ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17930536399098842306ull);
    }
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16273158665340746580ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8588615266692036506ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__rs1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17095133138043413452ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__rs2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1162585634560427216ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__rs1_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7716636841866790858ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__rd_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13710927638705875694ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 276677352974617420ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13587131231104744001ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13405273113702587676ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__mem_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6893680573086036208ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__mem_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14152480190266684328ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15834687868438667709ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11358219457219671174ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5759008537002756501ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__clr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2136204546800825690ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__clr_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12731957207663875301ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16925130167822498553ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9920280834606137026ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10765054042454794823ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_scause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15431301483240810298ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_stval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9966776395134175949ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_satp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3249283087061972908ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2465632070908830605ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14678400171490315064ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 266012272925134005ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__tlb_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3450891202380035389ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 118289619424135666ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__imm_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15622844057722350878ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1209928959755379645ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5760154043329261883ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10722820009621923424ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4110108236256034706ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8378229950624034881ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__active_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14990918769320628456ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__active_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1577892860752113255ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12451587172430453041ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 297292481689407565ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9391848479218762122ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17305198890036677531ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_tlb_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7124128873078786632ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_wx_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4645741198304134391ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3819765369448813038ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4969675499534295742ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13392926025929145238ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6774786949443499410ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 574322051322752460ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1408046459432430128ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14563480576641245872ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1271219036818531467ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13565447410182228746ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17255511626366743555ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11161233610305368669ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12242306803366308035ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17049383155212503883ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5042906671942888619ull);
    }
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14037313226724953238ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1470783194390069650ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10609748181769848382ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12517252966988776405ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6100745062321811160ull);
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2355859719845870875ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12280524820739666648ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1255964436121548377ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1014792615146101531ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10763575736053094365ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 37064742759188625ull);
    }
    vlSelf->mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10977924465396470758ull);
    vlSelf->mycore__DOT__soc__DOT__smp_bus__DOT__last_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5670021030396347839ull);
    vlSelf->mycore__DOT__soc__DOT__smp_bus__DOT__grant0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5188479202633867301ull);
    vlSelf->mycore__DOT__soc__DOT__smp_bus__DOT__grant1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2379690453428825616ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__l1d0__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5144589539590361911ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__l1d0__DOT__tag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3516236526951921315ull);
    }
    vlSelf->mycore__DOT__soc__DOT__l1d0__DOT__hit_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 243456528203326215ull);
    vlSelf->mycore__DOT__soc__DOT__l1d0__DOT__miss_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11042485422637426602ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__l1d1__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 560201438828907920ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__l1d1__DOT__tag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 1916002476645426070ull);
    }
    vlSelf->mycore__DOT__soc__DOT__l1d1__DOT__hit_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10597272042468166785ull);
    vlSelf->mycore__DOT__soc__DOT__l1d1__DOT__miss_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9911245582193165754ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__l2__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9718407515872211932ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__l2__DOT__tag[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12483320389312044409ull);
    }
    vlSelf->mycore__DOT__soc__DOT__l2__DOT__hits = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15801055361153865923ull);
    vlSelf->mycore__DOT__soc__DOT__l2__DOT__misses = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7293050974295566571ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__coherence__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2140429566731541087ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__coherence__DOT__owner[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2408124293279031436ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__coherence__DOT__modified[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16377529539637271481ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mycore__DOT__soc__DOT__coherence__DOT__line_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 667081412962324116ull);
    }
    vlSelf->mycore__DOT__soc__DOT__coherence__DOT__invalidations = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5503334076157114348ull);
    vlSelf->mycore__DOT__soc__DOT__coherence__DOT__shared_reads = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3359480302963146802ull);
    vlSelf->mycore__DOT__soc__DOT__coherence__DOT__same_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8470788234517939762ull);
    vlSelf->mycore__DOT__video__DOT__hc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8607351930739133254ull);
    vlSelf->mycore__DOT__video__DOT__vc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18014638869382785906ull);
    vlSelf->mycore__DOT__video__DOT__frame_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4616439701257110497ull);
    vlSelf->mycore__DOT__video__DOT__boot_pixel = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5896688652575101042ull);
    vlSelf->mycore__DOT__video__DOT__boot_draw_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 755608905756951038ull);
    vlSelf->mycore__DOT__video__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2658921772032804460ull);
    vlSelf->mycore__DOT__video__DOT__boot_draw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11176917844921448393ull);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->mycore__DOT__video__DOT__boot_image__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4499847943000636549ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
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
