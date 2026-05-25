// Copyright 2025 Dennis Michael Heine

module harvos_usb_fs_phy
#(
	parameter int BIT_TICKS = 4,
	parameter logic [15:0] CONNECT_STABLE_TICKS = 16'd4096
)
(
	input  logic        clk,
	input  logic        reset,

	input  logic        port_power,
	input  logic        port_reset,
	input  logic        force_connected,

	input  logic        tx_valid,
	input  logic [7:0]  tx_data,
	input  logic        tx_last,
	output logic        tx_ready,

	output logic        rx_active,
	output logic        rx_valid,
	output logic [7:0]  rx_data,
	output logic        rx_error,

	input  logic        dp_i,
	input  logic        dm_i,
	output logic        dp_drive_low,
	output logic        dm_drive_low,

	output logic        connected,
	output logic        low_speed,
	output logic        busy,
	output logic        done,
	output logic        fault,
	output logic [31:0] status
);
	typedef enum logic [2:0] {
		TX_IDLE = 3'd0,
		TX_SYNC = 3'd1,
		TX_BITS = 3'd2,
		TX_LOAD = 3'd3,
		TX_EOP0 = 3'd4,
		TX_EOP1 = 3'd5,
		TX_EOPJ = 3'd6
	} tx_state_e;

	tx_state_e tx_state;
	logic [15:0] bit_timer;
	logic [7:0]  tx_shift;
	logic [7:0]  tx_sync_shift;
	logic [2:0]  tx_bit_index;
	logic [2:0]  tx_ones;
	logic        tx_stuff_pending;
	logic        tx_last_byte;
	logic        tx_nrzi_level;
	logic [1:0]  line_state;
	logic [1:0]  prev_line_state;
	logic [15:0] stable_count;
	logic [15:0] activity_count;

	logic        rx_prev_level;
	logic [15:0] rx_bit_timer;
	logic [2:0]  rx_bit_index;
	logic [2:0]  rx_ones;
	logic [7:0]  rx_shift;
	logic        rx_skip_sync;
	logic [7:0]  rx_assembled;
	logic        rx_line_j;
	logic        rx_line_k;
	logic        rx_line_se0;
	logic        rx_current_level;
	logic        rx_decoded_bit;

	assign line_state = {dp_i, dm_i};
	assign tx_ready = port_power && !port_reset &&
	                  ((tx_state == TX_IDLE) || (tx_state == TX_LOAD));
	assign busy = (tx_state != TX_IDLE) || rx_active;
	assign status = {8'h46, tx_state, tx_ready, rx_active, rx_valid, rx_error,
	                 fault, connected, low_speed, line_state,
	                 tx_ones, rx_ones, activity_count[5:0]};

	function automatic logic bit_tick_done(input logic [15:0] timer);
		bit_tick_done = (timer == (BIT_TICKS - 1));
	endfunction

	task automatic drive_j;
		begin
			dp_drive_low <= low_speed;
			dm_drive_low <= !low_speed;
		end
	endtask

	task automatic drive_k;
		begin
			dp_drive_low <= !low_speed;
			dm_drive_low <= low_speed;
		end
	endtask

	task automatic drive_se0;
		begin
			dp_drive_low <= 1'b1;
			dm_drive_low <= 1'b1;
		end
	endtask

	task automatic drive_idle;
		begin
			dp_drive_low <= 1'b0;
			dm_drive_low <= 1'b0;
		end
	endtask

	task automatic drive_level(input logic level);
		begin
			if(level) drive_j();
			else drive_k();
		end
	endtask

	task automatic drive_nrzi(input logic data_bit);
		logic next_level;
		begin
			next_level = tx_nrzi_level;
			if(!data_bit) next_level = !tx_nrzi_level;
			tx_nrzi_level <= next_level;
			drive_level(next_level);
		end
	endtask

	always_comb begin
		if(low_speed) begin
			rx_line_j = (line_state == 2'b01);
			rx_line_k = (line_state == 2'b10);
		end else begin
			rx_line_j = (line_state == 2'b10);
			rx_line_k = (line_state == 2'b01);
		end
		rx_line_se0 = (line_state == 2'b00);
		rx_current_level = rx_line_j;
		rx_decoded_bit = (rx_current_level == rx_prev_level);
		rx_assembled = {rx_decoded_bit, rx_shift[7:1]};
	end

	always_ff @(posedge clk) begin
		if(reset) begin
			tx_state <= TX_IDLE;
			bit_timer <= 16'h0000;
			tx_shift <= 8'h00;
			tx_sync_shift <= 8'h80;
			tx_bit_index <= 3'h0;
			tx_ones <= 3'h0;
			tx_stuff_pending <= 1'b0;
			tx_last_byte <= 1'b0;
			tx_nrzi_level <= 1'b1;
			prev_line_state <= 2'b00;
			stable_count <= 16'h0000;
			activity_count <= 16'h0000;
			rx_prev_level <= 1'b1;
			rx_bit_timer <= 16'h0000;
			rx_bit_index <= 3'h0;
			rx_ones <= 3'h0;
			rx_shift <= 8'h00;
			rx_skip_sync <= 1'b0;
			rx_active <= 1'b0;
			rx_valid <= 1'b0;
			rx_data <= 8'h00;
			rx_error <= 1'b0;
			connected <= 1'b0;
			low_speed <= 1'b0;
			done <= 1'b0;
			fault <= 1'b0;
			drive_idle();
		end else begin
			done <= 1'b0;
			rx_valid <= 1'b0;

			if(line_state == prev_line_state) begin
				if(stable_count != 16'hFFFF) stable_count <= stable_count + 16'd1;
			end else begin
				prev_line_state <= line_state;
				stable_count <= 16'h0000;
				activity_count <= activity_count + 16'd1;
			end

			if(!port_power || port_reset) begin
				connected <= force_connected && port_power;
			end else if(force_connected) begin
				connected <= 1'b1;
				low_speed <= 1'b0;
			end else if(stable_count >= CONNECT_STABLE_TICKS) begin
				if(line_state == 2'b10) begin
					connected <= 1'b1;
					low_speed <= 1'b0;
				end else if(line_state == 2'b01) begin
					connected <= 1'b1;
					low_speed <= 1'b1;
				end else if(line_state == 2'b00) begin
					connected <= 1'b0;
				end
			end

			if(!port_power || port_reset) begin
				tx_state <= TX_IDLE;
				bit_timer <= 16'h0000;
				rx_active <= 1'b0;
				rx_error <= 1'b0;
				rx_bit_timer <= 16'h0000;
				fault <= 1'b0;
				drive_idle();
			end else begin
				if(tx_state == TX_IDLE || tx_state == TX_LOAD) begin
					if(tx_valid && tx_ready) begin
						tx_shift <= tx_data;
						tx_last_byte <= tx_last;
						tx_bit_index <= 3'h0;
						tx_ones <= 3'h0;
						tx_stuff_pending <= 1'b0;
						tx_nrzi_level <= 1'b1;
						bit_timer <= 16'h0000;
						if(tx_state == TX_IDLE) begin
							tx_sync_shift <= 8'h80;
							tx_state <= TX_SYNC;
							drive_k();
						end else begin
							tx_state <= TX_BITS;
						end
					end else if(tx_state == TX_IDLE) begin
						drive_idle();
					end
				end else if(!bit_tick_done(bit_timer)) begin
					bit_timer <= bit_timer + 16'd1;
				end else begin
					bit_timer <= 16'h0000;
					case(tx_state)
						TX_SYNC: begin
							drive_nrzi(tx_sync_shift[0]);
							tx_sync_shift <= {1'b0, tx_sync_shift[7:1]};
							if(tx_bit_index == 3'd7) begin
								tx_bit_index <= 3'h0;
								tx_ones <= 3'h0;
								tx_state <= TX_BITS;
							end else begin
								tx_bit_index <= tx_bit_index + 3'd1;
							end
						end

						TX_BITS: begin
							if(tx_stuff_pending) begin
								drive_nrzi(1'b0);
								tx_stuff_pending <= 1'b0;
								tx_ones <= 3'h0;
							end else begin
								drive_nrzi(tx_shift[0]);
								if(tx_shift[0]) begin
									if(tx_ones == 3'd5) tx_stuff_pending <= 1'b1;
									tx_ones <= tx_ones + 3'd1;
								end else begin
									tx_ones <= 3'h0;
								end
								tx_shift <= {1'b0, tx_shift[7:1]};
								if(tx_bit_index == 3'd7) begin
									tx_bit_index <= 3'h0;
									if(tx_last_byte) tx_state <= TX_EOP0;
									else tx_state <= TX_LOAD;
								end else begin
									tx_bit_index <= tx_bit_index + 3'd1;
								end
							end
						end

						TX_EOP0: begin
							drive_se0();
							tx_state <= TX_EOP1;
						end

						TX_EOP1: begin
							drive_se0();
							tx_state <= TX_EOPJ;
						end

						TX_EOPJ: begin
							drive_j();
							done <= 1'b1;
							tx_state <= TX_IDLE;
						end

						default: begin
							tx_state <= TX_IDLE;
						end
					endcase
				end

				if(rx_active) begin
					if(!bit_tick_done(rx_bit_timer)) begin
						rx_bit_timer <= rx_bit_timer + 16'd1;
					end else begin
						rx_bit_timer <= 16'h0000;
						if(rx_line_se0) begin
							rx_active <= 1'b0;
							rx_prev_level <= 1'b1;
						end else begin
							if(rx_ones == 3'd6) begin
								if(rx_decoded_bit) rx_error <= 1'b1;
								rx_ones <= 3'h0;
							end else begin
								if(rx_decoded_bit) rx_ones <= rx_ones + 3'd1;
								else rx_ones <= 3'h0;

								rx_shift <= rx_assembled;
								if(rx_bit_index == 3'd7) begin
									rx_bit_index <= 3'h0;
									if(rx_skip_sync) begin
										rx_skip_sync <= 1'b0;
									end else begin
										rx_data <= rx_assembled;
										rx_valid <= 1'b1;
									end
								end else begin
									rx_bit_index <= rx_bit_index + 3'd1;
								end
							end
							rx_prev_level <= rx_current_level;
						end
					end
				end else if(!busy && rx_line_k) begin
					rx_active <= 1'b1;
					rx_error <= 1'b0;
					rx_bit_index <= 3'h0;
					rx_ones <= 3'h0;
					rx_shift <= 8'h00;
					rx_skip_sync <= 1'b1;
					rx_prev_level <= 1'b1;
					rx_bit_timer <= 16'h0000;
				end
			end
		end
	end
endmodule
