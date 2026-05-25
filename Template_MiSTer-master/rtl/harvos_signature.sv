// Copyright 2025 Dennis Michael Heine

module harvos_signature
#(
	parameter logic [255:0] EXPECTED_IMAGE_HASH =
		256'h54e70887c7068d8afbc2542b32e61245e9d6efb7429cbf1ae14afd44c6c24a9d,
	parameter logic [255:0] TRUSTED_PUBLIC_KEY_HASH =
		256'hbd7a0499dd41743eafe0299ebb6056de3bb6fa804a8e05d5a86b1a2e43a03785,
	parameter logic [255:0] EXPECTED_SIGNATURE =
		256'h89d7f25a9038eb8eb726f8f2b21d371d93e0381ed31e45e2e859083063fd873e
)
(
	input  logic [255:0] image_hash,
	input  logic [255:0] public_key_hash,
	input  logic [255:0] signature,

	output logic [31:0] digest,
	output logic        valid
);

	function automatic logic [31:0] rotl(input logic [31:0] value, input int sh);
		rotl = (value << sh) | (value >> (32 - sh));
	endfunction

	function automatic logic [31:0] fold256(input logic [255:0] value);
		fold256 = value[31:0]    ^ value[63:32]   ^
		          value[95:64]   ^ value[127:96]  ^
		          value[159:128] ^ value[191:160] ^
		          value[223:192] ^ value[255:224];
	endfunction

	always_comb begin
		digest = rotl(fold256(image_hash) ^ 32'h4841_5256, 5) +
		         rotl(fold256(public_key_hash) ^ 32'h504B_4559, 11) +
		         rotl(fold256(signature) ^ 32'h5349_4731, 17);
		digest = digest ^ (digest >> 16) ^ 32'h5342_4F4F;
	end

	assign valid = (image_hash == EXPECTED_IMAGE_HASH) &&
	               (public_key_hash == TRUSTED_PUBLIC_KEY_HASH) &&
	               (signature == EXPECTED_SIGNATURE);
endmodule
