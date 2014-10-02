#ifndef NU_STRCOLL_INTERNAL_H
#define NU_STRCOLL_INTERNAL_H

#include "config.h"
#include "casemap.h"
#include "defines.h"
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

/** Read (decode) iterator with transformation applied inside of it
 *
 * @ingroup iterators
 * @see nu_default_compound_read
 * @see nu_nocase_compound_read
 */
typedef const char* (*nu_compound_read_t)(
	const char *encoded, const char *encoded_limit, nu_read_iterator_t encoded_read,
	uint32_t *unicode, const char **tail);

/** Weight unicode codepoint (or several codepoints)
 *
 * 0 should always be weighted to 0. If your weight function need more
 * than one character - return negative value, which will be passed back to
 * this function along with next character.
 *
 * When function decided on weight and returned positive result, it has to
 * fill weight with how many (Unicode) characters nunicode should rollback.
 * E.g. function consumed "ZZS" and decided weight (in Hungarian collation),
 * it fills 0 to \*weight because no rollback is needed. Then function
 * consumed "ZZZ" and no weight available for such contraction - it
 * returns weight for "Z" and fills \*weight with 2, to rollback
 * redundant "ZZ".
 *
 * If string suddenly ends before weight function can decide (string limit
 * reached), 0 will be passed additionally to the previous string to signal
 * end of the string.
 *
 * @ingroup collation
 * @param u unicode codepoint to weight
 * @param weight 0 or negative weight previously returned by this function
 * @param context pointer passed to _nu_strcoll() or _nu_strstr()
 * @return positive codepoint weight or negative value if function need more
 * codepoints
 */
typedef int32_t (*nu_codepoint_weight_t)(uint32_t u, int32_t *weight, void *context);

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

/** Internal interface for nu_strcoll
 *
 * @ingroup collation
 * @param lhs left-hand side encoded string
 * @param lhs_limit upper limit for lhs, use NU_UNLIMITED for 0-terminated
 * strings
 * @param rhs right-hand side encoded string
 * @param rhs_limit upper limit for rhs, use NU_UNLIMITED for 0-terminated
 * strings
 * @param it1 lhs read (decoding) function
 * @param it2 rhs read (decoding) function
 * @param com1 lhs compound read function
 * @param com2 rhs compound read function
 * @param weight codepoint weighting function
 * @param context pointer which will be passed to weight
 * @see nu_strcoll
 * @see nu_default_compound_read
 * @see nu_nocase_compound_read
 * @see nu_ducet_weight
 */
NU_EXPORT
int _nu_strcoll(const char *lhs, const char *lhs_limit,
	const char *rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_codepoint_weight_t weight, void *context,
	ssize_t *collated_left, ssize_t *collated_right);

/** Internal interface for nu_strchr
 *
 * @ingroup collation
 * @param lhs left-hand side encoded string
 * @param lhs_limit upper limit for lhs, use NU_UNLIMITED for 0-terminated
 * strings
 * @param c unicode codepoint to look for
 * @param read lhs read (decoding) function
 * @param com lhs compound read function
 * @param casemap casemapping function
 * @see nu_strchr
 * @see nu_default_compound_read
 * @see nu_nocase_compound_read
 * @see nu_toupper
 * @see nu_tolower
 */
NU_EXPORT
const char* _nu_strchr(const char *lhs, const char *lhs_limit,
	uint32_t c, nu_read_iterator_t read,
	nu_compound_read_t com,
	nu_casemapping_t casemap, nu_read_iterator_t casemap_read);

/** Internal interface for nu_strchr
 *
 * @ingroup collation
 * @see _nu_strchr
 */
NU_EXPORT
const char* _nu_strrchr(const char *encoded, const char *limit,
	uint32_t c, nu_read_iterator_t read,
	nu_compound_read_t com,
	nu_casemapping_t casemap, nu_read_iterator_t casemap_read);

/** Internal interface for nu_strcoll
 *
 * @ingroup collation
 * @param haystack encoded haystack
 * @param haystack_limit upper limit for haystack, use NU_UNLIMITED for
 * 0-terminated strings
 * @param needle encoded needle string
 * @param needle_limit upper limit for needle, use NU_UNLIMITED for
 * 0-terminated strings
 * @param it1 haystack read (decoding) function
 * @param it2 needle read (decoding) function
 * @param com1 haystack compound read function
 * @param com2 needle compound read function
 * @param casemap casemapping function
 * @param weight codepoint weighting function
 * @param context pointer which will be passed to weight
 * @see nu_strstr
 * @see nu_default_compound_read
 * @see nu_nocase_compound_read
 * @see nu_toupper
 * @see nu_tolower
 * @see nu_ducet_weight
 */
NU_EXPORT
const char* _nu_strstr(const char *haystack, const char *haystack_limit,
	const char *needle, const char *needle_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_casemapping_t casemap, nu_read_iterator_t casemap_read,
	nu_codepoint_weight_t weight, void *context);

#endif /* (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION) */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_STRCOLL_INTERNAL_H */
