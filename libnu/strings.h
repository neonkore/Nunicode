#ifndef NU_STRINGS_H
#define NU_STRINGS_H

/** @defgroup strings String operations
 */

#include <stdint.h>
#include <sys/types.h>

#include "build_config.h"
#include "iterators.h"

#ifdef NU_WITH_STRINGS

/** Get decoded string characters length
 *
 * @ingroup strings
 * @param encoded encoded string
 * @param it decoding function
 */
ssize_t nu_strlen(const char *encoded, nu_read_iterator_t it);

/** Get encoded string bytes length
 *
 * @ingroup strings
 * @param unicode unicode codepoints
 * @param it encoding function
 */
ssize_t nu_bytelen(const uint32_t *unicode, nu_write_iterator_t it);

#endif /* NU_WITH_STRINGS */

#endif /* NU_STRINGS_H */
