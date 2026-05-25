// Copyright 2025 Dennis Michael Heine

import harvos_pkg::*;

module harvos_cpu
#(
	parameter int I_ROM_BYTES = 1024,
	parameter logic [31:0] D_RAM_BASE = 32'h0000_0400,
	parameter int D_RAM_BYTES = 4096,
	parameter logic [31:0] RESET_VECTOR = 32'h0000_0000,
	parameter logic [31:0] TRAP_VECTOR  = 32'h0000_0080,
	parameter logic [31:0] MMIO_BASE    = 32'hFFFF_0000,
	parameter bit ECALL_NO_TRAP = 1'b0
)
(
	input  logic        clk,
	input  logic        reset,

	output logic [31:0] i_addr,
	input  logic [31:0] i_rdata,

	output logic        d_req,
	output logic        d_we,
	output logic [31:0] d_addr,
	output logic [31:0] d_wdata,
	output logic [3:0]  d_be,
	input  logic [31:0] d_rdata,
	input  logic        d_ready,

	input  logic        ext_irq,
	input  logic [31:0] entropy_i,
	output logic [31:0] fetch_pt_l1_addr,
	output logic [31:0] fetch_pt_l0_addr,
	input  logic [31:0] fetch_pt_l1_rdata,
	input  logic [31:0] fetch_pt_l0_rdata,
	output logic [31:0] data_pt_l1_addr,
	output logic [31:0] data_pt_l0_addr,
	input  logic [31:0] data_pt_l1_rdata,
	input  logic [31:0] data_pt_l0_rdata,

	output logic [31:0] debug_pc,
	output logic [31:0] debug_instr,
	output logic [31:0] debug_a0,
	output logic [31:0] debug_a1,
	output logic [31:0] debug_scause,
	output logic [31:0] debug_stval,
	output logic [31:0] debug_state,
	output logic        debug_trap
);

	typedef enum logic [2:0] {
		ST_FETCH  = 3'd0,
		ST_DECODE = 3'd1,
		ST_EXEC   = 3'd2,
		ST_MEM    = 3'd3,
		ST_WB     = 3'd4,
		ST_CLRMEM = 3'd5
	} cpu_state_e;

	cpu_state_e state;
	harvos_priv_e mode;

	logic [31:0] regs [0:31];
	logic [31:0] pc;
	logic [31:0] instr;
	logic [31:0] rs1_val;
	logic [31:0] rs2_val;
	logic [4:0]  rs1_q;
	logic [4:0]  rs2_q;
	logic [4:0]  rd_q;

	logic [31:0] wb_data;
	logic [31:0] next_pc;
	logic        wb_en;

	logic        mem_load;
	logic        mem_store;
	logic [31:0] mem_addr;
	logic [31:0] mem_wdata;
	logic [2:0]  mem_funct3;

	logic [31:0] clr_addr;
	logic [31:0] clr_count;

	logic [31:0] csr_sstatus;
	logic [31:0] csr_stvec;
	logic [31:0] csr_sepc;
	logic [31:0] csr_scause;
	logic [31:0] csr_stval;
	logic [31:0] csr_satp;
	logic [31:0] csr_srandom;
	logic [31:0] csr_smpuctl;
	logic [31:0] csr_scaps;
	logic        tlb_flush;

	wire [6:0] opcode = instr[6:0];
	wire [2:0] funct3 = instr[14:12];
	wire [6:0] funct7 = instr[31:25];
	wire [11:0] csr_addr = instr[31:20];

	wire [31:0] imm_i = sx12(instr[31:20]);
	wire [31:0] imm_s = sx12({instr[31:25], instr[11:7]});
	wire [31:0] imm_b = sx13({instr[31], instr[7], instr[30:25], instr[11:8], 1'b0});
	wire [31:0] imm_u = {instr[31:12], 12'h000};
	wire [31:0] imm_j = sx21({instr[31], instr[19:12], instr[20], instr[30:21], 1'b0});

	logic        fetch_allow;
	logic        fetch_mmio;
	logic [31:0] fetch_cause;
	logic [31:0] fetch_paddr;
	logic        fetch_mmu_allow;
	logic        fetch_tlb_hit;
	logic        fetch_wx_fault;
	logic [31:0] fetch_mmu_cause;
	logic [31:0] fetch_pte;

	harvos_mmu #(
		.I_ROM_BYTES(I_ROM_BYTES),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(D_RAM_BYTES),
		.MMIO_BASE(MMIO_BASE),
		.TLB_ENTRIES(32)
	) fetch_mmu (
		.clk(clk),
		.reset(reset),
		.flush(tlb_flush),
		.fetch(1'b1),
		.load(1'b0),
		.store(1'b0),
		.user_mode(mode == PRIV_U),
		.vaddr(pc),
		.satp(csr_satp),
		.caps(csr_scaps),
		.pt_l1_rdata(fetch_pt_l1_rdata),
		.pt_l0_rdata(fetch_pt_l0_rdata),
		.pt_l1_addr(fetch_pt_l1_addr),
		.pt_l0_addr(fetch_pt_l0_addr),
		.paddr(fetch_paddr),
		.allow(fetch_mmu_allow),
		.tlb_hit(fetch_tlb_hit),
		.wx_fault(fetch_wx_fault),
		.cause(fetch_mmu_cause),
		.pte(fetch_pte)
	);

	harvos_mpu #(
		.I_ROM_BYTES(I_ROM_BYTES),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(D_RAM_BYTES),
		.MMIO_BASE(MMIO_BASE)
	) fetch_mpu (
		.fetch(1'b1),
		.load(1'b0),
		.store(1'b0),
		.user_mode(mode == PRIV_U),
		.addr(fetch_paddr),
		.lock(csr_smpuctl[0]),
		.allow(fetch_allow),
		.mmio(fetch_mmio),
		.cause(fetch_cause)
	);

	logic        active_load;
	logic        active_store;
	logic [31:0] active_addr;
	logic        data_allow;
	logic        data_mmio;
	logic [31:0] data_cause;
	logic [31:0] data_paddr;
	logic        data_mmu_allow;
	logic        data_tlb_hit;
	logic        data_wx_fault;
	logic [31:0] data_mmu_cause;
	logic [31:0] data_pte;

	assign active_load  = (state == ST_MEM) && mem_load;
	assign active_store = ((state == ST_MEM) && mem_store) ||
	                      ((state == ST_CLRMEM) && (clr_count != 32'd0));
	assign active_addr  = (state == ST_CLRMEM) ? clr_addr : mem_addr;

	function automatic logic memory_misaligned(input logic [2:0] f3, input logic [1:0] addr);
		case(f3)
			F3_LB_SB,
			F3_LBU:   memory_misaligned = 1'b0;
			F3_LH_SH,
			F3_LHU:   memory_misaligned = addr[0];
			F3_LW_SW: memory_misaligned = |addr;
			default:  memory_misaligned = 1'b1;
		endcase
	endfunction

	function automatic logic load_supported(input logic [2:0] f3);
		load_supported = (f3 == F3_LB_SB) || (f3 == F3_LH_SH) ||
		                 (f3 == F3_LW_SW) || (f3 == F3_LBU) ||
		                 (f3 == F3_LHU);
	endfunction

	function automatic logic store_supported(input logic [2:0] f3);
		store_supported = (f3 == F3_LB_SB) || (f3 == F3_LH_SH) ||
		                  (f3 == F3_LW_SW);
	endfunction

	function automatic logic [3:0] store_be(input logic [2:0] f3, input logic [1:0] addr);
		case(f3)
			F3_LB_SB: store_be = 4'b0001 << addr;
			F3_LH_SH: store_be = addr[1] ? 4'b1100 : 4'b0011;
			F3_LW_SW: store_be = 4'b1111;
			default:  store_be = 4'b0000;
		endcase
	endfunction

	function automatic logic [31:0] store_data(
		input logic [2:0]  f3,
		input logic [1:0]  addr,
		input logic [31:0] value
	);
		case(f3)
			F3_LB_SB: begin
				case(addr)
					2'd0: store_data = {24'h000000, value[7:0]};
					2'd1: store_data = {16'h0000, value[7:0], 8'h00};
					2'd2: store_data = {8'h00, value[7:0], 16'h0000};
					default: store_data = {value[7:0], 24'h000000};
				endcase
			end
			F3_LH_SH: store_data = addr[1] ? {value[15:0], 16'h0000} :
			                              {16'h0000, value[15:0]};
			default:  store_data = value;
		endcase
	endfunction

	function automatic logic [31:0] load_data(
		input logic [2:0]  f3,
		input logic [1:0]  addr,
		input logic [31:0] value
	);
		logic [7:0] byte_value;
		logic [15:0] half_value;
		begin
			case(addr)
				2'd0: byte_value = value[7:0];
				2'd1: byte_value = value[15:8];
				2'd2: byte_value = value[23:16];
				default: byte_value = value[31:24];
			endcase
			half_value = addr[1] ? value[31:16] : value[15:0];

			case(f3)
				F3_LB_SB: load_data = {{24{byte_value[7]}}, byte_value};
				F3_LH_SH: load_data = {{16{half_value[15]}}, half_value};
				F3_LBU:   load_data = {24'h000000, byte_value};
				F3_LHU:   load_data = {16'h0000, half_value};
				default:  load_data = value;
			endcase
		end
	endfunction

	harvos_mmu #(
		.I_ROM_BYTES(I_ROM_BYTES),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(D_RAM_BYTES),
		.MMIO_BASE(MMIO_BASE),
		.TLB_ENTRIES(64)
	) data_mmu (
		.clk(clk),
		.reset(reset),
		.flush(tlb_flush),
		.fetch(1'b0),
		.load(active_load),
		.store(active_store),
		.user_mode(mode == PRIV_U),
		.vaddr(active_addr),
		.satp(csr_satp),
		.caps(csr_scaps),
		.pt_l1_rdata(data_pt_l1_rdata),
		.pt_l0_rdata(data_pt_l0_rdata),
		.pt_l1_addr(data_pt_l1_addr),
		.pt_l0_addr(data_pt_l0_addr),
		.paddr(data_paddr),
		.allow(data_mmu_allow),
		.tlb_hit(data_tlb_hit),
		.wx_fault(data_wx_fault),
		.cause(data_mmu_cause),
		.pte(data_pte)
	);

	harvos_mpu #(
		.I_ROM_BYTES(I_ROM_BYTES),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(D_RAM_BYTES),
		.MMIO_BASE(MMIO_BASE)
	) data_mpu (
		.fetch(1'b0),
		.load(active_load),
		.store(active_store),
		.user_mode(mode == PRIV_U),
		.addr(data_paddr),
		.lock(csr_smpuctl[0]),
		.allow(data_allow),
		.mmio(data_mmio),
		.cause(data_cause)
	);

	assign i_addr  = fetch_paddr;
	assign d_req   = active_load || active_store;
	assign d_be    = (state == ST_CLRMEM) ? 4'b1111 : store_be(mem_funct3, active_addr[1:0]);
	assign d_we    = active_store && data_mmu_allow && data_allow && (d_be != 4'b0000) &&
	                 !((state == ST_CLRMEM) && data_mmio);
	assign d_addr  = data_paddr;
	assign d_wdata = (state == ST_CLRMEM) ? 32'h0000_0000 :
	                 store_data(mem_funct3, active_addr[1:0], mem_wdata);

	assign debug_pc     = pc;
	assign debug_instr  = instr;
	assign debug_a0     = regs[10];
	assign debug_a1     = regs[11];
	assign debug_scause = csr_scause;
	assign debug_stval  = csr_stval;
	assign debug_state  = {18'h0, fetch_tlb_hit, data_tlb_hit, fetch_wx_fault, data_wx_fault,
	                       debug_trap, mode, state, csr_smpuctl[0], csr_satp[31], wb_en, d_req};

	function automatic logic csr_implemented(input logic [11:0] addr);
		case(addr)
			CSR_SSTATUS,
			CSR_STVEC,
			CSR_SEPC,
			CSR_SCAUSE,
			CSR_STVAL,
			CSR_SATP,
			CSR_SRANDOM,
			CSR_SMPUCTL,
			CSR_SCAPS: csr_implemented = 1'b1;
			default:   csr_implemented = 1'b0;
		endcase
	endfunction

	function automatic logic [31:0] csr_read_value(input logic [11:0] addr);
		case(addr)
			CSR_SSTATUS: csr_read_value = (csr_sstatus & SSTATUS_WRITABLE) | SSTATUS_FIXED;
			CSR_STVEC:   csr_read_value = csr_stvec;
			CSR_SEPC:    csr_read_value = csr_sepc;
			CSR_SCAUSE:  csr_read_value = csr_scause;
			CSR_STVAL:   csr_read_value = csr_stval;
			CSR_SATP:    csr_read_value = csr_satp | SATP_MODE_BIT;
			CSR_SRANDOM: csr_read_value = entropy_i;
			CSR_SMPUCTL: csr_read_value = csr_smpuctl | SMPUCTL_LOCK_BIT;
			CSR_SCAPS:   csr_read_value = csr_scaps;
			default:     csr_read_value = 32'h0000_0000;
		endcase
	endfunction

	task automatic write_csr(input logic [11:0] addr, input logic [31:0] value);
		begin
			case(addr)
				CSR_SSTATUS: csr_sstatus <= (value & SSTATUS_WRITABLE) | SSTATUS_FIXED;
				CSR_STVEC:   csr_stvec   <= value & 32'hFFFF_FFFC;
				CSR_SEPC:    csr_sepc    <= value & 32'hFFFF_FFFC;
				CSR_SCAUSE:  csr_scause  <= value;
				CSR_STVAL:   csr_stval   <= value;
				CSR_SATP:    csr_satp    <= value | SATP_MODE_BIT;
				CSR_SRANDOM: csr_srandom <= value;
				CSR_SMPUCTL: csr_smpuctl <= csr_smpuctl | SMPUCTL_LOCK_BIT;
				CSR_SCAPS:   csr_scaps   <= value;
				default: begin end
			endcase
		end
	endtask

	task automatic enter_trap(input logic [31:0] cause, input logic [31:0] tval);
		begin
			csr_sepc    <= pc;
			csr_scause  <= cause;
			csr_stval   <= tval;
			csr_sstatus <= (csr_sstatus & ~32'h0000_0003) |
			               ((mode == PRIV_S) ? 32'h0000_0002 : 32'h0000_0000) |
			               SSTATUS_FIXED;
			mode        <= PRIV_S;
			pc          <= csr_stvec;
			wb_en       <= 1'b0;
			mem_load    <= 1'b0;
			mem_store   <= 1'b0;
			debug_trap  <= (cause != SCAUSE_EXTERNAL_INTERRUPT);
			state       <= ST_FETCH;
		end
	endtask

	integer i;

	always_ff @(posedge clk) begin
		if(reset) begin
			for(i = 0; i < 32; i = i + 1) regs[i] <= 32'h0000_0000;
			pc          <= RESET_VECTOR;
			instr       <= 32'h0000_0013;
			rs1_val     <= 32'h0000_0000;
			rs2_val     <= 32'h0000_0000;
			rs1_q       <= 5'd0;
			rs2_q       <= 5'd0;
			rd_q        <= 5'd0;
			wb_data     <= 32'h0000_0000;
			next_pc     <= RESET_VECTOR;
			wb_en       <= 1'b0;
			mem_load    <= 1'b0;
			mem_store   <= 1'b0;
			mem_addr    <= 32'h0000_0000;
			mem_wdata   <= 32'h0000_0000;
			mem_funct3  <= F3_LW_SW;
			clr_addr    <= 32'h0000_0000;
			clr_count   <= 32'h0000_0000;
			csr_sstatus <= SSTATUS_FIXED;
			csr_stvec   <= TRAP_VECTOR;
			csr_sepc    <= 32'h0000_0000;
			csr_scause  <= 32'h0000_0000;
			csr_stval   <= 32'h0000_0000;
			csr_satp    <= SATP_MODE_BIT;
			csr_srandom <= 32'h0000_0000;
			csr_smpuctl <= SMPUCTL_LOCK_BIT;
			csr_scaps   <= 32'h0000_0000;
			tlb_flush   <= 1'b0;
			mode        <= PRIV_S;
			debug_trap  <= 1'b0;
			state       <= ST_FETCH;
		end else begin
			regs[0] <= 32'h0000_0000;
			tlb_flush <= 1'b0;

			case(state)
				ST_FETCH: begin
					wb_en     <= 1'b0;
					mem_load  <= 1'b0;
					mem_store <= 1'b0;

					if(pc[1:0] != 2'b00) begin
						enter_trap(SCAUSE_INST_ADDR_MISALIGNED, pc);
					end else if(ext_irq && csr_sstatus[0]) begin
						enter_trap(SCAUSE_EXTERNAL_INTERRUPT, 32'h0000_0000);
					end else if(!fetch_mmu_allow) begin
						enter_trap(fetch_mmu_cause, pc);
					end else if(!fetch_allow) begin
						enter_trap(fetch_cause, pc);
					end else begin
						instr <= i_rdata;
						state <= ST_DECODE;
					end
				end

				ST_DECODE: begin
					rs1_q   <= instr[19:15];
					rs2_q   <= instr[24:20];
					rd_q    <= instr[11:7];
					rs1_val <= regs[instr[19:15]];
					rs2_val <= regs[instr[24:20]];
					state   <= ST_EXEC;
				end

				ST_EXEC: begin : exec_stage
					logic [31:0] target;
					logic [31:0] csr_old;
					logic [31:0] csr_new;
					logic        branch_taken;

					wb_en     <= 1'b0;
					mem_load  <= 1'b0;
					mem_store <= 1'b0;
					next_pc   <= pc + 32'd4;
					target    = 32'h0000_0000;
					csr_old   = 32'h0000_0000;
					csr_new   = 32'h0000_0000;
					branch_taken = 1'b0;

					case(opcode)
						OPC_OP: begin
							case(funct3)
								F3_ADD_SUB: begin
									if(funct7 == F7_SUB) begin
										wb_data <= rs1_val - rs2_val;
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end else if(funct7 == F7_ADD) begin
										wb_data <= rs1_val + rs2_val;
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end
									else begin
										enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
									end
								end
								F3_SLL: begin
									if(funct7 == F7_ADD) begin
										wb_data <= rs1_val << rs2_val[4:0];
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end else begin
										enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
									end
								end
								F3_AND: begin
									wb_data <= rs1_val & rs2_val;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_OR: begin
									wb_data <= rs1_val | rs2_val;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_XOR: begin
									wb_data <= rs1_val ^ rs2_val;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_SLT: begin
									wb_data <= ($signed(rs1_val) < $signed(rs2_val)) ? 32'd1 : 32'd0;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_SLTU: begin
									wb_data <= (rs1_val < rs2_val) ? 32'd1 : 32'd0;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_SRL_SRA: begin
									if(funct7 == F7_SRL) begin
										wb_data <= rs1_val >> rs2_val[4:0];
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end else if(funct7 == F7_SRA) begin
										wb_data <= $signed(rs1_val) >>> rs2_val[4:0];
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end else begin
										enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
									end
								end
								default: begin
									enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
								end
							endcase
						end

						OPC_OP_IMM: begin
							case(funct3)
								F3_ADD_SUB: begin
									wb_data <= rs1_val + imm_i;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_AND: begin
									wb_data <= rs1_val & imm_i;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_OR: begin
									wb_data <= rs1_val | imm_i;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_XOR: begin
									wb_data <= rs1_val ^ imm_i;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_SLL: begin
									if(funct7 == F7_ADD) begin
										wb_data <= rs1_val << instr[24:20];
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end else begin
										enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
									end
								end
								F3_SLT: begin
									wb_data <= ($signed(rs1_val) < $signed(imm_i)) ? 32'd1 : 32'd0;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_SLTU: begin
									wb_data <= (rs1_val < imm_i) ? 32'd1 : 32'd0;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
								F3_SRL_SRA: begin
									if(funct7 == F7_SRL) begin
										wb_data <= rs1_val >> instr[24:20];
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end else if(funct7 == F7_SRA) begin
										wb_data <= $signed(rs1_val) >>> instr[24:20];
										wb_en   <= 1'b1;
										state   <= ST_WB;
									end else begin
										enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
									end
								end
								default: begin
									enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
								end
							endcase
						end

						OPC_LUI: begin
							wb_data <= imm_u;
							wb_en   <= 1'b1;
							state   <= ST_WB;
						end

						OPC_AUIPC: begin
							wb_data <= pc + imm_u;
							wb_en   <= 1'b1;
							state   <= ST_WB;
						end

						OPC_LOAD: begin
							if(!load_supported(funct3)) begin
								enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
							end else begin
								target = rs1_val + imm_i;
								if(memory_misaligned(funct3, target[1:0])) begin
									enter_trap(SCAUSE_LOAD_ADDR_MISALIGNED, target);
								end else begin
									mem_addr   <= target;
									mem_funct3 <= funct3;
									mem_load   <= 1'b1;
									rd_q       <= instr[11:7];
									state      <= ST_MEM;
								end
							end
						end

						OPC_STORE: begin
							if(!store_supported(funct3)) begin
								enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
							end else begin
								target = rs1_val + imm_s;
								if(memory_misaligned(funct3, target[1:0])) begin
									enter_trap(SCAUSE_STORE_ADDR_MISALIGNED, target);
								end else begin
									mem_addr  <= target;
									mem_wdata <= rs2_val;
									mem_funct3 <= funct3;
									mem_store <= 1'b1;
									state     <= ST_MEM;
								end
							end
						end

						OPC_BRANCH: begin
							case(funct3)
								F3_BEQ: branch_taken = (rs1_val == rs2_val);
								F3_BNE: branch_taken = (rs1_val != rs2_val);
								F3_BLT: branch_taken = ($signed(rs1_val) < $signed(rs2_val));
								F3_BGE: branch_taken = ($signed(rs1_val) >= $signed(rs2_val));
								F3_BLTU: branch_taken = (rs1_val < rs2_val);
								F3_BGEU: branch_taken = (rs1_val >= rs2_val);
								default: begin
									enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
								end
							endcase
							if((funct3 == F3_BEQ) || (funct3 == F3_BNE) ||
							   (funct3 == F3_BLT) || (funct3 == F3_BGE) ||
							   (funct3 == F3_BLTU) || (funct3 == F3_BGEU)) begin
								target = pc + imm_b;
								if(branch_taken && (target[1:0] != 2'b00)) begin
									enter_trap(SCAUSE_INST_ADDR_MISALIGNED, target);
								end else begin
									pc    <= branch_taken ? target : (pc + 32'd4);
									state <= ST_FETCH;
								end
							end
						end

						OPC_JAL: begin
							target = pc + imm_j;
							if(target[1:0] != 2'b00) begin
								enter_trap(SCAUSE_INST_ADDR_MISALIGNED, target);
							end else begin
								wb_data <= pc + 32'd4;
								wb_en   <= 1'b1;
								next_pc <= target;
								state   <= ST_WB;
							end
						end

						OPC_JALR: begin
							if(funct3 != 3'b000) begin
								enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
							end else begin
								target = (rs1_val + imm_i) & 32'hFFFF_FFFE;
								if(target[1:0] != 2'b00) begin
									enter_trap(SCAUSE_INST_ADDR_MISALIGNED, target);
								end else begin
									wb_data <= pc + 32'd4;
									wb_en   <= 1'b1;
									next_pc <= target;
									state   <= ST_WB;
								end
							end
						end

						OPC_FENCE: begin
							if((funct3 == 3'b000) || (funct3 == 3'b001)) begin
								tlb_flush <= (funct3 == 3'b001);
								pc    <= pc + 32'd4;
								state <= ST_FETCH;
							end else begin
								enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
							end
						end

						OPC_SYSTEM: begin
							if(instr == 32'h0000_0073) begin
								if(ECALL_NO_TRAP) begin
									regs[10] <= 32'h0000_0000;
									pc       <= pc + 32'd4;
									state    <= ST_FETCH;
								end else begin
									enter_trap((mode == PRIV_U) ? SCAUSE_ECALL_U : SCAUSE_ECALL_S, 32'h0000_0000);
								end
							end else if(instr == 32'h0010_0073) begin
								enter_trap(SCAUSE_BREAKPOINT, 32'h0000_0000);
							end else if(instr == 32'h1020_0073) begin
								if(mode == PRIV_U) begin
									enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
								end else begin
									mode      <= csr_sstatus[1] ? PRIV_S : PRIV_U;
									pc        <= csr_sepc;
									tlb_flush <= 1'b1;
									wb_en     <= 1'b0;
									debug_trap <= 1'b0;
									csr_sstatus <= (csr_sstatus | 32'h0000_0001) | SSTATUS_FIXED;
									state     <= ST_FETCH;
								end
							end else if((funct3 == F3_CSRRW) || (funct3 == F3_CSRRS) || (funct3 == F3_CSRRC)) begin
								if((mode == PRIV_U) || !csr_implemented(csr_addr)) begin
									enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
								end else begin
									csr_old = csr_read_value(csr_addr);
									case(funct3)
										F3_CSRRW: csr_new = rs1_val;
										F3_CSRRS: csr_new = csr_old | rs1_val;
										F3_CSRRC: csr_new = csr_old & ~rs1_val;
										default:  csr_new = csr_old;
									endcase
									if((funct3 == F3_CSRRW) || (rs1_q != 5'd0)) write_csr(csr_addr, csr_new);
									wb_data <= csr_old;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end
							end else begin
								enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
							end
						end

						OPC_CUSTOM0: begin
							case(funct3)
								F3_CLRREG: begin
									wb_data <= 32'h0000_0000;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end

								F3_CLRMEM: begin
									if(mode == PRIV_U) begin
										enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
									end else begin
										clr_addr  <= rs1_val;
										clr_count <= rs2_val;
										state     <= ST_CLRMEM;
									end
								end

								F3_ENTROPY: begin
									wb_data <= entropy_i ^ csr_srandom;
									wb_en   <= 1'b1;
									state   <= ST_WB;
								end

								default: begin
									enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
								end
							endcase
						end

						default: begin
							enter_trap(SCAUSE_ILLEGAL_INSTRUCTION, instr);
						end
					endcase
				end

				ST_MEM: begin
					if(!data_mmu_allow) begin
						enter_trap(data_mmu_cause, mem_addr);
					end else if(!data_allow) begin
						enter_trap(data_cause, mem_addr);
					end else if(!d_ready) begin
						state <= ST_MEM;
					end else if(mem_load) begin
						wb_data <= load_data(mem_funct3, mem_addr[1:0], d_rdata);
						wb_en   <= 1'b1;
						state   <= ST_WB;
					end else begin
						pc        <= next_pc;
						mem_store <= 1'b0;
						state     <= ST_FETCH;
					end
				end

				ST_WB: begin
					if(wb_en && (rd_q != 5'd0)) regs[rd_q] <= wb_data;
					pc    <= next_pc;
					wb_en <= 1'b0;
					state <= ST_FETCH;
				end

				ST_CLRMEM: begin
					if(clr_count == 32'd0) begin
						pc    <= pc + 32'd4;
						state <= ST_FETCH;
					end else if(clr_addr[1:0] != 2'b00) begin
						enter_trap(SCAUSE_STORE_ADDR_MISALIGNED, clr_addr);
					end else if(!data_mmu_allow) begin
						enter_trap(data_mmu_cause, clr_addr);
					end else if(!data_allow || data_mmio) begin
						enter_trap(SCAUSE_STORE_ACCESS_FAULT, clr_addr);
					end else if(!d_ready) begin
						state <= ST_CLRMEM;
					end else begin
						clr_addr  <= clr_addr + 32'd4;
						clr_count <= clr_count - 32'd1;
					end
				end

				default: begin
					state <= ST_FETCH;
				end
			endcase
		end
	end
endmodule
