#ifndef NU_TESTS_SWITCH_TEST_BASE_H
#define NU_TESTS_SWITCH_TEST_BASE_H

#include <stddef.h>
#include <stdint.h>

#include <libnu/strcoll.h>
#include <libnu/strcoll_internal.h>

typedef struct {
	int32_t weight;
	int32_t rollback;
	size_t len;
	uint32_t *seq;
} _nu_contraction_test_t;


int32_t _nu_test_contraction_weight(nu_codepoint_weight_t weight, const uint32_t *contraction, size_t n, int32_t *rollback);

#endif /* NU_TESTS_SWITCH_TEST_BASE_H */
