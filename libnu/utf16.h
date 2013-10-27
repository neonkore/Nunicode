#ifndef NU_UTF16_H
#define NU_UTF16_H

#include <stdint.h>

#include "strings.h"
#include "validate.h"

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

typedef struct {
	nu_read_iterator_t read;
	nu_write_iterator_t write;
	nu_revread_iterator_t revread;
	nu_validread_iterator_t validread;
	nu_utf16_write_bom_t write_bom;
} nu_utf16_bom_t;

/** Read BOM from encoded string
 *
 * Note that if BOM is not specified in string, it defaults to big-endian
 *
 * @ingroup utf16
 * @param encoded pointer to encoded strings
 * @param bom optional, this struct will be filled with read, write, etc
 * function for detected BOM. Note revread, validread and write might be 0
 * if not enabled in build options
 * @return pointer to next character in UTF-16 string or encoded if BOM is
 * not found
 */
const char* nu_utf16_read_bom(const char *encoded, nu_utf16_bom_t *bom);

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
