#include <assert.h>

#include <libnu/libnu.h>
#include <libnu/gen/_tolower.h>

void test_udb_lookup() { /* just quick test */
	assert(nu_udb_lookup(0x0041,
			G, sizeof(G) / sizeof(*G), VALUES_C, VALUES_I, COMBINED) != 0);

	assert(nu_udb_lookup(0x0041,
		G, sizeof(G) / sizeof(*G), VALUES_C, VALUES_I, COMBINED) != 0);
}
