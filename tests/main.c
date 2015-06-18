#include <stdio.h>

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
void test_utf16he_decoding();
void test_utf16he_revread();
void test_utf16he_encoding();
void test_utf16_read_bom();
void test_utf16_read_invalid_bom();
void test_utf16_write_bom();
void test_utf32le_decoding();
void test_utf32le_revread();
void test_utf32le_encoding();
void test_utf32be_decoding();
void test_utf32be_revread();
void test_utf32be_encoding();
void test_utf32he_decoding();
void test_utf32he_revread();
void test_utf32he_encoding();
void test_utf32_read_bom();
void test_utf32_read_invalid_bom();
void test_utf32_write_bom();
void test_strlen();
void test_strnlen();
void test_bytelen();
void test_bytenlen();
void test_strbytelen();
void test_readstr();
void test_readnstr();
void test_writestr();
void test_writenstr();
void test_transformstr();
void test_transformnstr();
void test_strtransformlen();
void test_strtransformnlen();
void test__strtransformlen();
void test__strtransformnlen();
void test__strtransformlen_internal_external();
void test_validation_utf8();
void test_validation_utf8_core_spec();
void test_validation_utf8_core_spec_3_7();
void test_validation_cesu8();
void test_validation_utf16be();
void test_validation_utf16he();
void test_validation_utf16le();
void test_validation_utf32();
void test_validation_utf32_corespec();
void test_validation_utf32_corespec_10ffff();
void test_mph_lookup();
void test_udb_lookup();
void test_ducet();
void test_ducet_known_unknown();
void test_ducet_collisions();
void test_ducet_contractions();
void test_ducet_consistency();
void test_toupper();
void test_tolower();
void test_tofold();
void test__toupper__tofold();
void test__tolower();
void test_strchr();
void test_strnchr();
void test_strcasechr();
void test_strcasenchr();
void test_strrchr();
void test_strrnchr();
void test_strrcasechr();
void test_strrcasenchr();
void test_strcoll();
void test_strncoll();
void test_strcasecoll();
void test_strcasencoll();
void test_strstr();
void test_strnstr();
void test_strcasestr();
void test_strcasenstr();
void test_crossencoding_strcoll();
void test_strcoll_contractions();
void test_compoundcmp_strcoll();
void test_compoundcmp_strcoll_outskirts();
void test_compoundcmp_strncoll();
void test_special_casing();
void test_folding_priority();
void test_ducet_max_weight_ordering();
void test_version_check();

/* automatically generated tests */
void test__nu_ducet_weight_switch();
void test__nu_ducet_weight_switch_rollbacks();
void test__nu_ducet_weight_switch_unknowns();
void test_nu_ducet_weights();

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

	test_utf16he_decoding,
	test_utf16he_revread,
	test_utf16he_encoding,

	test_utf16_read_bom,
	test_utf16_read_invalid_bom,
	test_utf16_write_bom,

	test_utf32le_decoding,
	test_utf32le_revread,
	test_utf32le_encoding,

	test_utf32be_decoding,
	test_utf32be_revread,
	test_utf32be_encoding,

	test_utf32he_decoding,
	test_utf32he_revread,
	test_utf32he_encoding,

	test_utf32_read_bom,
	test_utf32_read_invalid_bom,
	test_utf32_write_bom,

	test_strlen,
	test_bytelen,
	test_strnlen,
	test_bytenlen,
	test_strbytelen,

	test_readstr,
	test_writestr,
	test_transformstr,
	test_strtransformlen,
	test_readnstr,
	test_writenstr,
	test_transformnstr,
	test_strtransformnlen,
	test__strtransformlen,
	test__strtransformnlen,
	test__strtransformlen_internal_external,

	test_validation_utf8,
	test_validation_utf8_core_spec,
	test_validation_utf8_core_spec_3_7,
	test_validation_cesu8,
	test_validation_utf16be,
	test_validation_utf16he,
	test_validation_utf16le,
	test_validation_utf32,
	test_validation_utf32_corespec,
	test_validation_utf32_corespec_10ffff,

	test_mph_lookup,
	test_udb_lookup,
	test_ducet,
	test_ducet_known_unknown,
	test_ducet_collisions,
	test_ducet_contractions,
#ifndef NU_DISABLE_CONTRACTIONS
	test_ducet_consistency,
#endif
	test_toupper,
	test_tolower,
	test_tofold,
	test__toupper__tofold,
	test__tolower,

	test_strchr,
	test_strnchr,
	test_strcasechr,
	test_strcasenchr,
	test_strrchr,
	test_strrnchr,
	test_strrcasechr,
	test_strrcasenchr,

	test_strcoll,
	test_strncoll,
	test_strcasecoll,
	test_strcasencoll,

	test_strstr,
	test_strnstr,
	test_strcasestr,
	test_strcasenstr,

	test_crossencoding_strcoll,

#ifndef NU_DISABLE_CONTRACTIONS
	test_strcoll_contractions,
	test_compoundcmp_strcoll,
	test_compoundcmp_strcoll_outskirts,
	test_compoundcmp_strncoll,
#endif

	test_special_casing,
	test_folding_priority,
	test_ducet_max_weight_ordering,

	test_version_check,

	/* automatically generated tests */
#ifndef NU_DISABLE_CONTRACTIONS
	test__nu_ducet_weight_switch,
	test__nu_ducet_weight_switch_rollbacks,
	test__nu_ducet_weight_switch_unknowns,
#endif
	test_nu_ducet_weights,
};

int main() {
	unsigned i = 0; for (; i < sizeof(cases) / sizeof(*cases); ++i) {
		cases[i]();
		printf(".");
	}

	printf("\nOK - %u tests\n", i);
	return 0;
}
