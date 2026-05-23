// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycore.h for the primary calling header

#include "Vmycore__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vmycore__ConstPool__TABLE_hd3e3d478_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmycore__ConstPool__TABLE_h3e94c13b_0;
extern const VlUnpacked<IData/*31:0*/, 64> Vmycore__ConstPool__TABLE_h73edb993_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmycore__ConstPool__TABLE_h6a41084a_0;

void Vmycore___024root___nba_sequent__TOP__1(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___nba_sequent__TOP__1\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ mycore__DOT__soc__DOT__d_be0;
    mycore__DOT__soc__DOT__d_be0 = 0;
    CData/*3:0*/ mycore__DOT__soc__DOT__d_be1;
    mycore__DOT__soc__DOT__d_be1 = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__active_load;
    mycore__DOT__soc__DOT__cpu0__DOT__active_load = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__active_store;
    mycore__DOT__soc__DOT__cpu0__DOT__active_store = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid;
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write;
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec;
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user;
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed;
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags;
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_read;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_read = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_write;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_write = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_user;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_user = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags = 0;
    CData/*7:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags = 0;
    IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_dram;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_dram = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_mmio;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_mmio = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid;
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write;
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec;
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user;
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed;
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags;
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_read;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_read = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_write;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_write = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_user;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_user = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed = 0;
    CData/*7:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags = 0;
    CData/*7:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags = 0;
    IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr = 0;
    IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_dram;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_dram = 0;
    CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_mmio;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_mmio = 0;
    IData/*31:0*/ mycore__DOT__video__DOT__paint__DOT__status_mix;
    mycore__DOT__video__DOT__paint__DOT__status_mix = 0;
    CData/*7:0*/ mycore__DOT__video__DOT__paint__DOT__rail;
    mycore__DOT__video__DOT__paint__DOT__rail = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 0U;
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc));
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit = 1U;
    }
    mycore__DOT__soc__DOT__cpu0__DOT__active_load = 
        ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_load) 
         & (3U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state)));
    mycore__DOT__soc__DOT__cpu0__DOT__active_store 
        = (((5U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state)) 
            & (0U != vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_count)) 
           | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_store) 
              & (3U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
        = ((5U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))
            ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__clr_addr
            : vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_addr);
    if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr;
        mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc;
        mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags;
    }
    vlSelfRef.mycore__DOT__soc__DOT__d_req1 = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) 
                                               | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store));
    mycore__DOT__soc__DOT__d_be1 = (0x0000000fU & (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3))
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr)
                                                       ? 0x0cU
                                                       : 3U)
                                                      : 
                                                     (- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3)))))) 
                                                   | (- (IData)(
                                                                (5U 
                                                                 == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))))));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr) 
           & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr) 
           & (0xffff0100U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr;
        mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc;
        mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags;
    }
    vlSelfRef.mycore__DOT__soc__DOT__d_req0 = ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load) 
                                               | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store));
    mycore__DOT__soc__DOT__d_be0 = (0x0000000fU & (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3))
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr)
                                                       ? 0x0cU
                                                       : 3U)
                                                      : 
                                                     (- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3)))))) 
                                                   | (- (IData)(
                                                                (5U 
                                                                 == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))))));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr) 
           & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr) 
           & (0xffff0100U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_allow 
        = (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl 
           & (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr) 
           & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags = 0U;
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[30U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[31U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[32U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[33U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[34U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[35U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[36U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[37U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[38U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[39U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[40U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[41U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[42U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[43U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[44U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[45U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[46U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[47U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[48U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[49U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[50U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[51U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[52U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[53U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[54U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[55U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[56U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[57U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[58U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[59U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[60U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[61U];
    }
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr = 0U;
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[32U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[33U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[34U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[35U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[36U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[37U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[38U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[39U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[40U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[41U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[42U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[43U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[44U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[45U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[46U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[47U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[48U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[49U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[50U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[51U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[52U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[53U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[54U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[55U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[56U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[57U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[58U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[59U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[60U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[61U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[62U];
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[62U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 0U;
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[63U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[63U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[63U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[63U];
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[63U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr));
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0U;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause 
        = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load)
            ? 5U : 7U);
    if ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
         >> 0x1fU)) {
        if ((1U & (~ (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) 
                       | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store)) 
                      & (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr))))) {
            if ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) 
                  | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store)) 
                 & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_dram))) {
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0xd7U;
            } else if ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) 
                         | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store)) 
                        & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_mmio))) {
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags = 0xc7U;
            }
        }
        if ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) 
              | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store)) 
             & (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr))) {
            mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0x0000000aU;
        } else if ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) 
                     | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store)) 
                    & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_dram))) {
            mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
        } else if ((((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) 
                     | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store)) 
                    & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walker__DOT__in_mmio))) {
            mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause = 0U;
        }
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_allow 
        = (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl 
           & (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram 
        = ((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr) 
           & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags = 0U;
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[1U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[2U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[3U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[4U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[5U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[6U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[7U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[8U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[9U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[10U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[11U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[12U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[13U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[14U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[15U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[16U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[17U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[18U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[19U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[20U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[21U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[22U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[23U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[24U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[25U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[26U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[27U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[28U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[29U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[30U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[31U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[32U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[33U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[34U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[35U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[36U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[37U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[38U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[39U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[40U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[41U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[42U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[43U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[44U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[45U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[46U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[47U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[48U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[49U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[50U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[51U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[52U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[53U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[54U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[55U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[56U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[57U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[58U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[59U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[60U];
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[61U];
    }
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr = 0U;
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[1U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[2U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[3U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[4U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[5U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[6U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[7U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[8U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[9U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[10U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[11U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[12U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[13U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[14U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[15U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[16U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[17U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[18U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[19U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[20U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[21U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[22U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[23U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[24U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[25U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[26U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[27U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[28U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[29U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[30U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[31U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[32U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[33U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[34U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[35U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[36U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[37U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[38U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[39U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[40U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[41U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[42U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[43U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[44U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[45U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[46U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[47U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[48U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[49U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[50U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[51U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[52U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[53U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[54U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[55U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[56U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[57U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[58U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[59U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[60U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[61U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[62U];
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[62U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 0U;
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[1U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[1U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[1U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[2U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[2U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[2U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[3U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[3U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[3U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[4U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[4U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[4U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[5U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[5U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[5U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[6U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[6U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[6U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[7U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[7U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[7U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[8U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[8U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[8U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[9U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[9U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[9U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[10U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[10U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[10U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[11U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[11U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[11U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[12U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[12U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[12U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[13U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[13U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[13U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[14U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[14U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[14U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[15U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[15U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[15U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[16U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[16U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[16U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[17U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[17U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[17U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[18U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[18U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[18U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[19U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[19U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[19U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[20U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[20U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[20U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[21U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[21U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[21U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[22U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[22U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[22U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[23U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[23U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[23U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[24U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[24U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[24U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[25U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[25U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[25U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[26U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[26U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[26U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[27U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[27U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[27U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[28U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[28U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[28U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[29U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[29U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[29U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[30U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[30U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[30U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[31U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[31U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[31U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[32U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[32U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[32U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[33U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[33U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[33U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[34U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[34U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[34U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[35U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[35U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[35U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[36U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[36U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[36U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[37U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[37U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[37U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[38U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[38U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[38U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[39U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[39U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[39U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[40U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[40U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[40U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[41U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[41U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[41U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[42U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[42U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[42U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[43U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[43U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[43U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[44U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[44U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[44U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[45U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[45U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[45U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[46U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[46U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[46U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[47U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[47U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[47U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[48U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[48U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[48U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[49U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[49U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[49U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[50U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[50U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[50U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[51U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[51U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[51U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[52U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[52U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[52U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[53U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[53U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[53U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[54U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[54U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[54U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[55U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[55U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[55U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[56U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[56U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[56U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[57U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[57U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[57U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[58U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[58U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[58U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[59U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[59U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[59U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[60U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[60U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[60U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[61U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[61U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[61U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[62U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[62U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[62U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    if (((((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
           & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[63U]) 
          & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[63U] 
             == (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                 >> 0x0cU))) & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[63U] 
                                == (0x000000ffU & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
                                                   >> 0x00000016U))))) {
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[63U];
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr 
            = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[63U] 
                << 0x0000000cU) | (0x00000fffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr));
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit = 1U;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0U;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause 
        = ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load)
            ? 5U : 7U);
    if ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
         >> 0x1fU)) {
        if ((1U & (~ (((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load) 
                       | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store)) 
                      & (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr))))) {
            if ((((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load) 
                  | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store)) 
                 & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_dram))) {
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0xd7U;
            } else if ((((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load) 
                         | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store)) 
                        & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_mmio))) {
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid = 1U;
                vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags = 0xc7U;
            }
        }
        if ((((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load) 
              | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store)) 
             & (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr))) {
            mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0x0000000aU;
        } else if ((((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load) 
                     | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store)) 
                    & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_dram))) {
            mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
        } else if ((((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load) 
                     | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store)) 
                    & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walker__DOT__in_mmio))) {
            mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause = 0U;
        }
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_tlb_hit 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit;
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid 
        = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags))));
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write 
        = (0U != (4U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__flags)));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_wx_fault 
        = ((IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write) 
           & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_cause 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_valid)) 
               | (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_accessed))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_wx_fault) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode)) 
                & (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_user)))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow = 0U;
    } else {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow 
            = ((IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec) 
               & (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write)));
        if ((((IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_write) 
              & (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__page_exec))) 
             | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode)) 
         & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow 
            = (1U & (((0xffff0000U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr) 
                      & (0xffff0100U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr))
                      ? (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps 
                         >> 1U) : vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps));
    }
    if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
            = mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_paddr;
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags 
            = mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr;
        mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags;
    }
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_tlb_hit 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit;
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid 
        = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags))));
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write 
        = (0U != (4U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__flags)));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_wx_fault 
        = ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write) 
           & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_cause 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_valid)) 
               | (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_accessed))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_wx_fault) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode)) 
                & (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_user)))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow = 0U;
    } else {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow 
            = ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec) 
               & (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write)));
        if ((((IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_write) 
              & (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__page_exec))) 
             | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode)) 
         & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow 
            = (1U & (((0xffff0000U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr) 
                      & (0xffff0100U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr))
                      ? (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps 
                         >> 1U) : vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps));
    }
    if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
            = mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_paddr;
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags 
            = mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_flags;
    } else {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr;
        mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags 
            = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags;
    }
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
           & (0xffff0100U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio 
        = ((0xffff0000U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
           & (0xffff0100U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_tlb_hit 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit;
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid 
        = ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags))));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_read 
        = (0U != (2U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_write 
        = (0U != (4U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty 
        = (0U != (0x80U & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__flags)));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_wx_fault 
        = ((IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_write) 
           & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_cause 
        = mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_valid)) 
               | (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_accessed))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_wx_fault) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode)) 
                & (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_user)))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow = 0U;
    } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow 
            = ((IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_read) 
               & (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec) 
             | (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_cause = 0x0000000aU;
        }
    } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow 
            = (((IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_write) 
                & (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_dirty)) 
               & (~ (IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__page_exec) 
             | (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode)) 
         & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow 
            = (1U & ((IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio)
                      ? (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps 
                         >> 1U) : vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps));
    }
    __Vtableidx2 = ((((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mode)) 
                      << 5U) | (((IData)(mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__in_mmio) 
                                 << 4U) | ((0x00000400U 
                                            > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
                                           << 3U))) 
                    | ((((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr) 
                         & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr)) 
                        << 2U) | (((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store) 
                                   << 1U) | (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_load))));
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_allow 
        = Vmycore__ConstPool__TABLE_hd3e3d478_0[__Vtableidx2];
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmio 
        = Vmycore__ConstPool__TABLE_h3e94c13b_0[__Vtableidx2];
    vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_cause 
        = Vmycore__ConstPool__TABLE_h73edb993_0[__Vtableidx2];
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_tlb_hit 
        = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit;
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid 
        = ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_satp 
            >> 0x1fU) & (0U != (1U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags))));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_read 
        = (0U != (2U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_write 
        = (0U != (4U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec 
        = (0U != (8U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_user 
        = (0U != (0x10U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed 
        = (0U != (0x40U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty 
        = (0U != (0x80U & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__flags)));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_wx_fault 
        = ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_write) 
           & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_cause 
        = mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_cause;
    if ((1U & ((~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_valid)) 
               | (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_accessed))))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    } else if (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_wx_fault) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    } else if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode)) 
                & (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_user)))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow = 0U;
    } else if (mycore__DOT__soc__DOT__cpu0__DOT__active_load) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow 
            = ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_read) 
               & (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec) 
             | (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_cause = 0x0000000aU;
        }
    } else if (mycore__DOT__soc__DOT__cpu0__DOT__active_store) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow 
            = (((IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_write) 
                & (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_dirty)) 
               & (~ (IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec)));
        if (((IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__page_exec) 
             | (0x00000400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr))) {
            vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_cause = 0x0000000aU;
        }
    }
    if (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode)) 
         & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow))) {
        vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow 
            = (1U & ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio)
                      ? (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps 
                         >> 1U) : vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps));
    }
    __Vtableidx1 = ((((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mode)) 
                      << 5U) | (((IData)(mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__in_mmio) 
                                 << 4U) | ((0x00000400U 
                                            > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
                                           << 3U))) 
                    | ((((0x00000400U <= vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr) 
                         & (0x00001400U > vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr)) 
                        << 2U) | (((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store) 
                                   << 1U) | (IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_load))));
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_allow 
        = Vmycore__ConstPool__TABLE_hd3e3d478_0[__Vtableidx1];
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmio 
        = Vmycore__ConstPool__TABLE_h3e94c13b_0[__Vtableidx1];
    vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_cause 
        = Vmycore__ConstPool__TABLE_h73edb993_0[__Vtableidx1];
    vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant0 = 0U;
    vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant1 = 0U;
    if (((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0) 
         & (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1))) {
        vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant0 
            = vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__last_grant;
        vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant1 
            = (1U & (~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__last_grant)));
    } else if (vlSelfRef.mycore__DOT__soc__DOT__d_req0) {
        vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant0 = 1U;
    } else if (vlSelfRef.mycore__DOT__soc__DOT__d_req1) {
        vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant1 = 1U;
    }
    vlSelfRef.mycore__DOT__soc__DOT__bus_req = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant0) 
                                                | (IData)(vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant1));
    if (vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant0) {
        vlSelfRef.mycore__DOT__soc__DOT__bus_we = ((IData)(mycore__DOT__soc__DOT__cpu0__DOT__active_store) 
                                                   & ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow) 
                                                      & ((~ 
                                                          ((0U 
                                                            == (IData)(mycore__DOT__soc__DOT__d_be0)) 
                                                           | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmio) 
                                                              & (5U 
                                                                 == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state))))) 
                                                         & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_allow))));
        vlSelfRef.mycore__DOT__soc__DOT__bus_addr = vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr;
        vlSelfRef.mycore__DOT__soc__DOT__bus_wdata 
            = (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3))
                 ? ((0U == (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr))
                     ? (0x000000ffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata)
                     : ((1U == (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr))
                         ? (0x0000ff00U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata 
                                           << 8U)) : 
                        ((2U == (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr))
                          ? (0x00ff0000U & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata 
                                            << 0x00000010U))
                          : VL_SHIFTL_III(32,32,32, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata, 0x00000018U))))
                 : ((1U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3))
                     ? ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr)
                         ? VL_SHIFTL_III(32,32,32, vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata, 0x00000010U)
                         : (0x0000ffffU & vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata))
                     : vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata)) 
               & (- (IData)((5U != (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__state)))));
        vlSelfRef.mycore__DOT__soc__DOT__bus_be = mycore__DOT__soc__DOT__d_be0;
        vlSelfRef.mycore__DOT__soc__DOT__d_ready0 = 1U;
    } else {
        vlSelfRef.mycore__DOT__soc__DOT__bus_we = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__active_store) 
                                                   & ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow) 
                                                      & ((~ 
                                                          ((0U 
                                                            == (IData)(mycore__DOT__soc__DOT__d_be1)) 
                                                           | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmio) 
                                                              & (5U 
                                                                 == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state))))) 
                                                         & (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_allow))));
        vlSelfRef.mycore__DOT__soc__DOT__bus_addr = vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr;
        vlSelfRef.mycore__DOT__soc__DOT__bus_wdata 
            = (((0U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3))
                 ? ((0U == (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr))
                     ? (0x000000ffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata)
                     : ((1U == (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr))
                         ? (0x0000ff00U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata 
                                           << 8U)) : 
                        ((2U == (3U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr))
                          ? (0x00ff0000U & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata 
                                            << 0x00000010U))
                          : VL_SHIFTL_III(32,32,32, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata, 0x00000018U))))
                 : ((1U == (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3))
                     ? ((2U & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr)
                         ? VL_SHIFTL_III(32,32,32, vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata, 0x00000010U)
                         : (0x0000ffffU & vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata))
                     : vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata)) 
               & (- (IData)((5U != (IData)(vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__state)))));
        vlSelfRef.mycore__DOT__soc__DOT__bus_be = mycore__DOT__soc__DOT__d_be1;
        vlSelfRef.mycore__DOT__soc__DOT__d_ready0 = 0U;
    }
    vlSelfRef.mycore__DOT__soc__DOT__d_ready1 = vlSelfRef.mycore__DOT__soc__DOT__smp_bus__DOT__grant1;
    vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__l1d0__access 
        = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_ready0) 
           & (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req0));
    vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__l1d1__access 
        = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_ready1) 
           & (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_req1));
    vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__assertions__d_we 
        = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_req) 
           & (IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_we));
    vlSelfRef.mycore__DOT__soc__DOT__d_in_range = (
                                                   (0x00000400U 
                                                    <= vlSelfRef.mycore__DOT__soc__DOT__bus_addr) 
                                                   & (0x00001400U 
                                                      > vlSelfRef.mycore__DOT__soc__DOT__bus_addr));
    vlSelfRef.mycore__DOT__soc__DOT__l2_hit = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_req) 
                                               & (vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__valid
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                                      >> 2U))] 
                                                  & ((vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                                      >> 7U) 
                                                     == vlSelfRef.mycore__DOT__soc__DOT__l2__DOT__tag
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                                         >> 2U))])));
    vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__same_line 
        = (vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__valid
           [(0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                            >> 2U))] & ((vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                         >> 0x0000000cU) 
                                        == vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__line_tag
                                        [(0x0000001fU 
                                          & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                             >> 2U))]));
    vlSelfRef.mycore__DOT__soc__DOT__d_is_mmio = ((0xffff0000U 
                                                   <= vlSelfRef.mycore__DOT__soc__DOT__bus_addr) 
                                                  & (0xffff0100U 
                                                     > vlSelfRef.mycore__DOT__soc__DOT__bus_addr));
    __Vtableidx3 = (((IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_ipc_depth) 
                     << 4U) | (0x0000000fU & vlSelfRef.mycore__DOT__soc__DOT__bus_addr));
    vlSelfRef.mycore__DOT__soc__DOT__kernel_allow = Vmycore__ConstPool__TABLE_h6a41084a_0
        [__Vtableidx3];
    vlSelfRef.mycore__DOT__soc__DOT__l1_hit0 = ((IData)(vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__l1d0__access) 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__valid
                                                   [
                                                   (0x0000000fU 
                                                    & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                                       >> 2U))] 
                                                   & ((vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                                       >> 6U) 
                                                      == vlSelfRef.mycore__DOT__soc__DOT__l1d0__DOT__tag
                                                      [
                                                      (0x0000000fU 
                                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                                          >> 2U))])));
    vlSelfRef.mycore__DOT__soc__DOT__l1_hit1 = ((IData)(vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__l1d1__access) 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__valid
                                                   [
                                                   (0x0000000fU 
                                                    & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                                       >> 2U))] 
                                                   & ((vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                                       >> 6U) 
                                                      == vlSelfRef.mycore__DOT__soc__DOT__l1d1__DOT__tag
                                                      [
                                                      (0x0000000fU 
                                                       & (vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                                          >> 2U))])));
    vlSelfRef.mycore__DOT__soc__DOT__coh_invalidate 
        = ((IData)(vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__assertions__d_we) 
           & ((IData)(vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__same_line) 
              & (vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__modified
                 [(0x0000001fU & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                  >> 2U))] & ((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_ready1) 
                                              != vlSelfRef.mycore__DOT__soc__DOT__coherence__DOT__owner
                                              [(0x0000001fU 
                                                & (vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                                   >> 2U))]))));
    vlSelfRef.mycore__DOT__soc__DOT__bus_rdata = ((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_in_range)
                                                   ? vlSelfRef.mycore__DOT__soc__DOT__dmem
                                                  [
                                                  (0x000003ffU 
                                                   & ((vlSelfRef.mycore__DOT__soc__DOT__bus_addr 
                                                       - (IData)(0x00000400U)) 
                                                      >> 2U))]
                                                   : 
                                                  ((IData)(vlSelfRef.mycore__DOT__soc__DOT__d_is_mmio)
                                                    ? 
                                                   (((((((((0U 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSelfRef.mycore__DOT__soc__DOT__bus_addr)) 
                                                           | (4U 
                                                              == 
                                                              (0x000000ffU 
                                                               & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))) 
                                                          | (8U 
                                                             == 
                                                             (0x000000ffU 
                                                              & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))) 
                                                         | (0x0cU 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))) 
                                                        | (0x10U 
                                                           == 
                                                           (0x000000ffU 
                                                            & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))) 
                                                       | (0x14U 
                                                          == 
                                                          (0x000000ffU 
                                                           & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))) 
                                                      | (0x18U 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))) 
                                                     | (0x1cU 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.mycore__DOT__soc__DOT__bus_addr)))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x000000ffU 
                                                       & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))
                                                      ? vlSelfRef.mycore__DOT__soc__DOT__mmio_out
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))
                                                       ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__pc
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))
                                                        ? vlSelfRef.mycore__DOT__soc__DOT__cpu0__DOT__csr_scause
                                                        : 
                                                       ((0x0cU 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))
                                                         ? vlSelfRef.mycore__DOT__soc__DOT__entropy_lfsr
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x000000ffU 
                                                           & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))
                                                          ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__pc
                                                          : 
                                                         ((0x14U 
                                                           == 
                                                           (0x000000ffU 
                                                            & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))
                                                           ? vlSelfRef.mycore__DOT__soc__DOT__cpu1__DOT__csr_scause
                                                           : 
                                                          ((0x18U 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))
                                                            ? vlSelfRef.mycore__DOT__soc__DOT__boot_status
                                                            : 
                                                           (((IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_fault) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_allow)))))))))
                                                     : 0U)
                                                    : 0U));
    vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__kernel_model__syscall_valid 
        = (((IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_req) 
            & (0x00000020U == (0x000000f0U & vlSelfRef.mycore__DOT__soc__DOT__bus_addr))) 
           & (IData)(vlSelfRef.mycore__DOT__soc__DOT__d_is_mmio));
    vlSelfRef.mycore__DOT__soc__DOT__kernel_policy_fault 
        = ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_allow)) 
           & (IData)(vlSelfRef.mycore__DOT__soc__DOT____Vcellinp__kernel_model__syscall_valid));
    vlSelfRef.mycore__DOT__soc__DOT__trace_event = 
        ((IData)(vlSelfRef.mycore__DOT__soc__DOT__bus_req) 
         | ((0x03ffU == (0x000003ffU & (IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_tick))) 
            | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap0) 
               | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap1) 
                  | (IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_policy_fault)))));
    vlSelfRef.mycore__DOT__debug_trap = (1U & ((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap0) 
                                               | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__debug_trap1) 
                                                  | ((IData)(vlSelfRef.mycore__DOT__soc__DOT__dma_fault) 
                                                     | ((~ (IData)(vlSelfRef.mycore__DOT__soc__DOT__boot_ok)) 
                                                        | (IData)(vlSelfRef.mycore__DOT__soc__DOT__kernel_policy_fault))))));
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
}

void Vmycore___024root___nba_sequent__TOP__0(Vmycore___024root* vlSelf);

void Vmycore___024root___eval_nba(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_nba\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmycore___024root___nba_sequent__TOP__0(vlSelf);
        Vmycore___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vmycore___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vmycore___024root___eval_triggers_vec__act(Vmycore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycore___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmycore___024root___eval_phase__act(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_phase__act\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmycore___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmycore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmycore___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vmycore___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmycore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vmycore___024root___eval_phase__nba(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_phase__nba\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmycore___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmycore___024root___eval_nba(vlSelf);
        Vmycore___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycore___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmycore___024root___eval_phase__ico(Vmycore___024root* vlSelf);

void Vmycore___024root___eval(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmycore___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl\\mycore.v", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vmycore___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmycore___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl\\mycore.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmycore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl\\mycore.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vmycore___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmycore___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmycore___024root___eval_debug_assertions(Vmycore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycore___024root___eval_debug_assertions\n"); );
    Vmycore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.pal & 0xfeU)))) {
        Verilated::overWidthError("pal");
    }
    if (VL_UNLIKELY(((vlSelfRef.scandouble & 0xfeU)))) {
        Verilated::overWidthError("scandouble");
    }
    if (VL_UNLIKELY(((vlSelfRef.bootrom_wr & 0xfeU)))) {
        Verilated::overWidthError("bootrom_wr");
    }
    if (VL_UNLIKELY(((vlSelfRef.bootrom_addr & 0xfffe0000U)))) {
        Verilated::overWidthError("bootrom_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.bootrom_loaded & 0xfeU)))) {
        Verilated::overWidthError("bootrom_loaded");
    }
}
#endif  // VL_DEBUG
