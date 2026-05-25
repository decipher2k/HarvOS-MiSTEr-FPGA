// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VHARVOS_SOC_H_
#define VERILATED_VHARVOS_SOC_H_  // guard

#include "verilated.h"

class Vharvos_soc__Syms;
class Vharvos_soc___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vharvos_soc VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vharvos_soc__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&debug_trap,0,0);
    VL_IN8(&usb_dp_i,0,0);
    VL_IN8(&usb_dm_i,0,0);
    VL_OUT8(&usb_dp_drive_low,0,0);
    VL_OUT8(&usb_dm_drive_low,0,0);
    VL_OUT8(&usb_port_power_en,0,0);
    VL_IN8(&usb_port_overcurrent_n,0,0);
    VL_OUT8(&utmi_data_o,7,0);
    VL_IN8(&utmi_data_i,7,0);
    VL_OUT8(&utmi_tx_valid,0,0);
    VL_IN8(&utmi_tx_ready,0,0);
    VL_IN8(&utmi_rx_valid,0,0);
    VL_IN8(&utmi_rx_active,0,0);
    VL_IN8(&utmi_rx_error,0,0);
    VL_IN8(&utmi_line_state,1,0);
    VL_OUT8(&utmi_xcvr_select,1,0);
    VL_OUT8(&utmi_op_mode,1,0);
    VL_OUT8(&utmi_term_select,0,0);
    VL_OUT8(&utmi_suspend_n,0,0);
    VL_OUT8(&utmi_reset_n,0,0);
    VL_IN8(&net_link_up,0,0);
    VL_IN8(&net_rx_valid,0,0);
    VL_IN8(&net_rx_last,0,0);
    VL_IN8(&net_rx_error,0,0);
    VL_OUT8(&net_rx_ready,0,0);
    VL_OUT8(&net_tx_valid,0,0);
    VL_OUT8(&net_tx_last,0,0);
    VL_IN8(&net_tx_ready,0,0);
    VL_IN8(&hps_img_mounted,1,0);
    VL_IN8(&hps_img_readonly,0,0);
    VL_OUT8(&hps_sd_rd,1,0);
    VL_OUT8(&hps_sd_wr,1,0);
    VL_IN8(&hps_sd_ack,1,0);
    VL_IN8(&hps_sd_buff_wr,0,0);
    VL_IN16(&hps_sd_buff_addr,12,0);
    VL_IN16(&hps_sd_buff_dout,15,0);
    VL_OUT(&debug_pc,31,0);
    VL_OUT(&debug_instr,31,0);
    VL_OUT(&debug_scause,31,0);
    VL_OUT(&debug_stval,31,0);
    VL_OUT(&debug_state,31,0);
    VL_OUT(&debug_kernel_status,31,0);
    VL_OUT(&debug_hps_boot_word,31,0);
    VL_OUT(&debug_net_boot_word,31,0);
    VL_OUT(&debug_word0,31,0);
    VL_OUT(&debug_word1,31,0);
    VL_OUT(&debug_word2,31,0);
    VL_OUT(&debug_entropy,31,0);
    VL_IN(&net_rx_word,31,0);
    VL_OUT(&net_tx_word,31,0);
    VL_IN64(&hps_img_size,63,0);
    VlUnpacked<IData/*31:0*/, 2> &hps_sd_lba;
    VlUnpacked<CData/*5:0*/, 2> &hps_sd_blk_cnt;
    VlUnpacked<SData/*15:0*/, 2> &hps_sd_buff_din;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vharvos_soc___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vharvos_soc(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vharvos_soc(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vharvos_soc();
  private:
    VL_UNCOPYABLE(Vharvos_soc);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
