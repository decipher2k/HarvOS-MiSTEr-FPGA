// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_services.h"

static uint32_t mix(uint32_t a, uint32_t b)
{
	return ((a << 7) | (a >> 25)) ^ b ^ 0x4E455444u;
}

void harvos_net_init(harvos_net_state_t *net)
{
	uint32_t i;
	for(i = 0; i < HARVOS_NET_FLOWS; ++i) {
		net->flows[i].tokens = 1024;
		net->flows[i].refill = 256;
		net->flows[i].limit = 2048;
		net->flows[i].drops = 0;
	}
	net->audit = 0x484E4554u;
}

int harvos_net_send(harvos_net_state_t *net, uint32_t flow, uint32_t bytes)
{
	harvos_net_flow_t *f;
	if(flow >= HARVOS_NET_FLOWS) return -1;
	f = &net->flows[flow];
	if(bytes > f->tokens) {
		f->drops++;
		net->audit = mix(net->audit, 0xD0000000u | flow);
		return -2;
	}
	f->tokens -= bytes;
	net->audit = mix(net->audit, bytes ^ flow);
	return 0;
}

void harvos_net_tick(harvos_net_state_t *net)
{
	uint32_t i;
	for(i = 0; i < HARVOS_NET_FLOWS; ++i) {
		uint32_t value = net->flows[i].tokens + net->flows[i].refill;
		net->flows[i].tokens = value > net->flows[i].limit ? net->flows[i].limit : value;
	}
	net->audit = mix(net->audit, 0x71000000u);
}
