#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_version_check() {
	assert(strcmp(nu_version(), NU_VERSION) == 0);

#undef NU_VERSION
#define NU_VERSION "this isnt supposed to be version string"

	assert(strcmp(nu_version(), NU_VERSION) != 0);
}
