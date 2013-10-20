#ifndef NU_UDB_H
#define NU_UDB_H

#include <stdint.h>
#include <sys/types.h>

#include "strings.h"

/** @defgroup udb Unicode Database (kind of)
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef struct {
	uint32_t codepoint;
	const char *data;
} nu_udb_t;

#ifdef NU_WITH_UDB

/** Lookup data in UDB
 *
 * Returned data is encoded, therefore you need to use p = it(p, &u) to
 * fetch it. Returned string might contain more than 1 character.
 *
 * @ingroup udb
 * @param codepoint unicode codepoint
 * @param it returned read iterator for looked up data
 * @param FNV first MPH table
 * @param FNV_SIZE first table number of elements (original MPH set size)
 * @param VALUES second MPH table
 * @return looked up data or 0
 */
const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	const int16_t *FNV, size_t FNV_SIZE, const nu_udb_t **VALUES);

#endif /* NU_WITH_UDB */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UDB_H */
