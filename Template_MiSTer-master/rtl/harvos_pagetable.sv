// Copyright 2025 Dennis Michael Heine

import harvos_pkg::*;

module harvos_pagetable
#(
	parameter int I_ROM_BYTES = 1024,
	parameter logic [31:0] D_RAM_BASE = 32'h0000_0400,
	parameter int D_RAM_BYTES = 4096,
	parameter logic [31:0] MMIO_BASE = 32'hFFFF_0000,
	parameter int MMIO_BYTES = 256
)
(
	input  logic        fetch,
	input  logic        load,
	input  logic        store,
	input  logic [31:0] vaddr,
	input  logic [31:0] satp,
	input  logic [31:0] l1_pte_rdata,
	input  logic [31:0] l0_pte_rdata,

	output logic [9:0]  l1_index,
	output logic [9:0]  l0_index,
	output logic [31:0] l1_pte_addr,
	output logic [31:0] l0_pte_addr,
	output logic [31:0] paddr,
	output logic [7:0]  flags,
	output logic        valid,
	output logic [31:0] cause
);

	logic in_irom;
	logic in_dram;
	logic in_mmio;
	logic [7:0] asid;
	logic [19:0] root_ppn;
	logic root_page_valid;
	logic [31:0] root_paddr;
	logic [31:0] l0_table_paddr;
	logic [7:0] l1_pte_flags;
	logic [7:0] l0_pte_flags;
	logic l1_pte_valid;
	logic l0_pte_valid;
	logic l1_pte_leaf;
	logic l0_pte_leaf;
	logic [31:0] user_slot;
	logic [31:0] user_text_off;
	logic [31:0] user_data_off;
	logic [31:0] user_params_vbase;
	logic [31:0] user_content_vbase;
	logic [31:0] user_code_paddr;
	logic [31:0] user_data_paddr;
	logic [32:0] user_code_end;
	logic [32:0] user_data_end;
	logic user_asid_valid;
	logic user_text_vaddr;
	logic user_stack_vaddr;
	logic user_params_vaddr;
	logic user_content_vaddr;
	logic user_data_vaddr;

	assign l1_index = vaddr[31:22];
	assign l0_index = vaddr[21:12];
	assign in_irom = (vaddr < I_ROM_BYTES);
	assign in_dram = (vaddr >= D_RAM_BASE) && (vaddr < (D_RAM_BASE + D_RAM_BYTES));
	assign in_mmio = (vaddr >= MMIO_BASE) && (vaddr < (MMIO_BASE + MMIO_BYTES));
	assign asid = satp[29:22];
	assign root_ppn = satp[19:0];
	assign root_page_valid = (root_ppn != 20'h00000);
	assign root_paddr = {root_ppn, 12'h000};
	assign l1_pte_addr = root_paddr + {20'h00000, l1_index, 2'b00};
	assign l1_pte_flags = l1_pte_rdata[7:0];
	assign l1_pte_valid = (l1_pte_flags & PTE_V) != 8'h00;
	assign l1_pte_leaf = ((l1_pte_flags & (PTE_R | PTE_W | PTE_X)) != 8'h00);
	assign l0_table_paddr = {l1_pte_rdata[31:12], 12'h000};
	assign l0_pte_addr = l0_table_paddr + {20'h00000, l0_index, 2'b00};
	assign l0_pte_flags = l0_pte_rdata[7:0];
	assign l0_pte_valid = (l0_pte_flags & PTE_V) != 8'h00;
	assign l0_pte_leaf = ((l0_pte_flags & (PTE_R | PTE_W | PTE_X)) != 8'h00);
	assign user_asid_valid = (asid != 8'h00);
	assign user_slot = {24'h000000, asid} - 32'd1;
	assign user_text_off = vaddr - USER_TEXT_VBASE;
	assign user_params_vbase = USER_PARAMS_BASE + user_slot * USER_PARAMS_BYTES;
	assign user_content_vbase = USER_CONTENT_BASE + user_slot * USER_CONTENT_STRIDE;
	assign user_text_vaddr = (vaddr >= USER_TEXT_VBASE) &&
	                         (vaddr < (USER_TEXT_VBASE + USER_TEXT_SLOT_BYTES));
	assign user_stack_vaddr = (vaddr >= USER_STACK_LOW) &&
	                          (vaddr < (USER_STACK_LOW + USER_STACK_BYTES));
	assign user_params_vaddr = (vaddr >= user_params_vbase) &&
	                           (vaddr < (user_params_vbase + USER_PARAMS_BYTES));
	assign user_content_vaddr = (vaddr >= user_content_vbase) &&
	                            (vaddr < (user_content_vbase + USER_CONTENT_STRIDE));
	assign user_data_vaddr = user_text_vaddr || user_stack_vaddr ||
	                         user_params_vaddr || user_content_vaddr;

	always_comb begin
		paddr = vaddr;
		flags = 8'h00;
		valid = 1'b0;
		user_data_off = 32'h0000_0000;
		user_code_paddr = vaddr;
		user_data_paddr = vaddr;
		user_code_end = 33'h0;
		user_data_end = 33'h0;
		cause = fetch ? SCAUSE_INST_ACCESS_FAULT :
		        load  ? SCAUSE_LOAD_ACCESS_FAULT :
		                SCAUSE_STORE_ACCESS_FAULT;

		if(satp[31]) begin
			if(root_page_valid) begin
				if(l1_pte_valid && !l1_pte_leaf && l0_pte_valid && l0_pte_leaf) begin
					paddr = {l0_pte_rdata[31:12], vaddr[11:0]};
					flags = l0_pte_flags;
					valid = 1'b1;
					cause = 32'h0000_0000;
				end
			end else if(user_asid_valid && fetch && user_text_vaddr) begin
				user_code_paddr = USER_TEXT_VBASE + (user_slot * USER_TEXT_SLOT_BYTES) + user_text_off;
				user_code_end = {1'b0, user_code_paddr} + 33'd4;
				if(user_code_end <= I_ROM_BYTES) begin
					paddr = user_code_paddr;
					flags = PTE_V | PTE_R | PTE_X | PTE_U | PTE_A;
					valid = 1'b1;
					cause = 32'h0000_0000;
				end
			end else if(user_asid_valid && (load || store) && user_data_vaddr) begin
				if(user_text_vaddr) begin
					user_data_off = user_text_off;
				end else if(user_stack_vaddr) begin
					user_data_off = USER_DATA_STACK_OFFSET + (vaddr - USER_STACK_LOW);
				end else if(user_params_vaddr) begin
					user_data_off = USER_DATA_PARAMS_OFFSET + (vaddr - user_params_vbase);
				end else begin
					user_data_off = USER_DATA_CONTENT_OFFSET + (vaddr - user_content_vbase);
				end
				user_data_paddr = D_RAM_BASE + (user_slot * USER_DATA_SLOT_BYTES) + user_data_off;
				user_data_end = {1'b0, user_data_paddr} + 33'd4;
				if(user_data_off < USER_DATA_SLOT_BYTES &&
				   user_data_end <= ({1'b0, D_RAM_BASE} + D_RAM_BYTES)) begin
					paddr = user_data_paddr;
					flags = PTE_V | PTE_R | PTE_W | PTE_U | PTE_A | PTE_D;
					valid = 1'b1;
					cause = 32'h0000_0000;
				end
			end else if(fetch && in_irom) begin
				flags = PTE_V | PTE_R | PTE_X | PTE_A;
				valid = 1'b1;
				cause = 32'h0000_0000;
			end else if(fetch && in_dram) begin
				cause = SCAUSE_HARVARD_VIOLATION;
			end else if((load || store) && in_dram) begin
				flags = PTE_V | PTE_R | PTE_W | PTE_U | PTE_A | PTE_D;
				valid = 1'b1;
				cause = 32'h0000_0000;
			end else if((load || store) && in_irom) begin
				cause = SCAUSE_HARVARD_VIOLATION;
			end else if((load || store) && in_mmio) begin
				flags = PTE_V | PTE_R | PTE_W | PTE_A | PTE_D;
				valid = 1'b1;
				cause = 32'h0000_0000;
			end
		end
	end
endmodule
