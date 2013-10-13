#ifndef NU_UTF16_H
#define NU_UTF16_H

#include <stdint.h>

#include "strings.h"

/** @defgroup utf16 UTF-16 support
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#if (defined NU_WITH_UTF16_READER) || (defined NU_WITH_UTF16_WRITER)
static const uint16_t NU_UTF16_BOM = 0; /** for sizeof() only */
#endif

typedef char* (*nu_utf16_write_bom_t)(char *);

#ifdef NU_WITH_UTF16_READER

/** Read BOM from encoded string
 *
 * @ingroup utf16
 * @param encoded pointer to encoded strings
 * @param bom optional, return pointer to detected bom write function.
 * Note it will always be 0 if NU_WITH_UTF16_WRITER is not enabled
 * @param rd optional, return pointer to detected decoding function
 * @param wr optional, return pointer to detected encoding function
 * @param revrd optional, return pointer to detected reverse read (decode) function.
 * Note it will always be 0 if NU_WITH_REVERSE_READ is not enabled
 * @return pointer to next character in UTF-16 string or 0 if BOM is
 * not found
 */
const char* nu_utf16_read_bom(const char *encoded, nu_utf16_write_bom_t *bom, 
	nu_read_iterator_t *rd, nu_write_iterator_t *wr,
	nu_revread_iterator_t *revrd);

#endif /* NU_WITH_UTF16_READER */

#ifdef NU_WITH_UTF16_WRITER

/** Write little-endian BOM to a string
 *
 * @ingroup utf16
 * @param encoded pointer to encoded string or 0
 * @return pointer to byte after written BOM
 */
char* nu_utf16le_write_bom(char *encoded);

/** Write big-endian BOM to a string
 *
 * @ingroup utf16
 * @param encoded pointer to encoded string or 0
 * @return pointer to byte after written BOM
 */
char* nu_utf16be_write_bom(char *encoded);

#endif /* NU_WITH_UTF16_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF16_H */
