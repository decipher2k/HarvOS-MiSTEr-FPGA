// Copyright 2025 Dennis Michael Heine

module harvos_imem_loader_mmio
#(
	parameter int IMEM_WORDS = 256
)
(
	input  logic        clk,
	input  logic        reset,

	input  logic        mmio_req,
	input  logic        mmio_we,
	input  logic [3:0]  mmio_addr,
	input  logic [31:0] mmio_wdata,
	input  logic [3:0]  mmio_be,
	output logic [31:0] mmio_rdata,

	output logic        imem_wr,
	output logic [31:0] imem_addr,
	output logic [31:0] imem_wdata,

	output logic [31:0] status
);
	localparam logic [31:0] LOADER_ID = 32'h494C_4452; // "ILDR"

	logic [31:0] target_addr;
	logic [31:0] data_word;
	logic [31:0] write_count;
	logic        locked;
	logic        fault;
	logic        done;

	wire clear_cmd = mmio_req && mmio_we && (mmio_addr == 4'h4) && mmio_wdata[2];
	wire write_cmd = mmio_req && mmio_we && (mmio_addr == 4'h4) && mmio_wdata[0];
	wire lock_cmd  = mmio_req && mmio_we && (mmio_addr == 4'h4) && mmio_wdata[1];
	wire addr_ok = (target_addr[1:0] == 2'b00) && (target_addr[31:2] < IMEM_WORDS);

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

	assign status = {13'h0000, locked, fault, done, write_count[15:0]};
	assign imem_addr = target_addr;
	assign imem_wdata = data_word;

	always_comb begin
		case(mmio_addr)
			4'h0: mmio_rdata = LOADER_ID;
			4'h4: mmio_rdata = status;
			4'h8: mmio_rdata = target_addr;
			4'hC: mmio_rdata = data_word;
			default: mmio_rdata = 32'h0000_0000;
		endcase
	end

	always_ff @(posedge clk) begin
		if(reset) begin
			target_addr <= 32'h0000_0000;
			data_word <= 32'h0000_0013;
			write_count <= 32'h0000_0000;
			locked <= 1'b0;
			fault <= 1'b0;
			done <= 1'b0;
			imem_wr <= 1'b0;
		end else begin
			imem_wr <= 1'b0;

			if(clear_cmd && !locked) begin
				fault <= 1'b0;
				done <= 1'b0;
			end

			if(mmio_req && mmio_we && !locked) begin
				case(mmio_addr)
					4'h8: target_addr <= apply_wstrb(target_addr, mmio_wdata, mmio_be);
					4'hC: data_word <= apply_wstrb(data_word, mmio_wdata, mmio_be);
					default: begin end
				endcase
			end

			if(write_cmd) begin
				if(locked || !addr_ok) begin
					fault <= 1'b1;
					done <= 1'b0;
				end else begin
					imem_wr <= 1'b1;
					target_addr <= target_addr + 32'd4;
					write_count <= write_count + 32'd1;
					done <= 1'b1;
					fault <= 1'b0;
				end
			end

			if(lock_cmd) begin
				locked <= 1'b1;
			end
		end
	end
endmodule
