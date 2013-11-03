#include <assert.h>

#include <libnu/libnu.h>
#include <libnu/gen/_tolower.h>

void test_udb_lookup() { /* just quick test */
	nu_read_iterator_t read = 0;
	assert(nu_udb_lookup(0x0041, &read, FNV, sizeof(FNV) / sizeof(*FNV), VALUES, COMBINED) != 0);
	assert(read != 0);
}
