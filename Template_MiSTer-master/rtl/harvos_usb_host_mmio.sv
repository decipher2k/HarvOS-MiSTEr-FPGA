// Copyright 2025 Dennis Michael Heine

module harvos_usb_host_mmio
#(
	parameter logic [31:0] DMA_WINDOW_BASE = 32'h0000_0500,
	parameter int DMA_WINDOW_BYTES = 2048
)
(
	input  logic        clk,
	input  logic        reset,

	input  logic        mmio_req,
	input  logic        mmio_we,
	input  logic [7:0]  mmio_addr,
	input  logic [31:0] mmio_wdata,
	input  logic [3:0]  mmio_be,
	output logic [31:0] mmio_rdata,

	output logic        irq,

	output logic        dma_req,
	output logic        dma_we,
	output logic [31:0] dma_addr,
	output logic [15:0] dma_len,
	output logic [31:0] dma_wdata,
	input  logic        dma_allow,
	input  logic        dma_fault,

	input  logic        usb_dp_i,
	input  logic        usb_dm_i,
	output logic        usb_dp_drive_low,
	output logic        usb_dm_drive_low,
	output logic        usb_port_power_en,
	input  logic        usb_port_overcurrent_n,

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

	output logic [31:0] status
);
	localparam logic [31:0] USB_ID = 32'h4855_5342; // "HUSB"
	localparam logic [15:0] DMA_WORD_BYTES = 16'd4;

	logic [31:0] ctrl;
	logic [31:0] irq_enable;
	logic [31:0] irq_status;
	logic [31:0] command;
	logic [31:0] dma_base;
	logic [31:0] dma_total_len;
	logic [31:0] dma_progress;
	logic [31:0] token;
	logic [31:0] frame;
	logic [31:0] actual_len;
	logic [31:0] retry_ctrl;
	logic        busy;
	logic        done;
	logic        fault;
	logic        packet_done_seen;

	logic        fs_connected;
	logic        fs_low_speed;
	logic        fs_busy;
	logic        fs_done;
	logic        fs_fault;
	logic [31:0] fs_status;
	logic        fs_tx_valid;
	logic        fs_tx_ready;
	logic [7:0]  fs_tx_data;
	logic        fs_tx_last;
	logic        fs_rx_active;
	logic        fs_rx_valid;
	logic [7:0]  fs_rx_data;
	logic        fs_rx_error;

	logic        utmi_link_connected;
	logic [31:0] utmi_status;
	logic        utmi_link_tx_valid;
	logic        utmi_link_tx_ready;
	logic        utmi_link_rx_active;
	logic        utmi_link_rx_valid;
	logic [7:0]  utmi_link_rx_data;
	logic        utmi_link_rx_error;

	logic        pe_tx_valid;
	logic [7:0]  pe_tx_data;
	logic        pe_tx_last;
	logic        pe_tx_ready;
	logic        pe_rx_active;
	logic        pe_rx_valid;
	logic [7:0]  pe_rx_data;
	logic        pe_rx_error;
	logic        pe_busy;
	logic        pe_done;
	logic        pe_fault;
	logic [1:0]  pe_handshake;
	logic [3:0]  pe_retry_count;
	logic [15:0] pe_actual_len;
	logic [31:0] packet_status;
	logic [31:0] pe_status;

	function automatic logic dma_range_ok(
		input logic [31:0] base,
		input logic [31:0] len
	);
		logic [32:0] dma_start;
		logic [32:0] dma_end;
		logic [32:0] window_start;
		logic [32:0] window_end;
		begin
			dma_start = {1'b0, base};
			dma_end = dma_start + {1'b0, len};
			window_start = {1'b0, DMA_WINDOW_BASE};
			window_end = {1'b0, DMA_WINDOW_BASE} + DMA_WINDOW_BYTES;
			dma_range_ok = (len <= DMA_WINDOW_BYTES) &&
			               ((len == 32'h0000_0000) || (dma_end > dma_start)) &&
			               (dma_start >= window_start) &&
			               (dma_end <= window_end);
		end
	endfunction

	wire clear_ctrl = mmio_req && mmio_we && (mmio_addr == 8'h04) && mmio_wdata[2];
	wire start_cmd = mmio_req && mmio_we && (mmio_addr == 8'h1C) && mmio_wdata[0];
	wire port_power = ctrl[3];
	wire use_utmi = ctrl[4];
	wire port_reset = ctrl[5];
	wire sim_mode = ctrl[1];
	wire port_overcurrent = port_power && !usb_port_overcurrent_n;
	wire selected_connected = use_utmi ? utmi_link_connected : fs_connected;
	wire connected = port_power && usb_port_overcurrent_n && (sim_mode || selected_connected);
	wire dma_request_ok = dma_range_ok(dma_base, dma_total_len);
	wire start_transfer = start_cmd && ctrl[0] && connected && !busy && !port_overcurrent && dma_request_ok;
	wire dma_active = busy && (dma_progress < dma_total_len);
	wire [31:0] dma_next_addr = dma_base + dma_progress;
	wire [31:0] dma_remaining = dma_total_len - dma_progress;
	wire [3:0] retry_limit = retry_ctrl[3:0];
	wire transfer_complete_now = pe_done && ((dma_total_len == 32'h0000_0000) ||
	                                         (dma_progress >= dma_total_len));
	wire [31:0] final_actual_len = {16'h0000, pe_actual_len};

	assign usb_port_power_en = port_power && usb_port_overcurrent_n;
	assign irq = (irq_status & irq_enable) != 32'h0000_0000;
	assign dma_req = dma_active;
	assign dma_we = 1'b1;
	assign dma_addr = dma_next_addr;
	assign dma_len = DMA_WORD_BYTES;
	assign dma_wdata = 32'h5553_4200 ^ token ^ dma_next_addr ^
	                   {pe_handshake, pe_retry_count, frame[9:0], frame[15:0]};
	assign status = {16'h4855, use_utmi, port_power, port_reset,
	                 port_overcurrent, irq, fault, done, busy,
	                 connected, fs_low_speed, pe_handshake, pe_retry_count};

	assign fs_tx_valid = !sim_mode && !use_utmi && pe_tx_valid;
	assign fs_tx_data = pe_tx_data;
	assign fs_tx_last = pe_tx_last;

	assign utmi_link_tx_valid = !sim_mode && use_utmi && pe_tx_valid;
	assign pe_tx_ready = sim_mode ? 1'b1 :
	                     (use_utmi ? utmi_link_tx_ready : fs_tx_ready);
	assign pe_rx_active = sim_mode ? 1'b0 :
	                      (use_utmi ? utmi_link_rx_active : fs_rx_active);
	assign pe_rx_valid = sim_mode ? 1'b0 :
	                     (use_utmi ? utmi_link_rx_valid : fs_rx_valid);
	assign pe_rx_data = use_utmi ? utmi_link_rx_data : fs_rx_data;
	assign pe_rx_error = sim_mode ? 1'b0 :
	                     (use_utmi ? utmi_link_rx_error : fs_rx_error);

	harvos_usb_fs_phy #(
		.BIT_TICKS(4),
		.CONNECT_STABLE_TICKS(4096)
	) fs_phy (
		.clk(clk),
		.reset(reset),
		.port_power(port_power && !use_utmi),
		.port_reset(port_reset),
		.force_connected(sim_mode),
		.tx_valid(fs_tx_valid),
		.tx_data(fs_tx_data),
		.tx_last(fs_tx_last),
		.tx_ready(fs_tx_ready),
		.rx_active(fs_rx_active),
		.rx_valid(fs_rx_valid),
		.rx_data(fs_rx_data),
		.rx_error(fs_rx_error),
		.dp_i(usb_dp_i),
		.dm_i(usb_dm_i),
		.dp_drive_low(usb_dp_drive_low),
		.dm_drive_low(usb_dm_drive_low),
		.connected(fs_connected),
		.low_speed(fs_low_speed),
		.busy(fs_busy),
		.done(fs_done),
		.fault(fs_fault),
		.status(fs_status)
	);

	harvos_usb_utmi_adapter utmi_adapter (
		.clk(clk),
		.reset(reset),
		.use_utmi(use_utmi),
		.port_power(port_power),
		.port_reset(port_reset),
		.overcurrent_n(usb_port_overcurrent_n),
		.link_tx_valid(utmi_link_tx_valid),
		.link_tx_data(pe_tx_data),
		.link_tx_last(pe_tx_last),
		.link_tx_ready(utmi_link_tx_ready),
		.link_rx_active(utmi_link_rx_active),
		.link_rx_valid(utmi_link_rx_valid),
		.link_rx_data(utmi_link_rx_data),
		.link_rx_error(utmi_link_rx_error),
		.utmi_data_o(utmi_data_o),
		.utmi_data_i(utmi_data_i),
		.utmi_tx_valid(utmi_tx_valid),
		.utmi_tx_ready(utmi_tx_ready),
		.utmi_rx_valid(utmi_rx_valid),
		.utmi_rx_active(utmi_rx_active),
		.utmi_rx_error(utmi_rx_error),
		.utmi_line_state(utmi_line_state),
		.utmi_xcvr_select(utmi_xcvr_select),
		.utmi_op_mode(utmi_op_mode),
		.utmi_term_select(utmi_term_select),
		.utmi_suspend_n(utmi_suspend_n),
		.utmi_reset_n(utmi_reset_n),
		.connected(utmi_link_connected),
		.status(utmi_status)
	);

	harvos_usb_packet_engine packet_engine (
		.clk(clk),
		.reset(reset || clear_ctrl),
		.enable(ctrl[0]),
		.sim_mode(sim_mode),
		.connected(connected),
		.start(start_transfer),
		.command(command),
		.token(token),
		.length(dma_total_len[15:0]),
		.retry_limit(retry_limit),
		.frame(frame),
		.tx_valid(pe_tx_valid),
		.tx_data(pe_tx_data),
		.tx_last(pe_tx_last),
		.tx_ready(pe_tx_ready),
		.rx_active(pe_rx_active),
		.rx_valid(pe_rx_valid),
		.rx_data(pe_rx_data),
		.rx_error(pe_rx_error),
		.busy(pe_busy),
		.done(pe_done),
		.fault(pe_fault),
		.handshake(pe_handshake),
		.retry_count(pe_retry_count),
		.actual_len(pe_actual_len),
		.packet_status(packet_status),
		.status(pe_status)
	);

	function automatic logic [31:0] apply_wstrb(
		input logic [31:0] old_word,
		input logic [31:0] new_word,
		input logic [3:0]  be
	);
		begin
			apply_wstrb = old_word;
			if(be[0]) apply_wstrb[7:0]   = new_word[7:0];
			if(be[1]) apply_wstrb[15:8]  = new_word[15:8];
			if(be[2]) apply_wstrb[23:16] = new_word[23:16];
			if(be[3]) apply_wstrb[31:24] = new_word[31:24];
		end
	endfunction

	always_comb begin
		case(mmio_addr)
			8'h00: mmio_rdata = USB_ID;
			8'h04: mmio_rdata = ctrl;
			8'h08: mmio_rdata = status;
			8'h0C: mmio_rdata = irq_enable;
			8'h10: mmio_rdata = irq_status;
			8'h14: mmio_rdata = dma_base;
			8'h18: mmio_rdata = dma_total_len;
			8'h1C: mmio_rdata = command;
			8'h20: mmio_rdata = {16'h0002, usb_port_overcurrent_n, use_utmi,
			                      port_reset, port_power, connected,
			                      fs_low_speed, 8'h00};
			8'h24: mmio_rdata = frame;
			8'h28: mmio_rdata = actual_len;
			8'h2C: mmio_rdata = token;
			8'h30: mmio_rdata = use_utmi ? utmi_status : fs_status;
			8'h34: mmio_rdata = packet_status;
			8'h38: mmio_rdata = retry_ctrl;
			8'h3C: mmio_rdata = pe_status;
			default: mmio_rdata = 32'h0000_0000;
		endcase
	end

	always_ff @(posedge clk) begin
		if(reset) begin
			ctrl             <= 32'h0000_0000;
			irq_enable       <= 32'h0000_0000;
			irq_status       <= 32'h0000_0000;
			command          <= 32'h0000_0000;
			dma_base         <= DMA_WINDOW_BASE;
			dma_total_len    <= 32'h0000_0000;
			dma_progress     <= 32'h0000_0000;
			token            <= 32'h0000_0000;
			frame            <= 32'h0000_0000;
			actual_len       <= 32'h0000_0000;
			retry_ctrl       <= 32'h0000_0003;
			busy             <= 1'b0;
			done             <= 1'b0;
			fault            <= 1'b0;
			packet_done_seen <= 1'b0;
		end else begin
			frame <= frame + 32'd1;

			if(mmio_req && mmio_we) begin
				case(mmio_addr)
					8'h04: begin
						ctrl <= apply_wstrb(ctrl, mmio_wdata, mmio_be);
						if(mmio_wdata[2]) begin
							done <= 1'b0;
							fault <= 1'b0;
							packet_done_seen <= 1'b0;
							irq_status <= 32'h0000_0000;
						end
					end
					8'h0C: irq_enable <= apply_wstrb(irq_enable, mmio_wdata, mmio_be);
					8'h10: irq_status <= irq_status & ~mmio_wdata;
					8'h14: dma_base <= apply_wstrb(dma_base, mmio_wdata, mmio_be);
					8'h18: dma_total_len <= apply_wstrb(dma_total_len, mmio_wdata, mmio_be);
					8'h1C: command <= apply_wstrb(command, mmio_wdata, mmio_be);
					8'h2C: token <= apply_wstrb(token, mmio_wdata, mmio_be);
					8'h38: retry_ctrl <= apply_wstrb(retry_ctrl, mmio_wdata, mmio_be);
					default: begin end
				endcase
			end

			if(port_overcurrent) begin
				busy <= 1'b0;
				fault <= 1'b1;
				irq_status <= irq_status | 32'h0000_0012;
			end else if(start_cmd && (!ctrl[0] || !connected || busy || !dma_request_ok)) begin
				if(!busy) begin
					done <= 1'b0;
					fault <= 1'b1;
					irq_status <= irq_status | 32'h0000_0002;
				end
			end else if(start_transfer) begin
				busy <= 1'b1;
				done <= 1'b0;
				fault <= 1'b0;
				packet_done_seen <= 1'b0;
				irq_status <= irq_status & ~32'h0000_001F;
				dma_progress <= 32'h0000_0000;
				actual_len <= 32'h0000_0000;
			end else if(busy && (pe_fault || fs_fault)) begin
				busy <= 1'b0;
				fault <= 1'b1;
				irq_status <= irq_status | 32'h0000_0002 |
				              ((pe_handshake == 2'd3) ? 32'h0000_0004 : 32'h0000_0000) |
				              ((pe_handshake == 2'd2) ? 32'h0000_0008 : 32'h0000_0000);
			end else if(busy) begin
				if(pe_done) begin
					packet_done_seen <= 1'b1;
				end

				if(dma_active) begin
					if(dma_fault || !dma_allow) begin
						busy <= 1'b0;
						fault <= 1'b1;
						irq_status <= irq_status | 32'h0000_0002;
					end else begin
						dma_progress <= dma_progress + 32'd4;
						if(dma_remaining <= 32'd4) begin
							actual_len <= (final_actual_len != 32'h0000_0000) ?
							              final_actual_len : dma_total_len;
							if(packet_done_seen || pe_done) begin
								busy <= 1'b0;
								done <= 1'b1;
								irq_status <= irq_status | 32'h0000_0001;
							end
						end
					end
				end else if(packet_done_seen || transfer_complete_now) begin
					actual_len <= (final_actual_len != 32'h0000_0000) ?
					              final_actual_len : dma_total_len;
					busy <= 1'b0;
					done <= 1'b1;
					irq_status <= irq_status | 32'h0000_0001;
				end
			end
		end
	end
endmodule
