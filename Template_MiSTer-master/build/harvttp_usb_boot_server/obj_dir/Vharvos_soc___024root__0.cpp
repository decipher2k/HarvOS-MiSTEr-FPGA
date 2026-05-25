// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vharvos_soc.h for the primary calling header

#include "Vharvos_soc__pch.h"

void Vharvos_soc___024root___eval_triggers_vec__ico(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_triggers_vec__ico\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vharvos_soc___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___trigger_anySet__ico\n"); );
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

extern const VlUnpacked<CData/*7:0*/, 128> Vharvos_soc__ConstPool__TABLE_h3fb9de17_0;

void Vharvos_soc___024root___ico_sequent__TOP__0(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___ico_sequent__TOP__0\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ harvos_soc__DOT__hps_block_mmio_rdata;
    harvos_soc__DOT__hps_block_mmio_rdata = 0;
    CData/*0:0*/ harvos_soc__DOT__usb_host__DOT__utmi_link_connected;
    harvos_soc__DOT__usb_host__DOT__utmi_link_connected = 0;
    CData/*0:0*/ harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_line_j;
    harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_line_j = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    // Body
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_data 
        = ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
            ? (IData)(vlSelfRef.utmi_data_i) : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_data));
    vlSelfRef.hps_sd_buff_din[0U] = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
        [vlSelfRef.hps_sd_buff_addr];
    vlSelfRef.hps_sd_buff_din[1U] = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
        [vlSelfRef.hps_sd_buff_addr];
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
    vlSelfRef.harvos_soc__DOT__cpu_reset = (1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__boot_ok)) 
                                                  | (IData)(vlSelfRef.reset)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__line_state 
        = (((IData)(vlSelfRef.usb_dp_i) << 1U) | (IData)(vlSelfRef.usb_dm_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.usb_port_overcurrent_n) 
                                                & (0x00000018U 
                                                   == 
                                                   (0x00000018U 
                                                    & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__port_overcurrent 
        = ((~ (IData)(vlSelfRef.usb_port_overcurrent_n)) 
           & (IData)(vlSelfRef.utmi_term_select));
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
    vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up 
        = (1U & ((IData)(vlSelfRef.net_link_up) | (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                                                   >> 4U)));
    vlSelfRef.usb_port_power_en = ((IData)(vlSelfRef.usb_port_overcurrent_n) 
                                   & (IData)(vlSelfRef.utmi_term_select));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ready 
        = ((IData)(vlSelfRef.net_tx_ready) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode));
    vlSelfRef.utmi_reset_n = (1U & (~ ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                                        >> 5U) | (IData)(vlSelfRef.harvos_soc__DOT__cpu_reset))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__packet_engine__reset 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
            & ((vlSelfRef.harvos_soc__DOT__bus_wdata 
                >> 2U) & (4U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)))) 
           | (IData)(vlSelfRef.harvos_soc__DOT__cpu_reset));
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
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_ready 
        = (1U & ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                  >> 1U) | ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                             ? ((IData)(vlSelfRef.utmi_tx_ready) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))
                             : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_tx_ready))));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_rx_active 
        = ((~ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
               >> 1U)) & ((0x00000010U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)
                           ? ((IData)(vlSelfRef.utmi_rx_active) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))
                           : (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                                                & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up));
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
    vlSelfRef.net_rx_ready = ((~ ((0x1000U <= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count)) 
                                  | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_valid 
        = ((vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
            >> 6U) & ((~ ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
                          | (0U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count)))) 
                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
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
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
           & ((IData)(vlSelfRef.net_rx_valid) & (IData)(vlSelfRef.net_rx_ready)));
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_transfer 
        = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_cmd) 
           & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
              & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected) 
                 & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy)) 
                    & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__port_overcurrent)) 
                       & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_request_ok))))));
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
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push_last 
        = ((IData)(vlSelfRef.net_rx_last) & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push));
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
    vlSelfRef.harvos_soc__DOT__net_dma_allow = ((IData)(vlSelfRef.harvos_soc__DOT__dma_allow) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_9));
    vlSelfRef.debug_trap = (1U & ((IData)(vlSelfRef.harvos_soc__DOT__debug_trap0) 
                                  | ((IData)(vlSelfRef.harvos_soc__DOT__debug_trap1) 
                                     | ((IData)(vlSelfRef.harvos_soc__DOT__dma_fault) 
                                        | ((~ (IData)(vlSelfRef.harvos_soc__DOT__boot_ok)) 
                                           | (IData)(vlSelfRef.harvos_soc__DOT__kernel_policy_fault))))));
    vlSelfRef.harvos_soc__DOT__net_dma_fault = ((IData)(vlSelfRef.harvos_soc__DOT__dma_fault) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_9));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_dma_fault)) 
                                                 & (IData)(vlSelfRef.harvos_soc__DOT__net_dma_allow));
    if ((0x00000040U & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl)) {
        vlSelfRef.net_tx_word = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_data
            [(((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_head) 
               << 9U) | (0x000001ffU & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_word)))];
        vlSelfRef.net_tx_valid = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_valid;
    } else {
        vlSelfRef.net_tx_word = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)
                                  ? vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data
                                 [(0x000001ffU & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word))]
                                  : vlSelfRef.harvos_soc__DOT__dma_rdata);
        vlSelfRef.net_tx_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                  & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)) 
                                     & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)
                                         ? ((3U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))
                                         : ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__active) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))));
    }
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop 
        = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step) 
           & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op) 
              & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))));
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop_last 
        = (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_last
           [vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd] 
           & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop));
}

