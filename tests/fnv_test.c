#include <assert.h>

#include <libnu/fnv.h>
#include <libnu/gen/_toupper.h>

void test_fnv_lookup() {
	uint32_t hash = 0;

	hash = fnv_hash(G, sizeof(G) / sizeof(*G), 0x0061);
	assert(fnv_lookup(VALUES, 0x0061, hash) != 0);

	hash = fnv_hash(G, sizeof(G) / sizeof(*G), 0x0062);
	assert(fnv_lookup(VALUES, 0x0062, hash) != 0);

	hash = fnv_hash(G, sizeof(G) / sizeof(*G), 0x0063);
	assert(fnv_lookup(VALUES, 0x0063, hash) != 0);

	hash = fnv_hash(G, sizeof(G) / sizeof(*G), 0x0064);
	assert(fnv_lookup(VALUES, 0x0064, hash) != 0);

	hash = fnv_hash(G, sizeof(G) / sizeof(*G), 0x0065);
	assert(fnv_lookup(VALUES, 0x0065, hash) != 0);
}


