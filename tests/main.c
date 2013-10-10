#include <stdio.h>

typedef void (*testcase)(void);

void test_utf8_strlen();
void test_utf8_decoding();
void test_utf8_encoding();
void test_utf8_read_write();
void test_iterators_read();
void test_iterators_write();

testcase cases[] = {
	/* utf-8 */
	test_utf8_strlen,
	test_utf8_decoding,
	test_utf8_encoding,
	test_utf8_read_write,

	/* iterators */
	test_iterators_read,
	test_iterators_write,
};

int main() {
	for (int i = 0; i < sizeof(cases) / sizeof(*cases); ++i) {
		cases[i]();
		printf(".");
	}

	printf("\n");
	return 0;
}
