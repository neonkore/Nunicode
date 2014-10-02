#include <assert.h>

#include <libnu/libnu.h>

extern const int16_t NU_TOUPPER_G[];
extern const size_t NU_TOUPPER_G_SIZE;
extern const uint32_t NU_TOUPPER_VALUES_C[];
extern const uint16_t NU_TOUPPER_VALUES_I[];
extern const uint8_t NU_TOUPPER_COMBINED[];

void test_udb_lookup() { /* just quick test */
	assert(nu_udb_lookup(0x0061,
		NU_TOUPPER_G, NU_TOUPPER_G_SIZE,
		NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I,
		NU_TOUPPER_COMBINED) != 0);
}
