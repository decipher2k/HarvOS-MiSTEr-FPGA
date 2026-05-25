// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_services.h"

static int same_name(const char *a, const char *b)
{
	uint32_t i;
	for(i = 0; i < 16; ++i) {
		if(a[i] != b[i]) return 0;
		if(a[i] == 0) return 1;
	}
	return 1;
}

static void copy_name(char dst[16], const char *src)
{
	uint32_t i;
	for(i = 0; i < 16; ++i) {
		dst[i] = src[i];
		if(src[i] == 0) {
			while(++i < 16) dst[i] = 0;
			return;
		}
	}
	dst[15] = 0;
}

static uint32_t journal(uint32_t old, uint32_t value)
{
	return ((old << 5) | (old >> 27)) ^ value ^ 0x53544F52u;
}

static int valid_file_range(uint32_t size, uint32_t off, uint32_t len)
{
	if(off > size) return 0;
	if(len > size - off) return 0;
	return 1;
}

void harvos_storage_init(harvos_storage_state_t *storage)
{
	uint32_t i;
	uint32_t j;
	for(i = 0; i < HARVOS_STORAGE_FILES; ++i) {
		for(j = 0; j < 16; ++j) storage->files[i].name[j] = 0;
		for(j = 0; j < HARVOS_STORAGE_BYTES; ++j) {
			storage->files[i].base[j] = 0;
			storage->files[i].overlay[j] = 0;
			storage->files[i].overlay_valid[j] = 0;
		}
		storage->files[i].size = 0;
		storage->files[i].immutable = 0;
	}
	storage->journal_digest = 0x48465331u;
}

int harvos_storage_create_base(harvos_storage_state_t *storage, const char *name, const uint8_t *data, uint32_t size)
{
	uint32_t i;
	uint32_t j;
	if(size > HARVOS_STORAGE_BYTES) return -1;
	for(i = 0; i < HARVOS_STORAGE_FILES; ++i) {
		if(storage->files[i].name[0] == 0) {
			copy_name(storage->files[i].name, name);
			for(j = 0; j < size; ++j) storage->files[i].base[j] = data[j];
			storage->files[i].size = size;
			storage->files[i].immutable = 1;
			storage->journal_digest = journal(storage->journal_digest, i ^ size);
			return (int)i;
		}
	}
	return -2;
}

int harvos_storage_read(const harvos_storage_state_t *storage, const char *name, uint32_t off, uint8_t *out, uint32_t len)
{
	uint32_t i;
	uint32_t j;
	for(i = 0; i < HARVOS_STORAGE_FILES; ++i) {
		const harvos_storage_file_t *f = &storage->files[i];
		if(f->name[0] && same_name(f->name, name)) {
			if(!valid_file_range(f->size, off, len)) return -2;
			for(j = 0; j < len; ++j) {
				uint32_t idx = off + j;
				out[j] = f->overlay_valid[idx] ? f->overlay[idx] : f->base[idx];
			}
			return 0;
		}
	}
	return -1;
}

int harvos_storage_write_overlay(harvos_storage_state_t *storage, const char *name, uint32_t off, const uint8_t *data, uint32_t len)
{
	uint32_t i;
	uint32_t j;
	for(i = 0; i < HARVOS_STORAGE_FILES; ++i) {
		harvos_storage_file_t *f = &storage->files[i];
		if(f->name[0] && same_name(f->name, name)) {
			if(!valid_file_range(f->size, off, len)) return -2;
			for(j = 0; j < len; ++j) {
				uint32_t idx = off + j;
				f->overlay[idx] = data[j];
				f->overlay_valid[idx] = 1;
			}
			storage->journal_digest = journal(storage->journal_digest, off ^ len);
			return 0;
		}
	}
	return -1;
}
