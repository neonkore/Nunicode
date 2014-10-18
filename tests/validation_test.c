#include <assert.h>

#include <libnu/libnu.h>

/* HE test will pass on little-endian */

void test_validation_utf8() {
	const char input0_ok[] = "при";
	const char input1[] = "при\xA0\xC2"; /* misplaced lead and trail */
	const char input2[] = "при\xC2"; /* start of 2-byte sequence */
	const char input2_ok[] = "при\xC2\x81";
	const char input3[] = "при\xE1"; /* start of 3-byte sequence */
	const char input4[] = "при\xE1\x81"; /* start of 3-byte sequence + 1 continuation byte */
	const char input4_ok[] = "при\xE1\x81\x81";
	const char input5[] = "при\xF1"; /* start of 4-byte sequence */
	const char input6[] = "при\xF1\x81"; /* start of 4-byte sequence + 1 continuation byte */
	const char input7[] = "при\xF1\x81\x81"; /* start of 4-byte sequence + 2 continuation bytes */
	const char input7_ok[] = "при\xF1\x81\x81\x81";
	const char input8[] = "\xF8\x00\x00\x00\x00"; /* 5-byte sequence */
	const char input9[] = "\xFC\x00\x00\x00\x00\x0"; /* 6-byte sequence */

	assert(nu_validate(input0_ok, sizeof(input0_ok), nu_utf8_validread) == 0);
	assert(nu_validate(input2_ok, sizeof(input2_ok), nu_utf8_validread) == 0);
	assert(nu_validate(input4_ok, sizeof(input4_ok), nu_utf8_validread) == 0);
	assert(nu_validate(input7_ok, sizeof(input7_ok), nu_utf8_validread) == 0);

	/* valid input, but check limit is in the middle of multi-byte sequence */
	assert(nu_validate(input7_ok, 8, nu_utf8_validread) == input7_ok + 6);

	assert(nu_validate(input1, sizeof(input1), nu_utf8_validread) == input1 + 6);
	assert(nu_validate(input2, sizeof(input2), nu_utf8_validread) == input2 + 6);
	assert(nu_validate(input3, sizeof(input3), nu_utf8_validread) == input3 + 6);
	assert(nu_validate(input4, sizeof(input4), nu_utf8_validread) == input4 + 6);
	assert(nu_validate(input5, sizeof(input5), nu_utf8_validread) == input5 + 6);
	assert(nu_validate(input6, sizeof(input6), nu_utf8_validread) == input6 + 6);
	assert(nu_validate(input7, sizeof(input7), nu_utf8_validread) == input7 + 6);
	assert(nu_validate(input8, sizeof(input8), nu_utf8_validread) == input8);
	assert(nu_validate(input9, sizeof(input9), nu_utf8_validread) == input9);

	/* string len is longer than max_len, -2 -> remove \0, remove last char */
	assert(nu_validate(input0_ok, 1, nu_utf8_validread) != 0);

	/* test invalid following bytes */
	assert(nu_validate("\xE1\x81\xC1", 3, nu_utf8_validread) != 0);
	assert(nu_validate("\xE1\xC1\x81", 3, nu_utf8_validread) != 0);
	assert(nu_validate("\xE1\x81\x81", 3, nu_utf8_validread) == 0);
	assert(nu_validate("\xF1\xC1\x81\x81", 4, nu_utf8_validread) != 0);
	assert(nu_validate("\xF1\x81\xC1\x81", 4, nu_utf8_validread) != 0);
	assert(nu_validate("\xF1\x81\x81\xC1", 4, nu_utf8_validread) != 0);
	assert(nu_validate("\xF1\x81\x81\x81", 4, nu_utf8_validread) == 0);
}

void test_validation_utf8_core_spec() {
	const char input1[] = "\xC0\xAF";
	const char input2[] = "\xE0\x9F\x80";
	const char input3_ok[] = "\xF4\x80\x83\x92";

	assert(nu_validate(input1, sizeof(input1), nu_utf8_validread) != 0);
	assert(nu_validate(input2, sizeof(input2), nu_utf8_validread) != 0);
	assert(nu_validate(input3_ok, sizeof(input3_ok), nu_utf8_validread) == 0);
}

