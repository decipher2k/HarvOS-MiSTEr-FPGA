// Copyright 2025 Dennis Michael Heine

import harvos_usb_pkg::*;

module harvos_usb_packet_rx
(
	input  logic        clk,
	input  logic        reset,
	input  logic        clear,

	input  logic        rx_active,
	input  logic        rx_valid,
	input  logic [7:0]  rx_data,
	input  logic        rx_error,

	output logic        packet_done,
	output logic [7:0]  pid_byte,
	output logic [3:0]  pid_code,
	output logic        pid_ok,
	output logic        crc_ok,
	output logic        data_packet,
	output logic        token_packet,
	output logic [1:0]  handshake,
	output logic [15:0] payload_len,
	output logic        error,
	output logic [31:0] status
);
	logic        active_d;
	logic        seen_pid;
	logic [15:0] data_bytes;
	logic [15:0] crc_calc;
	logic [7:0]  delayed0;
	logic [7:0]  delayed1;
	logic        rx_error_seen;
	logic [15:0] expected_crc;
	logic        crc_result;

	assign expected_crc = ~crc_calc;
	assign crc_result = !data_packet ||
	                    ((data_bytes >= 16'd2) &&
	                     (delayed1 == expected_crc[7:0]) &&
	                     (delayed0 == expected_crc[15:8]));
	assign status = {8'h52, rx_active, packet_done, error, pid_ok, crc_ok,
	                 data_packet, token_packet, handshake, pid_code,
	                 payload_len[7:0]};

	always_ff @(posedge clk) begin
		if(reset || clear) begin
			active_d      <= 1'b0;
			seen_pid      <= 1'b0;
			data_bytes    <= 16'h0000;
			crc_calc      <= 16'hFFFF;
			delayed0      <= 8'h00;
			delayed1      <= 8'h00;
			rx_error_seen <= 1'b0;
			packet_done   <= 1'b0;
			pid_byte      <= 8'h00;
			pid_code      <= 4'h0;
			pid_ok        <= 1'b0;
			crc_ok        <= 1'b0;
			data_packet   <= 1'b0;
			token_packet  <= 1'b0;
			handshake     <= USB_HANDSHAKE_NONE;
			payload_len    <= 16'h0000;
			error         <= 1'b0;
		end else begin
			packet_done <= 1'b0;
			active_d <= rx_active;

			if(rx_active && !active_d) begin
				seen_pid      <= 1'b0;
				data_bytes    <= 16'h0000;
				crc_calc      <= 16'hFFFF;
				delayed0      <= 8'h00;
				delayed1      <= 8'h00;
				rx_error_seen <= 1'b0;
				pid_ok        <= 1'b0;
				crc_ok        <= 1'b0;
				data_packet   <= 1'b0;
				token_packet  <= 1'b0;
				handshake     <= USB_HANDSHAKE_NONE;
				payload_len    <= 16'h0000;
				error         <= 1'b0;
			end

			if(rx_active && rx_error) begin
				rx_error_seen <= 1'b1;
			end

			if(rx_active && rx_valid) begin
				if(!seen_pid) begin
					seen_pid     <= 1'b1;
					pid_byte     <= rx_data;
					pid_code     <= rx_data[3:0];
					pid_ok       <= usb_pid_valid(rx_data);
					data_packet  <= usb_pid_is_data(rx_data[3:0]);
					token_packet <= usb_pid_is_token(rx_data[3:0]);
					handshake    <= usb_handshake_code(rx_data[3:0]);
				end else begin
					data_bytes <= data_bytes + 16'd1;
					delayed1 <= delayed0;
					delayed0 <= rx_data;
					if(data_packet && (data_bytes >= 16'd2)) begin
						crc_calc <= usb_crc16_next(crc_calc, delayed1);
					end
				end
			end

			if(active_d && !rx_active) begin
				packet_done <= seen_pid;
				crc_ok <= crc_result;
				if(data_packet && data_bytes >= 16'd2) begin
					payload_len <= data_bytes - 16'd2;
				end else begin
					payload_len <= 16'h0000;
				end
				error <= rx_error_seen || !pid_ok || !crc_result;
			end
		end
	end
endmodule
