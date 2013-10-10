#include <assert.h>
#include <string.h>

#include <libnu.h>

void test_utf8_strlen() {
	assert(nu_utf8_strlen("g", 1) == 1);
	assert(nu_utf8_strlen("gh", 2) == 2);
	assert(nu_utf8_strlen("п", 2) == 1);
	assert(nu_utf8_strlen("пр", 4) == 2);
	assert(nu_utf8_strlen("€", 3) == 1);
	assert(nu_utf8_strlen("𠜱", 4) == 1);
}

void test_utf8_decoding() {
	uint32_t u = 0;
	
	assert(nu_utf8_read("", &u) && u == 0);
	assert(nu_utf8_read("g", &u) && u == 0x0067);
	assert(nu_utf8_read("п", &u) && u == 0x043F);
	assert(nu_utf8_read("€", &u) && u == 0x20AC);
	assert(nu_utf8_read("𠜱", &u) && u == 0x020731);
}

void test_utf8_encoding() {
	char p[32] = { 0 };
	
	assert(nu_utf8_write(0, p) && strcmp(p, "") == 0);
	assert(nu_utf8_write(0x0067, p) && strcmp(p, "g") == 0);
	assert(nu_utf8_write(0x043F, p) && strcmp(p, "п") == 0);
	assert(nu_utf8_write(0x20AC, p) && strcmp(p, "€") == 0);
	assert(nu_utf8_write(0x020731, p) && strcmp(p, "𠜱") == 0);
}

void test_utf8_read_write() {
	const char test[] = "привет ромашки";

	uint32_t u[sizeof(test)] = { 0 }; /* should be enough for test */

	const char *cp = test;
	ssize_t test_len = nu_utf8_strlen(test, strlen(test));

	for (int i = 0; i < test_len; ++i) {
		cp = nu_utf8_read(cp, u + i);
	}

	assert(cp == test + strlen(test)); /* whole string consumed */
	assert(u[test_len - 1] != 0); /* last character */
	assert(u[test_len] == 0); /* after last character */

	char output[sizeof(test)] = { 0 };
	char *p = output;

	ssize_t i = 0; for (; i < test_len; ++i) {
		p = nu_utf8_write(u[i], p);
	}

	assert(i == test_len); /* whole string consumed */
	assert(output[sizeof(test) - 2] != 0); /* last character */
	assert(output[sizeof(test) - 1] == 0); /* after last character */

	assert(strlen(output) == strlen(test));
	assert(strcmp(output, test) == 0);
}
