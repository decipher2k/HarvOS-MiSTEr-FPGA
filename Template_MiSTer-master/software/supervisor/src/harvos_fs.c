// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_fs.h"

#define FAT_ATTR_READ_ONLY 0x01u
#define FAT_ATTR_HIDDEN 0x02u
#define FAT_ATTR_SYSTEM 0x04u
#define FAT_ATTR_VOLUME_ID 0x08u
#define FAT_ATTR_DIRECTORY 0x10u
#define FAT_ATTR_LFN 0x0Fu

#define EXFAT_ENTRY_FILE 0x85u
#define EXFAT_ENTRY_STREAM 0xC0u
#define EXFAT_ENTRY_NAME 0xC1u
#define EXFAT_ATTR_DIRECTORY 0x10u
#define EXFAT_NO_FAT_CHAIN 0x02u

static uint16_t le16(const uint8_t *p)
{
	return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

static uint32_t le32(const uint8_t *p)
{
	return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

static uint64_t le64(const uint8_t *p)
{
	return (uint64_t)le32(p) | ((uint64_t)le32(p + 4) << 32);
}

static void zero(void *ptr, uint32_t len)
{
	uint8_t *p = (uint8_t *)ptr;
	while(len--) *p++ = 0;
}

static char lower_ascii(char c)
{
	if(c >= 'A' && c <= 'Z') return (char)(c + ('a' - 'A'));
	return c;
}

static int str_eq_ci(const char *a, const char *b)
{
	uint32_t i = 0;
	while(a[i] && b[i]) {
		if(lower_ascii(a[i]) != lower_ascii(b[i])) return 0;
		++i;
	}
	return a[i] == b[i];
}

static void copy_str(char *dst, uint32_t dst_len, const char *src)
{
	uint32_t i;
	if(dst_len == 0u) return;
	for(i = 0; i + 1u < dst_len && src[i]; ++i) dst[i] = src[i];
	dst[i] = 0;
}

static hvs_status_t read_sector(hvs_fs_t *fs, uint64_t lba, uint8_t *dst)
{
	if(fs->block->block_size != HVS_FS_SECTOR_BYTES) return HVS_ERR_UNSUPPORTED;
	return fs->block->read_blocks(fs->block, lba, 1u, dst);
}

static hvs_status_t cached_sector(hvs_fs_t *fs, uint64_t lba, const uint8_t **sector)
{
	hvs_status_t st;
	if(!fs->cache_valid || fs->cache_lba != lba) {
		st = read_sector(fs, lba, fs->cache);
		if(st != HVS_OK) return st;
		fs->cache_lba = lba;
		fs->cache_valid = 1u;
	}
	*sector = fs->cache;
	return HVS_OK;
}

static int has_sig55aa(const uint8_t *sec)
{
	return sec[510] == 0x55u && sec[511] == 0xAAu;
}

static int fat32_vbr(const uint8_t *sec)
{
	return has_sig55aa(sec) && sec[82] == 'F' && sec[83] == 'A' && sec[84] == 'T' && sec[85] == '3' && sec[86] == '2';
}

static int exfat_vbr(const uint8_t *sec)
{
	return has_sig55aa(sec) && sec[3] == 'E' && sec[4] == 'X' && sec[5] == 'F' && sec[6] == 'A' && sec[7] == 'T';
}

static uint32_t cluster_lba(const hvs_fs_t *fs, uint32_t cluster)
{
	return fs->data_lba + (cluster - 2u) * fs->sectors_per_cluster;
}

static hvs_status_t next_cluster(hvs_fs_t *fs, uint32_t cluster, uint32_t *next)
{
	const uint8_t *sec;
	uint64_t fat_byte;
	hvs_status_t st;

	if(cluster < 2u) return HVS_ERR_BAD_FORMAT;
	if(fs->type == HVS_FS_FAT32) {
		fat_byte = (uint64_t)cluster * 4u;
		st = cached_sector(fs, fs->part_lba + fs->fat_lba + fat_byte / HVS_FS_SECTOR_BYTES, &sec);
		if(st != HVS_OK) return st;
		*next = le32(sec + (uint32_t)(fat_byte % HVS_FS_SECTOR_BYTES)) & 0x0FFFFFFFu;
		if(*next >= 0x0FFFFFF8u) *next = 0u;
		return HVS_OK;
	}

	fat_byte = (uint64_t)cluster * 4u;
	st = cached_sector(fs, fs->part_lba + fs->fat_lba + fat_byte / HVS_FS_SECTOR_BYTES, &sec);
	if(st != HVS_OK) return st;
	*next = le32(sec + (uint32_t)(fat_byte % HVS_FS_SECTOR_BYTES));
	if(*next >= 0xFFFFFFF8u) *next = 0u;
	return HVS_OK;
}

static void fat_short_name(const uint8_t *e, char *out)
{
	uint32_t i;
	uint32_t n = 0;
	for(i = 0; i < 8u && e[i] != ' '; ++i) out[n++] = (char)e[i];
	if(e[8] != ' ') {
		out[n++] = '.';
		for(i = 8u; i < 11u && e[i] != ' '; ++i) out[n++] = (char)e[i];
	}
	out[n] = 0;
}

static void fat_lfn_piece(const uint8_t *e, char *lfn, uint32_t lfn_len)
{
	static const uint8_t pos[13] = {1, 3, 5, 7, 9, 14, 16, 18, 20, 22, 24, 28, 30};
	uint32_t ord = (uint32_t)(e[0] & 0x1Fu);
	uint32_t base = (ord - 1u) * 13u;
	uint32_t i;

	for(i = 0; i < 13u && base + i + 1u < lfn_len; ++i) {
		uint16_t ch = le16(e + pos[i]);
		if(ch == 0x0000u || ch == 0xFFFFu) {
			lfn[base + i] = 0;
			return;
		}
		lfn[base + i] = ch < 128u ? (char)ch : '?';
	}
	if(base + i < lfn_len) lfn[base + i] = 0;
}

static void make_fat_dirent(const uint8_t *e, const char *lfn, hvs_dirent_t *out)
{
	zero(out, sizeof(*out));
	if(lfn[0]) copy_str(out->name, sizeof(out->name), lfn);
	else fat_short_name(e, out->name);
	out->is_dir = (e[11] & FAT_ATTR_DIRECTORY) ? 1u : 0u;
	out->size = le32(e + 28);
	out->first_cluster = ((uint32_t)le16(e + 20) << 16) | le16(e + 26);
	out->no_fat_chain = 0u;
}

static hvs_status_t fat32_read_dir_index(hvs_fs_t *fs, uint32_t dir_cluster, uint32_t want_index, hvs_dirent_t *out)
{
	uint32_t cluster = dir_cluster;
	uint32_t seen = 0;
	char lfn[HVS_FS_MAX_NAME];
	hvs_status_t st;
	lfn[0] = 0;

	while(cluster != 0u) {
		uint32_t s;
		for(s = 0; s < fs->sectors_per_cluster; ++s) {
			const uint8_t *sec;
			uint32_t off;
			st = cached_sector(fs, fs->part_lba + cluster_lba(fs, cluster) + s, &sec);
			if(st != HVS_OK) return st;
			for(off = 0; off < HVS_FS_SECTOR_BYTES; off += 32u) {
				const uint8_t *e = sec + off;
				uint8_t attr = e[11];
				if(e[0] == 0x00u) return HVS_ERR_NOT_FOUND;
				if(e[0] == 0xE5u) {
					lfn[0] = 0;
					continue;
				}
				if(attr == FAT_ATTR_LFN) {
					fat_lfn_piece(e, lfn, sizeof(lfn));
					continue;
				}
				if(attr & FAT_ATTR_VOLUME_ID) {
					lfn[0] = 0;
					continue;
				}
				if(seen == want_index) {
					make_fat_dirent(e, lfn, out);
					return HVS_OK;
				}
				seen++;
				lfn[0] = 0;
			}
		}
		st = next_cluster(fs, cluster, &cluster);
		if(st != HVS_OK) return st;
	}
	return HVS_ERR_NOT_FOUND;
}

static hvs_status_t fat32_find_in_dir(hvs_fs_t *fs, uint32_t dir_cluster, const char *name, hvs_dirent_t *out)
{
	uint32_t i = 0;
	while(fat32_read_dir_index(fs, dir_cluster, i++, out) == HVS_OK) {
		if(str_eq_ci(out->name, name)) return HVS_OK;
	}
	return HVS_ERR_NOT_FOUND;
}

static hvs_status_t exfat_make_entry(const uint8_t *file, const uint8_t *stream, const char *name, hvs_dirent_t *out)
{
	uint16_t attr;
	if(stream[0] != EXFAT_ENTRY_STREAM) return HVS_ERR_BAD_FORMAT;
	zero(out, sizeof(*out));
	copy_str(out->name, sizeof(out->name), name);
	attr = le16(file + 4);
	out->is_dir = (attr & EXFAT_ATTR_DIRECTORY) ? 1u : 0u;
	out->size = le64(stream + 24);
	out->first_cluster = le32(stream + 20);
	out->no_fat_chain = (stream[1] & EXFAT_NO_FAT_CHAIN) ? 1u : 0u;
	return HVS_OK;
}

static hvs_status_t exfat_read_dir_index(hvs_fs_t *fs, uint32_t dir_cluster, uint32_t want_index, hvs_dirent_t *out)
{
	uint32_t cluster = dir_cluster;
	uint32_t seen = 0;
	uint8_t file_entry[32];
	uint8_t stream_entry[32];
	char name[HVS_FS_MAX_NAME];
	uint8_t have_file = 0;
	uint8_t have_stream = 0;
	uint8_t name_len = 0;
	hvs_status_t st;

	name[0] = 0;
	while(cluster != 0u) {
		uint32_t s;
		for(s = 0; s < fs->sectors_per_cluster; ++s) {
			const uint8_t *sec;
			uint32_t off;
			st = cached_sector(fs, fs->part_lba + cluster_lba(fs, cluster) + s, &sec);
			if(st != HVS_OK) return st;
			for(off = 0; off < HVS_FS_SECTOR_BYTES; off += 32u) {
				const uint8_t *e = sec + off;
				uint32_t i;
				if(e[0] == 0x00u) return HVS_ERR_NOT_FOUND;
				if(e[0] == EXFAT_ENTRY_FILE) {
					for(i = 0; i < 32u; ++i) file_entry[i] = e[i];
					have_file = 1u;
					have_stream = 0u;
					name_len = 0u;
					name[0] = 0;
				} else if(have_file && e[0] == EXFAT_ENTRY_STREAM) {
					for(i = 0; i < 32u; ++i) stream_entry[i] = e[i];
					have_stream = 1u;
				} else if(have_file && have_stream && e[0] == EXFAT_ENTRY_NAME) {
					for(i = 0; i < 15u && name_len + 1u < sizeof(name); ++i) {
						uint16_t ch = le16(e + 2u + i * 2u);
						if(ch == 0u) break;
						name[name_len++] = ch < 128u ? (char)ch : '?';
					}
					name[name_len] = 0;
					if(name_len >= stream_entry[3]) {
						if(seen == want_index) return exfat_make_entry(file_entry, stream_entry, name, out);
						seen++;
						have_file = 0u;
						have_stream = 0u;
						name_len = 0u;
					}
				}
			}
		}
		st = next_cluster(fs, cluster, &cluster);
		if(st != HVS_OK) return st;
	}
	return HVS_ERR_NOT_FOUND;
}

static hvs_status_t exfat_find_in_dir(hvs_fs_t *fs, uint32_t dir_cluster, const char *name, hvs_dirent_t *out)
{
	uint32_t i = 0;
	while(exfat_read_dir_index(fs, dir_cluster, i++, out) == HVS_OK) {
		if(str_eq_ci(out->name, name)) return HVS_OK;
	}
	return HVS_ERR_NOT_FOUND;
}

static hvs_status_t next_path_component(const char **path, char *component, uint32_t component_len)
{
	const char *p = *path;
	uint32_t n = 0;
	while(*p == '/') ++p;
	if(*p == 0) return HVS_ERR_NOT_FOUND;
	while(*p && *p != '/') {
		if(n + 1u >= component_len) return HVS_ERR_INVALID;
		component[n++] = *p++;
	}
	component[n] = 0;
	*path = p;
	return HVS_OK;
}

static hvs_status_t resolve_path(hvs_fs_t *fs, const char *path, hvs_dirent_t *out)
{
	uint32_t dir = fs->root_cluster;
	char comp[HVS_FS_MAX_NAME];
	const char *p = path;
	hvs_status_t st;

	if(path[0] == '/' && path[1] == 0) {
		zero(out, sizeof(*out));
		copy_str(out->name, sizeof(out->name), "/");
		out->is_dir = 1u;
		out->first_cluster = fs->root_cluster;
		return HVS_OK;
	}

	while((st = next_path_component(&p, comp, sizeof(comp))) == HVS_OK) {
		if(fs->type == HVS_FS_FAT32) st = fat32_find_in_dir(fs, dir, comp, out);
		else st = exfat_find_in_dir(fs, dir, comp, out);
		if(st != HVS_OK) return st;
		while(*p == '/') ++p;
		if(*p == 0) return HVS_OK;
		if(!out->is_dir) return HVS_ERR_NOT_FOUND;
		dir = out->first_cluster;
	}

	return HVS_ERR_NOT_FOUND;
}

static hvs_status_t mount_at(hvs_block_device_t *block, hvs_fs_t *fs, uint64_t part_lba, const uint8_t *sec)
{
	uint32_t reserved;
	uint32_t fats;
	uint32_t sectors_per_fat;

	zero(fs, sizeof(*fs));
	fs->block = block;
	fs->part_lba = part_lba;
	fs->bytes_per_sector = HVS_FS_SECTOR_BYTES;
	fs->cache_lba = 0xFFFFFFFFFFFFFFFFull;

	if(fat32_vbr(sec)) {
		fs->type = HVS_FS_FAT32;
		fs->sectors_per_cluster = sec[13];
		reserved = le16(sec + 14);
		fats = sec[16];
		sectors_per_fat = le32(sec + 36);
		fs->fat_lba = reserved;
		fs->fat_sectors = sectors_per_fat;
		fs->root_cluster = le32(sec + 44);
		fs->data_lba = reserved + fats * sectors_per_fat;
		if(fs->sectors_per_cluster == 0u || fs->root_cluster < 2u) return HVS_ERR_BAD_FORMAT;
		return HVS_OK;
	}

	if(exfat_vbr(sec)) {
		uint8_t sector_shift = sec[108];
		uint8_t cluster_shift = sec[109];
		if(sector_shift != 9u) return HVS_ERR_UNSUPPORTED;
		fs->type = HVS_FS_EXFAT;
		fs->fat_lba = le32(sec + 80);
		fs->fat_sectors = le32(sec + 84);
		fs->data_lba = le32(sec + 88);
		fs->cluster_count = le32(sec + 92);
		fs->root_cluster = le32(sec + 96);
		fs->sectors_per_cluster = 1u << cluster_shift;
		if(fs->sectors_per_cluster == 0u || fs->root_cluster < 2u) return HVS_ERR_BAD_FORMAT;
		return HVS_OK;
	}

	return HVS_ERR_BAD_FORMAT;
}

hvs_status_t hvs_fs_mount(hvs_block_device_t *block, hvs_fs_t *fs)
{
	uint8_t sec[HVS_FS_SECTOR_BYTES];
	hvs_status_t st;

	if(block->block_size != HVS_FS_SECTOR_BYTES) return HVS_ERR_UNSUPPORTED;
	st = block->read_blocks(block, 0u, 1u, sec);
	if(st != HVS_OK) return st;

	st = mount_at(block, fs, 0u, sec);
	if(st == HVS_OK) return HVS_OK;

	if(has_sig55aa(sec)) {
		uint32_t i;
		for(i = 0; i < 4u; ++i) {
			const uint8_t *part = sec + 446u + i * 16u;
			uint8_t type = part[4];
			uint32_t lba = le32(part + 8);
			if(type == 0u || lba == 0u) continue;
			st = block->read_blocks(block, lba, 1u, sec);
			if(st != HVS_OK) return st;
			st = mount_at(block, fs, lba, sec);
			if(st == HVS_OK) return HVS_OK;
		}
	}

	return HVS_ERR_BAD_FORMAT;
}

hvs_status_t hvs_fs_open(hvs_fs_t *fs, const char *path, hvs_file_t *file)
{
	hvs_dirent_t ent;
	hvs_status_t st = resolve_path(fs, path, &ent);
	if(st != HVS_OK) return st;
	zero(file, sizeof(*file));
	file->fs = fs;
	file->first_cluster = ent.first_cluster;
	file->current_cluster = ent.first_cluster;
	file->size = ent.size;
	file->is_dir = ent.is_dir;
	file->no_fat_chain = ent.no_fat_chain;
	return HVS_OK;
}

hvs_status_t hvs_fs_exists(hvs_fs_t *fs, const char *path)
{
	hvs_dirent_t ent;
	return resolve_path(fs, path, &ent);
}

hvs_status_t hvs_fs_is_dir(hvs_fs_t *fs, const char *path)
{
	hvs_dirent_t ent;
	hvs_status_t st = resolve_path(fs, path, &ent);
	if(st != HVS_OK) return st;
	return ent.is_dir ? HVS_OK : HVS_ERR_NOT_FOUND;
}

hvs_status_t hvs_fs_read(hvs_file_t *file, uint64_t offset, void *dst, uint32_t len, uint32_t *actual)
{
	hvs_fs_t *fs = file->fs;
	uint8_t *out = (uint8_t *)dst;
	uint32_t cluster_size = fs->sectors_per_cluster * HVS_FS_SECTOR_BYTES;
	uint32_t cluster = file->first_cluster;
	uint64_t skip_clusters;
	uint32_t in_cluster;
	hvs_status_t st;

	*actual = 0u;
	if(file->is_dir) return HVS_ERR_INVALID;
	if(offset >= file->size) return HVS_OK;
	if((uint64_t)len > file->size - offset) len = (uint32_t)(file->size - offset);

	skip_clusters = offset / cluster_size;
	in_cluster = (uint32_t)(offset % cluster_size);
	if(file->no_fat_chain) {
		cluster += (uint32_t)skip_clusters;
	} else {
		while(skip_clusters-- && cluster != 0u) {
			st = next_cluster(fs, cluster, &cluster);
			if(st != HVS_OK) return st;
		}
	}

	while(len != 0u && cluster != 0u) {
		uint32_t sector_in_cluster = in_cluster / HVS_FS_SECTOR_BYTES;
		uint32_t byte_in_sector = in_cluster % HVS_FS_SECTOR_BYTES;
		const uint8_t *sec;
		uint32_t chunk = HVS_FS_SECTOR_BYTES - byte_in_sector;
		if(chunk > len) chunk = len;
		st = cached_sector(fs, fs->part_lba + cluster_lba(fs, cluster) + sector_in_cluster, &sec);
		if(st != HVS_OK) return st;
		for(uint32_t i = 0; i < chunk; ++i) out[i] = sec[byte_in_sector + i];
		out += chunk;
		len -= chunk;
		*actual += chunk;
		in_cluster += chunk;
		if(in_cluster >= cluster_size) {
			in_cluster = 0u;
			if(file->no_fat_chain) cluster++;
			else {
				st = next_cluster(fs, cluster, &cluster);
				if(st != HVS_OK) return st;
			}
		}
	}

	return HVS_OK;
}

hvs_status_t hvs_fs_read_dir(hvs_fs_t *fs, const char *path, uint32_t index, hvs_dirent_t *out)
{
	hvs_dirent_t dir;
	hvs_status_t st = resolve_path(fs, path, &dir);
	if(st != HVS_OK) return st;
	if(!dir.is_dir) return HVS_ERR_INVALID;
	if(fs->type == HVS_FS_FAT32) return fat32_read_dir_index(fs, dir.first_cluster, index, out);
	return exfat_read_dir_index(fs, dir.first_cluster, index, out);
}