void test_validation_cesu8() {
	const unsigned char input0_ok[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80 };
	const unsigned char input0_also_ok[] = "ч";
	const unsigned char input1[] = { 0xED, 0xA0, 0x81, 0xED, 0xA0 }; /* one byte short */
	const unsigned char input2[] = { 0xED, 0xA0, 0x81, 0xED }; /* two bytes short */
	const unsigned char input3[] = { 0xED, 0xA0, 0x81 }; /* no trail */
	const unsigned char input4[] = { 0xED, 0xA0 }; /* one byte short lead */
	const unsigned char input5[] = { 0xED, 0xA0, 0x81, 0xEE, 0xB0, 0x80 }; /* invalid trail */
	const unsigned char input6[] = { 0xED, 0xA0, 0x81, 0xED, 0xA0, 0x80 }; /* invalid trail */
	const unsigned char input7_ok[] = { 0xED, 0x80, 0x81 }; /* invalid lead -> valid sequence */

	assert(nu_validate((const char *)(input0_ok), sizeof(input0_ok), nu_cesu8_validread) == 0);
	assert(nu_validate((const char *)(input0_also_ok), sizeof(input0_also_ok), nu_cesu8_validread) == 0);
	assert(nu_validate((const char *)(input1), sizeof(input1), nu_cesu8_validread) == (const char *)(input1));
	assert(nu_validate((const char *)(input2), sizeof(input2), nu_cesu8_validread) == (const char *)(input2));
	assert(nu_validate((const char *)(input3), sizeof(input3), nu_cesu8_validread) == (const char *)(input3));
	assert(nu_validate((const char *)(input4), sizeof(input4), nu_cesu8_validread) == (const char *)(input4));
	assert(nu_validate((const char *)(input5), sizeof(input5), nu_cesu8_validread) == (const char *)(input5));
	assert(nu_validate((const char *)(input6), sizeof(input6), nu_cesu8_validread) == (const char *)(input6));
	assert(nu_validate((const char *)(input7_ok), sizeof(input7_ok), nu_cesu8_validread) == 0);
}

void test_validation_utf16le() {
	const unsigned char input0_ok[] = { 0x41, 0xD8, 0x00, 0xDC };
	const unsigned char input0_also_ok[] = { 0x7A, 0x00 };
	const unsigned char input1[] = { 0x41, 0xD8 }; /* no trail */
	const unsigned char input2[] = { 0x00, 0xDC, 0x41, 0xD8 }; /* misplaced lead and trail */
	const unsigned char input3[] = { 0x41, 0xD8, 0x00, 0xEC }; /* invalid surrogate */

	assert(nu_validate((const char *)(input0_ok), sizeof(input0_ok), nu_utf16le_validread) == 0);
	assert(nu_validate((const char *)(input0_ok), 1, nu_utf16le_validread) == (const char *)(input0_ok)); /* short read */
	assert(nu_validate((const char *)(input0_also_ok), sizeof(input0_also_ok), nu_utf16le_validread) == 0);
	assert(nu_validate((const char *)(input1), sizeof(input1), nu_utf16le_validread) == (const char *)(input1));
	assert(nu_validate((const char *)(input2), sizeof(input2), nu_utf16le_validread) == (const char *)(input2));
	assert(nu_validate((const char *)(input3), sizeof(input3), nu_utf16le_validread) == (const char *)(input3));
}

void test_validation_utf16be() {
	const unsigned char input0_ok[] = { 0xD8, 0x41, 0xDC, 0x00 };
	const unsigned char input0_also_ok[] = { 0x00, 0x7A };
	const unsigned char input1[] = { 0xD8, 0x41, }; /* no trail */
	const unsigned char input2[] = { 0xDC, 0x00, 0xD8, 0x41 }; /* misplaced lead and trail */
	const unsigned char input3[] = { 0xD8, 0x41, 0xEC, 0x00 }; /* invalid surrogate */
	const unsigned char input4[] = { 0xD8, 0x41, 0xFF, 0x00 }; /* invalid surrogate */

	assert(nu_validate((const char *)(input0_ok), sizeof(input0_ok), nu_utf16be_validread) == 0);
	assert(nu_validate((const char *)(input0_ok), 1, nu_utf16be_validread) == (const char *)(input0_ok)); /* short read */
	assert(nu_validate((const char *)(input0_also_ok), sizeof(input0_also_ok), nu_utf16be_validread) == 0);
	assert(nu_validate((const char *)(input1), sizeof(input1), nu_utf16be_validread) == (const char *)(input1));
	assert(nu_validate((const char *)(input2), sizeof(input2), nu_utf16be_validread) == (const char *)(input2));
	assert(nu_validate((const char *)(input3), sizeof(input3), nu_utf16be_validread) == (const char *)(input3));
	assert(nu_validate((const char *)(input4), sizeof(input4), nu_utf16be_validread) == (const char *)(input4));
}

void test_validation_utf16he() {
	const uint16_t input0_ok[] = { 0xD841, 0xDC00 };
	const unsigned char input0_also_ok[] = { 0x00, 0x00 };
	const uint16_t input1[] = { 0xD841 }; /* no trail */
	const uint16_t input2[] = { 0xDC00, 0xD841 }; /* misplaced lead and trail */
	const uint16_t input3[] = { 0xD841, 0xEC00 }; /* invalid surrogate */

	assert(nu_validate((const char *)(input0_ok), sizeof(input0_ok), nu_utf16he_validread) == 0);
	assert(nu_validate((const char *)(input0_ok), 1, nu_utf16he_validread) == (const char *)(input0_ok)); /* short read */
	assert(nu_validate((const char *)(input0_also_ok), sizeof(input0_also_ok), nu_utf16he_validread) == 0);
	assert(nu_validate((const char *)(input1), sizeof(input1), nu_utf16he_validread) == (const char *)(input1));
	assert(nu_validate((const char *)(input2), sizeof(input2), nu_utf16he_validread) == (const char *)(input2));
	assert(nu_validate((const char *)(input3), sizeof(input3), nu_utf16he_validread) == (const char *)(input3));
}

