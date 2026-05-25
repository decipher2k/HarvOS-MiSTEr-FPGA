// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vharvos_soc.h for the primary calling header

#include "Vharvos_soc__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vharvos_soc__ConstPool__TABLE_hd3e3d478_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vharvos_soc__ConstPool__TABLE_h3e94c13b_0;
extern const VlUnpacked<IData/*31:0*/, 64> Vharvos_soc__ConstPool__TABLE_h73edb993_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vharvos_soc__ConstPool__TABLE_h6a41084a_0;
extern const VlUnpacked<CData/*7:0*/, 128> Vharvos_soc__ConstPool__TABLE_h3fb9de17_0;

void Vharvos_soc___024root___nba_sequent__TOP__2(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___nba_sequent__TOP__2\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    // Body
    if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_tlb_hit = 1U;
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_tlb_hit = 0U;
        harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags;
    }
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
    harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
           & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr));
    if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_tlb_hit = 1U;
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_tlb_hit = 0U;
        harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags;
    }
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
    harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
           & (0xffff0100U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr));
    vlSelfRef.net_tx_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                              & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)) 
                                 & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)
                                     ? ((3U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))
                                     : ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__active) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step) 
           & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op) 
              & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count;
    vlSelfRef.harvos_soc__DOT__cpu_reset = (1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__boot_ok)) 
                                                  | (IData)(vlSelfRef.reset)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
        = vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__ctrl;
    if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_tlb_hit = 1U;
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_tlb_hit = 0U;
        harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags;
    }
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
             | (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_cause = 0x0000000aU;
        }
    } else if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_store) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow 
            = (((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_write) 
                & (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty)) 
               & (~ (IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec) 
             | (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr))) {
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
                                 << 4U) | ((0x00000400U 
                                            > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
                                           << 3U))) 
                    | ((((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
                         & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr)) 
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
    if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_tlb_hit = 1U;
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_tlb_hit = 0U;
        harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__flags 
            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags;
    }
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
             | (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_cause = 0x0000000aU;
        }
    } else if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_store) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow 
            = (((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_write) 
                & (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty)) 
               & (~ (IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec) 
             | (0x00000400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr))) {
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
                                 << 4U) | ((0x00000400U 
                                            > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
                                           << 3U))) 
                    | ((((0x00000400U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
                         & (0x00001400U > vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr)) 
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
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop_last 
        = (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_last
           [vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd] 
           & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop));
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
    vlSelfRef.utmi_op_mode = (2U & (- (IData)((1U & 
                                               (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                                >> 5U)))));
    vlSelfRef.utmi_reset_n = (1U & (~ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                        >> 5U) | (IData)(vlSelfRef.harvos_soc__DOT__cpu_reset))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data 
        = ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
            ? (IData)(vlSelfRef.utmi_data_i) : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_data));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.usb_port_overcurrent_n) 
                                                & (0x00000018U 
                                                   == 
                                                   (0x00000018U 
                                                    & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)));
    vlSelfRef.utmi_term_select = (1U & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                        >> 3U));
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
    vlSelfRef.utmi_tx_valid = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                & (0x00000010U == (0x00000012U 
                                                   & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl))) 
                               & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active 
        = ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
               >> 1U)) & ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                           ? ((IData)(vlSelfRef.utmi_rx_active) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                           : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power 
        = ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
               >> 4U)) & (IData)(vlSelfRef.utmi_term_select));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__port_overcurrent 
        = ((~ (IData)(vlSelfRef.usb_port_overcurrent_n)) 
           & (IData)(vlSelfRef.utmi_term_select));
    vlSelfRef.usb_port_power_en = ((IData)(vlSelfRef.usb_port_overcurrent_n) 
                                   & (IData)(vlSelfRef.utmi_term_select));
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
                                             & (0x00001400U 
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
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_tx_ready 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power) 
           & ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                  >> 5U)) & ((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state)) 
                             | (3U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state)))));
    vlSelfRef.utmi_suspend_n = vlSelfRef.usb_port_power_en;
    harvos_soc__DOT__usb_host__DOT__utmi_link_connected 
        = ((0U != (IData)(vlSelfRef.utmi_line_state)) 
           & (IData)(vlSelfRef.usb_port_power_en));
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
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_ready 
        = (1U & ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                  >> 1U) | ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                             ? ((IData)(vlSelfRef.utmi_tx_ready) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                             : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_tx_ready))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected 
        = (((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
             >> 1U) | ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                        ? (IData)(harvos_soc__DOT__usb_host__DOT__utmi_link_connected)
                        : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_connected))) 
           & (IData)(vlSelfRef.usb_port_power_en));
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
    vlSelfRef.harvos_soc__DOT__bus_rdata = ((IData)(vlSelfRef.harvos_soc__DOT__d_in_range)
                                             ? vlSelfRef.harvos_soc__DOT__dmem
                                            [(0x000003ffU 
                                              & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                                  - (IData)(0x00000400U)) 
                                                 >> 2U))]
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
                                                      & (vlSelfRef.harvos_soc__DOT__net_card__DOT__digest 
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

void Vharvos_soc___024root___nba_sequent__TOP__0(Vharvos_soc___024root* vlSelf);
void Vharvos_soc___024root___nba_sequent__TOP__1(Vharvos_soc___024root* vlSelf);

void Vharvos_soc___024root___eval_nba(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_nba\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vharvos_soc___024root___nba_sequent__TOP__0(vlSelf);
        Vharvos_soc___024root___nba_sequent__TOP__1(vlSelf);
        Vharvos_soc___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vharvos_soc___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vharvos_soc___024root___eval_triggers_vec__act(Vharvos_soc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vharvos_soc___024root___eval_phase__act(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_phase__act\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vharvos_soc___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vharvos_soc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vharvos_soc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vharvos_soc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vharvos_soc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vharvos_soc___024root___eval_phase__nba(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_phase__nba\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vharvos_soc___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vharvos_soc___024root___eval_nba(vlSelf);
        Vharvos_soc___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vharvos_soc___024root___eval_phase__ico(Vharvos_soc___024root* vlSelf);

void Vharvos_soc___024root___eval(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vharvos_soc___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl\\harvos_soc.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vharvos_soc___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vharvos_soc___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl\\harvos_soc.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vharvos_soc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl\\harvos_soc.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vharvos_soc___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vharvos_soc___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vharvos_soc___024root___eval_debug_assertions(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_debug_assertions\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.usb_dp_i & 0xfeU)))) {
        Verilated::overWidthError("usb_dp_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.usb_dm_i & 0xfeU)))) {
        Verilated::overWidthError("usb_dm_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.usb_port_overcurrent_n 
                      & 0xfeU)))) {
        Verilated::overWidthError("usb_port_overcurrent_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.utmi_tx_ready & 0xfeU)))) {
        Verilated::overWidthError("utmi_tx_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.utmi_rx_valid & 0xfeU)))) {
        Verilated::overWidthError("utmi_rx_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.utmi_rx_active & 0xfeU)))) {
        Verilated::overWidthError("utmi_rx_active");
    }
    if (VL_UNLIKELY(((vlSelfRef.utmi_rx_error & 0xfeU)))) {
        Verilated::overWidthError("utmi_rx_error");
    }
    if (VL_UNLIKELY(((vlSelfRef.utmi_line_state & 0xfcU)))) {
        Verilated::overWidthError("utmi_line_state");
    }
    if (VL_UNLIKELY(((vlSelfRef.net_link_up & 0xfeU)))) {
        Verilated::overWidthError("net_link_up");
    }
    if (VL_UNLIKELY(((vlSelfRef.net_rx_valid & 0xfeU)))) {
        Verilated::overWidthError("net_rx_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.net_rx_last & 0xfeU)))) {
        Verilated::overWidthError("net_rx_last");
    }
    if (VL_UNLIKELY(((vlSelfRef.net_rx_error & 0xfeU)))) {
        Verilated::overWidthError("net_rx_error");
    }
    if (VL_UNLIKELY(((vlSelfRef.net_tx_ready & 0xfeU)))) {
        Verilated::overWidthError("net_tx_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.hps_img_mounted & 0xfcU)))) {
        Verilated::overWidthError("hps_img_mounted");
    }
    if (VL_UNLIKELY(((vlSelfRef.hps_img_readonly & 0xfeU)))) {
        Verilated::overWidthError("hps_img_readonly");
    }
    if (VL_UNLIKELY(((vlSelfRef.hps_sd_ack & 0xfcU)))) {
        Verilated::overWidthError("hps_sd_ack");
    }
    if (VL_UNLIKELY(((vlSelfRef.hps_sd_buff_addr & 0xe000U)))) {
        Verilated::overWidthError("hps_sd_buff_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.hps_sd_buff_wr & 0xfeU)))) {
        Verilated::overWidthError("hps_sd_buff_wr");
    }
}
#endif  // VL_DEBUG
