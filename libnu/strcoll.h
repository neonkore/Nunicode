#ifndef NU_STRCOLL_H
#define NU_STRCOLL_H

/** @defgroup collation Collation functions
 */

#include <sys/types.h>

#include "config.h"
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef int (*nu_codepointcmp_t)(uint32_t u1, uint32_t u2);

#ifdef NU_WITH_COLLATION

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
 * @param s1 first encoded strings
 * @param s2 second encoded strings
 * @param max_len maximum number of bytes to compare. Might go further this
 * @param it1 read (decode) function for first string
 * @param it2 read (decode) function for second string
 * limit if complete character is longer than that
 */
int nu_strncoll(const char *s1, const char *s2, size_t max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

#endif /* NU_WITH_COLLATION */

#ifdef NU_WITH_CASEMAP

/** Compare characters in strings ignoring case. Will apply nu_toupper() to 
 * each character before comparision.
 *
 * @ingroup collation
 * @see nu_strcmp
 */
int nu_strcasecmp(const char *s1, const char *s2,
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
 * @see nu_strcoll
 */
int nu_strcasecoll(const char *s1, const char *s2,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @see nu_strncoll
 */
int nu_strcasencoll(const char *s1, const char *s2, size_t max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2);

#endif /* NU_WITH_CASEMAP */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_STRCOLL_H */
