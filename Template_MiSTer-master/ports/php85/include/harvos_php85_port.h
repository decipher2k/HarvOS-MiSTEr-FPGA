/* Copyright 2025 Dennis Michael Heine */

#ifndef HARVOS_PHP85_PORT_H
#define HARVOS_PHP85_PORT_H

#include <stddef.h>
#include <stdint.h>

#define HARVOS_PHP85_PORT_VERSION 1u
#define HARVOS_PHP85_MIN_HEAP_BYTES (2u * 1024u * 1024u)
#define HARVOS_PHP85_MIN_STACK_BYTES (64u * 1024u)

typedef struct {
	uint32_t version;
	uint32_t flags;
	uint32_t heap_base;
	uint32_t heap_size;
	uint32_t stack_base;
	uint32_t stack_size;
	uint32_t document_root_base;
	uint32_t document_root_size;
	uint32_t data_root_base;
	uint32_t data_root_size;
} harvos_php85_runtime_config_t;

typedef struct {
	const char *path;
	const uint8_t *data;
	size_t size;
	uint32_t flags;
} harvos_php85_vfs_file_t;

#endif
