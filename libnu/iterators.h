#ifndef NU_ITERATORS_H
#define NU_ITERATORS_H

#include <stdint.h>

#include "build_config.h"

/** @defgroup iterators Iterators
 */

#ifdef NU_WITH_ITERATORS

/**Read (decoding) iterator
 *
 * @ingroup iterators
 * @see nu_utf8_read
 */
typedef const char* (*nu_read_iterator_t)(const char *encoded, uint32_t *unicode);

/** Write (encoding) iterator
 *
 * @ingroup iterators
 * @see nu_utf8_write
 */
typedef char* (*nu_write_iterator_t)(uint32_t unicode, char *encoded);

/** Read 0-terminated string
 *
 * @ingroup iterators
 * @param encoded source buffer
 * @param unicode destination buffer, should be large enough to hold
 * decoded string
 * @param it read function
 * @return 0 in success or negative error
 *
 * @see nu_utf8_read
 * @see nu_utf8_strlen
 */
int nu_read_str(const char *encoded, uint32_t *unicode, nu_read_iterator_t it); /* XXX: it's probaby better to have size_t size on buffers */

/** Write 0-terminated string
 *
 * @ingroup iterators
 * @param unicode 0x0000-terminated codepoints
 * @param encoded destination buffer, should be large enough to hold
 * encoded string
 * @return 0 on success or negative error
 *
 * @see nu_utf8_write
 * @see nu_utf8_bytelen
 */
int nu_write_str(const uint32_t *unicode, char *encoded, nu_write_iterator_t it);

/** Recode string
 *
 * @ingroup iterators
 * @param source source encoded string
 * @param dest dest encoded string, should be large enough
 * @param read_it decoding function
 * @param write_it encoding function
 * @return 0 on success or negative error
 *
 * @see nu_utf8_bytelen
 * @see nu_utf8_read
 * @see nu_utf8_write
 */
int nu_transform_str(const char *source, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it);

#endif /* NU_WITH_ITERATORS */

#endif /* NU_ITERATORS_H */
