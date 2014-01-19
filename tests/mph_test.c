#include <assert.h>

#include <libnu/mph.h>
#include <libnu/gen/_toupper.h>

void test_mph_lookup() {
	uint32_t hash = 0;

	hash = mph_hash(G, sizeof(G) / sizeof(*G), 0x0061);
	assert(mph_lookup(VALUES_C, VALUES_I, 0x0061, hash) != 0);

	hash = mph_hash(G, sizeof(G) / sizeof(*G), 0x0062);
	assert(mph_lookup(VALUES_C, VALUES_I, 0x0062, hash) != 0);

	hash = mph_hash(G, sizeof(G) / sizeof(*G), 0x0063);
	assert(mph_lookup(VALUES_C, VALUES_I, 0x0063, hash) != 0);

	hash = mph_hash(G, sizeof(G) / sizeof(*G), 0x0064);
	assert(mph_lookup(VALUES_C, VALUES_I, 0x0064, hash) != 0);

	hash = mph_hash(G, sizeof(G) / sizeof(*G), 0x0065);
	assert(mph_lookup(VALUES_C, VALUES_I, 0x0065, hash) != 0);
}


