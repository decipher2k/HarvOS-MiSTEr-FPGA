
// HarvOS MiSTer wrapper top
// This module adapts the HarvOS SoC ('top_soc') to a minimal MiSTer-friendly wrapper.
// It does NOT modify any original HarvOS RTL. It only wires clocks/resets and exposes debug.

`timescale 1ns/1ps
module harvos_mister_top
(
    input  wire clk_sys,
    input  wire reset_n,

    // Optional DDR/SDRAM DMA master (currently tied off; can be mapped later)
    // Exposed to allow future bridge to MiSTer DDR services.
    output wire        dma_req,
    output wire        dma_we,
    output wire [3:0]  dma_be,
    output wire [31:0] dma_addr,
    output wire [31:0] dma_wdata,
    input  wire [31:0] dma_rdata,
    input  wire        dma_done,
    input  wire        dma_fault,

    // Simple status taps for LEDs/OSD
    output wire [31:0] dbg_pc_iaddr,
    output wire [31:0] dbg_d_addr,
    output wire        dbg_trap,
    // HID/NIC sideband from MiSTer
    input  wire [10:0] ps2_key,
    input  wire [24:0] ps2_mouse,
    input  wire [15:0] ps2_mouse_ext,
    // NIC FIFOs bridged via HPS
    input  wire  [7:0] nic_rx_count,
    input  wire        nic_rx_valid,
    input  wire  [7:0] nic_rx_data,
    output wire        nic_rx_pop,
    input  wire  [7:0] nic_tx_count,
    output wire        nic_tx_push,
    output wire  [7:0] nic_tx_data
);

    // HarvOS DMA interface wire-up (kept for future)
    harvos_dmem_if dma_if();
    assign dma_req   = dma_if.req;
    assign dma_we    = dma_if.we;
    assign dma_be    = dma_if.be;
    assign dma_addr  = dma_if.addr;
    assign dma_wdata = dma_if.wdata;
    assign dma_if.rdata = dma_rdata;
    assign dma_if.done  = dma_done;
    assign dma_if.fault = dma_fault;
    // Default tie-offs for NIC outputs when top_soc has no NIC interface
    assign nic_rx_pop = 1'b0;
    assign nic_tx_push = 1'b0;
    assign nic_tx_data = 8'h00;
    

    // Instantiate the unmodified HarvOS top
    top_soc u_soc (
        .clk  (clk_sys),
        .rst_n(reset_n),

        // debug exposure
        .dbg_ic_addr      (dbg_pc_iaddr),
        .dbg_ic_req       (/*unused*/),
        .dbg_i_addr_arb   (/*unused*/),
        .dbg_i_req_arb    (/*unused*/),
        .dbg_imem_rdata   (/*unused*/),
        .dbg_imem_rvalid  (/*unused*/),
        .dbg_imem_fault   (/*unused*/),
        .dbg_dc_addr      (dbg_d_addr),
        .dbg_dc_req       (/*unused*/),
        .dbg_dmem_rdata   (/*unused*/),
        .dbg_dmem_done    (/*unused*/),
        .dbg_dmem_fault   (dbg_trap),

        .dbg_m_addr       (/*unused*/),
        .dbg_m_req        (/*unused*/),
        .dbg_m_rdata      (/*unused*/),
        .dbg_m_rvalid     (/*unused*/),
        .dbg_m_fault      (/*unused*/),
        .dbg_dmem_wdata   (/*unused*/),
        .dbg_dmem_be      (/*unused*/),
        .dbg_dmem_we      (/*unused*/),

        .dma(dma_if),
    );

endmodule
