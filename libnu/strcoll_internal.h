#ifndef NU_STRCOLL_INTERNAL_H
#define NU_STRCOLL_INTERNAL_H

#include "config.h"
#include "casemap.h"
#include "defines.h"
#include "strings.h"

typedef int32_t (*nu_codepoint_weight_t)(uint32_t u, int32_t state);

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

NU_EXPORT
int _nu_strcoll(const char *lhs, const char *lhs_limit,
	const char *rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_codepoint_weight_t weight);

NU_EXPORT
const char* _nu_strchr(const char *lhs, const char *lhs_limit, uint32_t c,
	nu_read_iterator_t read, nu_compound_read_t com, nu_casemapping_t casemap);

NU_EXPORT
const char* _nu_strrchr(const char *encoded, const char *limit, uint32_t c,
	nu_read_iterator_t read, nu_compound_read_t com, nu_casemapping_t casemap);

NU_EXPORT
const char* _nu_strstr(const char *haystack, const char *haystack_limit,
	const char *needle, const char *needle_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_casemapping_t casemap, nu_codepoint_weight_t weight);

#endif /* (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION) */
#endif /* NU_STRCOLL_INTERNAL_H */
