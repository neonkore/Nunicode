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
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef int (*nu_codepointcmp_t)(uint32_t u1, uint32_t u2);

#ifdef NU_WITH_Z_COLLATION

/** Compare characters in strings. This one is not different from strcmp()
 *
 * @ingroup collation
 * @param s1 first encoded strings
 * @param s2 second encoded strings
 * @param it1 read (decode) function for first string
 * @param it2 read (decode) function for second string
 * @return -1, 0, 1
 */
int nu_strcmp(const char *s1, const char *s2,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

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

/** Compare characters in strings ignoring case. Will apply nu_toupper() to 
 * each character before comparision.
 *
 * @ingroup collation
 * @see nu_strcmp
 */
int nu_strcasecmp(const char *s1, const char *s2,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @see nu_strcoll
 */
int nu_strcasecoll(const char *s1, const char *s2,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

/** Compare characters in strings. This one is not different from strcmp()
 *
 * @ingroup collation
 * @param s1 first encoded strings
 * @param s2 second encoded strings
 * @param max_len maximum number of bytes to compare. Might go further this
 * @param it1 read (decode) function for first string
 * @param it2 read (decode) function for second string
 * limit if complete character is longer than that
 * @return -1, 0, 1
 */
int nu_strncmp(const char *s1, const char *s2, size_t max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @param s1 first encoded strings
 * @param s2 second encoded strings
 * @param max_len maximum number of bytes to compare. Might go further this
 * @param it1 read (decode) function for first string
 * @param it2 read (decode) function for second string
 * limit if complete character is longer than that
 */
int nu_strncoll(const char *s1, const char *s2, size_t max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Compare characters in strings ignoring case. Will apply nu_toupper() to 
 * each character before comparision.
 *
 * @ingroup collation
 * @see nu_strncmp
 */
int nu_strcasencmp(const char *s1, const char *s2, size_t max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @see nu_strncoll
 */
int nu_strcasencoll(const char *s1, const char *s2, size_t max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Find needle in haystack
 *
 * @ingroup collation
 * @see nu_strstr
 */
const char* nu_strnstr(const char *haystack, size_t max_len, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Find needle in haystack (case-insensitive)
 *
 * @ingroup collation
 * @see nu_strcasestr
 */
const char* nu_strcasenstr(const char *haystack, size_t max_len, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

#endif /* NU_WITH_N_COLLATION */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_STRCOLL_H */
