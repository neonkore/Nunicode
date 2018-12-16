/* Automatically generated file (contractions-toc), 1544978508
 *
 * Tag          : _nu_ducet
 * Contractions : 820
 */

#include <stdint.h>

#include "udb.h"

const size_t _NU_DUCET_CONTRACTIONS = 820; /* contractions included in switch */
const size_t _NU_DUCET_CODEPOINTS = 22287; /* complementary codepoints number */

#define state_00AAB9 -838
#define state_000438 -826
#define state_0019B5 -749
#define state_001B09 -745
#define state_0019B7 -744
#define state_0019BA -737
#define state_00006C -712
#define state_0019B6 -686
#define state_00064A -684
#define state_000648 -674
#define state_00AABB -667
#define state_000418 -500
#define state_001B07 -482
#define state_001B05 -454
#define state_00AABC -394
#define state_000627 -391
#define state_000B92 -381
#define state_00004C -343
#define state_001B0D -252
#define state_001025 -217
#define state_000E40 -198
#define state_000E41 -197
#define state_000E42 -196
#define state_000E43 -195
#define state_000E44 -194
#define state_00AAB5 -171
#define state_00AAB6 -161
#define state_000EC1 -114
#define state_000EC0 -113
#define state_000EC3 -112
#define state_000EC2 -111
#define state_000EC4 -109
#define state_001B0B -59
#define state_001B11 -24

const int16_t _NU_DUCET_ROOTS_G[] = {
	0, -34, 0, 0, -33, -32, -31, -30, -29, -28, 2, -26, 
	-15, 0, 0, 3, 0, 0, -14, -13, -12, 8, 1, 8, 
	-10, 0, -7, -6, 5, 20, 4, -4, -2, 0, };

const size_t _NU_DUCET_ROOTS_G_SIZE = sizeof(_NU_DUCET_ROOTS_G) / sizeof(*_NU_DUCET_ROOTS_G);

/* codepoints */
const uint32_t _NU_DUCET_ROOTS_VALUES_C[] = {
	0x00004C, 0x001B0D, 0x000648, 0x000EC0, 0x00064A, 0x000E44, 0x001B0B, 0x000EC1, 
	0x000EC3, 0x001B05, 0x000E41, 0x000E43, 0x00006C, 0x000627, 0x0019B5, 0x001025, 
	0x001B07, 0x00AAB9, 0x000E40, 0x0019B7, 0x000E42, 0x00AABC, 0x001B09, 0x0019BA, 
	0x000EC2, 0x0019B6, 0x000B92, 0x000418, 0x00AABB, 0x000438, 0x00AAB5, 0x00AAB6, 
	0x001B11, 0x000EC4, };

/* indexes */
const uint16_t _NU_DUCET_ROOTS_VALUES_I[] = {
	0x0157, 0x00FC, 0x02A2, 0x0071, 0x02AC, 0x00C2, 0x003B, 0x0072, 0x0070, 0x01C6, 
	0x00C5, 0x00C3, 0x02C8, 0x0187, 0x02ED, 0x00D9, 0x01E2, 0x0346, 0x00C6, 0x02E8, 
	0x00C4, 0x018A, 0x02E9, 0x02E1, 0x006F, 0x02AE, 0x017D, 0x01F4, 0x029B, 0x033A, 
	0x00AB, 0x00A1, 0x0018, 0x006D, };

/* MPH lookup for root codepoints + binary search on balanced tree
 * for intermediate states */