void Vharvos_soc___024root___eval_ico(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_ico\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vharvos_soc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vharvos_soc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vharvos_soc___024root___eval_phase__ico(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_phase__ico\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vharvos_soc___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vharvos_soc___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vharvos_soc___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vharvos_soc___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vharvos_soc___024root___eval_triggers_vec__act(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___eval_triggers_vec__act\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vharvos_soc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___trigger_anySet__act\n"); );
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

void Vharvos_soc___024root___nba_sequent__TOP__0(Vharvos_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vharvos_soc___024root___nba_sequent__TOP__0\n"); );
    Vharvos_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<SData/*15:0*/, 8> harvos_soc__DOT__net_card__DOT__tx_desc_len;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        harvos_soc__DOT__net_card__DOT__tx_desc_len[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__apply_wstrb__110__old_word;
    __Vfunc_harvos_soc__DOT__apply_wstrb__110__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__apply_wstrb__110__new_word;
    __Vfunc_harvos_soc__DOT__apply_wstrb__110__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__apply_wstrb__110__be;
    __Vfunc_harvos_soc__DOT__apply_wstrb__110__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout;
    __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__apply_wstrb__111__old_word;
    __Vfunc_harvos_soc__DOT__apply_wstrb__111__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__apply_wstrb__111__new_word;
    __Vfunc_harvos_soc__DOT__apply_wstrb__111__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__apply_wstrb__111__be;
    __Vfunc_harvos_soc__DOT__apply_wstrb__111__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__old_word;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__new_word;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__be;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__old_word;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__new_word;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__be;
    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__old_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__new_word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__base;
    __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__base = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__len;
    __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__len = 0;
    QData/*32:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_start;
    __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_start = 0;
    QData/*32:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_end;
    __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_end = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__124__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__124__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__125__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__125__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__126__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__126__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__127__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__127__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__128__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__128__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__129__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__129__word = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__sum;
    __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__sum = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__folded;
    __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__folded = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__sum;
    __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__sum = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__folded;
    __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__folded = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__base;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__base = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__word = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__total_len;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__total_len = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132____VlefCall_0__word_half_be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132____VlefCall_0__word_half_be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__frame_end;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__frame_end = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__byte_index;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__byte_index = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__valid_end;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__valid_end = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1 = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCall_0__word_byte;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCall_0__word_byte = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__hi;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__hi = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__lo;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__lo = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__word = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__base;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__base = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__word = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136____VlefCall_0__word_half_be;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136____VlefCall_0__word_half_be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off;
    __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCond_1;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCond_1 = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCall_0__word_byte;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCall_0__word_byte = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__hi;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__hi = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__lo;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__lo = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__word = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__Vfuncout;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__word;
    __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__old_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__new_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__be;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__old_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__new_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__be;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__old_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__new_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__be;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__old_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__new_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__be;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__old_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__new_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__be;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__old_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__new_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__be;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__old_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__new_word;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__be;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__be = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__152__timer;
    __Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__152__timer = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__156__next_level;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__156__next_level = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__157__level;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__157__level = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__data_bit;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__data_bit = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__next_level;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__next_level = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__161__level;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__161__level = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__data_bit;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__data_bit = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__next_level;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__next_level = 0;
    CData/*0:0*/ __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__165__level;
    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__165__level = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__old_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__new_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__be;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__old_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__new_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__be;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__old_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__new_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__be;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__old_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__new_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__be;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__be = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__old_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__old_word = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__new_word;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__new_word = 0;
    CData/*3:0*/ __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__be;
    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__be = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__198__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__198__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__199__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__199__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__cause;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__tval = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__Vfuncout;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3 = 0;
    CData/*1:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__addr;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__byte_value;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__byte_value = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__half_value;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__half_value = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__cause;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__cause;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__204__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__204__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__205__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__205__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__207__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__207__tval = 0;
    SData/*11:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__209__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__209__tval = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__Vfuncout;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr = 0;
    SData/*11:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr;
    __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value;
    __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__212__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__212__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__213__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__213__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__214__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__214__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__215__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__215__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__216__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__216__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__217__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__217__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__218__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__218__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__219__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__219__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__220__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__220__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__221__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__221__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__222__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__222__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__223__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__223__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__224__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__224__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__225__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__225__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__226__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__226__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__227__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__227__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__228__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__228__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__229__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__229__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__230__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__230__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__231__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__231__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__232__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__232__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__233__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__233__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__234__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__234__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__235__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__235__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__236__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__236__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__237__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__237__tval = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__store_supported__238__f3;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__store_supported__238__f3 = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3 = 0;
    CData/*1:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__addr;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__240__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__240__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__241__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__241__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__242__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__242__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__243__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__243__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__244__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__244__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__245__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__245__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__246__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__246__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__247__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__247__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__248__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__248__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__249__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__249__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__250__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__250__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__251__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__251__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__252__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__252__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__253__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__253__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__254__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__254__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__255__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__255__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__256__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__256__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__257__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__257__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__258__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__258__tval = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3 = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3 = 0;
    CData/*1:0*/ __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__addr;
    __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__261__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__261__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__262__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__262__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__263__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__263__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__264__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__264__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__265__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__265__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__cause;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__cause;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__tval;
    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__275__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__275__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__276__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__276__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__cause;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__tval = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__Vfuncout;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3 = 0;
    CData/*1:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__addr;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__addr = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value = 0;
    CData/*7:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__byte_value;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__byte_value = 0;
    SData/*15:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__half_value;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__half_value = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__cause;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__cause;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__281__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__281__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__282__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__282__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__283__cause;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__283__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__285__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__285__tval = 0;
    SData/*11:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__287__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__287__tval = 0;
    IData/*31:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__Vfuncout;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr = 0;
    SData/*11:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr;
    __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value;
    __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__290__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__290__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__291__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__291__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__292__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__292__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__293__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__293__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__294__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__294__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__295__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__295__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__296__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__296__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__297__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__297__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__298__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__298__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__299__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__299__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__300__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__300__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__301__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__301__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__302__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__302__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__303__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__303__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__304__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__304__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__305__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__305__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__306__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__306__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__307__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__307__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__308__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__308__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__309__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__309__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__310__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__310__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__311__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__311__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__312__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__312__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__313__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__313__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__314__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__314__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__315__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__315__tval = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__store_supported__316__f3;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__store_supported__316__f3 = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3 = 0;
    CData/*1:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__addr;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__318__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__318__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__319__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__319__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__320__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__320__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__321__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__321__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__322__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__322__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__323__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__323__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__324__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__324__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__325__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__325__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__326__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__326__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__327__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__327__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__328__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__328__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__329__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__329__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__330__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__330__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__331__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__331__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__332__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__332__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__333__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__333__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__334__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__334__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__335__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__335__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__336__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__336__tval = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3 = 0;
    CData/*2:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3 = 0;
    CData/*1:0*/ __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__addr;
    __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__addr = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__339__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__339__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__340__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__340__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__341__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__341__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__342__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__342__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__343__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__343__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__cause;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__tval = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__cause;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__cause = 0;
    IData/*31:0*/ __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__tval;
    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__tval = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__dma_tick;
    __Vdly__harvos_soc__DOT__dma_tick = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__mmio_out;
    __Vdly__harvos_soc__DOT__mmio_out = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__mac_lo;
    __Vdly__harvos_soc__DOT__net_card__DOT__mac_lo = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_frame_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_frame_count = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__mac_hi;
    __Vdly__harvos_soc__DOT__net_card__DOT__mac_hi = 0;
    SData/*11:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_wr;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_wr = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__irq_enable;
    __Vdly__harvos_soc__DOT__net_card__DOT__irq_enable = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__command;
    __Vdly__harvos_soc__DOT__net_card__DOT__command = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__irq_status;
    __Vdly__harvos_soc__DOT__net_card__DOT__irq_status = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_base;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_base = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_len;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_len = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_base;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_base = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_len;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_len = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_count = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_count = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_fault_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_fault_count = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__digest;
    __Vdly__harvos_soc__DOT__net_card__DOT__digest = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__progress;
    __Vdly__harvos_soc__DOT__net_card__DOT__progress = 0;
    CData/*1:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active = 0;
    CData/*2:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_load_desc;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_load_desc = 0;
    CData/*2:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_head;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_head = 0;
    CData/*2:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_tail;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_tail = 0;
    CData/*3:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count = 0;
    SData/*9:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word = 0;
    SData/*9:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_word_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_word_count = 0;
    SData/*9:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len = 0;
    SData/*11:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_rd;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_rd = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__busy;
    __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_op;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_op = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_count = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__ctrl;
    __Vdly__harvos_soc__DOT__net_card__DOT__ctrl = 0;
    SData/*12:0*/ __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_count = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status;
    __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__dma_progress;
    __Vdly__harvos_soc__DOT__usb_host__DOT__dma_progress = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__busy;
    __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen;
    __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__frame;
    __Vdly__harvos_soc__DOT__usb_host__DOT__frame = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__irq_enable;
    __Vdly__harvos_soc__DOT__usb_host__DOT__irq_enable = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__command;
    __Vdly__harvos_soc__DOT__usb_host__DOT__command = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__dma_base;
    __Vdly__harvos_soc__DOT__usb_host__DOT__dma_base = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__token;
    __Vdly__harvos_soc__DOT__usb_host__DOT__token = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer = 0;
    CData/*7:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift = 0;
    CData/*7:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift = 0;
    CData/*2:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index = 0;
    CData/*2:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level = 0;
    CData/*1:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d;
    __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count;
    __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__hps_block__DOT__ctrl;
    __Vdly__harvos_soc__DOT__hps_block__DOT__ctrl = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__hps_block__DOT__lba_lo;
    __Vdly__harvos_soc__DOT__hps_block__DOT__lba_lo = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__hps_block__DOT__lba_hi;
    __Vdly__harvos_soc__DOT__hps_block__DOT__lba_hi = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__hps_block__DOT__count;
    __Vdly__harvos_soc__DOT__hps_block__DOT__count = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__hps_block__DOT__active_drive;
    __Vdly__harvos_soc__DOT__hps_block__DOT__active_drive = 0;
    CData/*0:0*/ __Vdly__harvos_soc__DOT__hps_block__DOT__busy;
    __Vdly__harvos_soc__DOT__hps_block__DOT__busy = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index;
    __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index = 0;
    CData/*1:0*/ __Vdly__harvos_soc__DOT__secure_boot__DOT__state;
    __Vdly__harvos_soc__DOT__secure_boot__DOT__state = 0;
    CData/*4:0*/ __Vdly__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __Vdly__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0;
    CData/*5:0*/ __Vdly__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
    __Vdly__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl = 0;
    CData/*4:0*/ __Vdly__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __Vdly__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0;
    CData/*5:0*/ __Vdly__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
    __Vdly__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__l1d0__DOT__hit_count;
    __Vdly__harvos_soc__DOT__l1d0__DOT__hit_count = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__l1d0__DOT__miss_count;
    __Vdly__harvos_soc__DOT__l1d0__DOT__miss_count = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__l1d1__DOT__hit_count;
    __Vdly__harvos_soc__DOT__l1d1__DOT__hit_count = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__l1d1__DOT__miss_count;
    __Vdly__harvos_soc__DOT__l1d1__DOT__miss_count = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__l2__DOT__hits;
    __Vdly__harvos_soc__DOT__l2__DOT__hits = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__l2__DOT__misses;
    __Vdly__harvos_soc__DOT__l2__DOT__misses = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__coherence__DOT__invalidations;
    __Vdly__harvos_soc__DOT__coherence__DOT__invalidations = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__coherence__DOT__shared_reads;
    __Vdly__harvos_soc__DOT__coherence__DOT__shared_reads = 0;
    CData/*1:0*/ __Vdly__harvos_soc__DOT__kernel_task;
    __Vdly__harvos_soc__DOT__kernel_task = 0;
    CData/*3:0*/ __Vdly__harvos_soc__DOT__kernel_ipc_depth;
    __Vdly__harvos_soc__DOT__kernel_ipc_depth = 0;
    IData/*31:0*/ __Vdly__harvos_soc__DOT__trace_digest;
    __Vdly__harvos_soc__DOT__trace_digest = 0;
    SData/*15:0*/ __Vdly__harvos_soc__DOT__trace_count;
    __Vdly__harvos_soc__DOT__trace_count = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__dmem__v0;
    __VdlyVal__harvos_soc__DOT__dmem__v0 = 0;
    IData/*18:0*/ __VdlyDim0__harvos_soc__DOT__dmem__v0;
    __VdlyDim0__harvos_soc__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__dmem__v0;
    __VdlySet__harvos_soc__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__dmem__v1;
    __VdlyVal__harvos_soc__DOT__dmem__v1 = 0;
    IData/*18:0*/ __VdlyDim0__harvos_soc__DOT__dmem__v1;
    __VdlyDim0__harvos_soc__DOT__dmem__v1 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__dmem__v1;
    __VdlySet__harvos_soc__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0 = 0;
    SData/*11:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0;
    __VdlySet__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0 = 0;
    SData/*11:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v1;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v1 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0 = 0;
    SData/*11:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1 = 0;
    SData/*11:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0 = 0;
    CData/*2:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0 = 0;
    SData/*9:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0 = 0;
    CData/*2:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2 = 0;
    SData/*8:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2 = 0;
    IData/*31:0*/ __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2;
    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2 = 0;
    SData/*11:0*/ __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2;
    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2 = 0;
    SData/*15:0*/ __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v0;
    __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v0 = 0;
    SData/*12:0*/ __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v0;
    __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v0;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v1;
    __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v1 = 0;
    SData/*12:0*/ __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v1;
    __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v1;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v1 = 0;
    SData/*15:0*/ __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v2;
    __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v2 = 0;
    SData/*12:0*/ __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v2;
    __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__hps_sd_lba__v0;
    __VdlySet__hps_sd_lba__v0 = 0;
    IData/*31:0*/ __VdlyVal__hps_sd_lba__v2;
    __VdlyVal__hps_sd_lba__v2 = 0;
    CData/*0:0*/ __VdlyDim0__hps_sd_lba__v2;
    __VdlyDim0__hps_sd_lba__v2 = 0;
    CData/*0:0*/ __VdlySet__hps_sd_lba__v2;
    __VdlySet__hps_sd_lba__v2 = 0;
    CData/*5:0*/ __VdlyVal__hps_sd_blk_cnt__v2;
    __VdlyVal__hps_sd_blk_cnt__v2 = 0;
    CData/*0:0*/ __VdlyDim0__hps_sd_blk_cnt__v2;
    __VdlyDim0__hps_sd_blk_cnt__v2 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v0;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v0 = 0;
    QData/*63:0*/ __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v2;
    __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v2 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v2;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v2 = 0;
    QData/*63:0*/ __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v3;
    __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v3 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v3;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v3 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 = 0;
    CData/*7:0*/ __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*5:0*/ __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
    __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v0 = 0;
    CData/*3:0*/ __VdlyDim0__harvos_soc__DOT__l1d0__DOT__valid__v16;
    __VdlyDim0__harvos_soc__DOT__l1d0__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v16;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v0;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v0 = 0;
    IData/*25:0*/ __VdlyVal__harvos_soc__DOT__l1d0__DOT__tag__v16;
    __VdlyVal__harvos_soc__DOT__l1d0__DOT__tag__v16 = 0;
    CData/*3:0*/ __VdlyDim0__harvos_soc__DOT__l1d0__DOT__tag__v16;
    __VdlyDim0__harvos_soc__DOT__l1d0__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v16;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v0 = 0;
    CData/*3:0*/ __VdlyDim0__harvos_soc__DOT__l1d1__DOT__valid__v16;
    __VdlyDim0__harvos_soc__DOT__l1d1__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v16;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v0;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v0 = 0;
    IData/*25:0*/ __VdlyVal__harvos_soc__DOT__l1d1__DOT__tag__v16;
    __VdlyVal__harvos_soc__DOT__l1d1__DOT__tag__v16 = 0;
    CData/*3:0*/ __VdlyDim0__harvos_soc__DOT__l1d1__DOT__tag__v16;
    __VdlyDim0__harvos_soc__DOT__l1d1__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v16;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v16 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l2__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__l2__DOT__valid__v0 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__l2__DOT__valid__v32;
    __VdlyDim0__harvos_soc__DOT__l2__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l2__DOT__valid__v32;
    __VdlySet__harvos_soc__DOT__l2__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l2__DOT__tag__v0;
    __VdlySet__harvos_soc__DOT__l2__DOT__tag__v0 = 0;
    IData/*24:0*/ __VdlyVal__harvos_soc__DOT__l2__DOT__tag__v32;
    __VdlyVal__harvos_soc__DOT__l2__DOT__tag__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__l2__DOT__tag__v32;
    __VdlyDim0__harvos_soc__DOT__l2__DOT__tag__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__l2__DOT__tag__v32;
    __VdlySet__harvos_soc__DOT__l2__DOT__tag__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v0;
    __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v0 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__coherence__DOT__valid__v32;
    __VdlyDim0__harvos_soc__DOT__coherence__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v32;
    __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v0;
    __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v0 = 0;
    CData/*0:0*/ __VdlyVal__harvos_soc__DOT__coherence__DOT__owner__v32;
    __VdlyVal__harvos_soc__DOT__coherence__DOT__owner__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__coherence__DOT__owner__v32;
    __VdlyDim0__harvos_soc__DOT__coherence__DOT__owner__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v32;
    __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v0;
    __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v0 = 0;
    CData/*0:0*/ __VdlyVal__harvos_soc__DOT__coherence__DOT__modified__v32;
    __VdlyVal__harvos_soc__DOT__coherence__DOT__modified__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__coherence__DOT__modified__v32;
    __VdlyDim0__harvos_soc__DOT__coherence__DOT__modified__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v32;
    __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v0;
    __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v0 = 0;
    IData/*19:0*/ __VdlyVal__harvos_soc__DOT__coherence__DOT__line_tag__v32;
    __VdlyVal__harvos_soc__DOT__coherence__DOT__line_tag__v32 = 0;
    CData/*4:0*/ __VdlyDim0__harvos_soc__DOT__coherence__DOT__line_tag__v32;
    __VdlyDim0__harvos_soc__DOT__coherence__DOT__line_tag__v32 = 0;
    CData/*0:0*/ __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v32;
    __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v32 = 0;
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
    __Vdly__harvos_soc__DOT__trace_count = vlSelfRef.harvos_soc__DOT__trace_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_start_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_wr 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_wr;
    __Vdly__harvos_soc__DOT__l1d0__DOT__hit_count = vlSelfRef.harvos_soc__DOT__l1d0__DOT__hit_count;
    __Vdly__harvos_soc__DOT__l1d0__DOT__miss_count 
        = vlSelfRef.harvos_soc__DOT__l1d0__DOT__miss_count;
    __Vdly__harvos_soc__DOT__l1d1__DOT__hit_count = vlSelfRef.harvos_soc__DOT__l1d1__DOT__hit_count;
    __Vdly__harvos_soc__DOT__l1d1__DOT__miss_count 
        = vlSelfRef.harvos_soc__DOT__l1d1__DOT__miss_count;
    __VdlySet__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0 = 0U;
    vlSelfRef.__Vdly__harvos_soc__DOT__entropy_lfsr 
        = vlSelfRef.harvos_soc__DOT__entropy_lfsr;
    __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d;
    __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count;
    __Vdly__harvos_soc__DOT__secure_boot__DOT__state 
        = vlSelfRef.harvos_soc__DOT__secure_boot__DOT__state;
    __Vdly__harvos_soc__DOT__usb_host__DOT__frame = vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame;
    __Vdly__harvos_soc__DOT__kernel_task = vlSelfRef.harvos_soc__DOT__kernel_task;
    __Vdly__harvos_soc__DOT__dma_tick = vlSelfRef.harvos_soc__DOT__dma_tick;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v0 = 0U;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v2 = 0U;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v3 = 0U;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count;
    __Vdly__harvos_soc__DOT__coherence__DOT__invalidations 
        = vlSelfRef.harvos_soc__DOT__coherence__DOT__invalidations;
    __Vdly__harvos_soc__DOT__l2__DOT__hits = vlSelfRef.harvos_soc__DOT__l2__DOT__hits;
    __Vdly__harvos_soc__DOT__l2__DOT__misses = vlSelfRef.harvos_soc__DOT__l2__DOT__misses;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__prev_line_state;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__stable_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_frame_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__activity_count;
    __Vdly__harvos_soc__DOT__kernel_ipc_depth = vlSelfRef.harvos_soc__DOT__kernel_ipc_depth;
    __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v32 = 0U;
    __VdlySet__harvos_soc__DOT__l2__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__l2__DOT__valid__v32 = 0U;
    __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v0 = 0U;
    __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v32 = 0U;
    __VdlySet__harvos_soc__DOT__l2__DOT__tag__v0 = 0U;
    __VdlySet__harvos_soc__DOT__l2__DOT__tag__v32 = 0U;
    __Vdly__harvos_soc__DOT__trace_digest = vlSelfRef.harvos_soc__DOT__trace_digest;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level;
    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_timer;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_bit_index;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_skip_sync;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__rx_ones;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_rx_active 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_rx_active;
    __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v0 = 0U;
    __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v32 = 0U;
    __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v0 = 0U;
    __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v32 = 0U;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v0 = 0U;
    __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__cpu_reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((0x0015f900U <= vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr)))) {
                VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:37: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"harvos_soc.assertions", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("rtl\\harvos_assertions.sv", 37, "");
            }
            if (VL_UNLIKELY(((0x0015f900U <= vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr)))) {
                VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:38: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"harvos_soc.assertions", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("rtl\\harvos_assertions.sv", 38, "");
            }
        }
        if (vlSelfRef.harvos_soc__DOT____Vcellinp__assertions__d_we) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (((0x00000400U 
                                             <= vlSelfRef.harvos_soc__DOT__bus_addr) 
                                            & (0x0019a680U 
                                               > vlSelfRef.harvos_soc__DOT__bus_addr)) 
                                           | ((0xffff0000U 
                                               <= vlSelfRef.harvos_soc__DOT__bus_addr) 
                                              & (0xffff0100U 
                                                 > vlSelfRef.harvos_soc__DOT__bus_addr)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:39: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"harvos_soc.assertions", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("rtl\\harvos_assertions.sv", 39, "");
                }
            }
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__dma_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__dma_allow))) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0x00000500U > vlSelfRef.harvos_soc__DOT__dma_addr)))) {
                    VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:42: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"harvos_soc.assertions", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("rtl\\harvos_assertions.sv", 42, "");
                }
                if (VL_UNLIKELY(((0U != (3U & vlSelfRef.harvos_soc__DOT__dma_addr))))) {
                    VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:43: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"harvos_soc.assertions", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("rtl\\harvos_assertions.sv", 43, "");
                }
                if (VL_UNLIKELY(((0x0000000000000d00ULL 
                                  < (0x00000001ffffffffULL 
                                     & (4ULL + (QData)((IData)(vlSelfRef.harvos_soc__DOT__dma_addr)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: harvos_assertions.sv:46: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"harvos_soc.assertions", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("rtl\\harvos_assertions.sv", 46, "");
                }
            }
        }
        if (vlSelfRef.hps_sd_buff_wr) {
            __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v0 
                = vlSelfRef.hps_sd_buff_dout;
            __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v0 
                = vlSelfRef.hps_sd_buff_addr;
            __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v0 = 1U;
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__hps_block__mmio_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
            if ((4U != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                if ((0x0cU != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    if ((0x10U != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                        if ((0x14U != (0x0000003fU 
                                       & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                            if ((0x18U != (0x0000003fU 
                                           & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                if ((0x1cU != (0x0000003fU 
                                               & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                    if ((0x20U == (0x0000003fU 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                        __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v1 
                                            = (0x0000ffffU 
                                               & vlSelfRef.harvos_soc__DOT__bus_wdata);
                                        __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v1 
                                            = (0x00001fffU 
                                               & vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index);
                                        __VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v1 = 1U;
                                        __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v2 
                                            = (vlSelfRef.harvos_soc__DOT__bus_wdata 
                                               >> 0x10U);
                                        __VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v2 
                                            = (0x00001fffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vdly__harvos_soc__DOT__coherence__DOT__shared_reads 
        = vlSelfRef.harvos_soc__DOT__coherence__DOT__shared_reads;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__retry_ctrl 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl;
    __Vdly__harvos_soc__DOT__net_card__DOT__mac_hi 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_hi;
    __Vdly__harvos_soc__DOT__net_card__DOT__command 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__command;
    __Vdly__harvos_soc__DOT__net_card__DOT__mac_lo 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_lo;
    __Vdly__harvos_soc__DOT__hps_block__DOT__ctrl = vlSelfRef.harvos_soc__DOT__hps_block__DOT__ctrl;
    __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index 
        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index;
    __Vdly__harvos_soc__DOT__usb_host__DOT__command 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__command;
    __Vdly__harvos_soc__DOT__usb_host__DOT__irq_enable 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_enable;
    __Vdly__harvos_soc__DOT__net_card__DOT__irq_enable 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_enable;
    __Vdly__harvos_soc__DOT__usb_host__DOT__dma_base 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base;
    __Vdly__harvos_soc__DOT__usb_host__DOT__token = vlSelfRef.harvos_soc__DOT__usb_host__DOT__token;
    __Vdly__harvos_soc__DOT__mmio_out = vlSelfRef.harvos_soc__DOT__mmio_out;
    vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__target_addr 
        = vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr;
    vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__data_word 
        = vlSelfRef.harvos_soc__DOT__imem_loader__DOT__data_word;
    vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__write_count 
        = vlSelfRef.harvos_soc__DOT__imem_loader__DOT__write_count;
    vlSelfRef.__VdlySet__harvos_soc__DOT__imem__v0 = 0U;
    __Vdly__harvos_soc__DOT__net_card__DOT__ctrl = vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__seen_pid;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__rx_error_seen;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__data_bytes;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__crc_calc;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed0;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__packet_rx__DOT__delayed1;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_pid_ok;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_data_packet;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v16 = 0U;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v16 = 0U;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v0 = 0U;
    __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v16 = 0U;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v0 = 0U;
    __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v16 = 0U;
    __VdlySet__hps_sd_lba__v0 = 0U;
    __VdlySet__hps_sd_lba__v2 = 0U;
    __Vdly__harvos_soc__DOT__hps_block__DOT__lba_lo 
        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_lo;
    __Vdly__harvos_soc__DOT__hps_block__DOT__lba_hi 
        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_hi;
    __Vdly__harvos_soc__DOT__hps_block__DOT__count 
        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__count;
    __Vdly__harvos_soc__DOT__hps_block__DOT__active_drive 
        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__active_drive;
    __Vdly__harvos_soc__DOT__hps_block__DOT__busy = vlSelfRef.harvos_soc__DOT__hps_block__DOT__busy;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_fault_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_start_fault_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_submit_active;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_load_desc 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_load_desc;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_tail 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_tail;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ip_sum;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_tcp_sum;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_total_len;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0 = 0U;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_word_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_word_count;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0 = 0U;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2 = 0U;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0 = 0U;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_rd 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0 = 0U;
    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2 = 0U;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_head 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_head;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_word;
    __Vdly__harvos_soc__DOT__net_card__DOT__digest 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__digest;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count;
    __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_base 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_base;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_base 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_base;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_len 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_len;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_len 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len;
    __Vdly__harvos_soc__DOT__net_card__DOT__progress 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__progress;
    __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active 
        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active;
    __Vdly__harvos_soc__DOT__net_card__DOT__busy = vlSelfRef.harvos_soc__DOT__net_card__DOT__busy;
    __Vdly__harvos_soc__DOT__net_card__DOT__rx_op = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__timeout_count;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__retry_delay;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__rx_clear;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_crc;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__tx_index;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_engine__DOT__state;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__pe_retry_count 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_retry_count;
    __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_done_seen;
    __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status;
    __Vdly__harvos_soc__DOT__usb_host__DOT__busy = vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__dma_total_len 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len;
    __Vdly__harvos_soc__DOT__usb_host__DOT__dma_progress 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress;
    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__ctrl 
        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl;
    __VdlySet__harvos_soc__DOT__dmem__v0 = 0U;
    __VdlySet__harvos_soc__DOT__dmem__v1 = 0U;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_val 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs2_val 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_q 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_q;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rd_q 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rd_q;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__wb_data;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__next_pc 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__next_pc;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stvec 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sepc;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_srandom 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_srandom;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stval;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v0 = 0U;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v1 = 0U;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v32 = 0U;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v33 = 0U;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__instr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__wb_en;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_smpuctl 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_smpuctl;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scause;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_val 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs2_val 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_q 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_q;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rd_q 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rd_q;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__wb_data;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__next_pc 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__next_pc;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stvec 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sepc;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_srandom 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_srandom;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stval;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v0 = 0U;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v1 = 0U;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v32 = 0U;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v33 = 0U;
    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v34 = 0U;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__instr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__wb_en;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_smpuctl 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_smpuctl;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scause;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scaps 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scaps;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scaps 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scaps;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_funct3 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_funct3 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_load;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_load;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_count 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_count;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_count 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_count;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_satp 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_satp 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp;
    __Vdly__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __Vdly__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0U;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 0U;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_addr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_addr;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_addr 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_addr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_addr;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_addr 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__state;
    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__state;
    __Vdly__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
    __Vdly__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl 
        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0U;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 0U;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 0U;
    __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 0U;
    if (vlSelfRef.reset) {
        __Vdly__harvos_soc__DOT__trace_count = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__entropy_lfsr = 0x1aceb00cU;
        __Vdly__harvos_soc__DOT__dma_tick = 0U;
        __Vdly__harvos_soc__DOT__trace_digest = 0x48415256U;
        __Vdly__harvos_soc__DOT__mmio_out = 0U;
        __Vdly__harvos_soc__DOT__secure_boot__DOT__state = 0U;
        vlSelfRef.harvos_soc__DOT__boot_ok = 0U;
        vlSelfRef.harvos_soc__DOT__boot_mpu_lock = 0U;
        vlSelfRef.harvos_soc__DOT__boot_status = 0U;
    } else {
        if (vlSelfRef.harvos_soc__DOT__trace_event) {
            __Vdly__harvos_soc__DOT__trace_count = 
                (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__trace_count)));
            __Vdly__harvos_soc__DOT__trace_digest = 
                ((((vlSelfRef.harvos_soc__DOT__trace_digest 
                    << 5U) | (vlSelfRef.harvos_soc__DOT__trace_digest 
                              >> 0x0000001bU)) ^ ((IData)(vlSelfRef.harvos_soc__DOT__bus_req)
                                                   ? vlSelfRef.harvos_soc__DOT__bus_addr
                                                   : 
                                                  ((IData)(vlSelfRef.harvos_soc__DOT__dma_req)
                                                    ? vlSelfRef.harvos_soc__DOT__dma_addr
                                                    : 
                                                   ((IData)(vlSelfRef.harvos_soc__DOT__net_irq)
                                                     ? vlSelfRef.harvos_soc__DOT__net_status
                                                     : 
                                                    ((IData)(vlSelfRef.harvos_soc__DOT__usb_irq)
                                                      ? vlSelfRef.harvos_soc__DOT__usb_status
                                                      : vlSelfRef.debug_scause))))) 
                 ^ (IData)(vlSelfRef.harvos_soc__DOT__trace_code));
        }
        vlSelfRef.__Vdly__harvos_soc__DOT__entropy_lfsr 
            = ((vlSelfRef.harvos_soc__DOT__entropy_lfsr 
                << 1U) | (1U & VL_REDXOR_32((0x80200003U 
                                             & vlSelfRef.harvos_soc__DOT__entropy_lfsr))));
        __Vdly__harvos_soc__DOT__dma_tick = (0x0000ffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.harvos_soc__DOT__dma_tick)));
        if (((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
            if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__d_in_range)))) {
                if (((IData)(vlSelfRef.harvos_soc__DOT__d_is_mmio) 
                     & (0U == (0x000000ffU & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                    __Vfunc_harvos_soc__DOT__apply_wstrb__111__be 
                        = vlSelfRef.harvos_soc__DOT__bus_be;
                    __Vfunc_harvos_soc__DOT__apply_wstrb__111__new_word 
                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                    __Vfunc_harvos_soc__DOT__apply_wstrb__111__old_word 
                        = vlSelfRef.harvos_soc__DOT__mmio_out;
                    __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout 
                        = __Vfunc_harvos_soc__DOT__apply_wstrb__111__old_word;
                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__111__be))) {
                        __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout 
                            = ((0xffffff00U & __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout) 
                               | (0x000000ffU & __Vfunc_harvos_soc__DOT__apply_wstrb__111__new_word));
                    }
                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__111__be))) {
                        __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout 
                            = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout) 
                               | (0x0000ff00U & __Vfunc_harvos_soc__DOT__apply_wstrb__111__new_word));
                    }
                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__111__be))) {
                        __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout 
                            = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout) 
                               | (0x00ff0000U & __Vfunc_harvos_soc__DOT__apply_wstrb__111__new_word));
                    }
                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__111__be))) {
                        __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout 
                            = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout) 
                               | (0xff000000U & __Vfunc_harvos_soc__DOT__apply_wstrb__111__new_word));
                    }
                    __Vdly__harvos_soc__DOT__mmio_out 
                        = __Vfunc_harvos_soc__DOT__apply_wstrb__111__Vfuncout;
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__secure_boot__DOT__state))) {
            vlSelfRef.harvos_soc__DOT__boot_status = 0xfec3357fU;
            __Vdly__harvos_soc__DOT__secure_boot__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelfRef.harvos_soc__DOT__secure_boot__DOT__state))) {
            vlSelfRef.harvos_soc__DOT__boot_mpu_lock = 1U;
            __Vdly__harvos_soc__DOT__secure_boot__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.harvos_soc__DOT__secure_boot__DOT__state))) {
            vlSelfRef.harvos_soc__DOT__boot_ok = 1U;
            vlSelfRef.harvos_soc__DOT__boot_mpu_lock = 1U;
        } else {
            vlSelfRef.harvos_soc__DOT__boot_ok = 0U;
            vlSelfRef.harvos_soc__DOT__boot_mpu_lock = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.harvos_soc__DOT__imem_loader_wr) {
            vlSelfRef.harvos_soc__DOT____Vlvbound_h65711260__0 
                = vlSelfRef.harvos_soc__DOT__imem_loader__DOT__data_word;
            if ((0x00057e3fU >= (0x0007ffffU & (vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr 
                                                >> 2U)))) {
                vlSelfRef.__VdlyVal__harvos_soc__DOT__imem__v0 
                    = vlSelfRef.harvos_soc__DOT____Vlvbound_h65711260__0;
                vlSelfRef.__VdlyDim0__harvos_soc__DOT__imem__v0 
                    = (0x0007ffffU & (vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr 
                                      >> 2U));
                vlSelfRef.__VdlySet__harvos_soc__DOT__imem__v0 = 1U;
            }
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__bus_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
            if (vlSelfRef.harvos_soc__DOT__d_in_range) {
                __Vfunc_harvos_soc__DOT__apply_wstrb__110__be 
                    = vlSelfRef.harvos_soc__DOT__bus_be;
                __Vfunc_harvos_soc__DOT__apply_wstrb__110__new_word 
                    = vlSelfRef.harvos_soc__DOT__bus_wdata;
                __Vfunc_harvos_soc__DOT__apply_wstrb__110__old_word 
                    = ((0x0006689fU >= (0x0007ffffU 
                                        & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                            - (IData)(0x00000400U)) 
                                           >> 2U)))
                        ? vlSelfRef.harvos_soc__DOT__dmem
                       [(0x0007ffffU & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                         - (IData)(0x00000400U)) 
                                        >> 2U))] : 0U);
                vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb 
                    = __Vfunc_harvos_soc__DOT__apply_wstrb__110__old_word;
                if ((1U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__110__be))) {
                    vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb 
                        = ((0xffffff00U & vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb) 
                           | (0x000000ffU & __Vfunc_harvos_soc__DOT__apply_wstrb__110__new_word));
                }
                if ((2U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__110__be))) {
                    vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb 
                        = ((0xffff00ffU & vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb) 
                           | (0x0000ff00U & __Vfunc_harvos_soc__DOT__apply_wstrb__110__new_word));
                }
                if ((4U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__110__be))) {
                    vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb 
                        = ((0xff00ffffU & vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb) 
                           | (0x00ff0000U & __Vfunc_harvos_soc__DOT__apply_wstrb__110__new_word));
                }
                if ((8U & (IData)(__Vfunc_harvos_soc__DOT__apply_wstrb__110__be))) {
                    vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb 
                        = ((0x00ffffffU & vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb) 
                           | (0xff000000U & __Vfunc_harvos_soc__DOT__apply_wstrb__110__new_word));
                }
                vlSelfRef.harvos_soc__DOT____Vlvbound_ha7a2ffe6__0 
                    = vlSelfRef.harvos_soc__DOT____VlemCall_104__apply_wstrb;
                if ((0x0006689fU >= (0x0007ffffU & 
                                     ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                       - (IData)(0x00000400U)) 
                                      >> 2U)))) {
                    __VdlyVal__harvos_soc__DOT__dmem__v0 
                        = vlSelfRef.harvos_soc__DOT____Vlvbound_ha7a2ffe6__0;
                    __VdlyDim0__harvos_soc__DOT__dmem__v0 
                        = (0x0007ffffU & ((vlSelfRef.harvos_soc__DOT__bus_addr 
                                           - (IData)(0x00000400U)) 
                                          >> 2U));
                    __VdlySet__harvos_soc__DOT__dmem__v0 = 1U;
                }
            }
        }
        if ((((IData)(vlSelfRef.harvos_soc__DOT__dma_req) 
              & (IData)(vlSelfRef.harvos_soc__DOT__dma_allow)) 
             & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active) 
                || (1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step)) 
                          | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)))))) {
            vlSelfRef.harvos_soc__DOT____Vlvbound_hd7ca7cff__0 
                = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active)
                    ? (0x55534200U ^ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
                                      ^ (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_next_addr 
                                         ^ (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                             << 0x0000001aU) 
                                            | ((0x03ff0000U 
                                                & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame))))))
                    : ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step)
                        ? vlSelfRef.harvos_soc__DOT__net_card__DOT__selected_rx_word
                        : (vlSelfRef.harvos_soc__DOT__entropy_lfsr 
                           ^ (0xd00d0000U | (IData)(vlSelfRef.harvos_soc__DOT__dma_tick)))));
            if ((0x0006689fU >= (0x0007ffffU & ((vlSelfRef.harvos_soc__DOT__dma_addr 
                                                 - (IData)(0x00000400U)) 
                                                >> 2U)))) {
                __VdlyVal__harvos_soc__DOT__dmem__v1 
                    = vlSelfRef.harvos_soc__DOT____Vlvbound_hd7ca7cff__0;
                __VdlyDim0__harvos_soc__DOT__dmem__v1 
                    = (0x0007ffffU & ((vlSelfRef.harvos_soc__DOT__dma_addr 
                                       - (IData)(0x00000400U)) 
                                      >> 2U));
                __VdlySet__harvos_soc__DOT__dmem__v1 = 1U;
            }
        }
    }
    if (((IData)(vlSelfRef.harvos_soc__DOT__cpu_reset) 
         | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__tlb_flush))) {
        __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 1U;
        __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 1U;
    } else {
        if (((~ (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb_raw_hit)) 
             & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_valid))) {
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 1U;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__walk_flags;
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __Vdly__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl)));
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__d_req1) 
             & ((~ (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb_raw_hit)) 
                & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_valid)))) {
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 1U;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__active_addr 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__walk_flags;
            __VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
            __Vdly__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl)));
        }
    }
    if (((IData)(vlSelfRef.harvos_soc__DOT__cpu_reset) 
         | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__tlb_flush))) {
        __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1 = 1U;
        __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0 = 1U;
        __Vdly__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl = 0U;
        __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1 = 1U;
    } else {
        if (((~ (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb_raw_hit)) 
             & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_valid))) {
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32 = 1U;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__walk_flags;
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
            __Vdly__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl)));
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__d_req0) 
             & ((~ (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb_raw_hit)) 
                & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_valid)))) {
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64 = 1U;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__active_addr 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_paddr 
                   >> 0x0cU);
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = (0x000000ffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp 
                                  >> 0x00000016U));
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__walk_flags;
            __VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
            __Vdly__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl)));
        }
    }
    if (vlSelfRef.harvos_soc__DOT__cpu_reset) {
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_count = 0U;
        __Vdly__harvos_soc__DOT__l1d0__DOT__hit_count = 0U;
        __Vdly__harvos_soc__DOT__l1d0__DOT__miss_count = 0U;
        __Vdly__harvos_soc__DOT__l1d1__DOT__hit_count = 0U;
        __Vdly__harvos_soc__DOT__l1d1__DOT__miss_count = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_wr = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__frame = 0U;
        __Vdly__harvos_soc__DOT__kernel_task = 0U;
        __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v0 = 1U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_count = 0U;
        __Vdly__harvos_soc__DOT__coherence__DOT__invalidations = 0U;
        __Vdly__harvos_soc__DOT__l2__DOT__hits = 0U;
        __Vdly__harvos_soc__DOT__l2__DOT__misses = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_frame_count = 0U;
        __Vdly__harvos_soc__DOT__kernel_ipc_depth = 0U;
        __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v0 = 1U;
        __VdlySet__harvos_soc__DOT__l2__DOT__valid__v0 = 1U;
        __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v0 = 1U;
        __VdlySet__harvos_soc__DOT__l2__DOT__tag__v0 = 1U;
        __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v0 = 1U;
        __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v0 = 1U;
        __Vdly__harvos_soc__DOT__coherence__DOT__shared_reads = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__retry_ctrl = 3U;
        __Vdly__harvos_soc__DOT__net_card__DOT__mac_hi = 0x0000484eU;
        __Vdly__harvos_soc__DOT__net_card__DOT__command = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__mac_lo = 0x02000001U;
        __Vdly__harvos_soc__DOT__hps_block__DOT__ctrl = 0U;
        __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__command = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__irq_enable = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__irq_enable = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__dma_base = 0x00000500U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__token = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__ctrl = 0U;
        __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v0 = 1U;
        __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v0 = 1U;
        __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v0 = 1U;
        __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v0 = 1U;
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted = 0U;
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift = 0x80U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level = 1U;
        vlSelfRef.usb_dp_drive_low = 0U;
        vlSelfRef.usb_dm_drive_low = 0U;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ready_latched = 0U;
        vlSelfRef.harvos_soc__DOT__smp_bus__DOT__last_grant = 0U;
        __Vdly__harvos_soc__DOT__hps_block__DOT__lba_lo = 0U;
        __Vdly__harvos_soc__DOT__hps_block__DOT__lba_hi = 0U;
        __Vdly__harvos_soc__DOT__hps_block__DOT__count = 1U;
        __Vdly__harvos_soc__DOT__hps_block__DOT__active_drive = 0U;
        __Vdly__harvos_soc__DOT__hps_block__DOT__busy = 0U;
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__done = 0U;
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__fault = 0U;
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__write_op = 0U;
        vlSelfRef.hps_sd_rd = 0U;
        vlSelfRef.hps_sd_wr = 0U;
        __VdlySet__hps_sd_lba__v0 = 1U;
        __Vdly__harvos_soc__DOT__net_card__DOT__irq_status = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_base = 0x00000500U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_len = 0x00000040U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_base = 0x00000500U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_len = 0x00000040U;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__frame_len = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_count = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_count = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_fault_count = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__digest = 0x484e4554U;
        __Vdly__harvos_soc__DOT__net_card__DOT__progress = 0U;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__last_tx_word = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_load_desc = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_head = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_tail = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_word_count = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_rd = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0U;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 0U;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__fault = 0U;
        __Vdly__harvos_soc__DOT__net_card__DOT__rx_op = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__ctrl = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__dma_total_len = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__dma_progress = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__actual_len = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__done = 0U;
        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault = 0U;
        __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__target_addr = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__data_word = 0x00000013U;
        vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__write_count = 0U;
        vlSelfRef.harvos_soc__DOT__imem_loader__DOT__fault = 0U;
        vlSelfRef.harvos_soc__DOT__imem_loader__DOT__done = 0U;
        vlSelfRef.harvos_soc__DOT__imem_loader_wr = 0U;
        vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v0 = 1U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc = 0x000000c0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__instr = 0x00000013U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_val = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs2_val = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_q = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rd_q = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__next_pc = 0x000000c0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_addr = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_funct3 = 2U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_addr = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_count = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus = 0x00000300U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stvec = 0x000000a0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_satp = 0x80000000U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_srandom = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_smpuctl = 1U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scaps = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__tlb_flush = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
        vlSelfRef.harvos_soc__DOT__debug_trap1 = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
        vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v1 = 1U;
        vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v0 = 1U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__instr = 0x00000013U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_val = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs2_val = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_q = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rd_q = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__next_pc = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_addr = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_funct3 = 2U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_addr = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_count = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus = 0x00000300U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stvec = 0x000000a0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_satp = 0x80000000U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_srandom = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_smpuctl = 1U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scaps = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__tlb_flush = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
        vlSelfRef.harvos_soc__DOT__debug_trap0 = 0U;
        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
        vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v1 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__clear_ctrl)))) {
            if (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx) 
                 | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx))) {
                if (vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx) {
                    __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_count 
                        = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_start_count);
                }
            }
        }
        if (vlSelfRef.harvos_soc__DOT____Vcellinp__l1d0__access) {
            if (vlSelfRef.harvos_soc__DOT__l1_hit0) {
                __Vdly__harvos_soc__DOT__l1d0__DOT__hit_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__l1d0__DOT__hit_count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__l1_hit0)))) {
                __Vdly__harvos_soc__DOT__l1d0__DOT__miss_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__l1d0__DOT__miss_count)));
                __VdlyDim0__harvos_soc__DOT__l1d0__DOT__valid__v16 
                    = (0x0000000fU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v16 = 1U;
                __VdlyVal__harvos_soc__DOT__l1d0__DOT__tag__v16 
                    = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                       >> 6U);
                __VdlyDim0__harvos_soc__DOT__l1d0__DOT__tag__v16 
                    = (0x0000000fU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v16 = 1U;
            }
        }
        if (vlSelfRef.harvos_soc__DOT____Vcellinp__l1d1__access) {
            if (vlSelfRef.harvos_soc__DOT__l1_hit1) {
                __Vdly__harvos_soc__DOT__l1d1__DOT__hit_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__l1d1__DOT__hit_count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__l1_hit1)))) {
                __Vdly__harvos_soc__DOT__l1d1__DOT__miss_count 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__l1d1__DOT__miss_count)));
                __VdlyDim0__harvos_soc__DOT__l1d1__DOT__valid__v16 
                    = (0x0000000fU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v16 = 1U;
                __VdlyVal__harvos_soc__DOT__l1d1__DOT__tag__v16 
                    = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                       >> 6U);
                __VdlyDim0__harvos_soc__DOT__l1d1__DOT__tag__v16 
                    = (0x0000000fU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__selected_paddr 
                                      >> 2U));
                __VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v16 = 1U;
            }
        }
        if (vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push) {
            __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0 
                = vlSelfRef.net_rx_word;
            __VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_wr;
            __VdlySet__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0 = 1U;
            __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0 
                = vlSelfRef.net_rx_last;
            __VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_wr;
            __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_wr 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_wr)));
        }
        if (((IData)(vlSelfRef.utmi_line_state) != (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d))) {
            __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count)));
            __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d 
                = vlSelfRef.utmi_line_state;
        }
        __Vdly__harvos_soc__DOT__usb_host__DOT__frame 
            = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame);
        if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.harvos_soc__DOT__dma_tick)))) {
            __Vdly__harvos_soc__DOT__kernel_task = 
                (3U & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__kernel_task)));
        }
        if ((1U & (IData)(vlSelfRef.hps_img_mounted))) {
            __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v2 
                = vlSelfRef.hps_img_size;
            __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v2 = 1U;
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted 
                = (1U | (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted));
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly 
                = ((2U & (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly)) 
                   | (IData)(vlSelfRef.hps_img_readonly));
        }
        if ((2U & (IData)(vlSelfRef.hps_img_mounted))) {
            __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v3 
                = vlSelfRef.hps_img_size;
            __VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v3 = 1U;
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted 
                = (2U | (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__mounted));
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly 
                = ((1U & (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__readonly)) 
                   | ((IData)(vlSelfRef.hps_img_readonly) 
                      << 1U));
        }
        if ((2U == (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push) 
                     << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop)))) {
            __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_count 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count)));
        } else if ((1U == (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push) 
                            << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop)))) {
            __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_count 
                = (0x00001fffU & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count) 
                                  - (IData)(1U)));
        }
        if (vlSelfRef.harvos_soc__DOT__bus_req) {
            if (vlSelfRef.harvos_soc__DOT__coh_invalidate) {
                __Vdly__harvos_soc__DOT__coherence__DOT__invalidations 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__invalidations)));
            }
            if (vlSelfRef.harvos_soc__DOT__l2_hit) {
                __Vdly__harvos_soc__DOT__l2__DOT__hits 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__l2__DOT__hits)));
            }
            if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__l2_hit)))) {
                __Vdly__harvos_soc__DOT__l2__DOT__misses 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__l2__DOT__misses)));
                __VdlyDim0__harvos_soc__DOT__l2__DOT__valid__v32 
                    = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                      >> 2U));
                __VdlySet__harvos_soc__DOT__l2__DOT__valid__v32 = 1U;
                __VdlyVal__harvos_soc__DOT__l2__DOT__tag__v32 
                    = (vlSelfRef.harvos_soc__DOT__bus_addr 
                       >> 7U);
                __VdlyDim0__harvos_soc__DOT__l2__DOT__tag__v32 
                    = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                      >> 2U));
                __VdlySet__harvos_soc__DOT__l2__DOT__tag__v32 = 1U;
            }
            __VdlyDim0__harvos_soc__DOT__coherence__DOT__valid__v32 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__harvos_soc__DOT__coherence__DOT__valid__v32 = 1U;
            __VdlyVal__harvos_soc__DOT__coherence__DOT__line_tag__v32 
                = (vlSelfRef.harvos_soc__DOT__bus_addr 
                   >> 0x0000000cU);
            __VdlyDim0__harvos_soc__DOT__coherence__DOT__line_tag__v32 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v32 = 1U;
            __VdlyVal__harvos_soc__DOT__coherence__DOT__owner__v32 
                = vlSelfRef.harvos_soc__DOT__d_ready1;
            __VdlyDim0__harvos_soc__DOT__coherence__DOT__owner__v32 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__harvos_soc__DOT__coherence__DOT__owner__v32 = 1U;
            __VdlyVal__harvos_soc__DOT__coherence__DOT__modified__v32 
                = vlSelfRef.harvos_soc__DOT__bus_we;
            __VdlyDim0__harvos_soc__DOT__coherence__DOT__modified__v32 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                  >> 2U));
            __VdlySet__harvos_soc__DOT__coherence__DOT__modified__v32 = 1U;
            if ((((~ (IData)(vlSelfRef.harvos_soc__DOT__bus_we)) 
                  & (IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__same_line)) 
                 & (vlSelfRef.harvos_soc__DOT__coherence__DOT__owner
                    [(0x0000001fU & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                     >> 2U))] != (IData)(vlSelfRef.harvos_soc__DOT__d_ready1)))) {
                __Vdly__harvos_soc__DOT__coherence__DOT__shared_reads 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__coherence__DOT__shared_reads)));
            }
        }
        if ((2U == (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push_last) 
                     << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop_last)))) {
            __Vdly__harvos_soc__DOT__net_card__DOT__rx_frame_count 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count)));
        } else if ((1U == (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push_last) 
                            << 1U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_pop_last)))) {
            __Vdly__harvos_soc__DOT__net_card__DOT__rx_frame_count 
                = (0x0000ffffU & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count) 
                                  - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__kernel_model__syscall_valid) 
              & (IData)(vlSelfRef.harvos_soc__DOT__kernel_allow)) 
             & (1U == (0x0000000fU & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
            __Vdly__harvos_soc__DOT__kernel_ipc_depth 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__kernel_ipc_depth)));
        } else if (((0xffU == (0x000000ffU & (IData)(vlSelfRef.harvos_soc__DOT__dma_tick))) 
                    & (0U != (IData)(vlSelfRef.harvos_soc__DOT__kernel_ipc_depth)))) {
            __Vdly__harvos_soc__DOT__kernel_ipc_depth 
                = (0x0000000fU & ((IData)(vlSelfRef.harvos_soc__DOT__kernel_ipc_depth) 
                                  - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__usb_host__mmio_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
            if (((((((((4U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)) 
                       | (0x0cU == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                      | (0x10U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                     | (0x14U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                    | (0x18U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                   | (0x1cU == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                  | (0x2cU == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) 
                 | (0x38U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                if ((4U != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    if ((0x0cU != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                        if ((0x10U != (0x0000003fU 
                                       & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                            if ((0x14U != (0x0000003fU 
                                           & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                if ((0x18U != (0x0000003fU 
                                               & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                    if ((0x1cU != (0x0000003fU 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                        if ((0x2cU 
                                             != (0x0000003fU 
                                                 & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__be 
                                                = vlSelfRef.harvos_soc__DOT__bus_be;
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__new_word 
                                                = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__old_word 
                                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__retry_ctrl;
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout 
                                                = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__old_word;
                                            if ((1U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout 
                                                    = 
                                                    ((0xffffff00U 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout) 
                                                     | (0x000000ffU 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__new_word));
                                            }
                                            if ((2U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout 
                                                    = 
                                                    ((0xffff00ffU 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout) 
                                                     | (0x0000ff00U 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__new_word));
                                            }
                                            if ((4U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout 
                                                    = 
                                                    ((0xff00ffffU 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout) 
                                                     | (0x00ff0000U 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__new_word));
                                            }
                                            if ((8U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout 
                                                    = 
                                                    ((0x00ffffffU 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout) 
                                                     | (0xff000000U 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__new_word));
                                            }
                                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__retry_ctrl 
                                                = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__147__Vfuncout;
                                        }
                                        if ((0x2cU 
                                             == (0x0000003fU 
                                                 & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__be 
                                                = vlSelfRef.harvos_soc__DOT__bus_be;
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__new_word 
                                                = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__old_word 
                                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__token;
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout 
                                                = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__old_word;
                                            if ((1U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout 
                                                    = 
                                                    ((0xffffff00U 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout) 
                                                     | (0x000000ffU 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__new_word));
                                            }
                                            if ((2U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout 
                                                    = 
                                                    ((0xffff00ffU 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout) 
                                                     | (0x0000ff00U 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__new_word));
                                            }
                                            if ((4U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout 
                                                    = 
                                                    ((0xff00ffffU 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout) 
                                                     | (0x00ff0000U 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__new_word));
                                            }
                                            if ((8U 
                                                 & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__be))) {
                                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout 
                                                    = 
                                                    ((0x00ffffffU 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout) 
                                                     | (0xff000000U 
                                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__new_word));
                                            }
                                            __Vdly__harvos_soc__DOT__usb_host__DOT__token 
                                                = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__146__Vfuncout;
                                        }
                                    }
                                    if ((0x1cU == (0x0000003fU 
                                                   & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__be 
                                            = vlSelfRef.harvos_soc__DOT__bus_be;
                                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__new_word 
                                            = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__old_word 
                                            = vlSelfRef.harvos_soc__DOT__usb_host__DOT__command;
                                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout 
                                            = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__old_word;
                                        if ((1U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__be))) {
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout 
                                                = (
                                                   (0xffffff00U 
                                                    & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout) 
                                                   | (0x000000ffU 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__new_word));
                                        }
                                        if ((2U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__be))) {
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout 
                                                = (
                                                   (0xffff00ffU 
                                                    & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout) 
                                                   | (0x0000ff00U 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__new_word));
                                        }
                                        if ((4U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__be))) {
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout 
                                                = (
                                                   (0xff00ffffU 
                                                    & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout) 
                                                   | (0x00ff0000U 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__new_word));
                                        }
                                        if ((8U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__be))) {
                                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout 
                                                = (
                                                   (0x00ffffffU 
                                                    & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout) 
                                                   | (0xff000000U 
                                                      & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__new_word));
                                        }
                                        __Vdly__harvos_soc__DOT__usb_host__DOT__command 
                                            = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__145__Vfuncout;
                                    }
                                }
                            }
                            if ((0x14U == (0x0000003fU 
                                           & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__be 
                                    = vlSelfRef.harvos_soc__DOT__bus_be;
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__new_word 
                                    = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__old_word 
                                    = vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base;
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout 
                                    = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__old_word;
                                if ((1U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__be))) {
                                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout 
                                        = ((0xffffff00U 
                                            & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout) 
                                           | (0x000000ffU 
                                              & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__new_word));
                                }
                                if ((2U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__be))) {
                                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout 
                                        = ((0xffff00ffU 
                                            & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout) 
                                           | (0x0000ff00U 
                                              & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__new_word));
                                }
                                if ((4U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__be))) {
                                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout 
                                        = ((0xff00ffffU 
                                            & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout) 
                                           | (0x00ff0000U 
                                              & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__new_word));
                                }
                                if ((8U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__be))) {
                                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout 
                                        = ((0x00ffffffU 
                                            & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout) 
                                           | (0xff000000U 
                                              & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__new_word));
                                }
                                __Vdly__harvos_soc__DOT__usb_host__DOT__dma_base 
                                    = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__143__Vfuncout;
                            }
                        }
                    }
                    if ((0x0cU == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__be 
                            = vlSelfRef.harvos_soc__DOT__bus_be;
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__new_word 
                            = vlSelfRef.harvos_soc__DOT__bus_wdata;
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__old_word 
                            = vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_enable;
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout 
                            = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__old_word;
                        if ((1U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__be))) {
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout 
                                = ((0xffffff00U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout) 
                                   | (0x000000ffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__new_word));
                        }
                        if ((2U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__be))) {
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout 
                                = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout) 
                                   | (0x0000ff00U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__new_word));
                        }
                        if ((4U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__be))) {
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout 
                                = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout) 
                                   | (0x00ff0000U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__new_word));
                        }
                        if ((8U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__be))) {
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout 
                                = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout) 
                                   | (0xff000000U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__new_word));
                        }
                        __Vdly__harvos_soc__DOT__usb_host__DOT__irq_enable 
                            = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__142__Vfuncout;
                    }
                }
                if ((4U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__be 
                        = vlSelfRef.harvos_soc__DOT__bus_be;
                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__new_word 
                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                    if ((4U & vlSelfRef.harvos_soc__DOT__bus_wdata)) {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__done = 0U;
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault = 0U;
                        __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen = 0U;
                        __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status = 0U;
                    }
                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__old_word 
                        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl;
                    __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout 
                        = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__old_word;
                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__be))) {
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout 
                            = ((0xffffff00U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout) 
                               | (0x000000ffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__new_word));
                    }
                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__be))) {
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout 
                            = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout) 
                               | (0x0000ff00U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__new_word));
                    }
                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__be))) {
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout 
                            = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout) 
                               | (0x00ff0000U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__new_word));
                    }
                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__be))) {
                        __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout 
                            = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout) 
                               | (0xff000000U & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__new_word));
                    }
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__ctrl 
                        = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__141__Vfuncout;
                } else if ((0x0cU != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    if ((0x10U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                        __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                            = (vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status 
                               & (~ vlSelfRef.harvos_soc__DOT__bus_wdata));
                    } else if ((0x14U != (0x0000003fU 
                                          & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                        if ((0x18U == (0x0000003fU 
                                       & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__be 
                                = vlSelfRef.harvos_soc__DOT__bus_be;
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__new_word 
                                = vlSelfRef.harvos_soc__DOT__bus_wdata;
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__old_word 
                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len;
                            __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout 
                                = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__old_word;
                            if ((1U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__be))) {
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout 
                                    = ((0xffffff00U 
                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout) 
                                       | (0x000000ffU 
                                          & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__new_word));
                            }
                            if ((2U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__be))) {
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout 
                                    = ((0xffff00ffU 
                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout) 
                                       | (0x0000ff00U 
                                          & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__new_word));
                            }
                            if ((4U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__be))) {
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout 
                                    = ((0xff00ffffU 
                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout) 
                                       | (0x00ff0000U 
                                          & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__new_word));
                            }
                            if ((8U & (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__be))) {
                                __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout 
                                    = ((0x00ffffffU 
                                        & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout) 
                                       | (0xff000000U 
                                          & __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__new_word));
                            }
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__dma_total_len 
                                = __Vfunc_harvos_soc__DOT__usb_host__DOT__apply_wstrb__144__Vfuncout;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__hps_block__mmio_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
            if ((4U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__be 
                    = vlSelfRef.harvos_soc__DOT__bus_be;
                __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__new_word 
                    = vlSelfRef.harvos_soc__DOT__bus_wdata;
                __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__old_word 
                    = vlSelfRef.harvos_soc__DOT__hps_block__DOT__ctrl;
                __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout 
                    = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__old_word;
                if ((1U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__be))) {
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout 
                        = ((0xffffff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout) 
                           | (0x000000ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__new_word));
                }
                if ((2U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__be))) {
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout 
                        = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout) 
                           | (0x0000ff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__new_word));
                }
                if ((4U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__be))) {
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout 
                        = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout) 
                           | (0x00ff0000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__new_word));
                }
                if ((8U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__be))) {
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout 
                        = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout) 
                           | (0xff000000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__new_word));
                }
                __Vdly__harvos_soc__DOT__hps_block__DOT__ctrl 
                    = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__181__Vfuncout;
                if (vlSelfRef.harvos_soc__DOT__hps_block__DOT__clear_cmd) {
                    vlSelfRef.harvos_soc__DOT__hps_block__DOT__done = 0U;
                    vlSelfRef.harvos_soc__DOT__hps_block__DOT__fault = 0U;
                }
            } else if ((0x0cU != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                if ((0x10U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__be 
                        = vlSelfRef.harvos_soc__DOT__bus_be;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__new_word 
                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__old_word 
                        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_lo;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout 
                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__old_word;
                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout 
                            = ((0xffffff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout) 
                               | (0x000000ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__new_word));
                    }
                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout 
                            = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout) 
                               | (0x0000ff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__new_word));
                    }
                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout 
                            = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout) 
                               | (0x00ff0000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__new_word));
                    }
                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout 
                            = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout) 
                               | (0xff000000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__new_word));
                    }
                    __Vdly__harvos_soc__DOT__hps_block__DOT__lba_lo 
                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__182__Vfuncout;
                } else if ((0x14U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__be 
                        = vlSelfRef.harvos_soc__DOT__bus_be;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__new_word 
                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__old_word 
                        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_hi;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout 
                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__old_word;
                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout 
                            = ((0xffffff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout) 
                               | (0x000000ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__new_word));
                    }
                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout 
                            = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout) 
                               | (0x0000ff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__new_word));
                    }
                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout 
                            = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout) 
                               | (0x00ff0000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__new_word));
                    }
                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout 
                            = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout) 
                               | (0xff000000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__new_word));
                    }
                    __Vdly__harvos_soc__DOT__hps_block__DOT__lba_hi 
                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__183__Vfuncout;
                } else if ((0x18U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__be 
                        = vlSelfRef.harvos_soc__DOT__bus_be;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__new_word 
                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__old_word 
                        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__count;
                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout 
                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__old_word;
                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout 
                            = ((0xffffff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout) 
                               | (0x000000ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__new_word));
                    }
                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout 
                            = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout) 
                               | (0x0000ff00U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__new_word));
                    }
                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout 
                            = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout) 
                               | (0x00ff0000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__new_word));
                    }
                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__be))) {
                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout 
                            = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout) 
                               | (0xff000000U & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__new_word));
                    }
                    __Vdly__harvos_soc__DOT__hps_block__DOT__count 
                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__184__Vfuncout;
                }
            }
            if ((4U != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                if ((0x0cU != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                    if ((0x10U != (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                        if ((0x14U != (0x0000003fU 
                                       & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                            if ((0x18U != (0x0000003fU 
                                           & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                if ((0x1cU == (0x0000003fU 
                                               & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__be 
                                        = vlSelfRef.harvos_soc__DOT__bus_be;
                                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__new_word 
                                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__old_word 
                                        = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index;
                                    __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout 
                                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__old_word;
                                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__be))) {
                                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__new_word));
                                    }
                                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__be))) {
                                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__new_word));
                                    }
                                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__be))) {
                                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__new_word));
                                    }
                                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__be))) {
                                        __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__new_word));
                                    }
                                    __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index 
                                        = __Vfunc_harvos_soc__DOT__hps_block__DOT__apply_wstrb__185__Vfuncout;
                                } else if ((0x20U == 
                                            (0x0000003fU 
                                             & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                                    __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index 
                                        = ((IData)(2U) 
                                           + vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index);
                                }
                            }
                        }
                    }
                }
            }
        } else if ((((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__hps_block__mmio_req) 
                     & (~ (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) 
                    & (0x20U == (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
            __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index 
                = ((IData)(2U) + vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index);
        }
        if ((1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT____Vcellinp__fs_phy__port_power)) 
                   | (vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl 
                      >> 5U)))) {
            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 0U;
            __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer = 0U;
            vlSelfRef.usb_dp_drive_low = 0U;
            vlSelfRef.usb_dm_drive_low = 0U;
        } else if (((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state)) 
                    | (3U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state)))) {
            if ((IData)((((0U == (0x00000012U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl)) 
                          & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_valid)) 
                         & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_tx_ready)))) {
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift 
                    = vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_data;
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte 
                    = vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_tx_last;
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index = 0U;
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones = 0U;
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending = 0U;
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level = 1U;
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer = 0U;
                if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift = 0x80U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 1U;
                    vlSelfRef.usb_dp_drive_low = (1U 
                                                  & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                    vlSelfRef.usb_dm_drive_low = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                } else {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 2U;
                }
            } else if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                vlSelfRef.usb_dp_drive_low = 0U;
                vlSelfRef.usb_dm_drive_low = 0U;
            }
        } else {
            __Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__152__timer 
                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT____VlemCall_0__bit_tick_done 
                = (3U == (IData)(__Vfunc_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_tick_done__152__timer));
            if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT____VlemCall_0__bit_tick_done) {
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer = 0U;
                if ((4U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                    if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                        if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 0U;
                        } else {
                            vlSelfRef.usb_dp_drive_low 
                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                            vlSelfRef.usb_dm_drive_low 
                                = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                        vlSelfRef.usb_dp_drive_low = 1U;
                        vlSelfRef.usb_dm_drive_low = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 6U;
                    } else {
                        vlSelfRef.usb_dp_drive_low = 1U;
                        vlSelfRef.usb_dm_drive_low = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 5U;
                    }
                } else if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                    if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 0U;
                    } else if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending) {
                        __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__156__next_level 
                            = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level)));
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending = 0U;
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones = 0U;
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level 
                            = __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__156__next_level;
                        __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__157__level 
                            = __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__156__next_level;
                        if (__Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__157__level) {
                            vlSelfRef.usb_dp_drive_low 
                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                            vlSelfRef.usb_dm_drive_low 
                                = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                        } else {
                            vlSelfRef.usb_dp_drive_low 
                                = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                            vlSelfRef.usb_dm_drive_low 
                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__data_bit 
                            = (1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift));
                        __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__next_level 
                            = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level;
                        if ((1U & (~ (IData)(__Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__data_bit)))) {
                            __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__next_level 
                                = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level)));
                        }
                        if ((7U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index))) {
                            __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state 
                                = ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte)
                                    ? 4U : 3U);
                        } else {
                            __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index)));
                        }
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level 
                            = __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__next_level;
                        __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__161__level 
                            = __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__160__next_level;
                        if (__Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__161__level) {
                            vlSelfRef.usb_dp_drive_low 
                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                            vlSelfRef.usb_dm_drive_low 
                                = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                        } else {
                            vlSelfRef.usb_dp_drive_low 
                                = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                            vlSelfRef.usb_dm_drive_low 
                                = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                        }
                        if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift))) {
                            if ((5U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones))) {
                                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending = 1U;
                            }
                            __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones)));
                        } else {
                            __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones = 0U;
                        }
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift 
                            = (0x0000007fU & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift) 
                                              >> 1U));
                    }
                } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state))) {
                    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__data_bit 
                        = (1U & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift));
                    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__next_level 
                        = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level;
                    if ((1U & (~ (IData)(__Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__data_bit)))) {
                        __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__next_level 
                            = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level)));
                    }
                    if ((7U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index))) {
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index = 0U;
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 2U;
                    } else {
                        __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index)));
                    }
                    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level 
                        = __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__next_level;
                    __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__165__level 
                        = __Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_nrzi__164__next_level;
                    if (__Vtask_harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__drive_level__165__level) {
                        vlSelfRef.usb_dp_drive_low 
                            = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                        vlSelfRef.usb_dm_drive_low 
                            = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                    } else {
                        vlSelfRef.usb_dp_drive_low 
                            = (1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed)));
                        vlSelfRef.usb_dm_drive_low 
                            = vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_low_speed;
                    }
                    __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift 
                        = (0x0000007fU & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift) 
                                          >> 1U));
                } else {
                    vlSelfRef.__Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_state = 0U;
                }
            } else {
                __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer)));
            }
        }
        if (vlSelfRef.harvos_soc__DOT__net_card__DOT__ring_push_last) {
            vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ready_latched = 1U;
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__net_card__mmio_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
            if ((0x00000020U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                    >> 4U))))) {
                    if ((8U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                        if ((4U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 1U))))) {
                                if ((1U & (~ (0x0000003fU 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__be 
                                        = vlSelfRef.harvos_soc__DOT__bus_be;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__new_word 
                                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__old_word 
                                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_hi;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__old_word;
                                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__new_word));
                                    }
                                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__new_word));
                                    }
                                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__new_word));
                                    }
                                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__new_word));
                                    }
                                    __Vdly__harvos_soc__DOT__net_card__DOT__mac_hi 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__114__Vfuncout;
                                }
                            }
                        }
                        if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                            >> 2U))))) {
                            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 1U))))) {
                                if ((1U & (~ (0x0000003fU 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__be 
                                        = vlSelfRef.harvos_soc__DOT__bus_be;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__new_word 
                                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__old_word 
                                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_lo;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__old_word;
                                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__new_word));
                                    }
                                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__new_word));
                                    }
                                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__new_word));
                                    }
                                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__new_word));
                                    }
                                    __Vdly__harvos_soc__DOT__net_card__DOT__mac_lo 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__115__Vfuncout;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                >> 5U))))) {
                if ((0x00000010U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                    if ((8U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                        if ((4U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 1U))))) {
                                if ((1U & (~ (0x0000003fU 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__be 
                                        = vlSelfRef.harvos_soc__DOT__bus_be;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__new_word 
                                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__old_word 
                                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__command;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__old_word;
                                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__new_word));
                                    }
                                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__new_word));
                                    }
                                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__new_word));
                                    }
                                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__new_word));
                                    }
                                    __Vdly__harvos_soc__DOT__net_card__DOT__command 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__118__Vfuncout;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                        >> 3U))))) {
                        if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                            >> 2U))))) {
                            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 1U))))) {
                                if ((1U & (~ (0x0000003fU 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                    if ((0x00000010U 
                                         & vlSelfRef.harvos_soc__DOT__bus_wdata)) {
                                        vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ready_latched = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                    >> 4U))))) {
                    if ((8U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                        if ((4U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 1U))))) {
                                if ((1U & (~ (0x0000003fU 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__be 
                                        = vlSelfRef.harvos_soc__DOT__bus_be;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__new_word 
                                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__old_word 
                                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_enable;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__old_word;
                                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__new_word));
                                    }
                                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__new_word));
                                    }
                                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__new_word));
                                    }
                                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__new_word));
                                    }
                                    __Vdly__harvos_soc__DOT__net_card__DOT__irq_enable 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__121__Vfuncout;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                        >> 3U))))) {
                        if ((4U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 1U))))) {
                                if ((1U & (~ (0x0000003fU 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__be 
                                        = vlSelfRef.harvos_soc__DOT__bus_be;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__new_word 
                                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__old_word 
                                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__old_word;
                                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__new_word));
                                    }
                                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__new_word));
                                    }
                                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__new_word));
                                    }
                                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__new_word));
                                    }
                                    __Vdly__harvos_soc__DOT__net_card__DOT__ctrl 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__122__Vfuncout;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant0) 
             | (IData)(vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant1))) {
            vlSelfRef.harvos_soc__DOT__smp_bus__DOT__last_grant 
                = vlSelfRef.harvos_soc__DOT__smp_bus__DOT__grant1;
        }
        if (vlSelfRef.harvos_soc__DOT__hps_block__DOT__clear_cmd) {
            vlSelfRef.hps_sd_rd = 0U;
            vlSelfRef.hps_sd_wr = 0U;
            __Vdly__harvos_soc__DOT__hps_block__DOT__busy = 0U;
        } else if (((vlSelfRef.harvos_soc__DOT__bus_wdata 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
                    & (~ (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__busy)))) {
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__done = 0U;
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__write_op 
                = (1U & (vlSelfRef.harvos_soc__DOT__bus_wdata 
                         >> 1U));
            __Vdly__harvos_soc__DOT__hps_block__DOT__active_drive 
                = vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive;
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__fault = 0U;
            if ((1U & (((((~ (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_mounted)) 
                          | ((vlSelfRef.harvos_soc__DOT__bus_wdata 
                              >> 1U) & (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__selected_readonly))) 
                         | (0U == vlSelfRef.harvos_soc__DOT__hps_block__DOT__count)) 
                        | (0x00000040U < vlSelfRef.harvos_soc__DOT__hps_block__DOT__count)) 
                       | (0U != vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_hi)))) {
                vlSelfRef.harvos_soc__DOT__hps_block__DOT__fault = 1U;
                vlSelfRef.harvos_soc__DOT__hps_block__DOT__done = 1U;
            } else {
                __Vdly__harvos_soc__DOT__hps_block__DOT__busy = 1U;
                __VdlyVal__hps_sd_lba__v2 = vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_lo;
                __VdlyDim0__hps_sd_lba__v2 = vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive;
                __VdlySet__hps_sd_lba__v2 = 1U;
                __VdlyVal__hps_sd_blk_cnt__v2 = (0x0000003fU 
                                                 & (vlSelfRef.harvos_soc__DOT__hps_block__DOT__count 
                                                    - (IData)(1U)));
                __VdlyDim0__hps_sd_blk_cnt__v2 = vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive;
                if ((2U & vlSelfRef.harvos_soc__DOT__bus_wdata)) {
                    vlSelfRef.hps_sd_wr = ((IData)(vlSelfRef.hps_sd_wr) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive))));
                } else {
                    vlSelfRef.hps_sd_rd = ((IData)(vlSelfRef.hps_sd_rd) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               << (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__drive))));
                }
            }
        } else if (((IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__busy) 
                    & ((IData)(vlSelfRef.hps_sd_ack) 
                       >> (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__active_drive)))) {
            vlSelfRef.hps_sd_rd = ((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__active_drive))) 
                                   & (IData)(vlSelfRef.hps_sd_rd));
            __Vdly__harvos_soc__DOT__hps_block__DOT__busy = 0U;
            vlSelfRef.harvos_soc__DOT__hps_block__DOT__done = 1U;
            vlSelfRef.hps_sd_wr = ((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.harvos_soc__DOT__hps_block__DOT__active_drive))) 
                                   & (IData)(vlSelfRef.hps_sd_wr));
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up) 
             != (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_prev))) {
            __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                = (8U | vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
        }
        if (((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__net_card__mmio_req) 
             & (IData)(vlSelfRef.harvos_soc__DOT__bus_we))) {
            if ((0x00000020U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                    >> 4U))))) {
                    if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                        >> 3U))))) {
                        if ((4U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                            if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                >> 1U))))) {
                                if ((1U & (~ (0x0000003fU 
                                              & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__be 
                                        = vlSelfRef.harvos_soc__DOT__bus_be;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__new_word 
                                        = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__old_word 
                                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len;
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__old_word;
                                    if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__new_word));
                                    }
                                    if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__new_word));
                                    }
                                    if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__new_word));
                                    }
                                    if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__be))) {
                                        __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__new_word));
                                    }
                                    __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_len 
                                        = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__116__Vfuncout;
                                }
                            }
                        } else if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                                   >> 1U))))) {
                            if ((1U & (~ (0x0000003fU 
                                          & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__be 
                                    = vlSelfRef.harvos_soc__DOT__bus_be;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__new_word 
                                    = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__old_word 
                                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_base;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__old_word;
                                if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout 
                                        = ((0xffffff00U 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout) 
                                           | (0x000000ffU 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__new_word));
                                }
                                if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout 
                                        = ((0xffff00ffU 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout) 
                                           | (0x0000ff00U 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__new_word));
                                }
                                if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout 
                                        = ((0xff00ffffU 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout) 
                                           | (0x00ff0000U 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__new_word));
                                }
                                if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout 
                                        = ((0x00ffffffU 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout) 
                                           | (0xff000000U 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__new_word));
                                }
                                __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_base 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__117__Vfuncout;
                            }
                        }
                    }
                }
            } else if ((0x00000010U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                if ((8U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                    if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                        >> 2U))))) {
                        if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                            >> 1U))))) {
                            if ((1U & (~ (0x0000003fU 
                                          & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__be 
                                    = vlSelfRef.harvos_soc__DOT__bus_be;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__new_word 
                                    = vlSelfRef.harvos_soc__DOT__bus_wdata;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__old_word 
                                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_len;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__old_word;
                                if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout 
                                        = ((0xffffff00U 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout) 
                                           | (0x000000ffU 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__new_word));
                                }
                                if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout 
                                        = ((0xffff00ffU 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout) 
                                           | (0x0000ff00U 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__new_word));
                                }
                                if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout 
                                        = ((0xff00ffffU 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout) 
                                           | (0x00ff0000U 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__new_word));
                                }
                                if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__be))) {
                                    __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout 
                                        = ((0x00ffffffU 
                                            & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout) 
                                           | (0xff000000U 
                                              & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__new_word));
                                }
                                __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_len 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__119__Vfuncout;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.harvos_soc__DOT__bus_addr)) {
                    if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                        >> 1U))))) {
                        if ((1U & (~ (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                            __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__be 
                                = vlSelfRef.harvos_soc__DOT__bus_be;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__new_word 
                                = vlSelfRef.harvos_soc__DOT__bus_wdata;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__old_word 
                                = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_base;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__old_word;
                            if ((1U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__be))) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout 
                                    = ((0xffffff00U 
                                        & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout) 
                                       | (0x000000ffU 
                                          & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__new_word));
                            }
                            if ((2U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__be))) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout 
                                    = ((0xffff00ffU 
                                        & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout) 
                                       | (0x0000ff00U 
                                          & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__new_word));
                            }
                            if ((4U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__be))) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout 
                                    = ((0xff00ffffU 
                                        & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout) 
                                       | (0x00ff0000U 
                                          & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__new_word));
                            }
                            if ((8U & (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__be))) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout 
                                    = ((0x00ffffffU 
                                        & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout) 
                                       | (0xff000000U 
                                          & __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__new_word));
                            }
                            __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_base 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__apply_wstrb__120__Vfuncout;
                        }
                    }
                } else if ((1U & (~ (1U & (vlSelfRef.harvos_soc__DOT__bus_addr 
                                           >> 1U))))) {
                    if ((1U & (~ (0x0000003fU & vlSelfRef.harvos_soc__DOT__bus_addr)))) {
                        __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                            = (vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status 
                               & (~ vlSelfRef.harvos_soc__DOT__bus_wdata));
                    }
                }
            }
        }
        if (vlSelfRef.harvos_soc__DOT__net_card__DOT__clear_ctrl) {
            vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ready_latched = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__irq_status = 0U;
            vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 0U;
            vlSelfRef.harvos_soc__DOT__net_card__DOT__fault = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__progress = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_head = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_tail = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum = 0U;
            __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len = 0U;
        } else if (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx) 
                    | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx))) {
            if (vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx) {
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_len;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_base 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_base;
            } else {
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_base 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_base;
            }
            __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__len 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len;
            __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__base 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_base;
            __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_start 
                = (QData)((IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__base));
            __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_end 
                = (0x00000001ffffffffULL & (__Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_start 
                                            + (QData)((IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__len))));
            vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_0__dma_range_ok 
                = (((((0U != __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__len) 
                      & (0x00000800U >= __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__len)) 
                     & (__Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_end 
                        > __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_start)) 
                    & (0x0000000000000500ULL <= __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_start)) 
                   & (0x0000000000000d00ULL >= __Vfunc_harvos_soc__DOT__net_card__DOT__dma_range_ok__123__dma_end));
            if ((1U & ((((((~ vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl) 
                           | (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__link_up))) 
                          | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy)) 
                         | ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx) 
                            & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx))) 
                        | (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx) 
                            & (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                               >> 6U)) & (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_ring_ready)))) 
                       | (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_0__dma_range_ok))))) {
                if (vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx) {
                    __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_fault_count 
                        = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_start_fault_count);
                }
                __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                    = (4U | vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
                __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 0U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__fault = 1U;
            } else {
                __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                    = (0xfffffff8U & vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
                __Vdly__harvos_soc__DOT__net_card__DOT__busy = 1U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 0U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__fault = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__rx_op 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx;
                __Vdly__harvos_soc__DOT__net_card__DOT__progress = 0U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__frame_len = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active 
                    = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx) 
                       & (IData)((0U != (0x00000060U 
                                         & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl))));
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active 
                    = ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx) 
                       & (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                          >> 6U));
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_load_desc 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_tail;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state 
                    = (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_tx) 
                        & (IData)((0U != (0x00000060U 
                                          & vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl))))
                        ? 1U : 0U);
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_word_count 
                    = (0x000003ffU & ((0x000001ffU 
                                       & (vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len 
                                          >> 2U)) + 
                                      (0U != (3U & vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len))));
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__digest 
                    = (0x484e4554U ^ (vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk1__DOT__requested_len 
                                      ^ ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__start_rx)
                                          ? 0x52580000U
                                          : 0x54580000U)));
            }
        } else if (((((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
                      & (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op))) 
                     & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)) 
                    & (2U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state)))) {
            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__124__word 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[4U];
            vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_1__tx_buf_byte 
                = (0x000000ffU & __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__124__word);
            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__125__word 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[4U];
            vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_2__tx_buf_byte 
                = (0x000000ffU & (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__125__word 
                                  >> 8U));
            vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__total_len 
                = (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_1__tx_buf_byte) 
                    << 8U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_2__tx_buf_byte));
            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__126__word 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[3U];
            vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_3__tx_buf_byte 
                = (0x000000ffU & __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__126__word);
            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__127__word 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[3U];
            vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_4__tx_buf_byte 
                = (0x000000ffU & (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__127__word 
                                  >> 8U));
            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__128__word 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[3U];
            vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_5__tx_buf_byte 
                = (0x000000ffU & (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__128__word 
                                  >> 0x10U));
            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__129__word 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[5U];
            vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_6__tx_buf_byte 
                = (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_buf_byte__129__word 
                   >> 0x18U);
            if (((((((0x00000036U <= vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len) 
                     & (0x0800U == (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_3__tx_buf_byte) 
                                     << 8U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_4__tx_buf_byte)))) 
                    & (0x45U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_5__tx_buf_byte))) 
                   & (6U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_6__tx_buf_byte))) 
                  & (vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
                     >> 5U)) & (0x0028U <= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__total_len)))) {
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__sum 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ip_sum;
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__folded 
                    = ((0x0000ffffU & __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__sum) 
                       + VL_SHIFTR_III(32,32,32, __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__sum, 0x00000010U));
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__folded 
                    = ((0x0000ffffU & __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__folded) 
                       + VL_SHIFTR_III(32,32,32, __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__folded, 0x00000010U));
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__Vfuncout 
                    = (0x0000ffffU & (~ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__folded));
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_sum 
                    = __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__130__Vfuncout;
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__sum 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_tcp_sum;
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__folded 
                    = ((0x0000ffffU & __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__sum) 
                       + VL_SHIFTR_III(32,32,32, __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__sum, 0x00000010U));
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__folded 
                    = ((0x0000ffffU & __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__folded) 
                       + VL_SHIFTR_III(32,32,32, __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__folded, 0x00000010U));
                __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__Vfuncout 
                    = (0x0000ffffU & (~ __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__folded));
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_sum 
                    = __Vfunc_harvos_soc__DOT__net_card__DOT__checksum_fold__131__Vfuncout;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_word 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[6U];
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_word 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[12U];
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_word 
                    = ((0xffff0000U & vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_word) 
                       | ((0x0000ff00U & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_sum) 
                                          << 8U)) | 
                          (0x000000ffU & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_sum) 
                                          >> 8U))));
                vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_word 
                    = ((0x0000ffffU & vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_word) 
                       | (((0x0000ff00U & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_sum) 
                                           << 8U)) 
                           | (0x000000ffU & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_sum) 
                                             >> 8U))) 
                          << 0x00000010U));
                __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_word;
                __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0 = 1U;
                __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v1 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_word;
                if (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_submit_active) {
                    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0 
                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_word;
                    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0 
                        = (6U | ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_load_desc) 
                                 << 9U));
                    __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0 = 1U;
                    __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1 
                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_word;
                    __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1 
                        = (0x000cU | ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_load_desc) 
                                      << 9U));
                }
                __Vdly__harvos_soc__DOT__net_card__DOT__digest 
                    = (vlSelfRef.harvos_soc__DOT__net_card__DOT__digest 
                       ^ (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__ip_sum) 
                           << 0x00000010U) | (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk2__DOT__tcp_sum)));
            }
            if (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_submit_active) {
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_tail 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_tail)));
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count)));
                __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0 
                    = (0x0000ffffU & vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len);
                __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_load_desc;
                __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0 = 1U;
                __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 1U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__progress = 0U;
                __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_word_count;
                __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_load_desc;
                __VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0 = 1U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__frame_len 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len;
            } else {
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state = 3U;
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word = 0U;
                __Vdly__harvos_soc__DOT__net_card__DOT__progress = 0U;
            }
        } else if (((((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
                      & (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op))) 
                     & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)) 
                    & (3U == (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state)))) {
            if (vlSelfRef.net_tx_ready) {
                __Vdly__harvos_soc__DOT__net_card__DOT__progress 
                    = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__progress);
                vlSelfRef.harvos_soc__DOT__net_card__DOT__last_tx_word 
                    = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data
                    [(0x000001ffU & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word))];
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word)));
                if (((0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word))) 
                     >= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_word_count))) {
                    __Vdly__harvos_soc__DOT__net_card__DOT__tx_count 
                        = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count);
                    __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                        = (2U | vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
                    __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0U;
                    vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 1U;
                    vlSelfRef.harvos_soc__DOT__net_card__DOT__frame_len 
                        = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len;
                    __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state = 0U;
                    __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active = 0U;
                    __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active = 0U;
                }
            }
        } else if (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ready) 
                    & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_valid))) {
            vlSelfRef.harvos_soc__DOT__net_card__DOT__last_tx_word 
                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_data
                [(((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_head) 
                   << 9U) | (0x000001ffU & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_word)))];
            if (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_last) {
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_head 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_head)));
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count 
                    = (0x0000000fU & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count) 
                                      - (IData)(1U)));
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_count 
                    = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count);
                __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                    = (2U | vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word = 0U;
            } else {
                __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_word)));
            }
        } else if (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__busy) 
                    & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__dma_step))) {
            if ((1U & (((IData)(vlSelfRef.harvos_soc__DOT__net_dma_fault) 
                        | (~ (IData)(vlSelfRef.harvos_soc__DOT__net_dma_allow))) 
                       | ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op) 
                          & (IData)(vlSelfRef.net_rx_error))))) {
                __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                    = (4U | vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
                __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 0U;
                vlSelfRef.harvos_soc__DOT__net_card__DOT__fault = 1U;
            } else {
                __Vdly__harvos_soc__DOT__net_card__DOT__digest 
                    = (vlSelfRef.harvos_soc__DOT__net_card__DOT__digest 
                       ^ (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)
                            ? vlSelfRef.harvos_soc__DOT__net_card__DOT__selected_rx_word
                            : vlSelfRef.harvos_soc__DOT__dma_rdata) 
                          ^ ((vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
                              << 0x00000010U) | (0x0000ffffU 
                                                 & vlSelfRef.harvos_soc__DOT__net_card__DOT__active_len))));
                if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)))) {
                    if (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active) {
                        vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__loaded_total_len 
                            = ((0x0000ff00U & (vlSelfRef.harvos_soc__DOT__dma_rdata 
                                               << 8U)) 
                               | (0x000000ffU & (vlSelfRef.harvos_soc__DOT__dma_rdata 
                                                 >> 8U)));
                        if ((0x00000010U == vlSelfRef.harvos_soc__DOT__net_card__DOT__progress)) {
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__total_len 
                                = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__loaded_total_len;
                            __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len 
                                = vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__loaded_total_len;
                        } else {
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__total_len 
                                = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_total_len;
                        }
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__word 
                            = vlSelfRef.harvos_soc__DOT__dma_rdata;
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__base 
                            = vlSelfRef.harvos_soc__DOT__net_card__DOT__progress;
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum = 0U;
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__frame_end 
                            = ((IData)(0x0000000eU) 
                               + (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__total_len));
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off 
                            = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__base;
                        if (((VL_LTES_III(32, 0x0000001aU, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off) 
                              & VL_GTS_III(32, 0x00000022U, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off)) 
                             | ((((0x0028U <= (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__total_len)) 
                                  & VL_LTES_III(32, 0x00000022U, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off)) 
                                 & VL_LTS_III(32, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__frame_end)) 
                                & (0x00000032U != __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off)))) {
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__valid_end 
                                = (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__frame_end 
                                   - __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__base);
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__byte_index = 0U;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__Vfuncout 
                                = (0x000000ffU & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__word);
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__hi 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__Vfuncout;
                            if (VL_LTS_III(32, 1U, __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__valid_end)) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index 
                                    = ((IData)(1U) 
                                       + __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__byte_index);
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0U == (3U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index))
                                           ? __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word
                                           : ((1U == 
                                               (3U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index))
                                               ? (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                                  >> 8U)
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index))
                                                   ? 
                                                  (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                                   >> 0x10U)
                                                   : 
                                                  (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                                   >> 0x18U)))));
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCall_0__word_byte 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__Vfuncout;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCall_0__word_byte;
                            } else {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1 = 0U;
                            }
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__lo 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__Vfuncout 
                                = (((IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__hi) 
                                    << 8U) | (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__lo));
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132____VlefCall_0__word_half_be 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum 
                                = (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum 
                                   + (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132____VlefCall_0__word_half_be));
                        }
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off 
                            = ((IData)(2U) + __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__base);
                        if (((VL_LTES_III(32, 0x0000001aU, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off) 
                              & VL_GTS_III(32, 0x00000022U, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off)) 
                             | ((((0x0028U <= (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__total_len)) 
                                  & VL_LTES_III(32, 0x00000022U, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off)) 
                                 & VL_LTS_III(32, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__frame_end)) 
                                & (0x00000032U != __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__off)))) {
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__valid_end 
                                = (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__frame_end 
                                   - __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__base);
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__byte_index = 2U;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__Vfuncout 
                                = (0x000000ffU & (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__word 
                                                  >> 0x10U));
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__hi 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__134__Vfuncout;
                            if (VL_LTS_III(32, 3U, __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__valid_end)) {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index 
                                    = ((IData)(1U) 
                                       + __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__byte_index);
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__word;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0U == (3U 
                                                  & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index))
                                           ? __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word
                                           : ((1U == 
                                               (3U 
                                                & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index))
                                               ? (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                                  >> 8U)
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__byte_index))
                                                   ? 
                                                  (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                                   >> 0x10U)
                                                   : 
                                                  (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__word 
                                                   >> 0x18U)))));
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCall_0__word_byte 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__135__Vfuncout;
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1 
                                    = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCall_0__word_byte;
                            } else {
                                __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1 = 0U;
                            }
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__lo 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133____VlefCond_1;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__Vfuncout 
                                = (((IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__hi) 
                                    << 8U) | (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__lo));
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132____VlefCall_0__word_half_be 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__133__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum 
                                = (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum 
                                   + (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132____VlefCall_0__word_half_be));
                        }
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__Vfuncout 
                            = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__sum;
                        vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__tcp_add 
                            = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_tcp_sum__132__Vfuncout;
                        __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2 
                            = vlSelfRef.harvos_soc__DOT__dma_rdata;
                        __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2 
                            = (0x000001ffU & (vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
                                              >> 2U));
                        __VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2 = 1U;
                        if (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_submit_active) {
                            __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2 
                                = vlSelfRef.harvos_soc__DOT__dma_rdata;
                            __VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2 
                                = (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_load_desc) 
                                    << 9U) | (0x000001ffU 
                                              & (vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
                                                 >> 2U)));
                            __VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2 = 1U;
                        }
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__word 
                            = vlSelfRef.harvos_soc__DOT__dma_rdata;
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__base 
                            = vlSelfRef.harvos_soc__DOT__net_card__DOT__progress;
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum = 0U;
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off 
                            = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__base;
                        if (((VL_LTES_III(32, 0x0000000eU, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off) 
                              & VL_GTS_III(32, 0x00000022U, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off)) 
                             & (0x00000018U != __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off))) {
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__Vfuncout 
                                = (0x000000ffU & __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__word);
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__hi 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__Vfuncout 
                                = (0x000000ffU & (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__word 
                                                  >> 8U));
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCall_0__word_byte 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCond_1 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCall_0__word_byte;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__lo 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCond_1;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__Vfuncout 
                                = (((IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__hi) 
                                    << 8U) | (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__lo));
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136____VlefCall_0__word_half_be 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum 
                                = (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum 
                                   + (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136____VlefCall_0__word_half_be));
                        }
                        __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off 
                            = ((IData)(2U) + __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__base);
                        if (((VL_LTES_III(32, 0x0000000eU, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off) 
                              & VL_GTS_III(32, 0x00000022U, __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off)) 
                             & (0x00000018U != __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__off))) {
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__Vfuncout 
                                = (0x000000ffU & (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__word 
                                                  >> 0x10U));
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__hi 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__138__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__word 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__word;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__Vfuncout 
                                = (__Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__word 
                                   >> 0x18U);
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCall_0__word_byte 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_byte__139__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCond_1 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCall_0__word_byte;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__lo 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137____VlefCond_1;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__Vfuncout 
                                = (((IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__hi) 
                                    << 8U) | (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__lo));
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136____VlefCall_0__word_half_be 
                                = __Vfunc_harvos_soc__DOT__net_card__DOT__word_half_be__137__Vfuncout;
                            __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum 
                                = (__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum 
                                   + (IData)(__Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136____VlefCall_0__word_half_be));
                        }
                        vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_7__tx_word_ip_sum 
                            = __Vfunc_harvos_soc__DOT__net_card__DOT__tx_word_ip_sum__136__sum;
                        __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum 
                            = (vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ip_sum 
                               + vlSelfRef.harvos_soc__DOT__net_card__DOT____VlemCall_7__tx_word_ip_sum);
                        __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum 
                            = ((vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_tcp_sum 
                                + vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__tcp_add) 
                               + (((0x00000010U == vlSelfRef.harvos_soc__DOT__net_card__DOT__progress) 
                                   & (0x0028U <= (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__loaded_total_len)))
                                   ? ((IData)(6U) + 
                                      (0x0000ffffU 
                                       & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__unnamedblk3__DOT__loaded_total_len) 
                                          - (IData)(0x0014U))))
                                   : 0U));
                    } else {
                        vlSelfRef.harvos_soc__DOT__net_card__DOT__last_tx_word 
                            = vlSelfRef.harvos_soc__DOT__dma_rdata;
                    }
                }
                if (((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op) 
                     & (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)))) {
                    __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_rd 
                        = (0x00000fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd)));
                }
                __Vdly__harvos_soc__DOT__net_card__DOT__progress 
                    = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__progress);
                if (((4U >= vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining) 
                     | ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op) 
                        & ((IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__direct_rx_mode)
                            ? ((IData)(vlSelfRef.net_rx_valid)
                                ? (IData)(vlSelfRef.net_rx_last)
                                : (4U >= vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining))
                            : vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_last
                           [vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd])))) {
                    if (((~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op)) 
                         & (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active))) {
                        __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state = 2U;
                        __Vdly__harvos_soc__DOT__net_card__DOT__progress 
                            = vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len;
                    } else {
                        __Vdly__harvos_soc__DOT__net_card__DOT__busy = 0U;
                        vlSelfRef.harvos_soc__DOT__net_card__DOT__done = 1U;
                        vlSelfRef.harvos_soc__DOT__net_card__DOT__frame_len 
                            = (vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
                               + ((4U >= vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining)
                                   ? vlSelfRef.harvos_soc__DOT__net_card__DOT__remaining
                                   : 4U));
                    }
                    if (vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op) {
                        __Vdly__harvos_soc__DOT__net_card__DOT__rx_count 
                            = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_count);
                        __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                            = (1U | vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
                    } else if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active)))) {
                        __Vdly__harvos_soc__DOT__net_card__DOT__tx_count 
                            = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count);
                        __Vdly__harvos_soc__DOT__net_card__DOT__irq_status 
                            = (2U | vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status);
                    }
                }
            }
        }
        if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__port_overcurrent) {
            __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                = (0x00000012U | vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status);
            __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault = 1U;
        } else if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_cmd) 
                    & ((((~ vlSelfRef.harvos_soc__DOT__usb_host__DOT__ctrl) 
                         | (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__connected))) 
                        | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy)) 
                       | (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_request_ok))))) {
            if ((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy)))) {
                __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                    = (2U | vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status);
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__done = 0U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault = 1U;
            }
        } else if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__start_transfer) {
            __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                = (0xffffffe0U & vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status);
            __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 1U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__done = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault = 0U;
            __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen = 0U;
            __Vdly__harvos_soc__DOT__usb_host__DOT__dma_progress = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__actual_len = 0U;
        } else if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy) 
                    & ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_fault) 
                       | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_fault)))) {
            __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                = (2U | ((vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status 
                          | ((3U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake))
                              ? 4U : 0U)) | ((2U == (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_handshake))
                                              ? 8U : 0U)));
            __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 0U;
            vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault = 1U;
        } else if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy) {
            if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active) {
                if ((1U & (((IData)(vlSelfRef.harvos_soc__DOT__dma_fault) 
                            & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active)) 
                           | (~ ((IData)(vlSelfRef.harvos_soc__DOT__dma_allow) 
                                 & (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_active)))))) {
                    __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                        = (2U | vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status);
                    __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 0U;
                    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fault = 1U;
                } else {
                    __Vdly__harvos_soc__DOT__usb_host__DOT__dma_progress 
                        = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress);
                    if ((4U >= (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len 
                                - vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress))) {
                        vlSelfRef.harvos_soc__DOT__usb_host__DOT__actual_len 
                            = ((0U != (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len))
                                ? (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len)
                                : vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len);
                        if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_done_seen) 
                             | (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done))) {
                            __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                                = (1U | vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status);
                            __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 0U;
                            vlSelfRef.harvos_soc__DOT__usb_host__DOT__done = 1U;
                        }
                    }
                }
            } else if (((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_done_seen) 
                        | ((IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done) 
                           & ((0U == vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len) 
                              | (vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress 
                                 >= vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len))))) {
                __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status 
                    = (1U | vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status);
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__actual_len 
                    = ((0U != (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len))
                        ? (IData)(vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_actual_len)
                        : vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_total_len);
                __Vdly__harvos_soc__DOT__usb_host__DOT__busy = 0U;
                vlSelfRef.harvos_soc__DOT__usb_host__DOT__done = 1U;
            }
            if (vlSelfRef.harvos_soc__DOT__usb_host__DOT__pe_done) {
                __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen = 1U;
            }
        }
        vlSelfRef.harvos_soc__DOT__imem_loader_wr = 0U;
        if ((((vlSelfRef.harvos_soc__DOT__bus_wdata 
               >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
             & (~ (IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__locked)))) {
            vlSelfRef.harvos_soc__DOT__imem_loader__DOT__fault = 0U;
            vlSelfRef.harvos_soc__DOT__imem_loader__DOT__done = 0U;
        }
        if ((((IData)(vlSelfRef.harvos_soc__DOT____Vcellinp__imem_loader__mmio_req) 
              & (IData)(vlSelfRef.harvos_soc__DOT__bus_we)) 
             & (~ (IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__locked)))) {
            if ((8U == (0x0000000fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__be 
                    = vlSelfRef.harvos_soc__DOT__bus_be;
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__new_word 
                    = vlSelfRef.harvos_soc__DOT__bus_wdata;
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__old_word 
                    = vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr;
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout 
                    = __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__old_word;
                if ((1U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout 
                        = ((0xffffff00U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout) 
                           | (0x000000ffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__new_word));
                }
                if ((2U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout 
                        = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout) 
                           | (0x0000ff00U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__new_word));
                }
                if ((4U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout 
                        = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout) 
                           | (0x00ff0000U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__new_word));
                }
                if ((8U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout 
                        = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout) 
                           | (0xff000000U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__new_word));
                }
                vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__target_addr 
                    = __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__112__Vfuncout;
            } else if ((0x0cU == (0x0000000fU & vlSelfRef.harvos_soc__DOT__bus_addr))) {
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__be 
                    = vlSelfRef.harvos_soc__DOT__bus_be;
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__new_word 
                    = vlSelfRef.harvos_soc__DOT__bus_wdata;
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__old_word 
                    = vlSelfRef.harvos_soc__DOT__imem_loader__DOT__data_word;
                __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout 
                    = __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__old_word;
                if ((1U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout 
                        = ((0xffffff00U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout) 
                           | (0x000000ffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__new_word));
                }
                if ((2U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout 
                        = ((0xffff00ffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout) 
                           | (0x0000ff00U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__new_word));
                }
                if ((4U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout 
                        = ((0xff00ffffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout) 
                           | (0x00ff0000U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__new_word));
                }
                if ((8U & (IData)(__Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__be))) {
                    __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout 
                        = ((0x00ffffffU & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout) 
                           | (0xff000000U & __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__new_word));
                }
                vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__data_word 
                    = __Vfunc_harvos_soc__DOT__imem_loader__DOT__apply_wstrb__113__Vfuncout;
            }
        }
        if ((vlSelfRef.harvos_soc__DOT__bus_wdata & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))) {
            if ((1U & ((IData)(vlSelfRef.harvos_soc__DOT__imem_loader__DOT__locked) 
                       | (~ ((0U == (3U & vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr)) 
                             & (0x00057e40U > (vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr 
                                               >> 2U))))))) {
                vlSelfRef.harvos_soc__DOT__imem_loader__DOT__fault = 1U;
                vlSelfRef.harvos_soc__DOT__imem_loader__DOT__done = 0U;
            } else {
                vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__target_addr 
                    = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__imem_loader__DOT__target_addr);
                vlSelfRef.__Vdly__harvos_soc__DOT__imem_loader__DOT__write_count 
                    = ((IData)(1U) + vlSelfRef.harvos_soc__DOT__imem_loader__DOT__write_count);
                vlSelfRef.harvos_soc__DOT__imem_loader_wr = 1U;
                vlSelfRef.harvos_soc__DOT__imem_loader__DOT__done = 1U;
                vlSelfRef.harvos_soc__DOT__imem_loader__DOT__fault = 0U;
            }
        }
        vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v32 = 1U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__tlb_flush = 0U;
        if ((4U & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))) {
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))) {
                if ((0U == vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_count)) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                        = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                } else if ((0U != (3U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr))) {
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__275__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 6U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__275__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                } else if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow) {
                    if ((1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_allow)) 
                               | (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmio)))) {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__276__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 7U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__276__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    } else if (vlSelfRef.harvos_soc__DOT__d_ready1) {
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_addr 
                            = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr);
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_count 
                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_count 
                               - (IData)(1U));
                    } else {
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 5U;
                    }
                } else {
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__clr_addr;
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__cause 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                    vlSelfRef.harvos_soc__DOT__debug_trap1 
                        = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__277__cause);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                }
            } else {
                if (((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__wb_en) 
                     & (0U != (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__rd_q)))) {
                    vlSelfRef.__VdlyVal__harvos_soc__DOT__cpu1__DOT__regs__v33 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__wb_data;
                    vlSelfRef.__VdlyDim0__harvos_soc__DOT__cpu1__DOT__regs__v33 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rd_q;
                    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu1__DOT__regs__v33 = 1U;
                }
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__next_pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))) {
                if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_allow) {
                    if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_allow) {
                        if (vlSelfRef.harvos_soc__DOT__d_ready1) {
                            if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_load) {
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value 
                                    = vlSelfRef.harvos_soc__DOT__bus_rdata;
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__addr 
                                    = (3U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_addr);
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_funct3;
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__byte_value 
                                    = (0x000000ffU 
                                       & ((0U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__addr))
                                           ? __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value
                                           : ((1U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__addr))
                                               ? (__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value 
                                                  >> 8U)
                                               : ((2U 
                                                   == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__addr))
                                                   ? 
                                                  (__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value 
                                                   >> 0x10U)
                                                   : 
                                                  (__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value 
                                                   >> 0x18U)))));
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__half_value 
                                    = (0x0000ffffU 
                                       & ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__addr))
                                           ? (__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value 
                                              >> 0x10U)
                                           : __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value));
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3))
                                        ? ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3))
                                            ? __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value
                                            : ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3))
                                                ? (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__half_value)
                                                : (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__byte_value)))
                                        : ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3))
                                            ? __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__value
                                            : ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__f3))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__half_value) 
                                                                   >> 0x0fU)))) 
                                                    << 0x00000010U) 
                                                   | (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__half_value))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__byte_value) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__byte_value)))));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                    = __Vfunc_harvos_soc__DOT__cpu1__DOT__load_data__278__Vfuncout;
                            } else {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__next_pc;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            }
                        } else {
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 3U;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_addr;
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__cause 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_cause;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__cause;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 
                            = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__279__cause);
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_addr;
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__cause 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu_cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                    vlSelfRef.harvos_soc__DOT__debug_trap1 
                        = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__280__cause);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                }
            } else {
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__next_pc 
                    = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc);
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target = 0U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old = 0U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new = 0U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken = 0U;
                if ((0x00000040U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                    if ((0x00000020U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        if ((0x00000010U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((8U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__281__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__281__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__282__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__282__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00000073U 
                                         == vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__283__cause 
                                            = ((0U 
                                                == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                ? 8U
                                                : 9U);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__283__cause;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 
                                            = (0x8000000bU 
                                               != __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__283__cause);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    } else if ((0x00100073U 
                                                == vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 3U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                    } else if ((0x10200073U 
                                                == vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))) {
                                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__285__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__285__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode 
                                                = (
                                                   (2U 
                                                    & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus)
                                                    ? 1U
                                                    : 0U);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sepc;
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__tlb_flush = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                                = (0x00000301U 
                                                   | vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus);
                                        }
                                    } else if ((((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                        >> 0x0000000cU)))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                       >> 0x0000000cU))))) {
                                        __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr 
                                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                               >> 0x00000014U);
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_8__csr_implemented 
                                            = (((((
                                                   ((((0x0100U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr)) 
                                                      || (0x0101U 
                                                          == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr))) 
                                                     || (0x0102U 
                                                         == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr))) 
                                                    || (0x0103U 
                                                        == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr))) 
                                                   || (0x0104U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr))) 
                                                  || (0x0105U 
                                                      == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr))) 
                                                 || (0x0120U 
                                                     == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr))) 
                                                || (0x0130U 
                                                    == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr))) 
                                               || (0x0140U 
                                                   == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_implemented__286__addr)));
                                        if ((1U & (
                                                   (0U 
                                                    == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode)) 
                                                   | (~ (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_8__csr_implemented))))) {
                                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__287__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__287__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                        } else {
                                            __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr 
                                                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                   >> 0x00000014U);
                                            __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__Vfuncout 
                                                = (
                                                   ((((((((0x0100U 
                                                           == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr)) 
                                                          | (0x0101U 
                                                             == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))) 
                                                         | (0x0102U 
                                                            == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))) 
                                                        | (0x0103U 
                                                           == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))) 
                                                       | (0x0104U 
                                                          == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))) 
                                                      | (0x0105U 
                                                         == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))) 
                                                     | (0x0120U 
                                                        == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))) 
                                                    | (0x0130U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr)))
                                                    ? 
                                                   ((0x0100U 
                                                     == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                     ? 
                                                    (0x00000300U 
                                                     | (3U 
                                                        & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus))
                                                     : 
                                                    ((0x0101U 
                                                      == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                      ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec
                                                      : 
                                                     ((0x0102U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                       ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sepc
                                                       : 
                                                      ((0x0103U 
                                                        == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                        ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scause
                                                        : 
                                                       ((0x0104U 
                                                         == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                         ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stval
                                                         : 
                                                        ((0x0105U 
                                                          == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                          ? 
                                                         (0x80000000U 
                                                          | vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_satp)
                                                          : 
                                                         ((0x0120U 
                                                           == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                           ? 
                                                          (0x13579bdfU 
                                                           ^ vlSelfRef.harvos_soc__DOT__entropy_lfsr)
                                                           : 
                                                          (1U 
                                                           | vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_smpuctl))))))))
                                                    : 
                                                   ((0x0140U 
                                                     == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__addr))
                                                     ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_scaps
                                                     : 0U));
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old 
                                                = __Vfunc_harvos_soc__DOT__cpu1__DOT__csr_read_value__288__Vfuncout;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new 
                                                = (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                        >> 0x0000000cU)))
                                                    ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                         >> 0x0000000cU)))
                                                     ? 
                                                    (vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old 
                                                     | vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     (vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old 
                                                      & (~ vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val))
                                                      : vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old)));
                                            if (((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_q)))) {
                                                __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value 
                                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_new;
                                                __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr 
                                                    = 
                                                    (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                     >> 0x00000014U);
                                                if (
                                                    ((((((((0x0100U 
                                                            == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr)) 
                                                           | (0x0101U 
                                                              == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) 
                                                          | (0x0102U 
                                                             == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) 
                                                         | (0x0103U 
                                                            == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) 
                                                        | (0x0104U 
                                                           == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) 
                                                       | (0x0105U 
                                                          == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) 
                                                      | (0x0120U 
                                                         == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) 
                                                     | (0x0130U 
                                                        == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr)))) {
                                                    if (
                                                        (0x0100U 
                                                         == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                                            = 
                                                            (0x00000300U 
                                                             | (3U 
                                                                & __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value));
                                                    } else if (
                                                               (0x0101U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stvec 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value);
                                                    } else if (
                                                               (0x0102U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value);
                                                    } else if (
                                                               (0x0103U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
                                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value;
                                                    } else if (
                                                               (0x0104U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value;
                                                    } else if (
                                                               (0x0105U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_satp 
                                                            = 
                                                            (0x80000000U 
                                                             | __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value);
                                                    } else if (
                                                               (0x0120U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_srandom 
                                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value;
                                                    } else {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_smpuctl 
                                                            = 
                                                            (1U 
                                                             | vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_smpuctl);
                                                    }
                                                } else if (
                                                           (0x0140U 
                                                            == (IData)(__Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__addr))) {
                                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scaps 
                                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__write_csr__289__value;
                                                }
                                            }
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__csr_old;
                                        }
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__290__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__290__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__291__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__291__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__292__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__292__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((8U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                                               + ((
                                                   ((0x00000ffeU 
                                                     & ((- (IData)(
                                                                   (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                                    >> 0x0000001fU))) 
                                                        << 1U)) 
                                                    | (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                       >> 0x0000001fU)) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                           >> 0x0000000bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                             >> 0x00000014U))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                           >> 0x00000014U)))));
                                        if ((0U != 
                                             (3U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target))) {
                                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__293__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__293__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__next_pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                        }
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__294__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__294__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__295__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__295__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__296__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__296__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((0U != (7U 
                                                & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                   >> 0x0000000cU)))) {
                                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__297__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__297__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                    } else {
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                            = (0xfffffffeU 
                                               & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                                  + vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i));
                                        if ((0U != 
                                             (3U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target))) {
                                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__298__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__298__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__next_pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                        }
                                    }
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__299__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__299__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__300__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__300__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00002000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)
                                            ? ((0x00001000U 
                                                & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)
                                                ? (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                                   >= vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val)
                                                : (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                                   < vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val))
                                            : ((0x00001000U 
                                                & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)
                                                ? VL_GTES_III(32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val)
                                                : VL_LTS_III(32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val)));
                                } else if ((0x00002000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__301__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__301__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00001000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)
                                            ? (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                               != vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val)
                                            : (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                               == vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val));
                                }
                                if (((((((0U == (7U 
                                                 & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                    >> 0x0000000cU))) 
                                         | (1U == (7U 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                      >> 0x0000000cU)))) 
                                        | (4U == (7U 
                                                  & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                     >> 0x0000000cU)))) 
                                       | (5U == (7U 
                                                 & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                    >> 0x0000000cU)))) 
                                      | (6U == (7U 
                                                & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                   >> 0x0000000cU)))) 
                                     | (7U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                        = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                                           + (((- (IData)(
                                                          (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000dU) 
                                              | ((((2U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                       >> 0x0000001eU)) 
                                                   | (1U 
                                                      & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                         >> 7U))) 
                                                  << 0x0000000bU) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                          >> 7U))))));
                                    if (((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken) 
                                         & (0U != (3U 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target)))) {
                                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__302__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__302__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = ((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__branch_taken)
                                                ? vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target
                                                : ((IData)(4U) 
                                                   + vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    }
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__303__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__303__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__304__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__304__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__305__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__305__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((0x00000020U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                    if ((0x00000010U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        if ((8U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__306__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__306__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_u;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__307__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__307__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__308__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__308__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00002000U 
                                         & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        if ((0x00001000U 
                                             & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                                   | vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                        }
                                    } else if ((0x00001000U 
                                                & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        if ((0U == 
                                             (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                              >> 0x00000019U))) {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                                   >> 
                                                   (0x0000001fU 
                                                    & vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                        } else if (
                                                   (0x20U 
                                                    == 
                                                    (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                     >> 0x00000019U))) {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                                = VL_SHIFTRS_III(32,32,5, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                        } else {
                                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__309__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__309__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                        }
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                               ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    }
                                } else if ((0x00002000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                                < vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = (VL_LTS_III(32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((0U == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                >> 0x00000019U))) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                               << (0x0000001fU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__310__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__310__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else if ((0x20U == 
                                            (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                             >> 0x00000019U))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                           - vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                } else if ((0U == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                   >> 0x00000019U))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                           + vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__311__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__311__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__312__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__312__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__313__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__313__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else if ((8U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__314__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__314__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__315__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__315__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            __Vfunc_harvos_soc__DOT__cpu1__DOT__store_supported__316__f3 
                                = (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_6__store_supported 
                                = (((0U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__store_supported__316__f3)) 
                                    | (1U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__store_supported__316__f3))) 
                                   | (2U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__store_supported__316__f3)));
                            if (vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_6__store_supported) {
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                    = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                       + ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                   >> 7U)))));
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__addr 
                                    = (3U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target);
                                __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3 
                                    = (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                             >> 0x0000000cU));
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_7__memory_misaligned 
                                    = ((4U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3))
                                        ? ((1U & ((IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3) 
                                                  >> 1U)) 
                                           || ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__addr))))
                                        : ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3)) 
                                               || (0U 
                                                   != (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__addr)))
                                            : ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__317__addr)))));
                                if (vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_7__memory_misaligned) {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__318__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 6U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__318__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_addr 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_wdata 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_funct3 
                                        = (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                 >> 0x0000000cU));
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 3U;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__319__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__319__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__320__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__320__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__321__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__321__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((0x00000010U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                    if ((8U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__322__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__322__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                    = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc 
                                       + vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_u);
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__323__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__323__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__324__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__324__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((0x00004000U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00002000U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                               | vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    if ((0U == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                >> 0x00000019U))) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                               >> (0x0000001fU 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                      >> 0x14U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                 >> 0x00000019U))) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                                 >> 0x14U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__325__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__325__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                    }
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                           ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((0x00001000U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                        = ((vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                            < vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i)
                                            ? 1U : 0U);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                        = (VL_LTS_III(32, vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i)
                                            ? 1U : 0U);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if ((0U == (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                            >> 0x00000019U))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                           << (0x0000001fU 
                                               & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                  >> 0x14U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__326__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__326__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                    = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                       + vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i);
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__327__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__327__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__328__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__328__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((8U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                    if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                                if (((0U == (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                   >> 0x0000000cU))) 
                                     | (1U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = ((IData)(4U) 
                                           + vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc);
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__tlb_flush 
                                        = (1U == (7U 
                                                  & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                     >> 0x0000000cU)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__329__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__329__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__330__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__330__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__331__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__331__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                            if ((0U == (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                              >> 0x0000000cU)))) {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                            } else if ((1U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU)))) {
                                if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))) {
                                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__332__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__332__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_addr 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__clr_count 
                                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs2_val;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 5U;
                                }
                            } else if ((2U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                                >> 0x0000000cU)))) {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_data 
                                    = (0x13579bdfU 
                                       ^ (vlSelfRef.harvos_soc__DOT__entropy_lfsr 
                                          ^ vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_srandom));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 4U;
                            } else {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__333__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__333__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__334__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__334__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__335__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__335__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__336__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__336__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                    if ((1U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr)) {
                        __Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3 
                            = (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                     >> 0x0000000cU));
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_4__load_supported 
                            = (((((0U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3)) 
                                  | (1U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3))) 
                                 | (2U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3))) 
                                | (4U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3))) 
                               | (5U == (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__load_supported__337__f3)));
                        if (vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_4__load_supported) {
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target 
                                = (vlSelfRef.harvos_soc__DOT__cpu1__DOT__rs1_val 
                                   + vlSelfRef.harvos_soc__DOT__cpu1__DOT__imm_i);
                            __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__addr 
                                = (3U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target);
                            __Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3 
                                = (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_5__memory_misaligned 
                                = ((4U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3))
                                    ? ((1U & ((IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3) 
                                              >> 1U)) 
                                       || ((1U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3)) 
                                           && (1U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__addr))))
                                    : ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3))
                                        ? ((1U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3)) 
                                           || (0U != (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__addr)))
                                        : ((1U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__f3)) 
                                           && (1U & (IData)(__Vfunc_harvos_soc__DOT__cpu1__DOT__memory_misaligned__338__addr)))));
                            if (vlSelfRef.harvos_soc__DOT__cpu1__DOT____VlemCall_5__memory_misaligned) {
                                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__339__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 4U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__339__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                            } else {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_addr 
                                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__exec_stage__DOT__target;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_funct3 
                                    = (7U & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                             >> 0x0000000cU));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 3U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rd_q 
                                    = (0x0000001fU 
                                       & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                          >> 7U));
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__340__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__340__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__341__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__341__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__342__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 2U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__342__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__state))) {
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_q 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                  >> 0x0fU));
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 2U;
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rd_q 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                  >> 7U));
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs1_val 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs
                [(0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                 >> 0x0fU))];
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__rs2_val 
                = vlSelfRef.harvos_soc__DOT__cpu1__DOT__regs
                [(0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__instr 
                                 >> 0x14U))];
        } else {
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
            if ((0U != (3U & vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc))) {
                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__343__tval 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                    = (0x00000300U | ((0xfffffffcU 
                                       & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                      | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                          ? 2U : 0U)));
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                vlSelfRef.harvos_soc__DOT__debug_trap1 = 1U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__343__tval;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
            } else if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_allow) {
                if (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_allow) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__instr 
                        = ((0x00057e40U > (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
                                           >> 2U)) ? 
                           (vlSelfRef.harvos_soc__DOT__imem
                            [(0x0007ffffU & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
                                             >> 2U))] 
                            & (- (IData)((0x00057e3fU 
                                          >= (0x0007ffffU 
                                              & (vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__selected_paddr 
                                                 >> 2U))))))
                            : 0x00000013U);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 1U;
                } else {
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                    __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__cause 
                        = (((IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__in_dram)
                             ? 0x0000000aU : 1U) & 
                           (- (IData)((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_allow))))));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                    vlSelfRef.harvos_soc__DOT__debug_trap1 
                        = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__344__cause);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
                }
            } else {
                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__tval 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__cause 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu_cause;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sstatus 
                    = (0x00000300U | ((0xfffffffcU 
                                       & vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_sstatus) 
                                      | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu1__DOT__mode))
                                          ? 2U : 0U)));
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_sepc 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_scause 
                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__cause;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__wb_en = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mem_load = 0U;
                vlSelfRef.harvos_soc__DOT__cpu1__DOT__mem_store = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__state = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__csr_stval 
                    = __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__tval;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__mode = 1U;
                vlSelfRef.harvos_soc__DOT__debug_trap1 
                    = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu1__DOT__enter_trap__345__cause);
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu1__DOT__pc 
                    = vlSelfRef.harvos_soc__DOT__cpu1__DOT__csr_stvec;
            }
        }
        vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v32 = 1U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__tlb_flush = 0U;
        if ((4U & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))) {
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))) {
                if ((0U == vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_count)) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                        = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                } else if ((0U != (3U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr))) {
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__198__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 6U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__198__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                } else if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow) {
                    if ((1U & ((~ (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_allow)) 
                               | (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmio)))) {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__199__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 7U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__199__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    } else if (vlSelfRef.harvos_soc__DOT__d_ready0) {
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_addr 
                            = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr);
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_count 
                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_count 
                               - (IData)(1U));
                    } else {
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 5U;
                    }
                } else {
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__clr_addr;
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__cause 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                    vlSelfRef.harvos_soc__DOT__debug_trap0 
                        = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__200__cause);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                }
            } else {
                if (((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__wb_en) 
                     & (0U != (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__rd_q)))) {
                    vlSelfRef.__VdlyVal__harvos_soc__DOT__cpu0__DOT__regs__v33 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__wb_data;
                    vlSelfRef.__VdlyDim0__harvos_soc__DOT__cpu0__DOT__regs__v33 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rd_q;
                    vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v33 = 1U;
                }
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__next_pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))) {
                if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_allow) {
                    if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_allow) {
                        if (vlSelfRef.harvos_soc__DOT__d_ready0) {
                            if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_load) {
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value 
                                    = vlSelfRef.harvos_soc__DOT__bus_rdata;
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__addr 
                                    = (3U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_addr);
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_funct3;
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__byte_value 
                                    = (0x000000ffU 
                                       & ((0U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__addr))
                                           ? __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value
                                           : ((1U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__addr))
                                               ? (__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value 
                                                  >> 8U)
                                               : ((2U 
                                                   == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__addr))
                                                   ? 
                                                  (__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value 
                                                   >> 0x10U)
                                                   : 
                                                  (__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value 
                                                   >> 0x18U)))));
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__half_value 
                                    = (0x0000ffffU 
                                       & ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__addr))
                                           ? (__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value 
                                              >> 0x10U)
                                           : __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value));
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3))
                                        ? ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3))
                                            ? __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value
                                            : ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3))
                                                ? (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__half_value)
                                                : (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__byte_value)))
                                        : ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3))
                                            ? __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__value
                                            : ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__f3))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__half_value) 
                                                                   >> 0x0fU)))) 
                                                    << 0x00000010U) 
                                                   | (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__half_value))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__byte_value) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__byte_value)))));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                    = __Vfunc_harvos_soc__DOT__cpu0__DOT__load_data__201__Vfuncout;
                            } else {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__next_pc;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            }
                        } else {
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 3U;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_addr;
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__cause 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_cause;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__cause;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 
                            = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__202__cause);
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_addr;
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__cause 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu_cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                    vlSelfRef.harvos_soc__DOT__debug_trap0 
                        = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__203__cause);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                }
            } else {
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__next_pc 
                    = ((IData)(4U) + vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc);
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target = 0U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old = 0U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new = 0U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken = 0U;
                if ((0x00000040U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                    if ((0x00000020U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        if ((0x00000010U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((8U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__204__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__204__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__205__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__205__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00000073U 
                                         == vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = ((IData)(4U) 
                                               + vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc);
                                        vlSelfRef.__VdlySet__harvos_soc__DOT__cpu0__DOT__regs__v34 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    } else if ((0x00100073U 
                                                == vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 3U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                    } else if ((0x10200073U 
                                                == vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))) {
                                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__207__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__207__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode 
                                                = (
                                                   (2U 
                                                    & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus)
                                                    ? 1U
                                                    : 0U);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sepc;
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__tlb_flush = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                                = (0x00000301U 
                                                   | vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus);
                                        }
                                    } else if ((((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                        >> 0x0000000cU)))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                       >> 0x0000000cU))))) {
                                        __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr 
                                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                               >> 0x00000014U);
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_8__csr_implemented 
                                            = (((((
                                                   ((((0x0100U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr)) 
                                                      || (0x0101U 
                                                          == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr))) 
                                                     || (0x0102U 
                                                         == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr))) 
                                                    || (0x0103U 
                                                        == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr))) 
                                                   || (0x0104U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr))) 
                                                  || (0x0105U 
                                                      == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr))) 
                                                 || (0x0120U 
                                                     == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr))) 
                                                || (0x0130U 
                                                    == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr))) 
                                               || (0x0140U 
                                                   == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_implemented__208__addr)));
                                        if ((1U & (
                                                   (0U 
                                                    == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode)) 
                                                   | (~ (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_8__csr_implemented))))) {
                                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__209__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__209__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                        } else {
                                            __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr 
                                                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                   >> 0x00000014U);
                                            __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__Vfuncout 
                                                = (
                                                   ((((((((0x0100U 
                                                           == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr)) 
                                                          | (0x0101U 
                                                             == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))) 
                                                         | (0x0102U 
                                                            == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))) 
                                                        | (0x0103U 
                                                           == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))) 
                                                       | (0x0104U 
                                                          == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))) 
                                                      | (0x0105U 
                                                         == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))) 
                                                     | (0x0120U 
                                                        == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))) 
                                                    | (0x0130U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr)))
                                                    ? 
                                                   ((0x0100U 
                                                     == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                     ? 
                                                    (0x00000300U 
                                                     | (3U 
                                                        & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus))
                                                     : 
                                                    ((0x0101U 
                                                      == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                      ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec
                                                      : 
                                                     ((0x0102U 
                                                       == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                       ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sepc
                                                       : 
                                                      ((0x0103U 
                                                        == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                        ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scause
                                                        : 
                                                       ((0x0104U 
                                                         == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                         ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stval
                                                         : 
                                                        ((0x0105U 
                                                          == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                          ? 
                                                         (0x80000000U 
                                                          | vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_satp)
                                                          : 
                                                         ((0x0120U 
                                                           == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                           ? vlSelfRef.harvos_soc__DOT__entropy_lfsr
                                                           : 
                                                          (1U 
                                                           | vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_smpuctl))))))))
                                                    : 
                                                   ((0x0140U 
                                                     == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__addr))
                                                     ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_scaps
                                                     : 0U));
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old 
                                                = __Vfunc_harvos_soc__DOT__cpu0__DOT__csr_read_value__210__Vfuncout;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new 
                                                = (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                        >> 0x0000000cU)))
                                                    ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                         >> 0x0000000cU)))
                                                     ? 
                                                    (vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old 
                                                     | vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     (vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old 
                                                      & (~ vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val))
                                                      : vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old)));
                                            if (((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                      >> 0x0000000cU))) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_q)))) {
                                                __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value 
                                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_new;
                                                __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr 
                                                    = 
                                                    (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                     >> 0x00000014U);
                                                if (
                                                    ((((((((0x0100U 
                                                            == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr)) 
                                                           | (0x0101U 
                                                              == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) 
                                                          | (0x0102U 
                                                             == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) 
                                                         | (0x0103U 
                                                            == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) 
                                                        | (0x0104U 
                                                           == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) 
                                                       | (0x0105U 
                                                          == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) 
                                                      | (0x0120U 
                                                         == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) 
                                                     | (0x0130U 
                                                        == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr)))) {
                                                    if (
                                                        (0x0100U 
                                                         == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                                            = 
                                                            (0x00000300U 
                                                             | (3U 
                                                                & __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value));
                                                    } else if (
                                                               (0x0101U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stvec 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value);
                                                    } else if (
                                                               (0x0102U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                                            = 
                                                            (0xfffffffcU 
                                                             & __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value);
                                                    } else if (
                                                               (0x0103U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause 
                                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value;
                                                    } else if (
                                                               (0x0104U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value;
                                                    } else if (
                                                               (0x0105U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_satp 
                                                            = 
                                                            (0x80000000U 
                                                             | __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value);
                                                    } else if (
                                                               (0x0120U 
                                                                == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_srandom 
                                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value;
                                                    } else {
                                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_smpuctl 
                                                            = 
                                                            (1U 
                                                             | vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_smpuctl);
                                                    }
                                                } else if (
                                                           (0x0140U 
                                                            == (IData)(__Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__addr))) {
                                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scaps 
                                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__write_csr__211__value;
                                                }
                                            }
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__csr_old;
                                        }
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__212__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__212__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__213__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__213__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__214__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__214__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((8U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                                               + ((
                                                   ((0x00000ffeU 
                                                     & ((- (IData)(
                                                                   (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                                    >> 0x0000001fU))) 
                                                        << 1U)) 
                                                    | (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                       >> 0x0000001fU)) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                           >> 0x0000000bU)) 
                                                       | (1U 
                                                          & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                             >> 0x00000014U))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                           >> 0x00000014U)))));
                                        if ((0U != 
                                             (3U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target))) {
                                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__215__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__215__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__next_pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                        }
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__216__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__216__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__217__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__217__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__218__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__218__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((0U != (7U 
                                                & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                   >> 0x0000000cU)))) {
                                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__219__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__219__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                    } else {
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                            = (0xfffffffeU 
                                               & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                                  + vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i));
                                        if ((0U != 
                                             (3U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target))) {
                                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__220__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__220__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                                = ((IData)(4U) 
                                                   + vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__next_pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                        }
                                    }
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__221__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__221__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__222__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__222__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00002000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)
                                            ? ((0x00001000U 
                                                & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)
                                                ? (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                                   >= vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val)
                                                : (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                                   < vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val))
                                            : ((0x00001000U 
                                                & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)
                                                ? VL_GTES_III(32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val)
                                                : VL_LTS_III(32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val)));
                                } else if ((0x00002000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__223__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__223__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken 
                                        = ((0x00001000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)
                                            ? (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                               != vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val)
                                            : (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                               == vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val));
                                }
                                if (((((((0U == (7U 
                                                 & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                    >> 0x0000000cU))) 
                                         | (1U == (7U 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                      >> 0x0000000cU)))) 
                                        | (4U == (7U 
                                                  & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                     >> 0x0000000cU)))) 
                                       | (5U == (7U 
                                                 & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                    >> 0x0000000cU)))) 
                                      | (6U == (7U 
                                                & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                   >> 0x0000000cU)))) 
                                     | (7U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                        = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                                           + (((- (IData)(
                                                          (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000dU) 
                                              | ((((2U 
                                                    & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                       >> 0x0000001eU)) 
                                                   | (1U 
                                                      & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                         >> 7U))) 
                                                  << 0x0000000bU) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                          >> 7U))))));
                                    if (((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken) 
                                         & (0U != (3U 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target)))) {
                                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__224__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__224__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = ((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__branch_taken)
                                                ? vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target
                                                : ((IData)(4U) 
                                                   + vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    }
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__225__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__225__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__226__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__226__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__227__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__227__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((0x00000020U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                    if ((0x00000010U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        if ((8U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__228__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__228__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_u;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__229__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__229__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__230__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__230__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00004000U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00002000U 
                                         & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        if ((0x00001000U 
                                             & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                        } else {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                                   | vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val);
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                        }
                                    } else if ((0x00001000U 
                                                & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        if ((0U == 
                                             (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                              >> 0x00000019U))) {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                                   >> 
                                                   (0x0000001fU 
                                                    & vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                        } else if (
                                                   (0x20U 
                                                    == 
                                                    (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                     >> 0x00000019U))) {
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                                = VL_SHIFTRS_III(32,32,5, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                        } else {
                                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__231__tval 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                                = (0x00000300U 
                                                   | ((0xfffffffcU 
                                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                          ? 2U
                                                          : 0U)));
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__231__tval;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                        }
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                               ^ vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    }
                                } else if ((0x00002000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                                < vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = (VL_LTS_III(32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val)
                                                ? 1U
                                                : 0U);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((0U == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                >> 0x00000019U))) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                               << (0x0000001fU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__232__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__232__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else if ((0x20U == 
                                            (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                             >> 0x00000019U))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                           - vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                } else if ((0U == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                   >> 0x00000019U))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                           + vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__233__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__233__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__234__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__234__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__235__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__235__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else if ((8U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__236__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__236__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__237__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__237__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            __Vfunc_harvos_soc__DOT__cpu0__DOT__store_supported__238__f3 
                                = (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_6__store_supported 
                                = (((0U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__store_supported__238__f3)) 
                                    | (1U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__store_supported__238__f3))) 
                                   | (2U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__store_supported__238__f3)));
                            if (vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_6__store_supported) {
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                    = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                       + ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                   >> 7U)))));
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__addr 
                                    = (3U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target);
                                __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3 
                                    = (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                             >> 0x0000000cU));
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_7__memory_misaligned 
                                    = ((4U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3))
                                        ? ((1U & ((IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3) 
                                                  >> 1U)) 
                                           || ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__addr))))
                                        : ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3)) 
                                               || (0U 
                                                   != (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__addr)))
                                            : ((1U 
                                                & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__f3)) 
                                               && (1U 
                                                   & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__239__addr)))));
                                if (vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_7__memory_misaligned) {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__240__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 6U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__240__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_addr 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_wdata 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_funct3 
                                        = (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                 >> 0x0000000cU));
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 3U;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__241__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__241__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__242__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__242__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__243__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__243__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((0x00000010U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                    if ((8U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__244__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__244__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                    = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc 
                                       + vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_u);
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__245__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__245__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__246__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__246__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((0x00004000U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00002000U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                               | vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i);
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    if ((0U == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                >> 0x00000019U))) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                               >> (0x0000001fU 
                                                   & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                      >> 0x14U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                 >> 0x00000019U))) {
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                                 >> 0x14U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                    } else {
                                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__247__tval 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                            = (0x00000300U 
                                               | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__247__tval;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                    }
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                           ^ vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((0x00001000U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                        = ((vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                            < vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i)
                                            ? 1U : 0U);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                        = (VL_LTS_III(32, vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val, vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i)
                                            ? 1U : 0U);
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if ((0U == (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                            >> 0x00000019U))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                        = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                           << (0x0000001fU 
                                               & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                  >> 0x14U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__248__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__248__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                    = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                       + vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i);
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__249__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__249__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__250__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__250__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((8U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                    if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                                if (((0U == (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                   >> 0x0000000cU))) 
                                     | (1U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU))))) {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = ((IData)(4U) 
                                           + vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc);
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__tlb_flush 
                                        = (1U == (7U 
                                                  & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                     >> 0x0000000cU)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                } else {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__251__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__251__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                }
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__252__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__252__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__253__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__253__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                            if ((0U == (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                              >> 0x0000000cU)))) {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                            } else if ((1U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU)))) {
                                if ((0U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))) {
                                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__254__tval 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                        = (0x00000300U 
                                           | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__254__tval;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                                } else {
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_addr 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__clr_count 
                                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs2_val;
                                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 5U;
                                }
                            } else if ((2U == (7U & 
                                               (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                                >> 0x0000000cU)))) {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_data 
                                    = (vlSelfRef.harvos_soc__DOT__entropy_lfsr 
                                       ^ vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_srandom);
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 4U;
                            } else {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__255__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__255__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__256__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__256__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__257__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__257__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else if ((4U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__258__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__258__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                } else if ((2U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                    if ((1U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr)) {
                        __Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3 
                            = (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                     >> 0x0000000cU));
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_4__load_supported 
                            = (((((0U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3)) 
                                  | (1U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3))) 
                                 | (2U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3))) 
                                | (4U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3))) 
                               | (5U == (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__load_supported__259__f3)));
                        if (vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_4__load_supported) {
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target 
                                = (vlSelfRef.harvos_soc__DOT__cpu0__DOT__rs1_val 
                                   + vlSelfRef.harvos_soc__DOT__cpu0__DOT__imm_i);
                            __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__addr 
                                = (3U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target);
                            __Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3 
                                = (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                         >> 0x0000000cU));
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_5__memory_misaligned 
                                = ((4U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3))
                                    ? ((1U & ((IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3) 
                                              >> 1U)) 
                                       || ((1U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3)) 
                                           && (1U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__addr))))
                                    : ((2U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3))
                                        ? ((1U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3)) 
                                           || (0U != (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__addr)))
                                        : ((1U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__f3)) 
                                           && (1U & (IData)(__Vfunc_harvos_soc__DOT__cpu0__DOT__memory_misaligned__260__addr)))));
                            if (vlSelfRef.harvos_soc__DOT__cpu0__DOT____VlemCall_5__memory_misaligned) {
                                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__261__tval 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                    = (0x00000300U 
                                       | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 4U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__261__tval;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                            } else {
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_addr 
                                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__exec_stage__DOT__target;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_funct3 
                                    = (7U & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                             >> 0x0000000cU));
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 1U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 3U;
                                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rd_q 
                                    = (0x0000001fU 
                                       & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                          >> 7U));
                            }
                        } else {
                            __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__262__tval 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                                = (0x00000300U | ((0xfffffffcU 
                                                   & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                      ? 2U
                                                      : 0U)));
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                                = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__262__tval;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                            vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                        }
                    } else {
                        __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__263__tval 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                            = (0x00000300U | ((0xfffffffcU 
                                               & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                                  ? 2U
                                                  : 0U)));
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                            = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__263__tval;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                        vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                        vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                        vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                            = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                    }
                } else {
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__264__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 2U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__264__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__state))) {
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_q 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                  >> 0x0fU));
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 2U;
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rd_q 
                = (0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                  >> 7U));
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs1_val 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs
                [(0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                 >> 0x0fU))];
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__rs2_val 
                = vlSelfRef.harvos_soc__DOT__cpu0__DOT__regs
                [(0x0000001fU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__instr 
                                 >> 0x14U))];
        } else {
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
            vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
            if ((0U != (3U & vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc))) {
                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__265__tval 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                    = (0x00000300U | ((0xfffffffcU 
                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                      | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                          ? 2U : 0U)));
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                vlSelfRef.harvos_soc__DOT__debug_trap0 = 1U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__265__tval;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
            } else if ((((IData)(vlSelfRef.harvos_soc__DOT__net_irq) 
                         | (IData)(vlSelfRef.harvos_soc__DOT__usb_irq)) 
                        & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus)) {
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                    = (0x00000300U | ((0xfffffffcU 
                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                      | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                          ? 2U : 0U)));
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause = 0x8000000bU;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                vlSelfRef.harvos_soc__DOT__debug_trap0 = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
            } else if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_allow) {
                if (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_allow) {
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__instr 
                        = ((0x00057e40U > (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
                                           >> 2U)) ? 
                           (vlSelfRef.harvos_soc__DOT__imem
                            [(0x0007ffffU & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
                                             >> 2U))] 
                            & (- (IData)((0x00057e3fU 
                                          >= (0x0007ffffU 
                                              & (vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__selected_paddr 
                                                 >> 2U))))))
                            : 0x00000013U);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 1U;
                } else {
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__tval 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                    __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__cause 
                        = (((IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__in_dram)
                             ? 0x0000000aU : 1U) & 
                           (- (IData)((1U & (~ (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_allow))))));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                        = (0x00000300U | ((0xfffffffcU 
                                           & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                          | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                              ? 2U : 0U)));
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__cause;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                    vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                        = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__tval;
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                    vlSelfRef.harvos_soc__DOT__debug_trap0 
                        = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__267__cause);
                    vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                        = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
                }
            } else {
                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__tval 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__cause 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu_cause;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sstatus 
                    = (0x00000300U | ((0xfffffffcU 
                                       & vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_sstatus) 
                                      | ((1U == (IData)(vlSelfRef.harvos_soc__DOT__cpu0__DOT__mode))
                                          ? 2U : 0U)));
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_sepc 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__pc;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_scause 
                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__cause;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__wb_en = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mem_load = 0U;
                vlSelfRef.harvos_soc__DOT__cpu0__DOT__mem_store = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__state = 0U;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__csr_stval 
                    = __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__tval;
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__mode = 1U;
                vlSelfRef.harvos_soc__DOT__debug_trap0 
                    = (0x8000000bU != __Vtask_harvos_soc__DOT__cpu0__DOT__enter_trap__268__cause);
                vlSelfRef.__Vdly__harvos_soc__DOT__cpu0__DOT__pc 
                    = vlSelfRef.harvos_soc__DOT__cpu0__DOT__csr_stvec;
            }
        }
    }
    vlSelfRef.harvos_soc__DOT__trace_count = __Vdly__harvos_soc__DOT__trace_count;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_start_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_count;
    vlSelfRef.harvos_soc__DOT__l1d0__DOT__hit_count 
        = __Vdly__harvos_soc__DOT__l1d0__DOT__hit_count;
    vlSelfRef.harvos_soc__DOT__l1d0__DOT__miss_count 
        = __Vdly__harvos_soc__DOT__l1d0__DOT__miss_count;
    vlSelfRef.harvos_soc__DOT__l1d1__DOT__hit_count 
        = __Vdly__harvos_soc__DOT__l1d1__DOT__hit_count;
    vlSelfRef.harvos_soc__DOT__l1d1__DOT__miss_count 
        = __Vdly__harvos_soc__DOT__l1d1__DOT__miss_count;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_wr 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_wr;
    if (__VdlySet__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0) {
        vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_data[__VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_data__v0;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_last[__VdlyDim0__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__rx_ring_last__v0;
    }
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__line_state_d;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__utmi_adapter__DOT__activity_count;
    vlSelfRef.harvos_soc__DOT__kernel_task = __Vdly__harvos_soc__DOT__kernel_task;
    if (__VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v0) {
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__size_bytes[0U] = 0ULL;
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__size_bytes[1U] = 0ULL;
    }
    if (__VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v2) {
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__size_bytes[0U] 
            = __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v2;
    }
    if (__VdlySet__harvos_soc__DOT__hps_block__DOT__size_bytes__v3) {
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__size_bytes[1U] 
            = __VdlyVal__harvos_soc__DOT__hps_block__DOT__size_bytes__v3;
    }
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_count;
    vlSelfRef.harvos_soc__DOT__coherence__DOT__invalidations 
        = __Vdly__harvos_soc__DOT__coherence__DOT__invalidations;
    vlSelfRef.harvos_soc__DOT__l2__DOT__hits = __Vdly__harvos_soc__DOT__l2__DOT__hits;
    vlSelfRef.harvos_soc__DOT__l2__DOT__misses = __Vdly__harvos_soc__DOT__l2__DOT__misses;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_frame_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_frame_count;
    vlSelfRef.harvos_soc__DOT__kernel_ipc_depth = __Vdly__harvos_soc__DOT__kernel_ipc_depth;
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__valid__v32) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__valid[__VdlyDim0__harvos_soc__DOT__coherence__DOT__valid__v32] = 1U;
    }
    if (__VdlySet__harvos_soc__DOT__l2__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__l2__DOT__valid__v32) {
        vlSelfRef.harvos_soc__DOT__l2__DOT__valid[__VdlyDim0__harvos_soc__DOT__l2__DOT__valid__v32] = 1U;
    }
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v0) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__line_tag__v32) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__line_tag[__VdlyDim0__harvos_soc__DOT__coherence__DOT__line_tag__v32] 
            = __VdlyVal__harvos_soc__DOT__coherence__DOT__line_tag__v32;
    }
    if (__VdlySet__harvos_soc__DOT__l2__DOT__tag__v0) {
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__l2__DOT__tag__v32) {
        vlSelfRef.harvos_soc__DOT__l2__DOT__tag[__VdlyDim0__harvos_soc__DOT__l2__DOT__tag__v32] 
            = __VdlyVal__harvos_soc__DOT__l2__DOT__tag__v32;
    }
    vlSelfRef.harvos_soc__DOT__trace_digest = __Vdly__harvos_soc__DOT__trace_digest;
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__modified__v0) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__modified__v32) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__modified[__VdlyDim0__harvos_soc__DOT__coherence__DOT__modified__v32] 
            = __VdlyVal__harvos_soc__DOT__coherence__DOT__modified__v32;
    }
    if (__VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v0) {
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer[__VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v0] 
            = __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v0;
    }
    if (__VdlySet__harvos_soc__DOT__hps_block__DOT__buffer__v1) {
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer[__VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v1] 
            = __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v1;
        vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer[__VdlyDim0__harvos_soc__DOT__hps_block__DOT__buffer__v2] 
            = __VdlyVal__harvos_soc__DOT__hps_block__DOT__buffer__v2;
    }
    vlSelfRef.harvos_soc__DOT__coherence__DOT__shared_reads 
        = __Vdly__harvos_soc__DOT__coherence__DOT__shared_reads;
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__owner__v0) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__coherence__DOT__owner__v32) {
        vlSelfRef.harvos_soc__DOT__coherence__DOT__owner[__VdlyDim0__harvos_soc__DOT__coherence__DOT__owner__v32] 
            = __VdlyVal__harvos_soc__DOT__coherence__DOT__owner__v32;
    }
    vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_hi 
        = __Vdly__harvos_soc__DOT__net_card__DOT__mac_hi;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__command 
        = __Vdly__harvos_soc__DOT__net_card__DOT__command;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__mac_lo 
        = __Vdly__harvos_soc__DOT__net_card__DOT__mac_lo;
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__ctrl 
        = __Vdly__harvos_soc__DOT__hps_block__DOT__ctrl;
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer_index 
        = __Vdly__harvos_soc__DOT__hps_block__DOT__buffer_index;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__command;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_enable 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__irq_enable;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_enable 
        = __Vdly__harvos_soc__DOT__net_card__DOT__irq_enable;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_base 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__dma_base;
    vlSelfRef.harvos_soc__DOT__mmio_out = __Vdly__harvos_soc__DOT__mmio_out;
    if (__VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[15U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__l1d0__DOT__valid__v16) {
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__valid[__VdlyDim0__harvos_soc__DOT__l1d0__DOT__valid__v16] = 1U;
    }
    if (__VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[15U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__l1d1__DOT__valid__v16) {
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__valid[__VdlyDim0__harvos_soc__DOT__l1d1__DOT__valid__v16] = 1U;
    }
    if (__VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v0) {
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[15U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__l1d0__DOT__tag__v16) {
        vlSelfRef.harvos_soc__DOT__l1d0__DOT__tag[__VdlyDim0__harvos_soc__DOT__l1d0__DOT__tag__v16] 
            = __VdlyVal__harvos_soc__DOT__l1d0__DOT__tag__v16;
    }
    if (__VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v0) {
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[15U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__l1d1__DOT__tag__v16) {
        vlSelfRef.harvos_soc__DOT__l1d1__DOT__tag[__VdlyDim0__harvos_soc__DOT__l1d1__DOT__tag__v16] 
            = __VdlyVal__harvos_soc__DOT__l1d1__DOT__tag__v16;
    }
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__frame 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__frame;
    vlSelfRef.harvos_soc__DOT__dma_tick = __Vdly__harvos_soc__DOT__dma_tick;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__token 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__token;
    if (__VdlySet__harvos_soc__DOT__dmem__v0) {
        vlSelfRef.harvos_soc__DOT__dmem[__VdlyDim0__harvos_soc__DOT__dmem__v0] 
            = __VdlyVal__harvos_soc__DOT__dmem__v0;
    }
    if (__VdlySet__harvos_soc__DOT__dmem__v1) {
        vlSelfRef.harvos_soc__DOT__dmem[__VdlyDim0__harvos_soc__DOT__dmem__v1] 
            = __VdlyVal__harvos_soc__DOT__dmem__v1;
    }
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = __Vdly__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32] = 1U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl 
        = __Vdly__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v1) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[31U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[1U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[2U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[3U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[4U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[5U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[6U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[7U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[8U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[9U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[10U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[11U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[12U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[13U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[14U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[15U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[16U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[17U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[18U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[19U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[20U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[21U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[22U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[23U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[24U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[25U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[26U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[27U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[28U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[29U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[30U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[31U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_flags__v32;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__ppn__v32;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__valid__v32] = 1U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__vpn__v32;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__fetch_mmu__DOT__tlb__DOT__entry_asid__v32;
    }
    vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl 
        = __Vdly__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v1) {
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vilp2 = 1U;
        while ((__Vilp2 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vilp3 = 1U;
        while ((__Vilp3 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vilp4 = 1U;
        while ((__Vilp4 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vilp4] = 0U;
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        __Vilp5 = 1U;
        while ((__Vilp5 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vilp5] = 0U;
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
    }
    if (__VdlySet__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64) {
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__valid__v64] = 1U;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
        vlSelfRef.harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu1__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    }
    vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl 
        = __Vdly__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__repl;
    if (__VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v0) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[0U] = 0U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[0U] = 0U;
    }
    if (__VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v1) {
        __Vilp6 = 1U;
        while ((__Vilp6 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__Vilp6] = 0U;
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
        __Vilp7 = 1U;
        while ((__Vilp7 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[__Vilp7] = 0U;
            __Vilp7 = ((IData)(1U) + __Vilp7);
        }
        __Vilp8 = 1U;
        while ((__Vilp8 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[__Vilp8] = 0U;
            __Vilp8 = ((IData)(1U) + __Vilp8);
        }
        __Vilp9 = 1U;
        while ((__Vilp9 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[__Vilp9] = 0U;
            __Vilp9 = ((IData)(1U) + __Vilp9);
        }
        __Vilp10 = 1U;
        while ((__Vilp10 <= 0x0000003fU)) {
            vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__Vilp10] = 0U;
            __Vilp10 = ((IData)(1U) + __Vilp10);
        }
    }
    if (__VdlySet__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64) {
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_flags__v64;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__ppn__v64;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__valid__v64] = 1U;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__vpn__v64;
        vlSelfRef.harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid[__VdlyDim0__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64] 
            = __VdlyVal__harvos_soc__DOT__cpu0__DOT__data_mmu__DOT__tlb__DOT__entry_asid__v64;
    }
    vlSelfRef.harvos_soc__DOT__secure_boot__DOT__state 
        = __Vdly__harvos_soc__DOT__secure_boot__DOT__state;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__bit_timer;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_shift;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_sync_shift;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_bit_index;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_stuff_pending;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_last_byte;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_nrzi_level;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__fs_phy__DOT__tx_ones;
    if (__VdlySet__hps_sd_lba__v0) {
        vlSelfRef.hps_sd_lba[0U] = 0U;
        vlSelfRef.hps_sd_lba[1U] = 0U;
        vlSelfRef.hps_sd_blk_cnt[0U] = 0U;
        vlSelfRef.hps_sd_blk_cnt[1U] = 0U;
    }
    if (__VdlySet__hps_sd_lba__v2) {
        vlSelfRef.hps_sd_lba[__VdlyDim0__hps_sd_lba__v2] 
            = __VdlyVal__hps_sd_lba__v2;
        vlSelfRef.hps_sd_blk_cnt[__VdlyDim0__hps_sd_blk_cnt__v2] 
            = __VdlyVal__hps_sd_blk_cnt__v2;
    }
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_lo 
        = __Vdly__harvos_soc__DOT__hps_block__DOT__lba_lo;
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__lba_hi 
        = __Vdly__harvos_soc__DOT__hps_block__DOT__lba_hi;
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__count 
        = __Vdly__harvos_soc__DOT__hps_block__DOT__count;
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__active_drive 
        = __Vdly__harvos_soc__DOT__hps_block__DOT__active_drive;
    vlSelfRef.harvos_soc__DOT__hps_block__DOT__busy 
        = __Vdly__harvos_soc__DOT__hps_block__DOT__busy;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_start_fault_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_start_fault_count;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_submit_active 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_submit_active;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_load_desc 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_load_desc;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_tail 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_tail;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ip_sum 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_ip_sum;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_tcp_sum 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_tcp_sum;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_total_len 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_total_len;
    if (__VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0) {
        harvos_soc__DOT__net_card__DOT__tx_desc_len[__VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_len__v0;
    }
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_word_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_word_count;
    if (__VdlySet__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0) {
        vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_words[__VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_desc_words__v0;
    }
    if (__VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0) {
        vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[6U] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v0;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[12U] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v1;
    }
    if (__VdlySet__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2) {
        vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_buf_data[__VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_buf_data__v2;
    }
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_ring_rd 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_ring_rd;
    if (__VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0) {
        vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_data[__VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v0;
        vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_data[__VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v1;
    }
    if (__VdlySet__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2) {
        vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_data[__VdlyDim0__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2] 
            = __VdlyVal__harvos_soc__DOT__net_card__DOT__tx_ring_data__v2;
    }
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_stream_word 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_stream_word;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_head 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_head;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_ring_stream_word 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_ring_stream_word;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__digest 
        = __Vdly__harvos_soc__DOT__net_card__DOT__digest;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_count;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_count;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_desc_count 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_desc_count;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__irq_status 
        = __Vdly__harvos_soc__DOT__net_card__DOT__irq_status;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_base 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_base;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_base 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_base;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_state 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_state;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_dma_len 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_dma_len;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_dma_len 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_dma_len;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__progress 
        = __Vdly__harvos_soc__DOT__net_card__DOT__progress;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__tx_offload_active 
        = __Vdly__harvos_soc__DOT__net_card__DOT__tx_offload_active;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__busy 
        = __Vdly__harvos_soc__DOT__net_card__DOT__busy;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__ctrl 
        = __Vdly__harvos_soc__DOT__net_card__DOT__ctrl;
    vlSelfRef.harvos_soc__DOT__net_card__DOT__rx_op 
        = __Vdly__harvos_soc__DOT__net_card__DOT__rx_op;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__packet_done_seen 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__packet_done_seen;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__irq_status 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__irq_status;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__busy 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__busy;
    vlSelfRef.harvos_soc__DOT__usb_host__DOT__dma_progress 
        = __Vdly__harvos_soc__DOT__usb_host__DOT__dma_progress;
    vlSelfRef.hps_sd_buff_din[0U] = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
        [vlSelfRef.hps_sd_buff_addr];
    vlSelfRef.hps_sd_buff_din[1U] = vlSelfRef.harvos_soc__DOT__hps_block__DOT__buffer
        [vlSelfRef.hps_sd_buff_addr];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = ((0x0000000fU 
                                                  & (~ 
                                                     (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                                      >> 0x00000010U))) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.harvos_soc__DOT__usb_host__DOT__command 
                                                     >> 0x00000014U)));
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
}
