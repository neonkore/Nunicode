#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

static const unsigned char CESU8[] = {
	0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80 /* 0x010400 */
};

static const unsigned char CESU9[] = {
	0xED, 0xAE, 0x80, 0xED, 0xB0, 0x80 /* 0x0F0000 */
};

void test_cesu8_decoding() {
	uint32_t u = 0;

	assert(nu_cesu8_read("", &u) && u == 0);

	/* skip output */
	assert(nu_cesu8_read("g", 0) && u == 0);
	assert(nu_cesu8_read("п", 0) && u == 0);
	assert(nu_cesu8_read("€", 0) && u == 0);
	assert(nu_cesu8_read((const char *)CESU8, 0) && u == 0);
	assert(nu_cesu8_read((const char *)CESU9, 0) && u == 0);

	/* read output */
	assert(nu_cesu8_read("g", &u) && u == 0x0067);
	assert(nu_cesu8_read("п", &u) && u == 0x043F);
	assert(nu_cesu8_read("€", &u) && u == 0x20AC);
	assert(nu_cesu8_read((const char *)CESU8, &u) && u == 0x010400);
	assert(nu_cesu8_read((const char *)CESU9, &u) && u == 0x0F0000);
}

void test_cesu8_revread() {
	const unsigned char uinput[] = {
		0xD0, 0xBF, /* п */
		0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80,
		0xED, 0xAE, 0x80, 0xED, 0xB0, 0x80
	};
	const char *input = (const char *)(uinput);
	uint32_t u = 0;

	assert(nu_cesu8_revread(&u, input + 14) == input + 8);
	assert(u == 0x0F0000);
	assert(nu_cesu8_revread(&u, input + 8) == input + 2);
	assert(u == 0x010400);
	assert(nu_cesu8_revread(&u, input + 2) == input);
	assert(u == 0x043F);

	/* skip output */
	assert(nu_cesu8_revread(0, input + 14) == input + 8);

	/* this is not supported, but should work anyway */
	assert(nu_cesu8_revread(&u, input + 3) == input + 2);
	assert(u == 0x010400);
	assert(nu_cesu8_revread(&u, input + 6) == input + 2);
	assert(u == 0x010400);
}

void test_cesu8_encoding() {
	char p[32] = { 0 };

	/* skip output */
	assert(nu_cesu8_write(0x0067, 0) && memcmp(p, "", 1) == 0);

	assert(nu_cesu8_write(0, p) && memcmp(p, "", 1) == 0);
	assert(nu_cesu8_write(0x0067, p) && memcmp(p, "g", 1) == 0);
	assert(nu_cesu8_write(0x043F, p) && memcmp(p, "п", 2) == 0);
	assert(nu_cesu8_write(0x20AC, p) && memcmp(p, "€", 2) == 0);
	assert(nu_cesu8_write(0x010400, p) && memcmp(p, (const char *)CESU8, sizeof(CESU8)) == 0);
	assert(nu_cesu8_write(0x0F0000, p) && memcmp(p, (const char *)CESU9, sizeof(CESU9)) == 0);
}
