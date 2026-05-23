// Copyright 2025 Dennis Michael Heine

import harvos_pkg::*;

module harvos_mmu
#(
	parameter int I_ROM_BYTES = 1024,
	parameter logic [31:0] D_RAM_BASE = 32'h0000_0400,
	parameter int D_RAM_BYTES = 4096,
	parameter logic [31:0] MMIO_BASE = 32'hFFFF_0000,
	parameter int MMIO_BYTES = 256,
	parameter int TLB_ENTRIES = 32
)
(
	input  logic        clk,
	input  logic        reset,
	input  logic        flush,
	input  logic        fetch,
	input  logic        load,
	input  logic        store,
	input  logic        user_mode,
	input  logic [31:0] vaddr,
	input  logic [31:0] satp,
	input  logic [31:0] caps,

	output logic [31:0] paddr,
	output logic        allow,
	output logic        tlb_hit,
	output logic        wx_fault,
	output logic [31:0] cause,
	output logic [31:0] pte
);

	logic [9:0] l1_index;
	logic [9:0] l0_index;
	logic in_irom;
	logic in_dram;
	logic in_mmio;
	logic page_valid;
	logic page_read;
	logic page_write;
	logic page_exec;
	logic page_user;
	logic page_dirty;
	logic page_accessed;
	logic [19:0] ppn;
	logic [7:0] flags;
	logic [7:0] tlb_flags;
	logic [31:0] tlb_paddr;
	logic tlb_raw_hit;
	logic [31:0] walk_paddr;
	logic [7:0] walk_flags;
	logic walk_valid;
	logic [31:0] walk_cause;
	logic [31:0] selected_paddr;
	logic [7:0] selected_flags;
	wire [7:0] asid = satp[29:22];

	harvos_pagetable #(
		.I_ROM_BYTES(I_ROM_BYTES),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(D_RAM_BYTES),
		.MMIO_BASE(MMIO_BASE),
		.MMIO_BYTES(MMIO_BYTES)
	) walker (
		.fetch(fetch),
		.load(load),
		.store(store),
		.vaddr(vaddr),
		.satp(satp),
		.l1_index(l1_index),
		.l0_index(l0_index),
		.paddr(walk_paddr),
		.flags(walk_flags),
		.valid(walk_valid),
		.cause(walk_cause)
	);

	harvos_tlb #(
		.ENTRIES(TLB_ENTRIES),
		.ASID_BITS(8)
	) tlb (
		.clk(clk),
		.reset(reset),
		.flush(flush),
		.lookup(fetch || load || store),
		.vaddr(vaddr),
		.asid(asid),
		.hit(tlb_raw_hit),
		.paddr(tlb_paddr),
		.flags(tlb_flags),
		.fill((fetch || load || store) && !tlb_raw_hit && walk_valid),
		.fill_vaddr(vaddr),
		.fill_asid(asid),
		.fill_paddr(walk_paddr),
		.fill_flags(walk_flags)
	);

	assign selected_paddr = tlb_raw_hit ? tlb_paddr : walk_paddr;
	assign selected_flags = tlb_raw_hit ? tlb_flags : walk_flags;

	assign in_irom = (selected_paddr < I_ROM_BYTES);
	assign in_dram = (selected_paddr >= D_RAM_BASE) && (selected_paddr < (D_RAM_BASE + D_RAM_BYTES));
	assign in_mmio = (selected_paddr >= MMIO_BASE) && (selected_paddr < (MMIO_BASE + MMIO_BYTES));

	always_comb begin
		ppn = selected_paddr[31:12];
		flags = selected_flags;
		tlb_hit = tlb_raw_hit;

		page_valid    = (satp[31] == 1'b1) && ((flags & PTE_V) != 8'h00);
		page_read     = (flags & PTE_R) != 8'h00;
		page_write    = (flags & PTE_W) != 8'h00;
		page_exec     = (flags & PTE_X) != 8'h00;
		page_user     = (flags & PTE_U) != 8'h00;
		page_accessed = (flags & PTE_A) != 8'h00;
		page_dirty    = (flags & PTE_D) != 8'h00;

		paddr = selected_paddr;
		pte = {ppn, 4'h0, flags};
		wx_fault = page_write && page_exec;
		allow = 1'b0;
		cause = walk_cause;

		if(!page_valid || !page_accessed) begin
			allow = 1'b0;
		end else if(wx_fault) begin
			allow = 1'b0;
		end else if(user_mode && !page_user) begin
			allow = 1'b0;
		end else if(fetch) begin
			allow = page_exec && !page_write;
			if((page_write && !page_exec) || in_dram) cause = SCAUSE_HARVARD_VIOLATION;
		end else if(load) begin
			allow = page_read && !page_exec;
			if(page_exec || in_irom) cause = SCAUSE_HARVARD_VIOLATION;
		end else if(store) begin
			allow = page_write && page_dirty && !page_exec;
			if(page_exec || in_irom) cause = SCAUSE_HARVARD_VIOLATION;
		end

		// Keep capability plumbing visible in RTL. Bit 0 is "normal memory",
		// bit 1 is "MMIO". Supervisor bootstrap starts with all caps clear but
		// is exempt; user accesses are constrained.
		if(user_mode && allow) begin
			if(in_mmio) allow = caps[1];
			else allow = caps[0];
		end

		if(!tlb_hit && !walk_valid && ((l0_index != 10'h000) || (l1_index != 10'h000))) begin
			pte = 32'h0000_0000;
		end
	end
endmodule
