// Copyright 2025 Dennis Michael Heine

import harvos_usb_pkg::*;

module harvos_usb_packet_engine
#(
	parameter logic [31:0] RESPONSE_TIMEOUT_TICKS = 32'd48000,
	parameter logic [15:0] RETRY_DELAY_TICKS = 16'd256
)
(
	input  logic        clk,
	input  logic        reset,

	input  logic        enable,
	input  logic        sim_mode,
	input  logic        connected,
	input  logic        start,
	input  logic [31:0] command,
	input  logic [31:0] token,
	input  logic [15:0] length,
	input  logic [3:0]  retry_limit,
	input  logic [31:0] frame,

	output logic        tx_valid,
	output logic [7:0]  tx_data,
	output logic        tx_last,
	input  logic        tx_ready,

	input  logic        rx_active,
	input  logic        rx_valid,
	input  logic [7:0]  rx_data,
	input  logic        rx_error,

	output logic        busy,
	output logic        done,
	output logic        fault,
	output logic [1:0]  handshake,
	output logic [3:0]  retry_count,
	output logic [15:0] actual_len,
	output logic [31:0] packet_status,
	output logic [31:0] status
);
	typedef enum logic [3:0] {
		PE_IDLE      = 4'd0,
		PE_TX_TOKEN  = 4'd1,
		PE_TX_DATA   = 4'd2,
		PE_WAIT_RESP = 4'd3,
		PE_TX_ACK    = 4'd4,
		PE_RETRY     = 4'd5,
		PE_DONE      = 4'd6,
		PE_FAULT     = 4'd7
	} pe_state_e;

	pe_state_e state;
	logic [15:0] tx_index;
	logic [15:0] tx_crc;
	logic [31:0] timeout_count;
	logic [15:0] retry_delay;
	logic        rx_clear;
	logic [15:0] tx_crc_inv;

	logic        rx_packet_done;
	logic [7:0]  rx_pid_byte;
	logic [3:0]  rx_pid_code;
	logic        rx_pid_ok;
	logic        rx_crc_ok;
	logic        rx_data_packet;
	logic        rx_token_packet;
	logic [1:0]  rx_handshake;
	logic [15:0] rx_payload_len;
	logic        rx_packet_error;
	logic [31:0] rx_status;

	wire [3:0] inferred_token_pid = token[0] ? USB_PID_IN : USB_PID_OUT;
	wire [3:0] token_pid_code = usb_pid_valid(command[15:8]) ? command[11:8] : inferred_token_pid;
	wire [3:0] data_pid_code = usb_pid_valid(command[23:16]) ? command[19:16] : USB_PID_DATA0;
	wire [7:0] token_pid_byte = usb_pid_byte(token_pid_code);
	wire [7:0] data_pid_byte = usb_pid_byte(data_pid_code);
	wire [7:0] ack_pid_byte = usb_pid_byte(USB_PID_ACK);
	wire [10:0] token_bits = token[10:0];
	wire [4:0] token_crc5 = usb_crc5_token(token_bits);
	wire        needs_out_data = (token_pid_code == USB_PID_OUT) ||
	                             (token_pid_code == USB_PID_SETUP);
	wire        needs_response = (token_pid_code == USB_PID_IN) ||
	                             (token_pid_code == USB_PID_OUT) ||
	                             (token_pid_code == USB_PID_SETUP);
	wire        send_data_phase = needs_out_data && (length != 16'h0000);
	wire [15:0] data_crc_index_lo = length + 16'd1;
	wire [15:0] data_crc_index_hi = length + 16'd2;
	wire [7:0] generated_payload_byte = token[7:0] ^ tx_index[7:0] ^
	                                    frame[7:0] ^ 8'hA5;

	assign packet_status = rx_status;
	assign tx_crc_inv = ~tx_crc;
	assign status = {8'h50, state, busy, done, fault, sim_mode, connected,
	                 handshake, retry_count, actual_len[7:0]};

	harvos_usb_packet_rx packet_rx (
		.clk(clk),
		.reset(reset),
		.clear(rx_clear),
		.rx_active(rx_active),
		.rx_valid(rx_valid),
		.rx_data(rx_data),
		.rx_error(rx_error),
		.packet_done(rx_packet_done),
		.pid_byte(rx_pid_byte),
		.pid_code(rx_pid_code),
		.pid_ok(rx_pid_ok),
		.crc_ok(rx_crc_ok),
		.data_packet(rx_data_packet),
		.token_packet(rx_token_packet),
		.handshake(rx_handshake),
		.payload_len(rx_payload_len),
		.error(rx_packet_error),
		.status(rx_status)
	);

	always_comb begin
		tx_valid = 1'b0;
		tx_data  = 8'h00;
		tx_last  = 1'b0;

		case(state)
			PE_TX_TOKEN: begin
				tx_valid = 1'b1;
				case(tx_index[1:0])
					2'd0: tx_data = token_pid_byte;
					2'd1: tx_data = token_bits[7:0];
					default: tx_data = {token_crc5, token_bits[10:8]};
				endcase
				tx_last = (tx_index == 16'd2);
			end

			PE_TX_DATA: begin
				tx_valid = 1'b1;
				if(tx_index == 16'd0) begin
					tx_data = data_pid_byte;
				end else if(tx_index <= length) begin
					tx_data = generated_payload_byte;
				end else if(tx_index == data_crc_index_lo) begin
					tx_data = tx_crc_inv[7:0];
				end else begin
					tx_data = tx_crc_inv[15:8];
				end
				tx_last = (tx_index == data_crc_index_hi);
			end

			PE_TX_ACK: begin
				tx_valid = 1'b1;
				tx_data  = ack_pid_byte;
				tx_last  = 1'b1;
			end

			default: begin
				tx_valid = 1'b0;
				tx_data  = 8'h00;
				tx_last  = 1'b0;
			end
		endcase
	end

	always_ff @(posedge clk) begin
		if(reset) begin
			state         <= PE_IDLE;
			tx_index      <= 16'h0000;
			tx_crc        <= 16'hFFFF;
			timeout_count <= 32'h0000_0000;
			retry_delay   <= 16'h0000;
			rx_clear      <= 1'b0;
			busy          <= 1'b0;
			done          <= 1'b0;
			fault         <= 1'b0;
			handshake     <= USB_HANDSHAKE_NONE;
			retry_count   <= 4'h0;
			actual_len    <= 16'h0000;
		end else begin
			rx_clear <= 1'b0;
			done <= 1'b0;

			case(state)
				PE_IDLE: begin
					busy <= 1'b0;
					if(start) begin
						rx_clear <= 1'b1;
						retry_count <= 4'h0;
						handshake <= USB_HANDSHAKE_NONE;
						actual_len <= 16'h0000;
						timeout_count <= 32'h0000_0000;
						tx_index <= 16'h0000;
						tx_crc <= 16'hFFFF;
						if(enable && connected) begin
							busy <= 1'b1;
							fault <= 1'b0;
							state <= PE_TX_TOKEN;
						end else begin
							busy <= 1'b0;
							fault <= 1'b1;
							state <= PE_FAULT;
						end
					end
				end

				PE_TX_TOKEN: begin
					if(tx_valid && tx_ready) begin
						if(tx_index == 16'd2) begin
							tx_index <= 16'h0000;
							tx_crc <= 16'hFFFF;
							timeout_count <= 32'h0000_0000;
							if(send_data_phase) begin
								state <= PE_TX_DATA;
							end else if(needs_response) begin
								state <= PE_WAIT_RESP;
							end else begin
								state <= PE_DONE;
							end
						end else begin
							tx_index <= tx_index + 16'd1;
						end
					end
				end

				PE_TX_DATA: begin
					if(tx_valid && tx_ready) begin
						if(tx_index != 16'd0 && tx_index <= length) begin
							tx_crc <= usb_crc16_next(tx_crc, generated_payload_byte);
						end

						if(tx_index == data_crc_index_hi) begin
							tx_index <= 16'h0000;
							timeout_count <= 32'h0000_0000;
							state <= PE_WAIT_RESP;
						end else begin
							tx_index <= tx_index + 16'd1;
						end
					end
				end

				PE_WAIT_RESP: begin
					if(sim_mode) begin
						handshake <= USB_HANDSHAKE_ACK;
						actual_len <= length;
						state <= PE_DONE;
					end else if(rx_packet_done) begin
						if(rx_packet_error) begin
							if(retry_count < retry_limit) begin
								retry_count <= retry_count + 4'd1;
								retry_delay <= RETRY_DELAY_TICKS;
								state <= PE_RETRY;
							end else begin
								fault <= 1'b1;
								state <= PE_FAULT;
							end
						end else if(rx_handshake == USB_HANDSHAKE_ACK) begin
							handshake <= USB_HANDSHAKE_ACK;
							actual_len <= length;
							state <= PE_DONE;
						end else if(rx_handshake == USB_HANDSHAKE_NAK) begin
							handshake <= USB_HANDSHAKE_NAK;
							if(retry_count < retry_limit) begin
								retry_count <= retry_count + 4'd1;
								retry_delay <= RETRY_DELAY_TICKS;
								state <= PE_RETRY;
							end else begin
								fault <= 1'b1;
								state <= PE_FAULT;
							end
						end else if(rx_handshake == USB_HANDSHAKE_STALL) begin
							handshake <= USB_HANDSHAKE_STALL;
							fault <= 1'b1;
							state <= PE_FAULT;
						end else if(rx_data_packet && rx_crc_ok) begin
							handshake <= USB_HANDSHAKE_ACK;
							actual_len <= rx_payload_len;
							tx_index <= 16'h0000;
							state <= PE_TX_ACK;
						end else begin
							if(retry_count < retry_limit) begin
								retry_count <= retry_count + 4'd1;
								retry_delay <= RETRY_DELAY_TICKS;
								state <= PE_RETRY;
							end else begin
								fault <= 1'b1;
								state <= PE_FAULT;
							end
						end
					end else if(timeout_count >= RESPONSE_TIMEOUT_TICKS) begin
						if(retry_count < retry_limit) begin
							retry_count <= retry_count + 4'd1;
							retry_delay <= RETRY_DELAY_TICKS;
							state <= PE_RETRY;
						end else begin
							fault <= 1'b1;
							state <= PE_FAULT;
						end
					end else begin
						timeout_count <= timeout_count + 32'd1;
					end
				end

				PE_TX_ACK: begin
					if(tx_valid && tx_ready) begin
						state <= PE_DONE;
					end
				end

				PE_RETRY: begin
					if(retry_delay != 16'h0000) begin
						retry_delay <= retry_delay - 16'd1;
					end else begin
						rx_clear <= 1'b1;
						tx_index <= 16'h0000;
						tx_crc <= 16'hFFFF;
						timeout_count <= 32'h0000_0000;
						state <= PE_TX_TOKEN;
					end
				end

				PE_DONE: begin
					busy <= 1'b0;
					done <= 1'b1;
					state <= PE_IDLE;
				end

				PE_FAULT: begin
					busy <= 1'b0;
					done <= 1'b0;
					state <= PE_IDLE;
				end

				default: begin
					state <= PE_IDLE;
				end
			endcase
		end
	end
endmodule
