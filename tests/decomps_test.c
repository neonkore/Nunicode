#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <libnu/libnu.h>

void test_ducet() {
	nu_read_iterator_t read = 0;

	const char *nothing_decomposed = nu_decompose(0x0061, &read);
	assert(nothing_decomposed == 0);
	assert(read == 0);

	const char *yo_decomposed = nu_decompose(0x0451, &read);
	assert(memcmp(yo_decomposed, "\xD0\xB5\xCC\x88", 5) == 0);
	assert(read != 0);

	const char *nobreak_decomposed = nu_decompose(0x00A0, &read);
	assert(memcmp(nobreak_decomposed, "\x20", 2) == 0);
	assert(read != 0);
}