int32_t _nu_ducet_weight_switch(uint32_t u, int32_t *w, void *context) {
	(void)(context);

	if (w == 0) { /*  first entry, root states */
		uint32_t state = nu_udb_lookup_value(u, _NU_DUCET_ROOTS_G, _NU_DUCET_ROOTS_G_SIZE,
			_NU_DUCET_ROOTS_VALUES_C, _NU_DUCET_ROOTS_VALUES_I);

		if (state != 0) {
			return -state; /* VALUES_I store negated (positive) states */
		}
	}

	if (w != 0) { /* re-entry, intermediate states */
		int32_t weight = *w;
		*w = 0;

		if (weight == state_00004C) {
			switch (u) {
			case 0x000387: return 0x000B8F; 
			case 0x0000B7: return 0x000B8F; 
			}

			*w = 1;
			return 0x000B86;
		}
		else if (weight < state_00004C) {
			if (weight == state_00064A) {
				switch (u) {
				case 0x000654: return 0x0013DF; 
				}

				*w = 1;
				return 0x001752;
			}
			else if (weight < state_00064A) {
				if (weight == state_0019B7) {
					switch (u) {
					case 0x0019A2: return 0x002716; 
					case 0x001999: return 0x0026E9; 
					case 0x001981: return 0x002671; 
					case 0x00198E: return 0x0026B2; 
					case 0x001988: return 0x002694; 
					case 0x001994: return 0x0026D0; 
					case 0x0019A6: return 0x00272A; 
					case 0x00198A: return 0x00269E; 
					case 0x001984: return 0x002680; 
					case 0x00199D: return 0x0026FD; 
					case 0x001991: return 0x0026C1; 
					case 0x0019A3: return 0x00271B; 
					case 0x001980: return 0x00266C; 
					case 0x00198D: return 0x0026AD; 
					case 0x001995: return 0x0026D5; 
					case 0x0019A7: return 0x00272F; 
					case 0x00199A: return 0x0026EE; 
					case 0x0019AA: return 0x00273E; 
					case 0x00199E: return 0x002702; 
					case 0x001992: return 0x0026C6; 
					case 0x001987: return 0x00268F; 
					case 0x001996: return 0x0026DA; 
					case 0x0019A0: return 0x00270C; 
					case 0x00199B: return 0x0026F3; 
					case 0x001983: return 0x00267B; 
					case 0x0019AB: return 0x002743; 
					case 0x0019A4: return 0x002720; 
					case 0x00199F: return 0x002707; 
					case 0x001993: return 0x0026CB; 
					case 0x00198C: return 0x0026A8; 
					case 0x001986: return 0x00268A; 
					case 0x0019A8: return 0x002734; 
					case 0x001997: return 0x0026DF; 
					case 0x0019A1: return 0x002711; 
					case 0x00199C: return 0x0026F8; 
					case 0x001998: return 0x0026E4; 
					case 0x001982: return 0x002676; 
					case 0x00198F: return 0x0026B7; 
					case 0x001989: return 0x002699; 
					case 0x0019A5: return 0x002725; 
					case 0x00198B: return 0x0026A3; 
					case 0x001985: return 0x002685; 
					case 0x0019A9: return 0x002739; 
					case 0x001990: return 0x0026BC; 
					}

					*w = 1;
					return 0x00274C;
				}
				else if (weight < state_0019B7) {
					if (weight == state_0019B5) {
						switch (u) {
						case 0x0019A8: return 0x002732; 
						case 0x00199F: return 0x002705; 
						case 0x001993: return 0x0026C9; 
						case 0x0019AA: return 0x00273C; 
						case 0x0019A7: return 0x00272D; 
						case 0x001982: return 0x002674; 
						case 0x00198F: return 0x0026B5; 
						case 0x001997: return 0x0026DD; 
						case 0x00199C: return 0x0026F6; 
						case 0x0019A0: return 0x00270A; 
						case 0x00198B: return 0x0026A1; 
						case 0x0019A9: return 0x002737; 
						case 0x001990: return 0x0026BA; 
						case 0x0019A4: return 0x00271E; 
						case 0x001985: return 0x002683; 
						case 0x001994: return 0x0026CE; 
						case 0x0019AB: return 0x002741; 
						case 0x001981: return 0x00266F; 
						case 0x0019A1: return 0x00270F; 
						case 0x00198E: return 0x0026B0; 
						case 0x001998: return 0x0026E2; 
						case 0x00199D: return 0x0026FB; 
						case 0x001991: return 0x0026BF; 
						case 0x0019A5: return 0x002723; 
						case 0x00198A: return 0x00269C; 
						case 0x001984: return 0x00267E; 
						case 0x001995: return 0x0026D3; 
						case 0x001989: return 0x002697; 
						case 0x00199A: return 0x0026EC; 
						case 0x001980: return 0x00266A; 
						case 0x00198D: return 0x0026AB; 
						case 0x001999: return 0x0026E7; 
						case 0x00199E: return 0x002700; 
						case 0x0019A2: return 0x002714; 
						case 0x001987: return 0x00268D; 
						case 0x001992: return 0x0026C4; 
						case 0x001988: return 0x002692; 
						case 0x0019A6: return 0x002728; 
						case 0x001983: return 0x002679; 
						case 0x001996: return 0x0026D8; 
						case 0x00199B: return 0x0026F1; 
						case 0x0019A3: return 0x002719; 
						case 0x00198C: return 0x0026A6; 
						case 0x001986: return 0x002688; 
						}

						*w = 1;
						return 0x00274A;
					}
					else if (weight < state_0019B5) {
						if (weight == state_000438) {
							switch (u) {
							case 0x000306: return 0x0010C4; 
							}

							*w = 1;
							return 0x0010B4;
						}
						else if (weight < state_000438) {
							if (weight == state_00AAB9) {
								switch (u) {
								case 0x00AA92: return 0x0022AE; 
								case 0x00AAA5: return 0x002320; 
								case 0x00AAAC: return 0x00234A; 
								case 0x00AA8F: return 0x00229C; 
								case 0x00AA82: return 0x00224E; 
								case 0x00AA9C: return 0x0022EA; 
								case 0x00AAA1: return 0x002308; 
								case 0x00AA97: return 0x0022CC; 
								case 0x00AAAD: return 0x002350; 
								case 0x00AA86: return 0x002266; 
								case 0x00AA93: return 0x0022B4; 
								case 0x00AA9D: return 0x0022F0; 
								case 0x00AA8A: return 0x00227E; 
								case 0x00AAA6: return 0x002326; 
								case 0x00AA94: return 0x0022BA; 
								case 0x00AA8E: return 0x002296; 
								case 0x00AAAE: return 0x002356; 
								case 0x00AA81: return 0x002248; 
								case 0x00AAA2: return 0x00230E; 
								case 0x00AA90: return 0x0022A2; 
								case 0x00AA9E: return 0x0022F6; 
								case 0x00AAAA: return 0x00233E; 
								case 0x00AA85: return 0x002260; 
								case 0x00AA9A: return 0x0022DE; 
								case 0x00AAA7: return 0x00232C; 
								case 0x00AA95: return 0x0022C0; 
								case 0x00AA89: return 0x002278; 
								case 0x00AA8D: return 0x002290; 
								case 0x00AA80: return 0x002242; 
								case 0x00AA98: return 0x0022D2; 
								case 0x00AAA3: return 0x002314; 
								case 0x00AA91: return 0x0022A8; 
								case 0x00AAA8: return 0x002332; 
								case 0x00AAAF: return 0x00235C; 
								case 0x00AA84: return 0x00225A; 
								case 0x00AA8C: return 0x00228A; 
								case 0x00AA9F: return 0x0022FC; 
								case 0x00AAA4: return 0x00231A; 
								case 0x00AAAB: return 0x002344; 
								case 0x00AA88: return 0x002272; 
								case 0x00AA83: return 0x002254; 
								case 0x00AA99: return 0x0022D8; 
								case 0x00AA9B: return 0x0022E4; 
								case 0x00AAA0: return 0x002302; 
								case 0x00AA96: return 0x0022C6; 
								case 0x00AAA9: return 0x002338; 
								case 0x00AA87: return 0x00226C; 
								case 0x00AA8B: return 0x002284; 
								}

								*w = 1;
								return 0x002362;
							}
						}
					}
					else { /* weight > state_0019B5 */
						if (weight == state_001B09) {
							switch (u) {
							case 0x001B35: return 0x0027CD; 
							}

							*w = 1;
							return 0x0027CC;
						}
					}
				}
				else { /* weight > state_0019B7 */
					if (weight == state_00006C) {
						switch (u) {
						case 0x0000B7: return 0x000B7E; 
						case 0x000387: return 0x000B7E; 
						}

						*w = 1;
						return 0x000B75;
					}
					else if (weight < state_00006C) {
						if (weight == state_0019BA) {
							switch (u) {
							case 0x00198F: return 0x0026B8; 
							case 0x0019A2: return 0x002717; 
							case 0x001995: return 0x0026D6; 
							case 0x00199C: return 0x0026F9; 
							case 0x001980: return 0x00266D; 
							case 0x001991: return 0x0026C2; 
							case 0x0019A7: return 0x002730; 
							case 0x001984: return 0x002681; 
							case 0x00199D: return 0x0026FE; 
							case 0x00198A: return 0x00269F; 
							case 0x0019A3: return 0x00271C; 
							case 0x001983: return 0x00267C; 
							case 0x00198E: return 0x0026B3; 
							case 0x001996: return 0x0026DB; 
							case 0x0019A4: return 0x002721; 
							case 0x001987: return 0x002690; 
							case 0x00199E: return 0x002703; 
							case 0x001992: return 0x0026C7; 
							case 0x0019A0: return 0x00270D; 
							case 0x00199A: return 0x0026EF; 
							case 0x001982: return 0x002677; 
							case 0x00198D: return 0x0026AE; 
							case 0x0019AA: return 0x00273F; 
							case 0x001997: return 0x0026E0; 
							case 0x0019A5: return 0x002726; 
							case 0x001986: return 0x00268B; 
							case 0x0019A8: return 0x002735; 
							case 0x001989: return 0x00269A; 
							case 0x001993: return 0x0026CC; 
							case 0x00198C: return 0x0026A9; 
							case 0x0019A1: return 0x002712; 
							case 0x001998: return 0x0026E5; 
							case 0x00199F: return 0x002708; 
							case 0x001994: return 0x0026D1; 
							case 0x00199B: return 0x0026F4; 
							case 0x001981: return 0x002672; 
							case 0x0019A9: return 0x00273A; 
							case 0x0019AB: return 0x002744; 
							case 0x001988: return 0x002695; 
							case 0x001990: return 0x0026BD; 
							case 0x00198B: return 0x0026A4; 
							case 0x0019A6: return 0x00272B; 
							case 0x001999: return 0x0026EA; 
							case 0x001985: return 0x002686; 
							}

							*w = 1;
							return 0x00274F;
						}
					}
					else { /* weight > state_00006C */
						if (weight == state_0019B6) {
							switch (u) {
							case 0x001995: return 0x0026D4; 
							case 0x0019A3: return 0x00271A; 
							case 0x00199A: return 0x0026ED; 
							case 0x001980: return 0x00266B; 
							case 0x00198D: return 0x0026AC; 
							case 0x001989: return 0x002698; 
							case 0x0019AA: return 0x00273D; 
							case 0x0019A7: return 0x00272E; 
							case 0x00199E: return 0x002701; 
							case 0x001990: return 0x0026BB; 
							case 0x001985: return 0x002684; 
							case 0x001994: return 0x0026CF; 
							case 0x0019A2: return 0x002715; 
							case 0x001981: return 0x002670; 
							case 0x00198E: return 0x0026B1; 
							case 0x0019A6: return 0x002729; 
							case 0x00199D: return 0x0026FC; 
							case 0x00198A: return 0x00269D; 
							case 0x001986: return 0x002689; 
							case 0x001993: return 0x0026CA; 
							case 0x0019A1: return 0x002710; 
							case 0x001982: return 0x002675; 
							case 0x00198F: return 0x0026B6; 
							case 0x001997: return 0x0026DE; 
							case 0x0019A5: return 0x002724; 
							case 0x00199C: return 0x0026F7; 
							case 0x00198B: return 0x0026A2; 
							case 0x001987: return 0x00268E; 
							case 0x0019A9: return 0x002738; 
							case 0x001992: return 0x0026C5; 
							case 0x0019A0: return 0x00270B; 
							case 0x001999: return 0x0026E8; 
							case 0x001983: return 0x00267A; 
							case 0x001996: return 0x0026D9; 
							case 0x0019A4: return 0x00271F; 
							case 0x00199B: return 0x0026F2; 
							case 0x00198C: return 0x0026A7; 
							case 0x001988: return 0x002693; 
							case 0x0019AB: return 0x002742; 
							case 0x0019A8: return 0x002733; 
							case 0x00199F: return 0x002706; 
							case 0x001991: return 0x0026C0; 
							case 0x001998: return 0x0026E3; 
							case 0x001984: return 0x00267F; 
							}

							*w = 1;
							return 0x00274B;
						}
					}
				}
			}
			else { /* weight > state_00064A */
				if (weight == state_001B05) {
					switch (u) {
					case 0x001B35: return 0x0027C9; 
					}

					*w = 1;
					return 0x0027C8;
				}
				else if (weight < state_001B05) {
					if (weight == state_000418) {
						switch (u) {
						case 0x000306: return 0x0010C5; 
						}

						*w = 1;
						return 0x0010B8;
					}
					else if (weight < state_000418) {
						if (weight == state_00AABB) {
							switch (u) {
							case 0x00AAA0: return 0x002303; 
							case 0x00AA8D: return 0x002291; 
							case 0x00AA81: return 0x002249; 
							case 0x00AA99: return 0x0022D9; 
							case 0x00AA90: return 0x0022A3; 
							case 0x00AAAF: return 0x00235D; 
							case 0x00AA9D: return 0x0022F1; 
							case 0x00AA85: return 0x002261; 
							case 0x00AA8A: return 0x00227F; 
							case 0x00AAAB: return 0x002345; 
							case 0x00AA89: return 0x002279; 
							case 0x00AAA7: return 0x00232D; 
							case 0x00AA8E: return 0x002297; 
							case 0x00AA82: return 0x00224F; 
							case 0x00AA98: return 0x0022D3; 
							case 0x00AA97: return 0x0022CD; 
							case 0x00AAAE: return 0x002357; 
							case 0x00AAA3: return 0x002315; 
							case 0x00AA86: return 0x002267; 
							case 0x00AA8B: return 0x002285; 
							case 0x00AA93: return 0x0022B5; 
							case 0x00AAAA: return 0x00233F; 
							case 0x00AAA6: return 0x002327; 
							case 0x00AA8F: return 0x00229D; 
							case 0x00AA83: return 0x002255; 
							case 0x00AA9C: return 0x0022EB; 
							case 0x00AA96: return 0x0022C7; 
							case 0x00AAAD: return 0x002351; 
							case 0x00AAA2: return 0x00230F; 
							case 0x00AA87: return 0x00226D; 
							case 0x00AAA9: return 0x002339; 
							case 0x00AA8C: return 0x00228B; 
							case 0x00AA92: return 0x0022AF; 
							case 0x00AA9F: return 0x0022FD; 
							case 0x00AAA5: return 0x002321; 
							case 0x00AA9B: return 0x0022E5; 
							case 0x00AA95: return 0x0022C1; 
							case 0x00AAA1: return 0x002309; 
							case 0x00AA80: return 0x002243; 
							case 0x00AAA8: return 0x002333; 
							case 0x00AA91: return 0x0022A9; 
							case 0x00AA9E: return 0x0022F7; 
							case 0x00AA84: return 0x00225B; 
							case 0x00AAA4: return 0x00231B; 
							case 0x00AAAC: return 0x00234B; 
							case 0x00AA9A: return 0x0022DF; 
							case 0x00AA94: return 0x0022BB; 
							case 0x00AA88: return 0x002273; 
							}

							*w = 1;
							return 0x002364;
						}
						else if (weight < state_00AABB) {
							if (weight == state_000648) {
								switch (u) {
								case 0x000654: return 0x0013D6; 
								}

								*w = 1;
								return 0x00172A;
							}
						}
					}
					else { /* weight > state_000418 */
						if (weight == state_001B07) {
							switch (u) {
							case 0x001B35: return 0x0027CB; 
							}

							*w = 1;
							return 0x0027CA;
						}
					}
				}
				else { /* weight > state_001B05 */
					if (weight == state_000627) {
						switch (u) {
						case 0x000653: return 0x0013CC; 
						case 0x000655: return 0x0013D9; 
						case 0x000654: return 0x0013CF; 
						}

						*w = 1;
						return 0x001409;
					}
					else if (weight < state_000627) {
						if (weight == state_00AABC) {
							switch (u) {
							case 0x00AA95: return 0x0022C2; 
							case 0x00AAA1: return 0x00230A; 
							case 0x00AA84: return 0x00225C; 
							case 0x00AA98: return 0x0022D4; 
							case 0x00AA91: return 0x0022AA; 
							case 0x00AAAC: return 0x00234C; 
							case 0x00AA9E: return 0x0022F8; 
							case 0x00AA88: return 0x002274; 
							case 0x00AAA6: return 0x002328; 
							case 0x00AA8D: return 0x002292; 
							case 0x00AA9A: return 0x0022E0; 
							case 0x00AA96: return 0x0022C8; 
							case 0x00AAA2: return 0x002310; 
							case 0x00AA83: return 0x002256; 
							case 0x00AA99: return 0x0022DA; 
							case 0x00AA92: return 0x0022B0; 
							case 0x00AAAD: return 0x002352; 
							case 0x00AA9F: return 0x0022FE; 
							case 0x00AA87: return 0x00226E; 
							case 0x00AAA7: return 0x00232E; 
							case 0x00AA8C: return 0x00228C; 
							case 0x00AA9B: return 0x0022E6; 
							case 0x00AA97: return 0x0022CE; 
							case 0x00AAA3: return 0x002316; 
							case 0x00AA82: return 0x002250; 
							case 0x00AA93: return 0x0022B6; 
							case 0x00AAAE: return 0x002358; 
							case 0x00AA86: return 0x002268; 
							case 0x00AAA8: return 0x002334; 
							case 0x00AA8B: return 0x002286; 
							case 0x00AAAA: return 0x002340; 
							case 0x00AA9C: return 0x0022EC; 
							case 0x00AAA4: return 0x00231C; 
							case 0x00AA8F: return 0x00229E; 
							case 0x00AA81: return 0x00224A; 
							case 0x00AA94: return 0x0022BC; 
							case 0x00AAAF: return 0x00235E; 
							case 0x00AAA0: return 0x002304; 
							case 0x00AA85: return 0x002262; 
							case 0x00AAA9: return 0x00233A; 
							case 0x00AA8A: return 0x002280; 
							case 0x00AA90: return 0x0022A4; 
							case 0x00AAAB: return 0x002346; 
							case 0x00AA9D: return 0x0022F2; 
							case 0x00AA89: return 0x00227A; 
							case 0x00AAA5: return 0x002322; 
							case 0x00AA8E: return 0x002298; 
							case 0x00AA80: return 0x002244; 
							}

							*w = 1;
							return 0x002365;
						}
					}
					else { /* weight > state_000627 */
						if (weight == state_000B92) {
							switch (u) {
							case 0x000BD7: return 0x001B52; 
							}

							*w = 1;
							return 0x001B50;
						}
					}
				}
			}
		}
		else { /* weight > state_00004C */
			if (weight == state_00AAB6) {
				switch (u) {
				case 0x00AA9D: return 0x0022EF; 
				case 0x00AA87: return 0x00226B; 
				case 0x00AA8A: return 0x00227D; 
				case 0x00AAA9: return 0x002337; 
				case 0x00AAAD: return 0x00234F; 
				case 0x00AA92: return 0x0022AD; 
				case 0x00AAA0: return 0x002301; 
				case 0x00AA99: return 0x0022D7; 
				case 0x00AA83: return 0x002253; 
				case 0x00AA96: return 0x0022C5; 
				case 0x00AA8F: return 0x00229B; 
				case 0x00AAA4: return 0x002319; 
				case 0x00AA9C: return 0x0022E9; 
				case 0x00AA88: return 0x002271; 
				case 0x00AA8B: return 0x002283; 
				case 0x00AAA8: return 0x002331; 
				case 0x00AAAC: return 0x002349; 
				case 0x00AA91: return 0x0022A7; 
				case 0x00AA98: return 0x0022D1; 
				case 0x00AA84: return 0x002259; 
				case 0x00AA95: return 0x0022BF; 
				case 0x00AAA3: return 0x002313; 
				case 0x00AA80: return 0x002241; 
				case 0x00AA9B: return 0x0022E3; 
				case 0x00AA89: return 0x002277; 
				case 0x00AA8C: return 0x002289; 
				case 0x00AAA7: return 0x00232B; 
				case 0x00AAAB: return 0x002343; 
				case 0x00AA90: return 0x0022A1; 
				case 0x00AA9F: return 0x0022FB; 
				case 0x00AA85: return 0x00225F; 
				case 0x00AAAF: return 0x00235B; 
				case 0x00AA94: return 0x0022B9; 
				case 0x00AAA2: return 0x00230D; 
				case 0x00AA81: return 0x002247; 
				case 0x00AA9A: return 0x0022DD; 
				case 0x00AA8D: return 0x00228F; 
				case 0x00AAA6: return 0x002325; 
				case 0x00AAAA: return 0x00233D; 
				case 0x00AA9E: return 0x0022F5; 
				case 0x00AA86: return 0x002265; 
				case 0x00AAAE: return 0x002355; 
				case 0x00AA93: return 0x0022B3; 
				case 0x00AAA1: return 0x002307; 
				case 0x00AA82: return 0x00224D; 
				case 0x00AA97: return 0x0022CB; 
				case 0x00AA8E: return 0x002295; 
				case 0x00AAA5: return 0x00231F; 
				}

				*w = 1;
				return 0x002361;
			}
			else if (weight < state_00AAB6) {
				if (weight == state_000E42) {
					switch (u) {
					case 0x000E1C: return 0x002102; 
					case 0x000E16: return 0x0020DE; 
					case 0x000E24: return 0x002132; 
					case 0x000E07: return 0x002084; 
					case 0x000E0C: return 0x0020A2; 
					case 0x000E12: return 0x0020C6; 
					case 0x000E1F: return 0x002114; 
					case 0x000E2D: return 0x002168; 
					case 0x000E21: return 0x002120; 
					case 0x000E1B: return 0x0020FC; 
					case 0x000E15: return 0x0020D8; 
					case 0x000E25: return 0x002138; 
					case 0x000E2A: return 0x002156; 
					case 0x000E23: return 0x00212C; 
					case 0x000E11: return 0x0020C0; 
					case 0x000E1E: return 0x00210E; 
					case 0x000E2E: return 0x00216E; 
					case 0x000E04: return 0x002072; 
					case 0x000E1A: return 0x0020F6; 
					case 0x000E14: return 0x0020D2; 
					case 0x000E08: return 0x00208A; 
					case 0x000E0D: return 0x0020A8; 
					case 0x000E01: return 0x002060; 
					case 0x000E19: return 0x0020F0; 
					case 0x000E28: return 0x00214A; 
					case 0x000E10: return 0x0020BA; 
					case 0x000E26: return 0x00213E; 
					case 0x000E1D: return 0x002108; 
					case 0x000E2B: return 0x00215C; 
					case 0x000E05: return 0x002078; 
					case 0x000E0A: return 0x002096; 
					case 0x000E09: return 0x002090; 
					case 0x000E0E: return 0x0020AE; 
					case 0x000E02: return 0x002066; 
					case 0x000E18: return 0x0020EA; 
					case 0x000E17: return 0x0020E4; 
					case 0x000E27: return 0x002144; 
					case 0x000E2C: return 0x002162; 
					case 0x000E06: return 0x00207E; 
					case 0x000E0B: return 0x00209C; 
					case 0x000E13: return 0x0020CC; 
					case 0x000E29: return 0x002150; 
					case 0x000E20: return 0x00211A; 
					case 0x000E22: return 0x002126; 
					case 0x000E0F: return 0x0020B4; 
					case 0x000E03: return 0x00206C; 
					}

					*w = 1;
					return 0x002177;
				}
				else if (weight < state_000E42) {
					if (weight == state_000E40) {
						switch (u) {
						case 0x000E04: return 0x002070; 
						case 0x000E27: return 0x002142; 
						case 0x000E11: return 0x0020BE; 
						case 0x000E2C: return 0x002160; 
						case 0x000E1E: return 0x00210C; 
						case 0x000E18: return 0x0020E8; 
						case 0x000E0D: return 0x0020A6; 
						case 0x000E01: return 0x00205E; 
						case 0x000E1A: return 0x0020F4; 
						case 0x000E14: return 0x0020D0; 
						case 0x000E05: return 0x002076; 
						case 0x000E0A: return 0x002094; 
						case 0x000E20: return 0x002118; 
						case 0x000E10: return 0x0020B8; 
						case 0x000E29: return 0x00214E; 
						case 0x000E1D: return 0x002106; 
						case 0x000E0E: return 0x0020AC; 
						case 0x000E24: return 0x002130; 
						case 0x000E17: return 0x0020E2; 
						case 0x000E02: return 0x002064; 
						case 0x000E2D: return 0x002166; 
						case 0x000E21: return 0x00211E; 
						case 0x000E13: return 0x0020CA; 
						case 0x000E22: return 0x002124; 
						case 0x000E06: return 0x00207C; 
						case 0x000E0B: return 0x00209A; 
						case 0x000E25: return 0x002136; 
						case 0x000E2A: return 0x002154; 
						case 0x000E1C: return 0x002100; 
						case 0x000E16: return 0x0020DC; 
						case 0x000E0F: return 0x0020B2; 
						case 0x000E03: return 0x00206A; 
						case 0x000E2E: return 0x00216C; 
						case 0x000E08: return 0x002088; 
						case 0x000E12: return 0x0020C4; 
						case 0x000E1F: return 0x002112; 
						case 0x000E07: return 0x002082; 
						case 0x000E0C: return 0x0020A0; 
						case 0x000E26: return 0x00213C; 
						case 0x000E2B: return 0x00215A; 
						case 0x000E1B: return 0x0020FA; 
						case 0x000E19: return 0x0020EE; 
						case 0x000E23: return 0x00212A; 
						case 0x000E28: return 0x002148; 
						case 0x000E09: return 0x00208E; 
						case 0x000E15: return 0x0020D6; 
						}

						*w = 1;
						return 0x002175;
					}
					else if (weight < state_000E40) {
						if (weight == state_001025) {
							switch (u) {
							case 0x00102E: return 0x0025BC; 
							}

							*w = 1;
							return 0x0025BB;
						}
						else if (weight < state_001025) {
							if (weight == state_001B0D) {
								switch (u) {
								case 0x001B35: return 0x0027D1; 
								}

								*w = 1;
								return 0x0027D0;
							}
						}
					}
					else { /* weight > state_000E40 */
						if (weight == state_000E41) {
							switch (u) {
							case 0x000E2C: return 0x002161; 
							case 0x000E26: return 0x00213D; 
							case 0x000E14: return 0x0020D1; 
							case 0x000E01: return 0x00205F; 
							case 0x000E0E: return 0x0020AD; 
							case 0x000E08: return 0x002089; 
							case 0x000E1D: return 0x002107; 
							case 0x000E11: return 0x0020BF; 
							case 0x000E0A: return 0x002095; 
							case 0x000E04: return 0x002071; 
							case 0x000E29: return 0x00214F; 
							case 0x000E2B: return 0x00215B; 
							case 0x000E25: return 0x002137; 
							case 0x000E15: return 0x0020D7; 
							case 0x000E1A: return 0x0020F5; 
							case 0x000E0D: return 0x0020A7; 
							case 0x000E21: return 0x00211F; 
							case 0x000E2E: return 0x00216D; 
							case 0x000E1E: return 0x00210D; 
							case 0x000E23: return 0x00212B; 
							case 0x000E07: return 0x002083; 
							case 0x000E2A: return 0x002155; 
							case 0x000E24: return 0x002131; 
							case 0x000E12: return 0x0020C5; 
							case 0x000E03: return 0x00206B; 
							case 0x000E20: return 0x002119; 
							case 0x000E16: return 0x0020DD; 
							case 0x000E28: return 0x002149; 
							case 0x000E2D: return 0x002167; 
							case 0x000E1B: return 0x0020FB; 
							case 0x000E0C: return 0x0020A1; 
							case 0x000E06: return 0x00207D; 
							case 0x000E1F: return 0x002113; 
							case 0x000E13: return 0x0020CB; 
							case 0x000E18: return 0x0020E9; 
							case 0x000E02: return 0x002065; 
							case 0x000E0F: return 0x0020B3; 
							case 0x000E27: return 0x002143; 
							case 0x000E17: return 0x0020E3; 
							case 0x000E1C: return 0x002101; 
							case 0x000E0B: return 0x00209B; 
							case 0x000E09: return 0x00208F; 
							case 0x000E22: return 0x002125; 
							case 0x000E10: return 0x0020B9; 
							case 0x000E19: return 0x0020EF; 
							case 0x000E05: return 0x002077; 
							}

							*w = 1;
							return 0x002176;
						}
					}
				}
				else { /* weight > state_000E42 */
					if (weight == state_000E44) {
						switch (u) {
						case 0x000E1E: return 0x002110; 
						case 0x000E10: return 0x0020BC; 
						case 0x000E08: return 0x00208C; 
						case 0x000E01: return 0x002062; 
						case 0x000E28: return 0x00214C; 
						case 0x000E0E: return 0x0020B0; 
						case 0x000E14: return 0x0020D4; 
						case 0x000E2B: return 0x00215E; 
						case 0x000E27: return 0x002146; 
						case 0x000E29: return 0x002152; 
						case 0x000E0A: return 0x002098; 
						case 0x000E18: return 0x0020EC; 
						case 0x000E22: return 0x002128; 
						case 0x000E1D: return 0x00210A; 
						case 0x000E13: return 0x0020CE; 
						case 0x000E09: return 0x002092; 
						case 0x000E06: return 0x002080; 
						case 0x000E17: return 0x0020E6; 
						case 0x000E1C: return 0x002104; 
						case 0x000E2C: return 0x002164; 
						case 0x000E02: return 0x002068; 
						case 0x000E0F: return 0x0020B6; 
						case 0x000E12: return 0x0020C8; 
						case 0x000E24: return 0x002134; 
						case 0x000E0B: return 0x00209E; 
						case 0x000E07: return 0x002086; 
						case 0x000E16: return 0x0020E0; 
						case 0x000E20: return 0x00211C; 
						case 0x000E23: return 0x00212E; 
						case 0x000E1B: return 0x0020FE; 
						case 0x000E2D: return 0x00216A; 
						case 0x000E03: return 0x00206E; 
						case 0x000E1F: return 0x002116; 
						case 0x000E25: return 0x00213A; 
						case 0x000E0C: return 0x0020A4; 
						case 0x000E04: return 0x002074; 
						case 0x000E11: return 0x0020C2; 
						case 0x000E21: return 0x002122; 
						case 0x000E2E: return 0x002170; 
						case 0x000E0D: return 0x0020AA; 
						case 0x000E15: return 0x0020DA; 
						case 0x000E1A: return 0x0020F8; 
						case 0x000E2A: return 0x002158; 
						case 0x000E26: return 0x002140; 
						case 0x000E05: return 0x00207A; 
						case 0x000E19: return 0x0020F2; 
						}

						*w = 1;
						return 0x002179;
					}
					else if (weight < state_000E44) {
						if (weight == state_000E43) {
							switch (u) {
							case 0x000E02: return 0x002067; 
							case 0x000E22: return 0x002127; 
							case 0x000E13: return 0x0020CD; 
							case 0x000E25: return 0x002139; 
							case 0x000E2A: return 0x002157; 
							case 0x000E06: return 0x00207F; 
							case 0x000E0B: return 0x00209D; 
							case 0x000E28: return 0x00214B; 
							case 0x000E1C: return 0x002103; 
							case 0x000E2E: return 0x00216F; 
							case 0x000E20: return 0x00211B; 
							case 0x000E0F: return 0x0020B5; 
							case 0x000E01: return 0x002061; 
							case 0x000E14: return 0x0020D3; 
							case 0x000E24: return 0x002133; 
							case 0x000E05: return 0x002079; 
							case 0x000E0A: return 0x002097; 
							case 0x000E10: return 0x0020BB; 
							case 0x000E1D: return 0x002109; 
							case 0x000E2D: return 0x002169; 
							case 0x000E09: return 0x002091; 
							case 0x000E0E: return 0x0020AF; 
							case 0x000E15: return 0x0020D9; 
							case 0x000E27: return 0x002145; 
							case 0x000E2C: return 0x002163; 
							case 0x000E04: return 0x002073; 
							case 0x000E18: return 0x0020EB; 
							case 0x000E11: return 0x0020C1; 
							case 0x000E1E: return 0x00210F; 
							case 0x000E08: return 0x00208B; 
							case 0x000E23: return 0x00212D; 
							case 0x000E0D: return 0x0020A9; 
							case 0x000E1A: return 0x0020F7; 
							case 0x000E16: return 0x0020DF; 
							case 0x000E26: return 0x00213F; 
							case 0x000E2B: return 0x00215D; 
							case 0x000E03: return 0x00206D; 
							case 0x000E19: return 0x0020F1; 
							case 0x000E29: return 0x002151; 
							case 0x000E12: return 0x0020C7; 
							case 0x000E1F: return 0x002115; 
							case 0x000E07: return 0x002085; 
							case 0x000E0C: return 0x0020A3; 
							case 0x000E1B: return 0x0020FD; 
							case 0x000E17: return 0x0020E5; 
							case 0x000E21: return 0x002121; 
							}

							*w = 1;
							return 0x002178;
						}
					}
					else { /* weight > state_000E44 */
						if (weight == state_00AAB5) {
							switch (u) {
							case 0x00AAA8: return 0x002330; 
							case 0x00AA9F: return 0x0022FA; 
							case 0x00AA93: return 0x0022B2; 
							case 0x00AAAA: return 0x00233C; 
							case 0x00AAA7: return 0x00232A; 
							case 0x00AA82: return 0x00224C; 
							case 0x00AA8F: return 0x00229A; 
							case 0x00AA97: return 0x0022CA; 
							case 0x00AAAE: return 0x002354; 
							case 0x00AA9C: return 0x0022E8; 
							case 0x00AAA0: return 0x002300; 
							case 0x00AA8B: return 0x002282; 
							case 0x00AAA9: return 0x002336; 
							case 0x00AA90: return 0x0022A0; 
							case 0x00AAA4: return 0x002318; 
							case 0x00AA85: return 0x00225E; 
							case 0x00AA94: return 0x0022B8; 
							case 0x00AAAB: return 0x002342; 
							case 0x00AA81: return 0x002246; 
							case 0x00AAA1: return 0x002306; 
							case 0x00AA8E: return 0x002294; 
							case 0x00AA98: return 0x0022D0; 
							case 0x00AAAF: return 0x00235A; 
							case 0x00AA9D: return 0x0022EE; 
							case 0x00AA91: return 0x0022A6; 
							case 0x00AAA5: return 0x00231E; 
							case 0x00AA8A: return 0x00227C; 
							case 0x00AA84: return 0x002258; 
							case 0x00AA95: return 0x0022BE; 
							case 0x00AA89: return 0x002276; 
							case 0x00AAAC: return 0x002348; 
							case 0x00AA9A: return 0x0022DC; 
							case 0x00AA80: return 0x002240; 
							case 0x00AA8D: return 0x00228E; 
							case 0x00AA99: return 0x0022D6; 
							case 0x00AA9E: return 0x0022F4; 
							case 0x00AAA2: return 0x00230C; 
							case 0x00AA87: return 0x00226A; 
							case 0x00AA92: return 0x0022AC; 
							case 0x00AA88: return 0x002270; 
							case 0x00AAA6: return 0x002324; 
							case 0x00AA83: return 0x002252; 
							case 0x00AA96: return 0x0022C4; 
							case 0x00AAAD: return 0x00234E; 
							case 0x00AA9B: return 0x0022E2; 
							case 0x00AAA3: return 0x002312; 
							case 0x00AA8C: return 0x002288; 
							case 0x00AA86: return 0x002264; 
							}

							*w = 1;
							return 0x002360;
						}
					}
				}
			}
			else { /* weight > state_00AAB6 */
				if (weight == state_000EC2) {
					switch (u) {
					case 0x000E82: return 0x00218A; 
					case 0x000E9B: return 0x0021DE; 
					case 0x000EDD: return 0x002226; 
					case 0x000EAD: return 0x00222C; 
					case 0x000E9F: return 0x0021F6; 
					case 0x000EAA: return 0x0021A2; 
					case 0x000E81: return 0x002184; 
					case 0x000E9C: return 0x0021E4; 
					case 0x000E94: return 0x0021BA; 
					case 0x000EDC: return 0x002220; 
					case 0x000EAE: return 0x002232; 
					case 0x000EA1: return 0x0021FC; 
					case 0x000E84: return 0x002190; 
					case 0x000EA5: return 0x00220E; 
					case 0x000EAB: return 0x00221A; 
					case 0x000E95: return 0x0021C0; 
					case 0x000EA2: return 0x002202; 
					case 0x000E99: return 0x0021D2; 
					case 0x000E8A: return 0x0021A8; 
					case 0x000EDF: return 0x0021AE; 
					case 0x000E88: return 0x00219C; 
					case 0x000E9D: return 0x0021EA; 
					case 0x000E87: return 0x002196; 
					case 0x000E96: return 0x0021C6; 
					case 0x000E8D: return 0x0021B4; 
					case 0x000E9A: return 0x0021D8; 
					case 0x000EA3: return 0x002208; 
					case 0x000EDE: return 0x00217E; 
					case 0x000E9E: return 0x0021F0; 
					case 0x000EA7: return 0x002214; 
					case 0x000E97: return 0x0021CC; 
					}

					*w = 1;
					return 0x00223C;
				}
				else if (weight < state_000EC2) {
					if (weight == state_000EC0) {
						switch (u) {
						case 0x000E84: return 0x00218E; 
						case 0x000E9D: return 0x0021E8; 
						case 0x000E8A: return 0x0021A6; 
						case 0x000EAB: return 0x002218; 
						case 0x000E88: return 0x00219A; 
						case 0x000E99: return 0x0021D0; 
						case 0x000E96: return 0x0021C4; 
						case 0x000EA2: return 0x002200; 
						case 0x000E87: return 0x002194; 
						case 0x000E9E: return 0x0021EE; 
						case 0x000EDE: return 0x00217C; 
						case 0x000E9A: return 0x0021D6; 
						case 0x000EA7: return 0x002212; 
						case 0x000E82: return 0x002188; 
						case 0x000E8D: return 0x0021B2; 
						case 0x000E97: return 0x0021CA; 
						case 0x000EA3: return 0x002206; 
						case 0x000EAD: return 0x00222A; 
						case 0x000EDD: return 0x002224; 
						case 0x000E9F: return 0x0021F4; 
						case 0x000E94: return 0x0021B8; 
						case 0x000E9B: return 0x0021DC; 
						case 0x000EAE: return 0x002230; 
						case 0x000E81: return 0x002182; 
						case 0x000EAA: return 0x0021A0; 
						case 0x000EA5: return 0x00220C; 
						case 0x000EDC: return 0x00221E; 
						case 0x000E95: return 0x0021BE; 
						case 0x000E9C: return 0x0021E2; 
						case 0x000EA1: return 0x0021FA; 
						case 0x000EDF: return 0x0021AC; 
						}

						*w = 1;
						return 0x00223A;
					}
					else if (weight < state_000EC0) {
						if (weight == state_000EC1) {
							switch (u) {
							case 0x000EAD: return 0x00222B; 
							case 0x000E97: return 0x0021CB; 
							case 0x000EA1: return 0x0021FB; 
							case 0x000E9C: return 0x0021E3; 
							case 0x000E82: return 0x002189; 
							case 0x000EDE: return 0x00217D; 
							case 0x000EA5: return 0x00220D; 
							case 0x000E87: return 0x002195; 
							case 0x000E96: return 0x0021C5; 
							case 0x000E9B: return 0x0021DD; 
							case 0x000E99: return 0x0021D1; 
							case 0x000E88: return 0x00219B; 
							case 0x000EAB: return 0x002219; 
							case 0x000E9F: return 0x0021F5; 
							case 0x000E84: return 0x00218F; 
							case 0x000EDF: return 0x0021AD; 
							case 0x000EA3: return 0x002207; 
							case 0x000E8D: return 0x0021B3; 
							case 0x000E95: return 0x0021BF; 
							case 0x000EDC: return 0x00221F; 
							case 0x000EA7: return 0x002213; 
							case 0x000E9A: return 0x0021D7; 
							case 0x000EAA: return 0x0021A1; 
							case 0x000E9E: return 0x0021EF; 
							case 0x000EA2: return 0x002201; 
							case 0x000E81: return 0x002183; 
							case 0x000EAE: return 0x002231; 
							case 0x000E94: return 0x0021B9; 
							case 0x000E8A: return 0x0021A7; 
							case 0x000EDD: return 0x002225; 
							case 0x000E9D: return 0x0021E9; 
							}

							*w = 1;
							return 0x00223B;
						}
					}
					else { /* weight > state_000EC0 */
						if (weight == state_000EC3) {
							switch (u) {
							case 0x000E96: return 0x0021C7; 
							case 0x000EAE: return 0x002233; 
							case 0x000E9C: return 0x0021E5; 
							case 0x000EA1: return 0x0021FD; 
							case 0x000EDE: return 0x00217F; 
							case 0x000EA5: return 0x00220F; 
							case 0x000E84: return 0x002191; 
							case 0x000E95: return 0x0021C1; 
							case 0x000EAD: return 0x00222D; 
							case 0x000E9B: return 0x0021DF; 
							case 0x000E99: return 0x0021D3; 
							case 0x000EDF: return 0x0021AF; 
							case 0x000E9F: return 0x0021F7; 
							case 0x000E94: return 0x0021BB; 
							case 0x000E88: return 0x00219D; 
							case 0x000EDC: return 0x002221; 
							case 0x000E81: return 0x002185; 
							case 0x000E9A: return 0x0021D9; 
							case 0x000E8D: return 0x0021B5; 
							case 0x000E9E: return 0x0021F1; 
							case 0x000EA3: return 0x002209; 
							case 0x000EA7: return 0x002215; 
							case 0x000EAB: return 0x00221B; 
							case 0x000E82: return 0x00218B; 
							case 0x000E97: return 0x0021CD; 
							case 0x000E9D: return 0x0021EB; 
							case 0x000EA2: return 0x002203; 
							case 0x000E87: return 0x002197; 
							case 0x000E8A: return 0x0021A9; 
							case 0x000EDD: return 0x002227; 
							case 0x000EAA: return 0x0021A3; 
							}

							*w = 1;
							return 0x00223D;
						}
					}
				}
				else { /* weight > state_000EC2 */
					if (weight == state_001B0B) {
						switch (u) {
						case 0x001B35: return 0x0027CF; 
						}

						*w = 1;
						return 0x0027CE;
					}
					else if (weight < state_001B0B) {
						if (weight == state_000EC4) {
							switch (u) {
							case 0x000EDD: return 0x002228; 
							case 0x000E9F: return 0x0021F8; 
							case 0x000EAA: return 0x0021A4; 
							case 0x000EA7: return 0x002216; 
							case 0x000E82: return 0x00218C; 
							case 0x000E97: return 0x0021CE; 
							case 0x000EDC: return 0x002222; 
							case 0x000EAE: return 0x002234; 
							case 0x000E9C: return 0x0021E6; 
							case 0x000E94: return 0x0021BC; 
							case 0x000EAB: return 0x00221C; 
							case 0x000E81: return 0x002186; 
							case 0x000EA1: return 0x0021FE; 
							case 0x000EDF: return 0x0021B0; 
							case 0x000E9D: return 0x0021EC; 
							case 0x000EA5: return 0x002210; 
							case 0x000E8A: return 0x0021AA; 
							case 0x000E84: return 0x002192; 
							case 0x000E95: return 0x0021C2; 
							case 0x000E9A: return 0x0021DA; 
							case 0x000E8D: return 0x0021B6; 
							case 0x000E99: return 0x0021D4; 
							case 0x000E9E: return 0x0021F2; 
							case 0x000EA2: return 0x002204; 
							case 0x000E87: return 0x002198; 
							case 0x000EDE: return 0x002180; 
							case 0x000E88: return 0x00219E; 
							case 0x000E96: return 0x0021C8; 
							case 0x000EAD: return 0x00222E; 
							case 0x000E9B: return 0x0021E0; 
							case 0x000EA3: return 0x00220A; 
							}

							*w = 1;
							return 0x00223E;
						}
					}
					else { /* weight > state_001B0B */
						if (weight == state_001B11) {
							switch (u) {
							case 0x001B35: return 0x0027D5; 
							}

							*w = 1;
							return 0x0027D4;
						}
					}
				}
			}
		}
	}

	return 0;
}
