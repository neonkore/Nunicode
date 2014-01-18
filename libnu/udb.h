#ifndef NU_UDB_H
#define NU_UDB_H

#include <stdint.h>
#include <sys/types.h>

#include "config.h"
#include "defines.h"
#include "strings.h"

/** @defgroup udb Unicode Database (kind of)
 *
 * Note: never use it directly, it is subject to change in next releases
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UDB

typedef const int16_t nu_fnv_table_t;

/** Lookup data in UDB
 *
 * Returned data is encoded, therefore you need to use p = it(p, &u) to
 * fetch it. Returned string might contain more than 1 character.
 *
 * @ingroup udb
 * @param codepoint unicode codepoint
 * @param it returned read iterator for looked up data
 * @param G first MPH table
 * @param G_SIZE first table number of elements (original MPH set size)
 * @param VALUES_C codepoints array
 * @param VALUES_I offsets array
 * @param COMBINED joined values addressed by index stored in VALUES
 * @return looked up data or 0
 */
NU_EXPORT
const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	nu_fnv_table_t *G, size_t G_SIZE,
	const uint32_t *VALUES_C, const uint16_t *VALUES_I,	const uint8_t *COMBINED);

/** Lookup value in UDB
 *
 * Similar to nu_udb_lookup(), but doesn't look into COMBINED
 *
 * @ingroup udb
 * @see nu_udb_lookup
 * @return raw value from VALUES_I
 */
NU_EXPORT
uint32_t nu_udb_lookup_value(uint32_t codepoint,
	nu_fnv_table_t *G, size_t G_SIZE,
	const uint32_t *VALUES_C, const uint16_t *VALUES_I);

#endif /* NU_WITH_UDB */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UDB_H */
