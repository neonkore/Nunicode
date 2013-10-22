#ifndef NU_FNV_H
#define NU_FNV_H

/* Intentionally undocumented
 *
 * http://isthe.com/chongo/tech/comp/fnv/
 * http://iswsa.acm.org/mphf/index.html
 */

#include <stdint.h>
#include <sys/types.h>

#include "udb.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UDB

#define FNV_OFFSET_BASIS 0xFFFFFFFF /* those need to be the same        */
#define FNV_PRIME        0x01000193 /* values as used in MPH generation */

/** Caclulate FNV number from codepoint
 */
static inline uint32_t fnv(uint32_t hash, uint32_t codepoint) {
	if (hash == 0) {
		hash = FNV_PRIME;
	}

	hash = (((hash * FNV_PRIME) ^ (codepoint & 0xFF000000)) & FNV_OFFSET_BASIS);
	hash = (((hash * FNV_PRIME) ^ (codepoint & 0x00FF0000)) & FNV_OFFSET_BASIS);
	hash = (((hash * FNV_PRIME) ^ (codepoint & 0x0000FF00)) & FNV_OFFSET_BASIS);
	hash = (((hash * FNV_PRIME) ^ (codepoint & 0x000000FF)) & FNV_OFFSET_BASIS);

	return hash;
}

/** Get hash value of unicode codepoint
 */
static inline uint32_t fnv_hash(nu_fnv_table_t *FNV, size_t FNV_SIZE, uint32_t codepoint) {
	uint32_t hash = fnv(0, codepoint);
	int16_t offset = FNV[hash % FNV_SIZE];
	if (offset < 0) {
		return (uint32_t)(-offset - 1);
	}
	return (fnv(offset, codepoint) % FNV_SIZE);
}

/** Lookup value in MPH
 */
static inline const char* fnv_lookup(const nu_udb_t *V, uint32_t codepoint, uint32_t hash) {
	const nu_udb_t *r = (V + hash);

	/* due to nature of minimal perfect hash, it will always 
	 * produce collision for codepoints outside of MPH original set. 
	 * thus nu_udb_t contain original codepoint to check if 
	 * collision occurred */

	return (r->codepoint != codepoint ? 0 : r->data);
}

#endif /* NU_WITH_UDB */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_FNV_H */
