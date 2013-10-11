#include <stdio.h>

#include <libnu/libnu.h>

typedef void (*testcase)(void);

void test_utf8_decoding();
void test_utf8_encoding();
void test_cesu8_decoding();
void test_cesu8_encoding();
void test_strings_readstr();
void test_strings_writestr();
void test_strings_transformstr();
void test_strings_strlen();
void test_strings_bytelen();

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

#ifdef NU_WITH_STRINGS
	test_strings_strlen,
	test_strings_bytelen,
	test_strings_readstr,
	test_strings_writestr,
	test_strings_transformstr,
#endif
};

int main() {
	for (int i = 0; i < sizeof(cases) / sizeof(*cases); ++i) {
		cases[i]();
		printf(".");
	}

	printf("\n");
	return 0;
}
