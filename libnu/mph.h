#ifndef NU_MPH_H
#define NU_MPH_H

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

/* those need to be the same values as used in MPH generation */
#define PRIME        0x01000193

/** Calculate G offset from codepoint
 */
static inline uint32_t hash(uint32_t hash, uint32_t codepoint) {
	if (hash == 0) {
		hash = PRIME;
	}

	return hash ^ codepoint;
}

/** Get hash value of Unicode codepoint
 */
static inline uint32_t mph_hash(nu_fnv_table_t *G, size_t G_SIZE, uint32_t codepoint) {
	uint32_t h = hash(0, codepoint);
	int16_t offset = G[h % G_SIZE];
	if (offset < 0) {
		return (uint32_t)(-offset - 1);
	}
	return (hash(offset, codepoint) % G_SIZE);
}

/** Lookup value in MPH
 */
static inline uint32_t mph_lookup(const nu_udb_t *V, uint32_t codepoint, uint32_t hash) {
	const nu_udb_t *r = (V + hash);

	/* due to nature of minimal perfect hash, it will always
	 * produce collision for codepoints outside of MPH original set.
	 * thus nu_udb_t contain original codepoint to check if
	 * collision occurred */

	return (r->codepoint != codepoint ? 0 : r->combined_offset);
}

#endif /* NU_WITH_UDB */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_MPH_H */
