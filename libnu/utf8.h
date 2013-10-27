#ifndef NU_UTF8_H
#define NU_UTF8_H

#include <stdint.h>
#include <sys/types.h>

#include "config.h"

/** @defgroup utf8 UTF-8 support
 *
 * Note: There is no utf8_string[i] equivalent - it will be slow,
 * use nu_utf8_next() instead
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UTF8_READER

/** Read character from UTF-8 string
 *
 * @ingroup utf8
 * @param utf8 pointer to UTF-8 encoded string
 * @param unicode output unicode codepoint or 0
 * @return pointer to next character in UTF-8 string
 */
const char* nu_utf8_read(const char *utf8, uint32_t *unicode);

#ifdef NU_WITH_REVERSE_READ

/** Read character from UTF-8 string in backward direction
 *
 * Note that it is your responsibility to check that this call
 * is not going under beginning of encoded string. Normally you
 * shouldn't call it like this: nu_utf8_revread(&u, "hello"); which
 * will result in undefined behavior
 *
 * @ingroup utf8
 * @param unicode output unicode codepoint or 0
 * @param utf8 pointer to UTF-8 encoded string
 * @return pointer to previous character in UTF-8 string
 */
const char* nu_utf8_revread(uint32_t *unicode, const char *utf8);

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

/** Validate character in string
 *
 * @ingroup utf8
 * @param encoded buffer with encoded string
 * @param max_len buffer length
 * @return character length or 0 on error
 */
int nu_utf8_validread(const char *encoded, size_t max_len);

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF8_READER */

#ifdef NU_WITH_UTF8_WRITER

/** Write unicode codepoints into UTF-8 encoded string
 *
 * @ingroup utf8
 * @param unicode unicode codepoint
 * @param utf8 pointer to buffer to write UTF-8 encoded text to,
 * should be large enough to hold encoded value
 * @return pointer to byte after last written
 */
char* nu_utf8_write(uint32_t unicode, char *utf8);

#endif /* NU_WITH_UTF8_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF8_H */
