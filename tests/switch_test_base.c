#include <assert.h>
#include <stdio.h>

#include "switch_test_base.h"

int32_t _nu_test_contraction_weight(nu_codepoint_weight_t weight, const uint32_t *contraction, size_t n, int32_t *rollback) {
	int32_t ret = 0;
	int32_t w = 0;

	size_t i = 0; for (; i < n; ++i) {
		ret = weight(contraction[i], &w, 0);
		if (i < n - 1) {
			assert(ret < 0);
		}
		if (ret < 0) { /* otherwise it's rollback */
			w = ret;
		}
	}

	*rollback = w;
	return ret;
}
