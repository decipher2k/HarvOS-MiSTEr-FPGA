// Copyright 2025 Dennis Michael Heine

module harvos_usb_utmi_adapter
(
	input  logic        clk,
	input  logic        reset,

	input  logic        use_utmi,
	input  logic        port_power,
	input  logic        port_reset,
	input  logic        overcurrent_n,

	input  logic        link_tx_valid,
	input  logic [7:0]  link_tx_data,
	input  logic        link_tx_last,
	output logic        link_tx_ready,

	output logic        link_rx_active,
	output logic        link_rx_valid,
	output logic [7:0]  link_rx_data,
	output logic        link_rx_error,

	output logic [7:0]  utmi_data_o,
	input  logic [7:0]  utmi_data_i,
	output logic        utmi_tx_valid,
	input  logic        utmi_tx_ready,
	input  logic        utmi_rx_valid,
	input  logic        utmi_rx_active,
	input  logic        utmi_rx_error,
	input  logic [1:0]  utmi_line_state,
	output logic [1:0]  utmi_xcvr_select,
	output logic [1:0]  utmi_op_mode,
	output logic        utmi_term_select,
	output logic        utmi_suspend_n,
	output logic        utmi_reset_n,

	output logic        connected,
	output logic [31:0] status
);
	logic [1:0] line_state_d;
	logic [15:0] activity_count;

	assign link_tx_ready = use_utmi && port_power && overcurrent_n && utmi_tx_ready;
	assign link_rx_active = use_utmi && port_power && overcurrent_n && utmi_rx_active;
	assign link_rx_valid = use_utmi && port_power && overcurrent_n && utmi_rx_valid;
	assign link_rx_data = utmi_data_i;
	assign link_rx_error = use_utmi && utmi_rx_error;

	assign utmi_data_o = link_tx_data;
	assign utmi_tx_valid = use_utmi && port_power && overcurrent_n && link_tx_valid;
	assign utmi_xcvr_select = 2'b01; // Full-speed transceiver. High-speed negotiation is a later layer.
	assign utmi_op_mode = port_reset ? 2'b10 : 2'b00;
	assign utmi_term_select = port_power;
	assign utmi_suspend_n = port_power && overcurrent_n;
	assign utmi_reset_n = !reset && !port_reset;
	assign connected = port_power && overcurrent_n && (utmi_line_state != 2'b00);
	assign status = {8'h55, use_utmi, port_power, port_reset, overcurrent_n,
	                 connected, utmi_tx_ready, utmi_rx_active, utmi_rx_valid,
	                 utmi_rx_error, link_tx_last, utmi_line_state,
	                 activity_count[11:0]};

	always_ff @(posedge clk) begin
		if(reset) begin
			line_state_d <= 2'b00;
			activity_count <= 16'h0000;
		end else begin
			if(utmi_line_state != line_state_d) begin
				line_state_d <= utmi_line_state;
				activity_count <= activity_count + 16'd1;
			end
		end
	end
endmodule