void test_validation_utf32() {
	const char input0_ok[] = { 0x00, 0x00, 0x00, 0x00 };
	const char input1[] = { 0x00 };
	const char input2[] = { 0x00, 0x00 };
	const char input3[] = { 0x00, 0x00, 0x00 };

	assert(nu_validate(input0_ok, sizeof(input0_ok), nu_utf32le_validread) == 0);
	assert(nu_validate(input1, sizeof(input1), nu_utf32le_validread) == input1);
	assert(nu_validate(input2, sizeof(input2), nu_utf32le_validread) == input2);
	assert(nu_validate(input3, sizeof(input3), nu_utf32le_validread) == input3);

	assert(nu_validate(input0_ok, sizeof(input0_ok), nu_utf32be_validread) == 0);
	assert(nu_validate(input1, sizeof(input1), nu_utf32be_validread) == input1);
	assert(nu_validate(input2, sizeof(input2), nu_utf32be_validread) == input2);
	assert(nu_validate(input3, sizeof(input3), nu_utf32be_validread) == input3);

	assert(nu_validate(input0_ok, sizeof(input0_ok), nu_utf32he_validread) == 0);
	assert(nu_validate(input1, sizeof(input1), nu_utf32he_validread) == input1);
	assert(nu_validate(input2, sizeof(input2), nu_utf32he_validread) == input2);
	assert(nu_validate(input3, sizeof(input3), nu_utf32he_validread) == input3);
}

void test_validation_utf32_corespec() {
	const unsigned char input1_le_ok[] = { 0xFF, 0xD7, 0x00, 0x00 };
	const unsigned char input1_be_ok[] = { 0x00, 0x00, 0xD7, 0xFF };
	const unsigned char input1_he_ok[] = { 0xFF, 0xD7, 0x00, 0x00 };
	const unsigned char input2_le_ok[] = { 0x00, 0xE0, 0x00, 0x00 };
	const unsigned char input2_be_ok[] = { 0x00, 0x00, 0xE0, 0x00 };
	const unsigned char input2_he_ok[] = { 0x00, 0xE0, 0x00, 0x00 };
	const unsigned char input3_le[] = { 0x00, 0xD8, 0x00, 0x00 };
	const unsigned char input3_be[] = { 0x00, 0x00, 0xD8, 0x00 };
	const unsigned char input3_he[] = { 0x00, 0xD8, 0x00, 0x00 };
	const unsigned char input4_le[] = { 0xFF, 0xDF, 0x00, 0x00 };
	const unsigned char input4_be[] = { 0x00, 0x00, 0xDF, 0xFF };
	const unsigned char input4_he[] = { 0xFF, 0xDF, 0x00, 0x00 };

	/* borders */
	assert(nu_validate((const char *)(input1_le_ok), sizeof(input1_le_ok), nu_utf32le_validread) == 0);
	assert(nu_validate((const char *)(input1_be_ok), sizeof(input1_be_ok), nu_utf32be_validread) == 0);
	assert(nu_validate((const char *)(input1_he_ok), sizeof(input1_he_ok), nu_utf32he_validread) == 0);

	assert(nu_validate((const char *)(input2_le_ok), sizeof(input2_le_ok), nu_utf32le_validread) == 0);
	assert(nu_validate((const char *)(input2_be_ok), sizeof(input2_be_ok), nu_utf32be_validread) == 0);
	assert(nu_validate((const char *)(input2_he_ok), sizeof(input2_he_ok), nu_utf32he_validread) == 0);

	/* invalid range */
	assert(nu_validate((const char *)(input3_le), sizeof(input3_le), nu_utf32le_validread) == (const char *)(input3_le));
	assert(nu_validate((const char *)(input3_be), sizeof(input3_be), nu_utf32be_validread) == (const char *)(input3_be));
	assert(nu_validate((const char *)(input3_he), sizeof(input3_he), nu_utf32he_validread) == (const char *)(input3_he));

	assert(nu_validate((const char *)(input4_le), sizeof(input4_le), nu_utf32le_validread) == (const char *)(input4_le));
	assert(nu_validate((const char *)(input4_be), sizeof(input4_be), nu_utf32be_validread) == (const char *)(input4_be));
	assert(nu_validate((const char *)(input4_he), sizeof(input4_he), nu_utf32he_validread) == (const char *)(input4_he));
}
