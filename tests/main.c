#include <stdio.h>

#include <libnu/libnu.h>

typedef void (*testcase)(void);

void test_utf8_decoding();
void test_utf8_encoding();
void test_cesu8_decoding();
void test_cesu8_encoding();
void test_strings_strlen();
void test_strings_strnlen();
void test_strings_bytelen();
void test_strings_bytenlen();
void test_strings_readstr();
void test_strings_readnstr();
void test_strings_writestr();
void test_strings_writenstr();
void test_strings_transformstr();
void test_strings_transformnstr();

testcase cases[] = {

#ifdef NU_WITH_UTF8_READER
	test_utf8_decoding,
#endif

#ifdef NU_WITH_UTF8_WRITER
	test_utf8_encoding,
#endif

#ifdef NU_WITH_CESU8_READER
	test_cesu8_decoding,
#endif

#ifdef NU_WITH_CESU8_WRITER
	test_cesu8_encoding,
#endif

#ifdef NU_WITH_ZERO_STRINGS
	test_strings_strlen,
	test_strings_bytelen,
	test_strings_readstr,
	test_strings_writestr,
	test_strings_transformstr,
#endif

#ifdef NU_WITH_N_STRINGS
	test_strings_strnlen,
	test_strings_bytenlen,
	test_strings_readnstr,
	test_strings_writenstr,
	test_strings_transformnstr,
#endif
};

int main() {
	int i = 0; for (; i < sizeof(cases) / sizeof(*cases); ++i) {
		cases[i]();
		printf(".");
	}

	printf(" OK - %d tests\n", i);
	return 0;
}
