#ifndef NU_STRCOLL_H
#define NU_STRCOLL_H

/** @defgroup collation Collation functions
 *
 * All functions in this group are following full Unicode collation rules,
 * i.e. nu_strstr(haystack, "Æ") will find "AE" in haystack and
 * nu_strstr(haystack, "ß") will find "ss".
 *
 * Same applies for *every* function, nu_strchr(str, 0x00DF), as you would
 * guess, will also find "ss" in str.
 *
 * Please expect this.
 *
 * Note on "n" functions variant: those are not for memory overrun control.
 * They are just for strings not having terminating 0 byte and those
 * functions won't go further than m-th *character* in string, not byte.
 */

#include <sys/types.h>

#include "config.h"
#include "casemap.h"
#include "defines.h"
#include "strcoll_internal.h"
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_TOFOLD
# define NU_FOLDING_FUNCTION nu_tofold
#else
# define NU_FOLDING_FUNCTION nu_toupper
#endif /* NU_WITH_TOFOLD */

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

/** Default compound read, equal to simply calling encoded_read(encoded, &unicode)
 *
 * @ingroup collation
 * @param encoded encoded string
 * @param encoded_read read (decode) function
 * @param unicode output unicode codepoint
 * @param tail output pointer to compound tail, should never be 0
 * @param tail_read output tail read function, should never be 0
 * @return pointer to next encoded character
 */
NU_EXPORT
const char* nu_default_compound_read(const char *encoded, const char *encoded_limit,
	nu_read_iterator_t encoded_read, uint32_t *unicode,
	const char **tail, nu_read_iterator_t *tail_read);

/** Case-ignoring compound read, equal to calling
 * encoded_read(encoded, &unicode) with nu_toupper() applied internally
 *
 * @ingroup collation
 * @param encoded encoded string
 * @param encoded_read read (decode) function
 * @param unicode output unicode codepoint
 * @param tail output pointer to compound tail, should never be 0
 * @param tail_read output tail read function, should never be 0
 * @return pointer to next encoded character
 */
NU_EXPORT
const char* nu_nocase_compound_read(const char *encoded, const char *encoded_limit,
	nu_read_iterator_t encoded_read, uint32_t *unicode,
	const char **tail, nu_read_iterator_t *tail_read);

#endif /* NU_WITH_Z_COLLATION || NU_WITH_N_COLLATION */

#ifdef NU_WITH_Z_COLLATION

/** Locate character in string
 *
 * @ingroup collation
 * @param encoded encoded string
 * @param c charater  to locate
 * @param read read (decode) function for encoded string
 * @return pointer to character in string or 0
 */
NU_EXPORT
const char* nu_strchr(const char *encoded, uint32_t c, nu_read_iterator_t read);

/** Locate character in string ignoring case
 *
 * @ingroup collation
 * @see nu_strchr
 */
NU_EXPORT
const char* nu_strcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read);

/** Locate character in string in reverse direction
 *
 * @ingroup collation
 * @param encoded encoded string
 * @param c charater  to locate
 * @param read read (decode) function for encoded string
 * @return pointer to character in string or 0
 */
NU_EXPORT
const char* nu_strrchr(const char *encoded, uint32_t c, nu_read_iterator_t read);

/** Locate character in string in reverse direction, case-insensitive
 *
 * @ingroup collation
 * @see nu_strrchr
 */
NU_EXPORT
const char* nu_strrcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @param s1 first encoded strings
 * @param s2 second encoded strings
 * @param s1_read read (decode) function for first string
 * @param s2_read read (decode) function for second string
 * @return -1, 0, 1
 */
NU_EXPORT
int nu_strcoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read);

/** Compare characters in case ignoring case. It will also apply character
 * decomposition.
 *
 * @ingroup collation
 * @see nu_strcoll
 */
NU_EXPORT
int nu_strcasecoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read);

/** Find needle in haystack
 *
 * @ingroup collation
 * @param haystack encoded haystack
 * @param needle encoded needle
 * @param haystack_read haystack read (decode) function
 * @param needle_read needle read (decode) function
 * @return pointer to found string or 0, will return
 * haystack if needle is empty string
 */
NU_EXPORT
const char* nu_strstr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read);

/** Find needle in haystack (case-insensitive
 *
 * @ingroup collation
 * @see nu_strstr
 */
NU_EXPORT
const char* nu_strcasestr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read);

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

/**
 * @ingroup collation
 * @see nu_strchr
 */
NU_EXPORT
const char* nu_strnchr(const char *encoded, size_t max_len, uint32_t c,
	nu_read_iterator_t read);

/**
 * @ingroup collation
 * @see nu_strcasechr
 */
NU_EXPORT
const char* nu_strcasenchr(const char *encoded, size_t max_len, uint32_t c,
	nu_read_iterator_t read);

/**
 * @ingroup collation
 * @see nu_strrchr
 */
NU_EXPORT
const char* nu_strrnchr(const char *encoded, size_t max_len, uint32_t c,
	nu_read_iterator_t read);

/**
 * @ingroup collation
 * @see nu_strrcasechr
 */
NU_EXPORT
const char* nu_strrcasenchr(const char *encoded, size_t max_len, uint32_t c,
	nu_read_iterator_t read);

/**
 * @ingroup collation
 * @see nu_strcoll
 */
NU_EXPORT
int nu_strncoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read);

/**
 * @ingroup collation
 * @see nu_strncoll
 */
NU_EXPORT
int nu_strcasencoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read);

/**
 * @ingroup collation
 * @see nu_strstr
 */
NU_EXPORT
const char* nu_strnstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read);

/**
 * @ingroup collation
 * @see nu_strcasestr
 */
NU_EXPORT
const char* nu_strcasenstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read);

#endif /* NU_WITH_N_COLLATION */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_STRCOLL_H */
