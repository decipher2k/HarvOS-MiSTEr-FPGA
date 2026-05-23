// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycore.h for the primary calling header

#ifndef VERILATED_VMYCORE___024ROOT_H_
#define VERILATED_VMYCORE___024ROOT_H_  // guard

#include "verilated.h"


class Vmycore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmycore___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(pal,0,0);
        VL_IN8(scandouble,0,0);
        VL_IN8(bootrom_wr,0,0);
        VL_IN8(bootrom_loaded,0,0);
        VL_OUT8(ce_pix,0,0);
        VL_OUT8(HBlank,0,0);
        VL_OUT8(HSync,0,0);
        VL_OUT8(VBlank,0,0);
        VL_OUT8(VSync,0,0);
        VL_OUT8(video_r,7,0);
        VL_OUT8(video_g,7,0);
        VL_OUT8(video_b,7,0);
        CData/*0:0*/ mycore__DOT__debug_trap;
        CData/*0:0*/ mycore__DOT__soc__DOT__boot_ok;
        CData/*0:0*/ mycore__DOT__soc__DOT__boot_mpu_lock;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu_reset;
        CData/*0:0*/ mycore__DOT__soc__DOT__d_req0;
        CData/*0:0*/ mycore__DOT__soc__DOT__d_ready0;
        CData/*0:0*/ mycore__DOT__soc__DOT__d_req1;
        CData/*0:0*/ mycore__DOT__soc__DOT__d_ready1;
        CData/*0:0*/ mycore__DOT__soc__DOT__bus_req;
        CData/*0:0*/ mycore__DOT__soc__DOT__bus_we;
        CData/*3:0*/ mycore__DOT__soc__DOT__bus_be;
        CData/*0:0*/ mycore__DOT__soc__DOT__debug_trap0;
        CData/*0:0*/ mycore__DOT__soc__DOT__debug_trap1;
        CData/*0:0*/ mycore__DOT__soc__DOT__dma_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__dma_fault;
        CData/*0:0*/ mycore__DOT__soc__DOT__l1_hit0;
        CData/*0:0*/ mycore__DOT__soc__DOT__l1_hit1;
        CData/*0:0*/ mycore__DOT__soc__DOT__l2_hit;
        CData/*0:0*/ mycore__DOT__soc__DOT__coh_invalidate;
        CData/*1:0*/ mycore__DOT__soc__DOT__kernel_task;
        CData/*0:0*/ mycore__DOT__soc__DOT__kernel_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__kernel_policy_fault;
        CData/*3:0*/ mycore__DOT__soc__DOT__kernel_ipc_depth;
        CData/*0:0*/ mycore__DOT__soc__DOT__trace_event;
        CData/*0:0*/ mycore__DOT__soc__DOT__d_in_range;
        CData/*0:0*/ mycore__DOT__soc__DOT__d_is_mmio;
        CData/*0:0*/ mycore__DOT__soc__DOT____Vcellinp__l1d0__access;
        CData/*0:0*/ mycore__DOT__soc__DOT____Vcellinp__l1d1__access;
        CData/*0:0*/ mycore__DOT__soc__DOT____Vcellinp__kernel_model__syscall_valid;
        CData/*0:0*/ mycore__DOT__soc__DOT____Vcellinp__assertions__d_we;
        CData/*1:0*/ mycore__DOT__soc__DOT__secure_boot__DOT__state;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_8__csr_implemented;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_7__memory_misaligned;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_6__store_supported;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_5__memory_misaligned;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT____VlemCall_4__load_supported;
        CData/*2:0*/ mycore__DOT__soc__DOT__cpu0__DOT__state;
        CData/*1:0*/ mycore__DOT__soc__DOT__cpu0__DOT__mode;
        CData/*4:0*/ mycore__DOT__soc__DOT__cpu0__DOT__rs1_q;
        CData/*4:0*/ mycore__DOT__soc__DOT__cpu0__DOT__rd_q;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__wb_en;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__mem_load;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__mem_store;
        CData/*2:0*/ mycore__DOT__soc__DOT__cpu0__DOT__mem_funct3;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__tlb_flush;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_tlb_hit;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_wx_fault;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_allow;
    };
    struct {
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmio;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_tlb_hit;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_wx_fault;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram;
        CData/*7:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_flags;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit;
        CData/*7:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid;
        CData/*4:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit;
        CData/*7:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid;
        CData/*5:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_8__csr_implemented;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_7__memory_misaligned;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_6__store_supported;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_5__memory_misaligned;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT____VlemCall_4__load_supported;
        CData/*2:0*/ mycore__DOT__soc__DOT__cpu1__DOT__state;
        CData/*1:0*/ mycore__DOT__soc__DOT__cpu1__DOT__mode;
        CData/*4:0*/ mycore__DOT__soc__DOT__cpu1__DOT__rs1_q;
        CData/*4:0*/ mycore__DOT__soc__DOT__cpu1__DOT__rd_q;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__wb_en;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__mem_load;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__mem_store;
        CData/*2:0*/ mycore__DOT__soc__DOT__cpu1__DOT__mem_funct3;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__tlb_flush;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_tlb_hit;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_wx_fault;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__active_load;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__active_store;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmio;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_allow;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_tlb_hit;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_wx_fault;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram;
        CData/*7:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_flags;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit;
        CData/*7:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid;
        CData/*4:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit;
        CData/*7:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags;
        CData/*0:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid;
        CData/*5:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
        CData/*0:0*/ mycore__DOT__soc__DOT__smp_bus__DOT__last_grant;
        CData/*0:0*/ mycore__DOT__soc__DOT__smp_bus__DOT__grant0;
        CData/*0:0*/ mycore__DOT__soc__DOT__smp_bus__DOT__grant1;
        CData/*0:0*/ mycore__DOT__soc__DOT__coherence__DOT__same_line;
        CData/*0:0*/ mycore__DOT__video__DOT__boot_draw_q;
        CData/*0:0*/ mycore__DOT__video__DOT__active;
        CData/*0:0*/ mycore__DOT__video__DOT__boot_draw;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactPhaseResult;
    };
    struct {
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(bootrom_data,15,0);
        SData/*15:0*/ mycore__DOT__soc__DOT__dma_tick;
        SData/*15:0*/ mycore__DOT__soc__DOT__trace_count;
        SData/*15:0*/ mycore__DOT__soc__DOT__l1d0__DOT__hit_count;
        SData/*15:0*/ mycore__DOT__soc__DOT__l1d0__DOT__miss_count;
        SData/*15:0*/ mycore__DOT__soc__DOT__l1d1__DOT__hit_count;
        SData/*15:0*/ mycore__DOT__soc__DOT__l1d1__DOT__miss_count;
        SData/*15:0*/ mycore__DOT__soc__DOT__l2__DOT__hits;
        SData/*15:0*/ mycore__DOT__soc__DOT__l2__DOT__misses;
        SData/*15:0*/ mycore__DOT__soc__DOT__coherence__DOT__invalidations;
        SData/*15:0*/ mycore__DOT__soc__DOT__coherence__DOT__shared_reads;
        SData/*9:0*/ mycore__DOT__video__DOT__hc;
        SData/*9:0*/ mycore__DOT__video__DOT__vc;
        SData/*15:0*/ mycore__DOT__video__DOT__boot_pixel;
        VL_IN(bootrom_addr,16,0);
        IData/*31:0*/ mycore__DOT__debug_scause;
        IData/*31:0*/ mycore__DOT__soc__DOT____VlemCall_35__apply_wstrb;
        IData/*31:0*/ mycore__DOT__soc__DOT__boot_status;
        IData/*31:0*/ mycore__DOT__soc__DOT__bus_addr;
        IData/*31:0*/ mycore__DOT__soc__DOT__bus_wdata;
        IData/*31:0*/ mycore__DOT__soc__DOT__bus_rdata;
        IData/*31:0*/ mycore__DOT__soc__DOT__entropy_lfsr;
        IData/*31:0*/ mycore__DOT__soc__DOT__mmio_out;
        IData/*31:0*/ mycore__DOT__soc__DOT__dma_addr;
        IData/*31:0*/ mycore__DOT__soc__DOT__trace_digest;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__pc;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__instr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__rs1_val;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__rs2_val;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__wb_data;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__next_pc;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__mem_addr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__mem_wdata;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__clr_addr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__clr_count;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_sstatus;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_stvec;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_sepc;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_scause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_stval;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_satp;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_srandom;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_smpuctl;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__csr_scaps;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__imm_i;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__imm_u;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__target;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_paddr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__pc;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__instr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__rs1_val;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__rs2_val;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__wb_data;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__next_pc;
    };
    struct {
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__mem_addr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__mem_wdata;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__clr_addr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__clr_count;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_sstatus;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_stvec;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_sepc;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_scause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_stval;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_satp;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_srandom;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_smpuctl;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__csr_scaps;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__imm_i;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__imm_u;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__target;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_paddr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_cause;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr;
        IData/*31:0*/ mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr;
        IData/*31:0*/ mycore__DOT__video__DOT__frame_ctr;
        IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        IData/*19:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        IData/*19:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 256> mycore__DOT__soc__DOT__imem;
        VlUnpacked<IData/*31:0*/, 1024> mycore__DOT__soc__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 32> mycore__DOT__soc__DOT__cpu0__DOT__regs;
        VlUnpacked<CData/*0:0*/, 32> mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid;
        VlUnpacked<IData/*19:0*/, 32> mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn;
        VlUnpacked<IData/*19:0*/, 32> mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn;
        VlUnpacked<CData/*7:0*/, 32> mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid;
        VlUnpacked<CData/*7:0*/, 32> mycore__DOT__soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags;
        VlUnpacked<CData/*0:0*/, 64> mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid;
        VlUnpacked<IData/*19:0*/, 64> mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn;
        VlUnpacked<IData/*19:0*/, 64> mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn;
        VlUnpacked<CData/*7:0*/, 64> mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid;
        VlUnpacked<CData/*7:0*/, 64> mycore__DOT__soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags;
        VlUnpacked<IData/*31:0*/, 32> mycore__DOT__soc__DOT__cpu1__DOT__regs;
        VlUnpacked<CData/*0:0*/, 32> mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid;
        VlUnpacked<IData/*19:0*/, 32> mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn;
        VlUnpacked<IData/*19:0*/, 32> mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn;
        VlUnpacked<CData/*7:0*/, 32> mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid;
        VlUnpacked<CData/*7:0*/, 32> mycore__DOT__soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags;
        VlUnpacked<CData/*0:0*/, 64> mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid;
        VlUnpacked<IData/*19:0*/, 64> mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn;
        VlUnpacked<IData/*19:0*/, 64> mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn;
        VlUnpacked<CData/*7:0*/, 64> mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid;
        VlUnpacked<CData/*7:0*/, 64> mycore__DOT__soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags;
        VlUnpacked<CData/*0:0*/, 16> mycore__DOT__soc__DOT__l1d0__DOT__valid;
        VlUnpacked<IData/*25:0*/, 16> mycore__DOT__soc__DOT__l1d0__DOT__tag;
        VlUnpacked<CData/*0:0*/, 16> mycore__DOT__soc__DOT__l1d1__DOT__valid;
        VlUnpacked<IData/*25:0*/, 16> mycore__DOT__soc__DOT__l1d1__DOT__tag;
        VlUnpacked<CData/*0:0*/, 32> mycore__DOT__soc__DOT__l2__DOT__valid;
        VlUnpacked<IData/*24:0*/, 32> mycore__DOT__soc__DOT__l2__DOT__tag;
        VlUnpacked<CData/*0:0*/, 32> mycore__DOT__soc__DOT__coherence__DOT__valid;
        VlUnpacked<CData/*0:0*/, 32> mycore__DOT__soc__DOT__coherence__DOT__owner;
        VlUnpacked<CData/*0:0*/, 32> mycore__DOT__soc__DOT__coherence__DOT__modified;
    };
    struct {
        VlUnpacked<IData/*19:0*/, 32> mycore__DOT__soc__DOT__coherence__DOT__line_tag;
        VlUnpacked<SData/*15:0*/, 131072> mycore__DOT__video__DOT__boot_image__DOT__ram;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vmycore__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmycore___024root(Vmycore__Syms* symsp, const char* namep);
    ~Vmycore___024root();
    VL_UNCOPYABLE(Vmycore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
