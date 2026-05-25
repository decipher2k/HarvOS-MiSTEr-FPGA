// Copyright 2025 Dennis Michael Heine

package harvos_pkg;
	localparam int HARVOS_XLEN = 32;

	// RISC-V-style base encodings used for the HarvOS whitepaper ISA subset.
	localparam logic [6:0] OPC_LOAD    = 7'b0000011;
	localparam logic [6:0] OPC_FENCE   = 7'b0001111;
	localparam logic [6:0] OPC_OP_IMM  = 7'b0010011;
	localparam logic [6:0] OPC_AUIPC   = 7'b0010111;
	localparam logic [6:0] OPC_STORE   = 7'b0100011;
	localparam logic [6:0] OPC_OP      = 7'b0110011;
	localparam logic [6:0] OPC_LUI     = 7'b0110111;
	localparam logic [6:0] OPC_BRANCH  = 7'b1100011;
	localparam logic [6:0] OPC_JALR    = 7'b1100111;
	localparam logic [6:0] OPC_JAL     = 7'b1101111;
	localparam logic [6:0] OPC_SYSTEM  = 7'b1110011;
	localparam logic [6:0] OPC_CUSTOM0 = 7'b0001011;

	localparam logic [2:0] F3_ADD_SUB = 3'b000;
	localparam logic [2:0] F3_SLL     = 3'b001;
	localparam logic [2:0] F3_SLT     = 3'b010;
	localparam logic [2:0] F3_SLTU    = 3'b011;
	localparam logic [2:0] F3_XOR     = 3'b100;
	localparam logic [2:0] F3_SRL_SRA = 3'b101;
	localparam logic [2:0] F3_OR      = 3'b110;
	localparam logic [2:0] F3_AND     = 3'b111;
	localparam logic [2:0] F3_LB_SB   = 3'b000;
	localparam logic [2:0] F3_LH_SH   = 3'b001;
	localparam logic [2:0] F3_LW_SW   = 3'b010;
	localparam logic [2:0] F3_LBU     = 3'b100;
	localparam logic [2:0] F3_LHU     = 3'b101;
	localparam logic [2:0] F3_BEQ     = 3'b000;
	localparam logic [2:0] F3_BNE     = 3'b001;
	localparam logic [2:0] F3_BLT     = 3'b100;
	localparam logic [2:0] F3_BGE     = 3'b101;
	localparam logic [2:0] F3_BLTU    = 3'b110;
	localparam logic [2:0] F3_BGEU    = 3'b111;
	localparam logic [2:0] F3_CSRRW   = 3'b001;
	localparam logic [2:0] F3_CSRRS   = 3'b010;
	localparam logic [2:0] F3_CSRRC   = 3'b011;
	localparam logic [2:0] F3_CLRREG  = 3'b000;
	localparam logic [2:0] F3_CLRMEM  = 3'b001;
	localparam logic [2:0] F3_ENTROPY = 3'b010;

	localparam logic [6:0] F7_ADD = 7'b0000000;
	localparam logic [6:0] F7_SUB = 7'b0100000;
	localparam logic [6:0] F7_SRL = 7'b0000000;
	localparam logic [6:0] F7_SRA = 7'b0100000;

	localparam logic [11:0] CSR_SSTATUS = 12'h100;
	localparam logic [11:0] CSR_STVEC   = 12'h101;
	localparam logic [11:0] CSR_SEPC    = 12'h102;
	localparam logic [11:0] CSR_SCAUSE  = 12'h103;
	localparam logic [11:0] CSR_STVAL   = 12'h104;
	localparam logic [11:0] CSR_SATP    = 12'h105;
	localparam logic [11:0] CSR_SRANDOM = 12'h120;
	localparam logic [11:0] CSR_SMPUCTL = 12'h130;
	localparam logic [11:0] CSR_SCAPS   = 12'h140;

	localparam logic [31:0] SCAUSE_INST_ADDR_MISALIGNED = 32'h0000_0000;
	localparam logic [31:0] SCAUSE_INST_ACCESS_FAULT    = 32'h0000_0001;
	localparam logic [31:0] SCAUSE_ILLEGAL_INSTRUCTION  = 32'h0000_0002;
	localparam logic [31:0] SCAUSE_BREAKPOINT           = 32'h0000_0003;
	localparam logic [31:0] SCAUSE_LOAD_ADDR_MISALIGNED = 32'h0000_0004;
	localparam logic [31:0] SCAUSE_LOAD_ACCESS_FAULT    = 32'h0000_0005;
	localparam logic [31:0] SCAUSE_STORE_ADDR_MISALIGNED= 32'h0000_0006;
	localparam logic [31:0] SCAUSE_STORE_ACCESS_FAULT   = 32'h0000_0007;
	localparam logic [31:0] SCAUSE_ECALL_U              = 32'h0000_0008;
	localparam logic [31:0] SCAUSE_ECALL_S              = 32'h0000_0009;
	localparam logic [31:0] SCAUSE_HARVARD_VIOLATION    = 32'h0000_000A;
	localparam logic [31:0] SCAUSE_EXTERNAL_INTERRUPT   = 32'h8000_000B;

	localparam logic [31:0] SSTATUS_WRITABLE = 32'h0000_0003;
	localparam logic [31:0] SSTATUS_FIXED    = 32'h0000_0300;
	localparam logic [31:0] SATP_MODE_BIT    = 32'h8000_0000;
	localparam int SATP_ASID_SHIFT = 22;
	localparam logic [31:0] SATP_ASID_MASK = 32'h3FC0_0000;
	localparam logic [31:0] SATP_PPN_MASK = 32'h000F_FFFF;
	localparam logic [31:0] SMPUCTL_LOCK_BIT = 32'h0000_0001;
	localparam int CAP_NORMAL_MEMORY_BIT = 0;
	localparam int CAP_MMIO_BIT = 4;

	localparam logic [31:0] USER_TEXT_VBASE = 32'h0010_0000;
	localparam logic [31:0] USER_TEXT_SLOT_BYTES = 32'h0001_0000;
	localparam logic [31:0] USER_DATA_SLOT_BYTES = 32'h0002_0000;
	localparam logic [31:0] USER_STACK_LOW = 32'h6FFF_F000;
	localparam logic [31:0] USER_STACK_BYTES = 32'h0000_1000;
	localparam logic [31:0] USER_PARAMS_BASE = 32'h7000_1000;
	localparam logic [31:0] USER_PARAMS_BYTES = 32'h0000_1000;
	localparam logic [31:0] USER_CONTENT_BASE = 32'h7001_0000;
	localparam logic [31:0] USER_CONTENT_STRIDE = 32'h0001_0000;
	localparam logic [31:0] USER_DATA_STACK_OFFSET = 32'h0000_8000;
	localparam logic [31:0] USER_DATA_PARAMS_OFFSET = 32'h0000_9000;
	localparam logic [31:0] USER_DATA_CONTENT_OFFSET = 32'h0000_A000;

	localparam logic [7:0] PTE_V = 8'h01;
	localparam logic [7:0] PTE_R = 8'h02;
	localparam logic [7:0] PTE_W = 8'h04;
	localparam logic [7:0] PTE_X = 8'h08;
	localparam logic [7:0] PTE_U = 8'h10;
	localparam logic [7:0] PTE_G = 8'h20;
	localparam logic [7:0] PTE_A = 8'h40;
	localparam logic [7:0] PTE_D = 8'h80;

	typedef enum logic [1:0] {
		PRIV_U = 2'd0,
		PRIV_S = 2'd1,
		PRIV_M = 2'd3
	} harvos_priv_e;

	function automatic logic [31:0] sx12(input logic [11:0] imm);
		sx12 = {{20{imm[11]}}, imm};
	endfunction

	function automatic logic [31:0] sx13(input logic [12:0] imm);
		sx13 = {{19{imm[12]}}, imm};
	endfunction

	function automatic logic [31:0] sx21(input logic [20:0] imm);
		sx21 = {{11{imm[20]}}, imm};
	endfunction
endpackage
