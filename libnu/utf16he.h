#ifndef NU_UTF16HE_H
#define NU_UTF16HE_H

#include <stdint.h>
#include <sys/types.h>

#include "config.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UTF16HE_READER

/** Read character from UTF-16 string
 *
 * @ingroup utf16
 * @see nu_utf16le_read
 */
const char* nu_utf16he_read(const char *utf16, uint32_t *unicode);

#ifdef NU_WITH_REVERSE_READ

/** Read character from UTF-16 string in backward direction
 *
 * @ingroup utf16
 * @see nu_utf16le_revread
 */
const char* nu_utf16he_revread(uint32_t *unicode, const char *utf16);

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

/** Validate character in string
 *
 * @ingroup utf16
 * @see nu_utf16le_validread
 */
int nu_utf16he_validread(const char *encoded, size_t max_len);

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF16HE_READER */

#ifdef NU_WITH_UTF16HE_WRITER

/** Write unicode codepoints into UTF-16 encoded string
 *
 * @ingroup utf16
 * @see nu_utf16le_write
 */
char* nu_utf16he_write(uint32_t unicode, char *utf16);

#endif /* NU_WITH_UTF16HE_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF16HE_H */
