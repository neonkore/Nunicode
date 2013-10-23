#include <stdio.h>

#include <libnu/libnu.h>

typedef void (*testcase)(void);

void test_utf8_decoding();
void test_utf8_bom();
void test_utf8_revread();
void test_utf8_encoding();
void test_cesu8_decoding();
void test_cesu8_revread();
void test_cesu8_encoding();
void test_utf16le_decoding();
void test_utf16le_revread();
void test_utf16le_encoding();
void test_utf16be_decoding();
void test_utf16be_revread();
void test_utf16be_encoding();
void test_utf16_read_bom();
void test_utf16_read_invalid_bom();
void test_utf16_write_bom();
void test_utf32le_decoding();
void test_utf32le_revread();
void test_utf32le_encoding();
void test_utf32be_decoding();
void test_utf32be_revread();
void test_utf32be_encoding();
void test_utf32_read_bom();
void test_utf32_read_invalid_bom();
void test_utf32_write_bom();
void test_strings_len();
void test_strings_nlen();
void test_strings_strlen();
void test_strings_strnlen();
void test_strings_bytelen();
void test_strings_bytenlen();
void test_strings_strchr();
void test_strings_strnchr();
void test_strings_strstr();
void test_strings_strnstr();
void test_strings_strrchr();
void test_strings_strrnchr();
void test_strings_readstr();
void test_strings_readnstr();
void test_strings_writestr();
void test_strings_writenstr();
void test_strings_transformstr();
void test_strings_transformnstr();
void test_validation_utf8();
void test_validation_cesu8();
void test_validation_utf16le();
void test_validation_utf16be();
void test_validation_utf32();
void test_fnv_lookup();
void test_udb_lookup();
void test_ducet();
void test_toupper();
void test_tolower();
void test_strcoll();
void test_strncoll();
void test_strcasecoll();
void test_strcasencoll();
void test_strcmp();
void test_strncmp();
void test_strcasecmp();
void test_strcasencmp();

testcase cases[] = {

	test_utf8_decoding,
	test_utf8_bom,
	test_utf8_revread,
	test_utf8_encoding,

	test_cesu8_decoding,
	test_cesu8_revread,
	test_cesu8_encoding,

	test_utf16le_decoding,
	test_utf16le_revread,
	test_utf16le_encoding,
	test_utf16be_decoding,
	test_utf16be_revread,

	test_utf16be_encoding,
	test_utf16_read_bom,
	test_utf16_read_invalid_bom,
	test_utf16_write_bom,

	test_utf32le_decoding,
	test_utf32le_revread,
	test_utf32le_encoding,

	test_utf32be_decoding,
	test_utf32be_revread,
	test_utf32be_encoding,

	test_utf32_read_bom,
	test_utf32_read_invalid_bom,
	test_utf32_write_bom,

	test_strings_len,
	test_strings_strlen,
	test_strings_bytelen,
	test_strings_strchr,
	test_strings_strrchr,

	test_strings_nlen,	
	test_strings_strnlen,
	test_strings_bytenlen,
	test_strings_strnchr,
	test_strings_strrnchr,
	test_strings_strstr,
	test_strings_strnstr,
	
	test_strings_readstr,
	test_strings_writestr,
	test_strings_transformstr,

	test_strings_readnstr,
	test_strings_writenstr,
	test_strings_transformnstr,
	
	test_validation_utf8,
	test_validation_cesu8,
	test_validation_utf16le,
	test_validation_utf16be,
	test_validation_utf32,

	test_fnv_lookup,
	test_udb_lookup,
	test_ducet,
	test_toupper,
	test_tolower,

	test_strcoll,
	test_strncoll,
	test_strcasecoll,
	test_strcasencoll,

	test_strcmp,
	test_strncmp,
	test_strcasecmp,
	test_strcasencmp,
};

int main() {
	size_t i = 0; for (; i < sizeof(cases) / sizeof(*cases); ++i) {
		cases[i]();
		printf(".");
	}

	printf("\nOK - %d tests\n", i);
	return 0;
}
