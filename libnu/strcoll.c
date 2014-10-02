#include "defines.h"
#include "ducet.h"
#include "strcoll.h"
#include "strcoll_internal.h"
#include "casemap.h"

#ifdef NU_WITH_Z_COLLATION

const char* nu_strchr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, NU_UNLIMITED,
		c, read,
		nu_default_compound_read,
		0, 0);
}

const char* nu_strcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, NU_UNLIMITED,
		c, read,
		nu_nocase_compound_read,
		NU_FOLDING_FUNCTION, NU_CASEMAP_DECODING_FUNCTION);
}

const char* nu_strrchr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, NU_UNLIMITED,
		c, read,
		nu_default_compound_read,
		0, 0);
}

const char* nu_strrcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, NU_UNLIMITED, c, read,
		nu_nocase_compound_read,
		NU_FOLDING_FUNCTION, NU_CASEMAP_DECODING_FUNCTION);
}

int nu_strcoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, NU_UNLIMITED, s2, NU_UNLIMITED,
		s1_read, s2_read,
		nu_default_compound_read, nu_default_compound_read,
		nu_ducet_weight, 0,
		0, 0);
}

int nu_strcasecoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, NU_UNLIMITED, s2, NU_UNLIMITED,
		s1_read, s2_read,
		nu_nocase_compound_read, nu_nocase_compound_read,
		nu_ducet_weight, 0,
		0, 0);
}

const char* nu_strstr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack, NU_UNLIMITED, needle, NU_UNLIMITED,
		haystack_read, needle_read,
		nu_default_compound_read, nu_default_compound_read,
		0, 0,
		nu_ducet_weight, 0);
}

const char* nu_strcasestr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack, NU_UNLIMITED, needle, NU_UNLIMITED,
		haystack_read, needle_read,
		nu_nocase_compound_read, nu_nocase_compound_read,
		NU_FOLDING_FUNCTION, NU_CASEMAP_DECODING_FUNCTION,
		nu_ducet_weight, 0);
}

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

const char* nu_strnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, encoded + max_len,
		c, read,
		nu_default_compound_read,
		0, 0);
}

const char* nu_strcasenchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, encoded + max_len,
		c, read,
		nu_nocase_compound_read,
		NU_FOLDING_FUNCTION, NU_CASEMAP_DECODING_FUNCTION);
}

const char* nu_strrnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, encoded + max_len,
		c, read,
		nu_default_compound_read,
		0, 0);
}

const char* nu_strrcasenchr(const char *encoded, size_t max_len, uint32_t c,
	nu_read_iterator_t read) {
	return _nu_strrchr(encoded, encoded + max_len,
		c, read,
		nu_nocase_compound_read,
		NU_FOLDING_FUNCTION, NU_CASEMAP_DECODING_FUNCTION);
}

int nu_strncoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		s1_read, s2_read,
		nu_default_compound_read, nu_default_compound_read,
		nu_ducet_weight, 0,
		0, 0);
}

int nu_strcasencoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		s1_read, s2_read,
		nu_nocase_compound_read, nu_nocase_compound_read,
		nu_ducet_weight, 0,
		0, 0);
}

const char* nu_strnstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack,  haystack + haystack_max_len,
		needle, needle + needle_max_len,
		haystack_read, needle_read,
		nu_default_compound_read, nu_default_compound_read,
		0, 0,
		nu_ducet_weight, 0);
}

const char* nu_strcasenstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack,  haystack + haystack_max_len,
		needle, needle + needle_max_len,
		haystack_read, needle_read,
		nu_nocase_compound_read, nu_nocase_compound_read,
		NU_FOLDING_FUNCTION, NU_CASEMAP_DECODING_FUNCTION,
		nu_ducet_weight, 0);
}

#endif /* NU_WITH_N_COLLATION */
