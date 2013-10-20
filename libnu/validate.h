#ifndef NU_VALIDATE_H
#define NU_VALIDATE_H

/** @defgroup validation Encoding validation
 */

#include <sys/types.h>

#include "config.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef int (*nu_validread_iterator_t)(const char *p, size_t max_len);

#ifdef NU_WITH_VALIDATION

/** Validate string encoding
 *
 * Note that you can get invalid unicode character position
 * by calling nu_strnlen(encoded, invalid - encoded, nu_utf8_read)
 * or so. Returned pointer is to provide you with means to deal with
 * invalid character.
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
const char* nu_validate(const char *encoded, size_t max_len, nu_validread_iterator_t it);

#endif /* NU_WITH_VALIDATION */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_VALIDATE_H */
