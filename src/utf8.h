#ifndef NU_UTF8_H
#define NU_UTF8_H

#include <stdint.h>
#include <sys/types.h>

#include "build_config.h"

/** @defgroup utf8 UTF-8 support
 *
 * Note: There is no utf8_string[i] equivalent - it will be slow, 
 * use nu_utf8_next() instead
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UTF8_READER

/** Get character length of UTF-8 string
 *
 * @ingroup utf8
 * @param utf8 UTF-8 encoded string
 * @param utf8_size length of string
 * (you can pass strlen(utf8), trailing 0 won't be included though)
 * @return character length of UTF-8 string
 */
ssize_t nu_utf8_strlen(const char *utf8, size_t utf8_size);

/** Read character from UTF-8 string
 *
 * @ingroup utf8
 * @param utf8 pointer to UTF-8 encoded string
 * @param unicode output unicode codepoint or 0
 * @return pointer to next character in UTF-8 string
 */
const char* nu_utf8_read(const char *utf8, uint32_t *unicode);

#endif /* NU_WITH_UTF8_READER */

#ifdef NU_WITH_UTF8_WRITER

/**
 *
 * @ingroup utf8
 * @param unicode unicode to encode
 * @param unicode_size number of codepoints in array
 * @return byte length of UTF-8 encoded string
 */
ssize_t nu_utf8_bytelen(const uint32_t *unicode, size_t unicode_size);

/** Write unicode codepoints into UTF-8 encoded string
 *
 * @ingroup utf8
 * @param unicode unicode codepoint
 * @param utf8 pointer to buffer to write UTF-8 encoded text to.
 * Shoud be large enough to 
 * @return number of bytes written
 *
 * @see nu_utf8_bytelen
 */
char* nu_utf8_write(uint32_t unicode, char *utf8);

#endif /* NU_WITH_UTF8_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF8_H */
