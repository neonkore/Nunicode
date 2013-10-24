#ifndef NU_STRCOLL_H
#define NU_STRCOLL_H

/** @defgroup collation Collation functions
 *
 * Note on "n" functions variant: those are not for memory overrun control.
 * They are just for strings not having terminating 0 byte and those
 * functions won't go further than m-th *character* in string, not byte.
 */

#include <sys/types.h>

#include "config.h"
#include "casemap.h"
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef int (*nu_codepointcmp_t)(uint32_t u1, uint32_t u2, nu_casemapping_t casemap);

#ifdef NU_WITH_Z_COLLATION

/** Locate character in string
 *
 * @ingroup collation
 * @param encoded encoded string
 * @param c charater  to locate
 * @param read read (decode) function for encoded string
 * @return pointer to character in string or 0
 */
const char* nu_strchr(const char *encoded, uint32_t c, nu_read_iterator_t read);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @param s1 first encoded strings
 * @param s2 second encoded strings
 * @param it1 read (decode) function for first string
 * @param it2 read (decode) function for second string
 * @return -1, 0, 1
 */
int nu_strcoll(const char *s1, const char *s2,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @see nu_strcoll
 */
int nu_strcasecoll(const char *s1, const char *s2,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Find needle in haystack
 *
 * @ingroup collation
 * @param haystack encoded haystack
 * @param needle encoded needle
 * @param it1 haystack read (decode) function
 * @param it2 needle read (decode) function
 * @return pointer to found string or 0, will return
 * haystack if needle is empty string
 */
const char* nu_strstr(const char *haystack, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Find needle in haystack (case-insensitive
 *
 * @ingroup collation
 * @see nu_strstr
 */
const char* nu_strcasestr(const char *haystack, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

/** Locate character in string
 *
 * @ingroup collation
 * @see nu_strchr
 */
const char* nu_strnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @see nu_strcoll
 */
int nu_strncoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @see nu_strncoll
 */
int nu_strcasencoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Find needle in haystack
 *
 * @ingroup collation
 * @see nu_strstr
 */
const char* nu_strnstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Find needle in haystack (case-insensitive)
 *
 * @ingroup collation
 * @see nu_strcasestr
 */
const char* nu_strcasenstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

#endif /* NU_WITH_N_COLLATION */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_STRCOLL_H */
