#include <assert.h>

#include <libnu/libnu.h>
#include <libnu/strcoll_internal.h>

#define state_a (int32_t)(-1)
#define state_ab (int32_t)(-2)

static const int32_t weight_abc = 'a' + 1;
static const int32_t weight_ac = 'a' + 2;
static const int32_t weight_ab = 'a' + 3;

/* a < abc < ac < ab < b */
static int32_t _test_weight(uint32_t u, int32_t weight, void *context) {
	(void)(context);

	switch (weight) {
	case state_a:
		switch (u) {
		case 'b': return state_ab;
		case 'c': return weight_ac;
		}
		return 'a';

	case state_ab:
		switch (u) {
		case 'c': return weight_abc;
		}
		return weight_ab;
	}

	switch (u) {
	case 0: return 0; /* special case */
	case 'a': return state_a;
	}

	return u + 4; /* codepoint order */
}

static int test_strcoll(const char *lhs, const char *rhs) {
	return _nu_strcoll(lhs, NU_UNLIMITED, rhs, NU_UNLIMITED,
		nu_utf8_read, nu_utf8_read,
		nu_default_compound_read, nu_default_compound_read, _test_weight, 0);
}

static int test_strncoll(const char *lhs, size_t max_lhs,
	const char *rhs, size_t max_rhs) {
	return _nu_strcoll(lhs, lhs + max_lhs, rhs, rhs + max_rhs,
		nu_utf8_read, nu_utf8_read,
		nu_default_compound_read, nu_default_compound_read, _test_weight, 0);
}

void test_compoundcmp_strcoll() {
	/* 0 should always be weighted 0 */
	assert(_test_weight(0, 0, 0) == 0);
	assert(_test_weight(0, 1, 0) == 0);

	/* borders */
	assert(test_strcoll("a", "b") < 0);
	assert(test_strcoll("b", "a") > 0);

	/* contract */
	assert(test_strcoll("a", "abc") < 0);
	assert(test_strcoll("abc", "a") > 0);

	assert(test_strcoll("abc", "ac") < 0);
	assert(test_strcoll("ac", "abc") > 0);

	assert(test_strcoll("ac", "ab") < 0);
	assert(test_strcoll("ab", "ac") > 0);

	assert(test_strcoll("ab", "b") < 0);
	assert(test_strcoll("b", "ab") > 0);

	/* random */
	assert(test_strcoll("a", "abc") < 0);
	assert(test_strcoll("abc", "a") > 0);
	assert(test_strcoll("abc", "b") < 0);
	assert(test_strcoll("abc", "ab") < 0);
	assert(test_strcoll("b", "abc") > 0);

	/* unrelated */
	assert(test_strcoll("aa", "ab") < 0);
}

void test_compoundcmp_strcoll_outskirts() {
	/* outside of tailoring borders */
	assert(test_strcoll("a", "b") < 0);
	assert(test_strcoll("a", "c") < 0);
	assert(test_strcoll("b", "c") < 0);
	assert(test_strcoll("b", "d") < 0);
	assert(test_strcoll("c", "d") < 0);

	assert(test_strcoll("0", "a") < 0);
	assert(test_strcoll("0", "ab") < 0);
	assert(test_strcoll("9", "a") < 0);
	assert(test_strcoll("9", "ab") < 0);
}

void test_compoundcmp_strncoll() {
	assert(test_strncoll("a", 0, "b", 0) == 0);
	assert(test_strncoll("a", 1, "b", 1) < 0);

	assert(test_strncoll("a", 1, "ab", 1) == 0);
	assert(test_strncoll("a", 1, "ab", 2) < 0);

	assert(test_strncoll("ab", 1, "ac", 1) == 0);
	assert(test_strncoll("ab", 2, "ac", 1) > 0);
	assert(test_strncoll("ab", 2, "ac", 2) > 0);
	assert(test_strncoll("ab", 1, "ac", 2) < 0);
}
