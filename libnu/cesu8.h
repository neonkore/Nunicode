#ifndef NU_CESU8_H
#define NU_CESU8_H

#include <stdint.h>

#include "config.h"

/** @defgroup cesu8 CESU-8 support
 *
 * http://www.unicode.org/reports/tr26/
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_CESU8_READER

/** Read character from UTF-8 string
 *
 * @ingroup cesu8
 * @param cesu8 pointer to CESU-8 encoded string
 * @param unicode output unicode codepoint or 0
 * @return pointer to next character in CESU-8 string
 */
const char* nu_cesu8_read(const char *cesu8, uint32_t *unicode);

#ifdef NU_WITH_REVERSE_READ

/** Read character from CESU-8 string in backward direction
 *
 * Note that it is your responsibility to check that this call
 * is not going under beginning of encoded string. Normally you
 * shouldn't call it like this: nu_cesu8_revread(&u, "hello"); which
 * will result in undefined behavior
 *
 * @ingroup cesu8
 * @param unicode output unicode codepoint or 0
 * @param cesu8 pointer to CESU-8 encoded string
 * @return pointer to previous character in CESU-8 string
 */
const char* nu_cesu8_revread(uint32_t *unicode, const char *utf8);

#endif /* NU_WITH_REVERSE_READ */
#endif /* NU_WITH_CESU8_READER */

#ifdef NU_WITH_CESU8_WRITER

/** Write unicode codepoints into CESU-8 encoded string
 *
 * @ingroup cesu8
 * @param unicode unicode codepoint
 * @param cesu8 pointer to buffer to write CESU-8 encoded text to,
 * shoud be large enough to hold encoded value
 * @return pointer to byte after last written
 */
char* nu_cesu8_write(uint32_t unicode, char *cesu8);

#endif /* NU_WITH_CESU8_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_CESU8_H */
