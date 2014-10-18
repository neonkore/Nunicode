#ifndef NU_VALIDATE_H
#define NU_VALIDATE_H

/** @defgroup validation Encoding validation
 */

#include <sys/types.h>

#include "config.h"
#include "defines.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

/** Validation function
 *
 * @ingroup iterators
 * @see nu_utf8_validread
 */
typedef int (*nu_validread_iterator_t)(const char *p, size_t max_len);

#ifdef NU_WITH_VALIDATION

/** Validate string encoding
 *
 * Note that you can get invalid unicode codepoint position
 * by calling nu_strnlen(encoded, invalid - encoded, nu_utf8_read)
 * or so. Returned pointer is to provide you with means to deal with
 * invalid codepoint.
 *
 * Also note that this is encoding validation, not Unicode strings
 * validation. That is, it might check that UTF-8 string is encoded
 * properly with nu_utf8_validread, but it WON'T do full decoding and
 * check that UTF-16 reserved codepoints are not in the strings.
 *
 * @ingroup validation
 * @param encoded encoded string
 * @param max_len length of the buffer, nu_validate() won't go further
 * than this
 * @param it validating iterator (e.g. nu_utf8_validread)
 * @return 0 on valid string, pointer to invalid segment in string on
 * validation error
 *
 * @see nu_utf8_validread
 */
NU_EXPORT
const char* nu_validate(const char *encoded, size_t max_len,
	nu_validread_iterator_t it);

#endif /* NU_WITH_VALIDATION */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_VALIDATE_H */
