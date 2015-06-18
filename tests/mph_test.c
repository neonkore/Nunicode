#include <assert.h>

#include <libnu/mph.h>

extern const int16_t NU_TOUPPER_G[];
extern const size_t NU_TOUPPER_G_SIZE;
extern const uint32_t NU_TOUPPER_VALUES_C[];
extern const uint16_t NU_TOUPPER_VALUES_I[];

void test_mph_lookup() {
	uint32_t hash = 0;

	hash = nu_mph_hash(NU_TOUPPER_G, NU_TOUPPER_G_SIZE, 0x0061);
	assert(nu_mph_lookup(NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I, 0x0061, hash) != 0);

	hash = nu_mph_hash(NU_TOUPPER_G, NU_TOUPPER_G_SIZE, 0x0062);
	assert(nu_mph_lookup(NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I, 0x0062, hash) != 0);

	hash = nu_mph_hash(NU_TOUPPER_G, NU_TOUPPER_G_SIZE, 0x0063);
	assert(nu_mph_lookup(NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I, 0x0063, hash) != 0);

	hash = nu_mph_hash(NU_TOUPPER_G, NU_TOUPPER_G_SIZE, 0x0064);
	assert(nu_mph_lookup(NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I, 0x0064, hash) != 0);

	hash = nu_mph_hash(NU_TOUPPER_G, NU_TOUPPER_G_SIZE, 0x0065);
	assert(nu_mph_lookup(NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I, 0x0065, hash) != 0);
}


