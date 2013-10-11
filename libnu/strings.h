#ifndef NU_STRINGS_H
#define NU_STRINGS_H

/** @defgroup strings String operations
 */

#include <stdint.h>
#include <sys/types.h>

#include "build_config.h"

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
int nu_readstr(const char *encoded, uint32_t *unicode, nu_read_iterator_t it); /* XXX: it's probaby better to have size_t size on buffers */

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
int nu_writestr(const uint32_t *unicode, char *encoded, nu_write_iterator_t it);

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
int nu_transformstr(const char *source, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it);

#endif /* NU_WITH_STRINGS */

#endif /* NU_STRINGS_H */
