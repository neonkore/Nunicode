#ifndef NU_UTF16LE_H
#define NU_UTF16LE_H

#include <stdint.h>

#include "build_config.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UTF16LE_READER

/** Read character from UTF-16 string
 *
 * @ingroup utf16
 * @param utf16 pointer to UTF-16 encoded string
 * @param unicode output unicode codepoint or 0
 * @return pointer to next character in UTF-16 string
 */
const char* nu_utf16le_read(const char *utf16, uint32_t *unicode);

#endif /* NU_WITH_UTF16LE_READER */

#ifdef NU_WITH_UTF16LE_WRITER

/** Write unicode codepoints into UTF-16 encoded string
 *
 * Note that length of decoded UTF-16 string is not entirely strlen(encoded) / 2.
 * You need to use nu_strlen(encoded, nu_utf16_read) to find out exact value.
 *
 * @ingroup utf16
 * @param unicode unicode codepoint
 * @param utf16 pointer to buffer to write UTF-16 encoded text to,
 * should be large enough to hold encoded value
 * @return pointer to byte after last written
 */
char* nu_utf16le_write(uint32_t unicode, char *utf16);

#endif /* NU_WITH_UTF16LE_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF16LE_H */
