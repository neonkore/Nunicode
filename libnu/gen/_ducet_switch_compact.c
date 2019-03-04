/* Automatically generated file (contractions-toc), 1551662366
 *
 * Tag          : _nu_ducet
 * Contractions : 820
 */

#include <stdint.h>

#include "udb.h"

const size_t _NU_DUCET_CONTRACTIONS = 820; /* contractions included in switch */
const size_t _NU_DUCET_CODEPOINTS = 10606; /* complementary codepoints number */

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
const uint16_t _NU_DUCET_ROOTS_VALUES_C[] = {
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
			case 0x000387: return 0x00030C; 
			case 0x0000B7: return 0x00030C; 
			}

			*w = 1;
			return 0x000303;
		}
		else if (weight < state_00004C) {
			if (weight == state_00064A) {
				switch (u) {
				case 0x000654: return 0x000ADC; 
				}

				*w = 1;
				return 0x000E2F;
			}
			else if (weight < state_00064A) {
				if (weight == state_0019B7) {
					switch (u) {
					case 0x0019A2: return 0x0019C1; 
					case 0x001999: return 0x001994; 
					case 0x001981: return 0x00191C; 
					case 0x00198E: return 0x00195D; 
					case 0x001988: return 0x00193F; 
					case 0x001994: return 0x00197B; 
					case 0x0019A6: return 0x0019D5; 
					case 0x00198A: return 0x001949; 
					case 0x001984: return 0x00192B; 
					case 0x00199D: return 0x0019A8; 
					case 0x001991: return 0x00196C; 
					case 0x0019A3: return 0x0019C6; 
					case 0x001980: return 0x001917; 
					case 0x00198D: return 0x001958; 
					case 0x001995: return 0x001980; 
					case 0x0019A7: return 0x0019DA; 
					case 0x00199A: return 0x001999; 
					case 0x0019AA: return 0x0019E9; 
					case 0x00199E: return 0x0019AD; 
					case 0x001992: return 0x001971; 
					case 0x001987: return 0x00193A; 
					case 0x001996: return 0x001985; 
					case 0x0019A0: return 0x0019B7; 
					case 0x00199B: return 0x00199E; 
					case 0x001983: return 0x001926; 
					case 0x0019AB: return 0x0019EE; 
					case 0x0019A4: return 0x0019CB; 
					case 0x00199F: return 0x0019B2; 
					case 0x001993: return 0x001976; 
					case 0x00198C: return 0x001953; 
					case 0x001986: return 0x001935; 
					case 0x0019A8: return 0x0019DF; 
					case 0x001997: return 0x00198A; 
					case 0x0019A1: return 0x0019BC; 
					case 0x00199C: return 0x0019A3; 
					case 0x001998: return 0x00198F; 
					case 0x001982: return 0x001921; 
					case 0x00198F: return 0x001962; 
					case 0x001989: return 0x001944; 
					case 0x0019A5: return 0x0019D0; 
					case 0x00198B: return 0x00194E; 
					case 0x001985: return 0x001930; 
					case 0x0019A9: return 0x0019E4; 
					case 0x001990: return 0x001967; 
					}

					*w = 1;
					return 0x0019F7;
				}
				else if (weight < state_0019B7) {
					if (weight == state_0019B5) {
						switch (u) {
						case 0x0019A8: return 0x0019DD; 
						case 0x00199F: return 0x0019B0; 
						case 0x001993: return 0x001974; 
						case 0x0019AA: return 0x0019E7; 
						case 0x0019A7: return 0x0019D8; 
						case 0x001982: return 0x00191F; 
						case 0x00198F: return 0x001960; 
						case 0x001997: return 0x001988; 
						case 0x00199C: return 0x0019A1; 
						case 0x0019A0: return 0x0019B5; 
						case 0x00198B: return 0x00194C; 
						case 0x0019A9: return 0x0019E2; 
						case 0x001990: return 0x001965; 
						case 0x0019A4: return 0x0019C9; 
						case 0x001985: return 0x00192E; 
						case 0x001994: return 0x001979; 
						case 0x0019AB: return 0x0019EC; 
						case 0x001981: return 0x00191A; 
						case 0x0019A1: return 0x0019BA; 
						case 0x00198E: return 0x00195B; 
						case 0x001998: return 0x00198D; 
						case 0x00199D: return 0x0019A6; 
						case 0x001991: return 0x00196A; 
						case 0x0019A5: return 0x0019CE; 
						case 0x00198A: return 0x001947; 
						case 0x001984: return 0x001929; 
						case 0x001995: return 0x00197E; 
						case 0x001989: return 0x001942; 
						case 0x00199A: return 0x001997; 
						case 0x001980: return 0x001915; 
						case 0x00198D: return 0x001956; 
						case 0x001999: return 0x001992; 
						case 0x00199E: return 0x0019AB; 
						case 0x0019A2: return 0x0019BF; 
						case 0x001987: return 0x001938; 
						case 0x001992: return 0x00196F; 
						case 0x001988: return 0x00193D; 
						case 0x0019A6: return 0x0019D3; 
						case 0x001983: return 0x001924; 
						case 0x001996: return 0x001983; 
						case 0x00199B: return 0x00199C; 
						case 0x0019A3: return 0x0019C4; 
						case 0x00198C: return 0x001951; 
						case 0x001986: return 0x001933; 
						}

						*w = 1;
						return 0x0019F5;
					}
					else if (weight < state_0019B5) {
						if (weight == state_000438) {
							switch (u) {
							case 0x000306: return 0x0007FD; 
							}

							*w = 1;
							return 0x0007ED;
						}
						else if (weight < state_000438) {
							if (weight == state_00AAB9) {
								switch (u) {
								case 0x00AA92: return 0x00162B; 
								case 0x00AAA5: return 0x00169D; 
								case 0x00AAAC: return 0x0016C7; 
								case 0x00AA8F: return 0x001619; 
								case 0x00AA82: return 0x0015CB; 
								case 0x00AA9C: return 0x001667; 
								case 0x00AAA1: return 0x001685; 
								case 0x00AA97: return 0x001649; 
								case 0x00AAAD: return 0x0016CD; 
								case 0x00AA86: return 0x0015E3; 
								case 0x00AA93: return 0x001631; 
								case 0x00AA9D: return 0x00166D; 
								case 0x00AA8A: return 0x0015FB; 
								case 0x00AAA6: return 0x0016A3; 
								case 0x00AA94: return 0x001637; 
								case 0x00AA8E: return 0x001613; 
								case 0x00AAAE: return 0x0016D3; 
								case 0x00AA81: return 0x0015C5; 
								case 0x00AAA2: return 0x00168B; 
								case 0x00AA90: return 0x00161F; 
								case 0x00AA9E: return 0x001673; 
								case 0x00AAAA: return 0x0016BB; 
								case 0x00AA85: return 0x0015DD; 
								case 0x00AA9A: return 0x00165B; 
								case 0x00AAA7: return 0x0016A9; 
								case 0x00AA95: return 0x00163D; 
								case 0x00AA89: return 0x0015F5; 
								case 0x00AA8D: return 0x00160D; 
								case 0x00AA80: return 0x0015BF; 
								case 0x00AA98: return 0x00164F; 
								case 0x00AAA3: return 0x001691; 
								case 0x00AA91: return 0x001625; 
								case 0x00AAA8: return 0x0016AF; 
								case 0x00AAAF: return 0x0016D9; 
								case 0x00AA84: return 0x0015D7; 
								case 0x00AA8C: return 0x001607; 
								case 0x00AA9F: return 0x001679; 
								case 0x00AAA4: return 0x001697; 
								case 0x00AAAB: return 0x0016C1; 
								case 0x00AA88: return 0x0015EF; 
								case 0x00AA83: return 0x0015D1; 
								case 0x00AA99: return 0x001655; 
								case 0x00AA9B: return 0x001661; 
								case 0x00AAA0: return 0x00167F; 
								case 0x00AA96: return 0x001643; 
								case 0x00AAA9: return 0x0016B5; 
								case 0x00AA87: return 0x0015E9; 
								case 0x00AA8B: return 0x001601; 
								}

								*w = 1;
								return 0x0016DF;
							}
						}
					}
					else { /* weight > state_0019B5 */
						if (weight == state_001B09) {
							switch (u) {
							case 0x001B35: return 0x001A78; 
							}

							*w = 1;
							return 0x001A77;
						}
					}
				}
				else { /* weight > state_0019B7 */
					if (weight == state_00006C) {
						switch (u) {
						case 0x0000B7: return 0x0002FB; 
						case 0x000387: return 0x0002FB; 
						}

						*w = 1;
						return 0x0002F2;
					}
					else if (weight < state_00006C) {
						if (weight == state_0019BA) {
							switch (u) {
							case 0x00198F: return 0x001963; 
							case 0x0019A2: return 0x0019C2; 
							case 0x001995: return 0x001981; 
							case 0x00199C: return 0x0019A4; 
							case 0x001980: return 0x001918; 
							case 0x001991: return 0x00196D; 
							case 0x0019A7: return 0x0019DB; 
							case 0x001984: return 0x00192C; 
							case 0x00199D: return 0x0019A9; 
							case 0x00198A: return 0x00194A; 
							case 0x0019A3: return 0x0019C7; 
							case 0x001983: return 0x001927; 
							case 0x00198E: return 0x00195E; 
							case 0x001996: return 0x001986; 
							case 0x0019A4: return 0x0019CC; 
							case 0x001987: return 0x00193B; 
							case 0x00199E: return 0x0019AE; 
							case 0x001992: return 0x001972; 
							case 0x0019A0: return 0x0019B8; 
							case 0x00199A: return 0x00199A; 
							case 0x001982: return 0x001922; 
							case 0x00198D: return 0x001959; 
							case 0x0019AA: return 0x0019EA; 
							case 0x001997: return 0x00198B; 
							case 0x0019A5: return 0x0019D1; 
							case 0x001986: return 0x001936; 
							case 0x0019A8: return 0x0019E0; 
							case 0x001989: return 0x001945; 
							case 0x001993: return 0x001977; 
							case 0x00198C: return 0x001954; 
							case 0x0019A1: return 0x0019BD; 
							case 0x001998: return 0x001990; 
							case 0x00199F: return 0x0019B3; 
							case 0x001994: return 0x00197C; 
							case 0x00199B: return 0x00199F; 
							case 0x001981: return 0x00191D; 
							case 0x0019A9: return 0x0019E5; 
							case 0x0019AB: return 0x0019EF; 
							case 0x001988: return 0x001940; 
							case 0x001990: return 0x001968; 
							case 0x00198B: return 0x00194F; 
							case 0x0019A6: return 0x0019D6; 
							case 0x001999: return 0x001995; 
							case 0x001985: return 0x001931; 
							}

							*w = 1;
							return 0x0019FA;
						}
					}
					else { /* weight > state_00006C */
						if (weight == state_0019B6) {
							switch (u) {
							case 0x001995: return 0x00197F; 
							case 0x0019A3: return 0x0019C5; 
							case 0x00199A: return 0x001998; 
							case 0x001980: return 0x001916; 
							case 0x00198D: return 0x001957; 
							case 0x001989: return 0x001943; 
							case 0x0019AA: return 0x0019E8; 
							case 0x0019A7: return 0x0019D9; 
							case 0x00199E: return 0x0019AC; 
							case 0x001990: return 0x001966; 
							case 0x001985: return 0x00192F; 
							case 0x001994: return 0x00197A; 
							case 0x0019A2: return 0x0019C0; 
							case 0x001981: return 0x00191B; 
							case 0x00198E: return 0x00195C; 
							case 0x0019A6: return 0x0019D4; 
							case 0x00199D: return 0x0019A7; 
							case 0x00198A: return 0x001948; 
							case 0x001986: return 0x001934; 
							case 0x001993: return 0x001975; 
							case 0x0019A1: return 0x0019BB; 
							case 0x001982: return 0x001920; 
							case 0x00198F: return 0x001961; 
							case 0x001997: return 0x001989; 
							case 0x0019A5: return 0x0019CF; 
							case 0x00199C: return 0x0019A2; 
							case 0x00198B: return 0x00194D; 
							case 0x001987: return 0x001939; 
							case 0x0019A9: return 0x0019E3; 
							case 0x001992: return 0x001970; 
							case 0x0019A0: return 0x0019B6; 
							case 0x001999: return 0x001993; 
							case 0x001983: return 0x001925; 
							case 0x001996: return 0x001984; 
							case 0x0019A4: return 0x0019CA; 
							case 0x00199B: return 0x00199D; 
							case 0x00198C: return 0x001952; 
							case 0x001988: return 0x00193E; 
							case 0x0019AB: return 0x0019ED; 
							case 0x0019A8: return 0x0019DE; 
							case 0x00199F: return 0x0019B1; 
							case 0x001991: return 0x00196B; 
							case 0x001998: return 0x00198E; 
							case 0x001984: return 0x00192A; 
							}

							*w = 1;
							return 0x0019F6;
						}
					}
				}
			}
			else { /* weight > state_00064A */
				if (weight == state_001B05) {
					switch (u) {
					case 0x001B35: return 0x001A74; 
					}

					*w = 1;
					return 0x001A73;
				}
				else if (weight < state_001B05) {
					if (weight == state_000418) {
						switch (u) {
						case 0x000306: return 0x0007FE; 
						}

						*w = 1;
						return 0x0007F1;
					}
					else if (weight < state_000418) {
						if (weight == state_00AABB) {
							switch (u) {
							case 0x00AAA0: return 0x001680; 
							case 0x00AA8D: return 0x00160E; 
							case 0x00AA81: return 0x0015C6; 
							case 0x00AA99: return 0x001656; 
							case 0x00AA90: return 0x001620; 
							case 0x00AAAF: return 0x0016DA; 
							case 0x00AA9D: return 0x00166E; 
							case 0x00AA85: return 0x0015DE; 
							case 0x00AA8A: return 0x0015FC; 
							case 0x00AAAB: return 0x0016C2; 
							case 0x00AA89: return 0x0015F6; 
							case 0x00AAA7: return 0x0016AA; 
							case 0x00AA8E: return 0x001614; 
							case 0x00AA82: return 0x0015CC; 
							case 0x00AA98: return 0x001650; 
							case 0x00AA97: return 0x00164A; 
							case 0x00AAAE: return 0x0016D4; 
							case 0x00AAA3: return 0x001692; 
							case 0x00AA86: return 0x0015E4; 
							case 0x00AA8B: return 0x001602; 
							case 0x00AA93: return 0x001632; 
							case 0x00AAAA: return 0x0016BC; 
							case 0x00AAA6: return 0x0016A4; 
							case 0x00AA8F: return 0x00161A; 
							case 0x00AA83: return 0x0015D2; 
							case 0x00AA9C: return 0x001668; 
							case 0x00AA96: return 0x001644; 
							case 0x00AAAD: return 0x0016CE; 
							case 0x00AAA2: return 0x00168C; 
							case 0x00AA87: return 0x0015EA; 
							case 0x00AAA9: return 0x0016B6; 
							case 0x00AA8C: return 0x001608; 
							case 0x00AA92: return 0x00162C; 
							case 0x00AA9F: return 0x00167A; 
							case 0x00AAA5: return 0x00169E; 
							case 0x00AA9B: return 0x001662; 
							case 0x00AA95: return 0x00163E; 
							case 0x00AAA1: return 0x001686; 
							case 0x00AA80: return 0x0015C0; 
							case 0x00AAA8: return 0x0016B0; 
							case 0x00AA91: return 0x001626; 
							case 0x00AA9E: return 0x001674; 
							case 0x00AA84: return 0x0015D8; 
							case 0x00AAA4: return 0x001698; 
							case 0x00AAAC: return 0x0016C8; 
							case 0x00AA9A: return 0x00165C; 
							case 0x00AA94: return 0x001638; 
							case 0x00AA88: return 0x0015F0; 
							}

							*w = 1;
							return 0x0016E1;
						}
						else if (weight < state_00AABB) {
							if (weight == state_000648) {
								switch (u) {
								case 0x000654: return 0x000AD3; 
								}

								*w = 1;
								return 0x000E08;
							}
						}
					}
					else { /* weight > state_000418 */
						if (weight == state_001B07) {
							switch (u) {
							case 0x001B35: return 0x001A76; 
							}

							*w = 1;
							return 0x001A75;
						}
					}
				}
				else { /* weight > state_001B05 */
					if (weight == state_000627) {
						switch (u) {
						case 0x000653: return 0x000AC9; 
						case 0x000655: return 0x000AD6; 
						case 0x000654: return 0x000ACC; 
						}

						*w = 1;
						return 0x000B06;
					}
					else if (weight < state_000627) {
						if (weight == state_00AABC) {
							switch (u) {
							case 0x00AA95: return 0x00163F; 
							case 0x00AAA1: return 0x001687; 
							case 0x00AA84: return 0x0015D9; 
							case 0x00AA98: return 0x001651; 
							case 0x00AA91: return 0x001627; 
							case 0x00AAAC: return 0x0016C9; 
							case 0x00AA9E: return 0x001675; 
							case 0x00AA88: return 0x0015F1; 
							case 0x00AAA6: return 0x0016A5; 
							case 0x00AA8D: return 0x00160F; 
							case 0x00AA9A: return 0x00165D; 
							case 0x00AA96: return 0x001645; 
							case 0x00AAA2: return 0x00168D; 
							case 0x00AA83: return 0x0015D3; 
							case 0x00AA99: return 0x001657; 
							case 0x00AA92: return 0x00162D; 
							case 0x00AAAD: return 0x0016CF; 
							case 0x00AA9F: return 0x00167B; 
							case 0x00AA87: return 0x0015EB; 
							case 0x00AAA7: return 0x0016AB; 
							case 0x00AA8C: return 0x001609; 
							case 0x00AA9B: return 0x001663; 
							case 0x00AA97: return 0x00164B; 
							case 0x00AAA3: return 0x001693; 
							case 0x00AA82: return 0x0015CD; 
							case 0x00AA93: return 0x001633; 
							case 0x00AAAE: return 0x0016D5; 
							case 0x00AA86: return 0x0015E5; 
							case 0x00AAA8: return 0x0016B1; 
							case 0x00AA8B: return 0x001603; 
							case 0x00AAAA: return 0x0016BD; 
							case 0x00AA9C: return 0x001669; 
							case 0x00AAA4: return 0x001699; 
							case 0x00AA8F: return 0x00161B; 
							case 0x00AA81: return 0x0015C7; 
							case 0x00AA94: return 0x001639; 
							case 0x00AAAF: return 0x0016DB; 
							case 0x00AAA0: return 0x001681; 
							case 0x00AA85: return 0x0015DF; 
							case 0x00AAA9: return 0x0016B7; 
							case 0x00AA8A: return 0x0015FD; 
							case 0x00AA90: return 0x001621; 
							case 0x00AAAB: return 0x0016C3; 
							case 0x00AA9D: return 0x00166F; 
							case 0x00AA89: return 0x0015F7; 
							case 0x00AAA5: return 0x00169F; 
							case 0x00AA8E: return 0x001615; 
							case 0x00AA80: return 0x0015C1; 
							}

							*w = 1;
							return 0x0016E2;
						}
					}
					else { /* weight > state_000627 */
						if (weight == state_000B92) {
							switch (u) {
							case 0x000BD7: return 0x00122E; 
							}

							*w = 1;
							return 0x00122C;
						}
					}
				}
			}
		}
		else { /* weight > state_00004C */
			if (weight == state_00AAB6) {
				switch (u) {
				case 0x00AA9D: return 0x00166C; 
				case 0x00AA87: return 0x0015E8; 
				case 0x00AA8A: return 0x0015FA; 
				case 0x00AAA9: return 0x0016B4; 
				case 0x00AAAD: return 0x0016CC; 
				case 0x00AA92: return 0x00162A; 
				case 0x00AAA0: return 0x00167E; 
				case 0x00AA99: return 0x001654; 
				case 0x00AA83: return 0x0015D0; 
				case 0x00AA96: return 0x001642; 
				case 0x00AA8F: return 0x001618; 
				case 0x00AAA4: return 0x001696; 
				case 0x00AA9C: return 0x001666; 
				case 0x00AA88: return 0x0015EE; 
				case 0x00AA8B: return 0x001600; 
				case 0x00AAA8: return 0x0016AE; 
				case 0x00AAAC: return 0x0016C6; 
				case 0x00AA91: return 0x001624; 
				case 0x00AA98: return 0x00164E; 
				case 0x00AA84: return 0x0015D6; 
				case 0x00AA95: return 0x00163C; 
				case 0x00AAA3: return 0x001690; 
				case 0x00AA80: return 0x0015BE; 
				case 0x00AA9B: return 0x001660; 
				case 0x00AA89: return 0x0015F4; 
				case 0x00AA8C: return 0x001606; 
				case 0x00AAA7: return 0x0016A8; 
				case 0x00AAAB: return 0x0016C0; 
				case 0x00AA90: return 0x00161E; 
				case 0x00AA9F: return 0x001678; 
				case 0x00AA85: return 0x0015DC; 
				case 0x00AAAF: return 0x0016D8; 
				case 0x00AA94: return 0x001636; 
				case 0x00AAA2: return 0x00168A; 
				case 0x00AA81: return 0x0015C4; 
				case 0x00AA9A: return 0x00165A; 
				case 0x00AA8D: return 0x00160C; 
				case 0x00AAA6: return 0x0016A2; 
				case 0x00AAAA: return 0x0016BA; 
				case 0x00AA9E: return 0x001672; 
				case 0x00AA86: return 0x0015E2; 
				case 0x00AAAE: return 0x0016D2; 
				case 0x00AA93: return 0x001630; 
				case 0x00AAA1: return 0x001684; 
				case 0x00AA82: return 0x0015CA; 
				case 0x00AA97: return 0x001648; 
				case 0x00AA8E: return 0x001612; 
				case 0x00AAA5: return 0x00169C; 
				}

				*w = 1;
				return 0x0016DE;
			}
			else if (weight < state_00AAB6) {
				if (weight == state_000E42) {
					switch (u) {
					case 0x000E1C: return 0x00147F; 
					case 0x000E16: return 0x00145B; 
					case 0x000E24: return 0x0014AF; 
					case 0x000E07: return 0x001401; 
					case 0x000E0C: return 0x00141F; 
					case 0x000E12: return 0x001443; 
					case 0x000E1F: return 0x001491; 
					case 0x000E2D: return 0x0014E5; 
					case 0x000E21: return 0x00149D; 
					case 0x000E1B: return 0x001479; 
					case 0x000E15: return 0x001455; 
					case 0x000E25: return 0x0014B5; 
					case 0x000E2A: return 0x0014D3; 
					case 0x000E23: return 0x0014A9; 
					case 0x000E11: return 0x00143D; 
					case 0x000E1E: return 0x00148B; 
					case 0x000E2E: return 0x0014EB; 
					case 0x000E04: return 0x0013EF; 
					case 0x000E1A: return 0x001473; 
					case 0x000E14: return 0x00144F; 
					case 0x000E08: return 0x001407; 
					case 0x000E0D: return 0x001425; 
					case 0x000E01: return 0x0013DD; 
					case 0x000E19: return 0x00146D; 
					case 0x000E28: return 0x0014C7; 
					case 0x000E10: return 0x001437; 
					case 0x000E26: return 0x0014BB; 
					case 0x000E1D: return 0x001485; 
					case 0x000E2B: return 0x0014D9; 
					case 0x000E05: return 0x0013F5; 
					case 0x000E0A: return 0x001413; 
					case 0x000E09: return 0x00140D; 
					case 0x000E0E: return 0x00142B; 
					case 0x000E02: return 0x0013E3; 
					case 0x000E18: return 0x001467; 
					case 0x000E17: return 0x001461; 
					case 0x000E27: return 0x0014C1; 
					case 0x000E2C: return 0x0014DF; 
					case 0x000E06: return 0x0013FB; 
					case 0x000E0B: return 0x001419; 
					case 0x000E13: return 0x001449; 
					case 0x000E29: return 0x0014CD; 
					case 0x000E20: return 0x001497; 
					case 0x000E22: return 0x0014A3; 
					case 0x000E0F: return 0x001431; 
					case 0x000E03: return 0x0013E9; 
					}

					*w = 1;
					return 0x0014F4;
				}
				else if (weight < state_000E42) {
					if (weight == state_000E40) {
						switch (u) {
						case 0x000E04: return 0x0013ED; 
						case 0x000E27: return 0x0014BF; 
						case 0x000E11: return 0x00143B; 
						case 0x000E2C: return 0x0014DD; 
						case 0x000E1E: return 0x001489; 
						case 0x000E18: return 0x001465; 
						case 0x000E0D: return 0x001423; 
						case 0x000E01: return 0x0013DB; 
						case 0x000E1A: return 0x001471; 
						case 0x000E14: return 0x00144D; 
						case 0x000E05: return 0x0013F3; 
						case 0x000E0A: return 0x001411; 
						case 0x000E20: return 0x001495; 
						case 0x000E10: return 0x001435; 
						case 0x000E29: return 0x0014CB; 
						case 0x000E1D: return 0x001483; 
						case 0x000E0E: return 0x001429; 
						case 0x000E24: return 0x0014AD; 
						case 0x000E17: return 0x00145F; 
						case 0x000E02: return 0x0013E1; 
						case 0x000E2D: return 0x0014E3; 
						case 0x000E21: return 0x00149B; 
						case 0x000E13: return 0x001447; 
						case 0x000E22: return 0x0014A1; 
						case 0x000E06: return 0x0013F9; 
						case 0x000E0B: return 0x001417; 
						case 0x000E25: return 0x0014B3; 
						case 0x000E2A: return 0x0014D1; 
						case 0x000E1C: return 0x00147D; 
						case 0x000E16: return 0x001459; 
						case 0x000E0F: return 0x00142F; 
						case 0x000E03: return 0x0013E7; 
						case 0x000E2E: return 0x0014E9; 
						case 0x000E08: return 0x001405; 
						case 0x000E12: return 0x001441; 
						case 0x000E1F: return 0x00148F; 
						case 0x000E07: return 0x0013FF; 
						case 0x000E0C: return 0x00141D; 
						case 0x000E26: return 0x0014B9; 
						case 0x000E2B: return 0x0014D7; 
						case 0x000E1B: return 0x001477; 
						case 0x000E19: return 0x00146B; 
						case 0x000E23: return 0x0014A7; 
						case 0x000E28: return 0x0014C5; 
						case 0x000E09: return 0x00140B; 
						case 0x000E15: return 0x001453; 
						}

						*w = 1;
						return 0x0014F2;
					}
					else if (weight < state_000E40) {
						if (weight == state_001025) {
							switch (u) {
							case 0x00102E: return 0x0018B0; 
							}

							*w = 1;
							return 0x0018AF;
						}
						else if (weight < state_001025) {
							if (weight == state_001B0D) {
								switch (u) {
								case 0x001B35: return 0x001A7C; 
								}

								*w = 1;
								return 0x001A7B;
							}
						}
					}
					else { /* weight > state_000E40 */
						if (weight == state_000E41) {
							switch (u) {
							case 0x000E2C: return 0x0014DE; 
							case 0x000E26: return 0x0014BA; 
							case 0x000E14: return 0x00144E; 
							case 0x000E01: return 0x0013DC; 
							case 0x000E0E: return 0x00142A; 
							case 0x000E08: return 0x001406; 
							case 0x000E1D: return 0x001484; 
							case 0x000E11: return 0x00143C; 
							case 0x000E0A: return 0x001412; 
							case 0x000E04: return 0x0013EE; 
							case 0x000E29: return 0x0014CC; 
							case 0x000E2B: return 0x0014D8; 
							case 0x000E25: return 0x0014B4; 
							case 0x000E15: return 0x001454; 
							case 0x000E1A: return 0x001472; 
							case 0x000E0D: return 0x001424; 
							case 0x000E21: return 0x00149C; 
							case 0x000E2E: return 0x0014EA; 
							case 0x000E1E: return 0x00148A; 
							case 0x000E23: return 0x0014A8; 
							case 0x000E07: return 0x001400; 
							case 0x000E2A: return 0x0014D2; 
							case 0x000E24: return 0x0014AE; 
							case 0x000E12: return 0x001442; 
							case 0x000E03: return 0x0013E8; 
							case 0x000E20: return 0x001496; 
							case 0x000E16: return 0x00145A; 
							case 0x000E28: return 0x0014C6; 
							case 0x000E2D: return 0x0014E4; 
							case 0x000E1B: return 0x001478; 
							case 0x000E0C: return 0x00141E; 
							case 0x000E06: return 0x0013FA; 
							case 0x000E1F: return 0x001490; 
							case 0x000E13: return 0x001448; 
							case 0x000E18: return 0x001466; 
							case 0x000E02: return 0x0013E2; 
							case 0x000E0F: return 0x001430; 
							case 0x000E27: return 0x0014C0; 
							case 0x000E17: return 0x001460; 
							case 0x000E1C: return 0x00147E; 
							case 0x000E0B: return 0x001418; 
							case 0x000E09: return 0x00140C; 
							case 0x000E22: return 0x0014A2; 
							case 0x000E10: return 0x001436; 
							case 0x000E19: return 0x00146C; 
							case 0x000E05: return 0x0013F4; 
							}

							*w = 1;
							return 0x0014F3;
						}
					}
				}
				else { /* weight > state_000E42 */
					if (weight == state_000E44) {
						switch (u) {
						case 0x000E1E: return 0x00148D; 
						case 0x000E10: return 0x001439; 
						case 0x000E08: return 0x001409; 
						case 0x000E01: return 0x0013DF; 
						case 0x000E28: return 0x0014C9; 
						case 0x000E0E: return 0x00142D; 
						case 0x000E14: return 0x001451; 
						case 0x000E2B: return 0x0014DB; 
						case 0x000E27: return 0x0014C3; 
						case 0x000E29: return 0x0014CF; 
						case 0x000E0A: return 0x001415; 
						case 0x000E18: return 0x001469; 
						case 0x000E22: return 0x0014A5; 
						case 0x000E1D: return 0x001487; 
						case 0x000E13: return 0x00144B; 
						case 0x000E09: return 0x00140F; 
						case 0x000E06: return 0x0013FD; 
						case 0x000E17: return 0x001463; 
						case 0x000E1C: return 0x001481; 
						case 0x000E2C: return 0x0014E1; 
						case 0x000E02: return 0x0013E5; 
						case 0x000E0F: return 0x001433; 
						case 0x000E12: return 0x001445; 
						case 0x000E24: return 0x0014B1; 
						case 0x000E0B: return 0x00141B; 
						case 0x000E07: return 0x001403; 
						case 0x000E16: return 0x00145D; 
						case 0x000E20: return 0x001499; 
						case 0x000E23: return 0x0014AB; 
						case 0x000E1B: return 0x00147B; 
						case 0x000E2D: return 0x0014E7; 
						case 0x000E03: return 0x0013EB; 
						case 0x000E1F: return 0x001493; 
						case 0x000E25: return 0x0014B7; 
						case 0x000E0C: return 0x001421; 
						case 0x000E04: return 0x0013F1; 
						case 0x000E11: return 0x00143F; 
						case 0x000E21: return 0x00149F; 
						case 0x000E2E: return 0x0014ED; 
						case 0x000E0D: return 0x001427; 
						case 0x000E15: return 0x001457; 
						case 0x000E1A: return 0x001475; 
						case 0x000E2A: return 0x0014D5; 
						case 0x000E26: return 0x0014BD; 
						case 0x000E05: return 0x0013F7; 
						case 0x000E19: return 0x00146F; 
						}

						*w = 1;
						return 0x0014F6;
					}
					else if (weight < state_000E44) {
						if (weight == state_000E43) {
							switch (u) {
							case 0x000E02: return 0x0013E4; 
							case 0x000E22: return 0x0014A4; 
							case 0x000E13: return 0x00144A; 
							case 0x000E25: return 0x0014B6; 
							case 0x000E2A: return 0x0014D4; 
							case 0x000E06: return 0x0013FC; 
							case 0x000E0B: return 0x00141A; 
							case 0x000E28: return 0x0014C8; 
							case 0x000E1C: return 0x001480; 
							case 0x000E2E: return 0x0014EC; 
							case 0x000E20: return 0x001498; 
							case 0x000E0F: return 0x001432; 
							case 0x000E01: return 0x0013DE; 
							case 0x000E14: return 0x001450; 
							case 0x000E24: return 0x0014B0; 
							case 0x000E05: return 0x0013F6; 
							case 0x000E0A: return 0x001414; 
							case 0x000E10: return 0x001438; 
							case 0x000E1D: return 0x001486; 
							case 0x000E2D: return 0x0014E6; 
							case 0x000E09: return 0x00140E; 
							case 0x000E0E: return 0x00142C; 
							case 0x000E15: return 0x001456; 
							case 0x000E27: return 0x0014C2; 
							case 0x000E2C: return 0x0014E0; 
							case 0x000E04: return 0x0013F0; 
							case 0x000E18: return 0x001468; 
							case 0x000E11: return 0x00143E; 
							case 0x000E1E: return 0x00148C; 
							case 0x000E08: return 0x001408; 
							case 0x000E23: return 0x0014AA; 
							case 0x000E0D: return 0x001426; 
							case 0x000E1A: return 0x001474; 
							case 0x000E16: return 0x00145C; 
							case 0x000E26: return 0x0014BC; 
							case 0x000E2B: return 0x0014DA; 
							case 0x000E03: return 0x0013EA; 
							case 0x000E19: return 0x00146E; 
							case 0x000E29: return 0x0014CE; 
							case 0x000E12: return 0x001444; 
							case 0x000E1F: return 0x001492; 
							case 0x000E07: return 0x001402; 
							case 0x000E0C: return 0x001420; 
							case 0x000E1B: return 0x00147A; 
							case 0x000E17: return 0x001462; 
							case 0x000E21: return 0x00149E; 
							}

							*w = 1;
							return 0x0014F5;
						}
					}
					else { /* weight > state_000E44 */
						if (weight == state_00AAB5) {
							switch (u) {
							case 0x00AAA8: return 0x0016AD; 
							case 0x00AA9F: return 0x001677; 
							case 0x00AA93: return 0x00162F; 
							case 0x00AAAA: return 0x0016B9; 
							case 0x00AAA7: return 0x0016A7; 
							case 0x00AA82: return 0x0015C9; 
							case 0x00AA8F: return 0x001617; 
							case 0x00AA97: return 0x001647; 
							case 0x00AAAE: return 0x0016D1; 
							case 0x00AA9C: return 0x001665; 
							case 0x00AAA0: return 0x00167D; 
							case 0x00AA8B: return 0x0015FF; 
							case 0x00AAA9: return 0x0016B3; 
							case 0x00AA90: return 0x00161D; 
							case 0x00AAA4: return 0x001695; 
							case 0x00AA85: return 0x0015DB; 
							case 0x00AA94: return 0x001635; 
							case 0x00AAAB: return 0x0016BF; 
							case 0x00AA81: return 0x0015C3; 
							case 0x00AAA1: return 0x001683; 
							case 0x00AA8E: return 0x001611; 
							case 0x00AA98: return 0x00164D; 
							case 0x00AAAF: return 0x0016D7; 
							case 0x00AA9D: return 0x00166B; 
							case 0x00AA91: return 0x001623; 
							case 0x00AAA5: return 0x00169B; 
							case 0x00AA8A: return 0x0015F9; 
							case 0x00AA84: return 0x0015D5; 
							case 0x00AA95: return 0x00163B; 
							case 0x00AA89: return 0x0015F3; 
							case 0x00AAAC: return 0x0016C5; 
							case 0x00AA9A: return 0x001659; 
							case 0x00AA80: return 0x0015BD; 
							case 0x00AA8D: return 0x00160B; 
							case 0x00AA99: return 0x001653; 
							case 0x00AA9E: return 0x001671; 
							case 0x00AAA2: return 0x001689; 
							case 0x00AA87: return 0x0015E7; 
							case 0x00AA92: return 0x001629; 
							case 0x00AA88: return 0x0015ED; 
							case 0x00AAA6: return 0x0016A1; 
							case 0x00AA83: return 0x0015CF; 
							case 0x00AA96: return 0x001641; 
							case 0x00AAAD: return 0x0016CB; 
							case 0x00AA9B: return 0x00165F; 
							case 0x00AAA3: return 0x00168F; 
							case 0x00AA8C: return 0x001605; 
							case 0x00AA86: return 0x0015E1; 
							}

							*w = 1;
							return 0x0016DD;
						}
					}
				}
			}
			else { /* weight > state_00AAB6 */
				if (weight == state_000EC2) {
					switch (u) {
					case 0x000E82: return 0x001507; 
					case 0x000E9B: return 0x00155B; 
					case 0x000EDD: return 0x0015A3; 
					case 0x000EAD: return 0x0015A9; 
					case 0x000E9F: return 0x001573; 
					case 0x000EAA: return 0x00151F; 
					case 0x000E81: return 0x001501; 
					case 0x000E9C: return 0x001561; 
					case 0x000E94: return 0x001537; 
					case 0x000EDC: return 0x00159D; 
					case 0x000EAE: return 0x0015AF; 
					case 0x000EA1: return 0x001579; 
					case 0x000E84: return 0x00150D; 
					case 0x000EA5: return 0x00158B; 
					case 0x000EAB: return 0x001597; 
					case 0x000E95: return 0x00153D; 
					case 0x000EA2: return 0x00157F; 
					case 0x000E99: return 0x00154F; 
					case 0x000E8A: return 0x001525; 
					case 0x000EDF: return 0x00152B; 
					case 0x000E88: return 0x001519; 
					case 0x000E9D: return 0x001567; 
					case 0x000E87: return 0x001513; 
					case 0x000E96: return 0x001543; 
					case 0x000E8D: return 0x001531; 
					case 0x000E9A: return 0x001555; 
					case 0x000EA3: return 0x001585; 
					case 0x000EDE: return 0x0014FB; 
					case 0x000E9E: return 0x00156D; 
					case 0x000EA7: return 0x001591; 
					case 0x000E97: return 0x001549; 
					}

					*w = 1;
					return 0x0015B9;
				}
				else if (weight < state_000EC2) {
					if (weight == state_000EC0) {
						switch (u) {
						case 0x000E84: return 0x00150B; 
						case 0x000E9D: return 0x001565; 
						case 0x000E8A: return 0x001523; 
						case 0x000EAB: return 0x001595; 
						case 0x000E88: return 0x001517; 
						case 0x000E99: return 0x00154D; 
						case 0x000E96: return 0x001541; 
						case 0x000EA2: return 0x00157D; 
						case 0x000E87: return 0x001511; 
						case 0x000E9E: return 0x00156B; 
						case 0x000EDE: return 0x0014F9; 
						case 0x000E9A: return 0x001553; 
						case 0x000EA7: return 0x00158F; 
						case 0x000E82: return 0x001505; 
						case 0x000E8D: return 0x00152F; 
						case 0x000E97: return 0x001547; 
						case 0x000EA3: return 0x001583; 
						case 0x000EAD: return 0x0015A7; 
						case 0x000EDD: return 0x0015A1; 
						case 0x000E9F: return 0x001571; 
						case 0x000E94: return 0x001535; 
						case 0x000E9B: return 0x001559; 
						case 0x000EAE: return 0x0015AD; 
						case 0x000E81: return 0x0014FF; 
						case 0x000EAA: return 0x00151D; 
						case 0x000EA5: return 0x001589; 
						case 0x000EDC: return 0x00159B; 
						case 0x000E95: return 0x00153B; 
						case 0x000E9C: return 0x00155F; 
						case 0x000EA1: return 0x001577; 
						case 0x000EDF: return 0x001529; 
						}

						*w = 1;
						return 0x0015B7;
					}
					else if (weight < state_000EC0) {
						if (weight == state_000EC1) {
							switch (u) {
							case 0x000EAD: return 0x0015A8; 
							case 0x000E97: return 0x001548; 
							case 0x000EA1: return 0x001578; 
							case 0x000E9C: return 0x001560; 
							case 0x000E82: return 0x001506; 
							case 0x000EDE: return 0x0014FA; 
							case 0x000EA5: return 0x00158A; 
							case 0x000E87: return 0x001512; 
							case 0x000E96: return 0x001542; 
							case 0x000E9B: return 0x00155A; 
							case 0x000E99: return 0x00154E; 
							case 0x000E88: return 0x001518; 
							case 0x000EAB: return 0x001596; 
							case 0x000E9F: return 0x001572; 
							case 0x000E84: return 0x00150C; 
							case 0x000EDF: return 0x00152A; 
							case 0x000EA3: return 0x001584; 
							case 0x000E8D: return 0x001530; 
							case 0x000E95: return 0x00153C; 
							case 0x000EDC: return 0x00159C; 
							case 0x000EA7: return 0x001590; 
							case 0x000E9A: return 0x001554; 
							case 0x000EAA: return 0x00151E; 
							case 0x000E9E: return 0x00156C; 
							case 0x000EA2: return 0x00157E; 
							case 0x000E81: return 0x001500; 
							case 0x000EAE: return 0x0015AE; 
							case 0x000E94: return 0x001536; 
							case 0x000E8A: return 0x001524; 
							case 0x000EDD: return 0x0015A2; 
							case 0x000E9D: return 0x001566; 
							}

							*w = 1;
							return 0x0015B8;
						}
					}
					else { /* weight > state_000EC0 */
						if (weight == state_000EC3) {
							switch (u) {
							case 0x000E96: return 0x001544; 
							case 0x000EAE: return 0x0015B0; 
							case 0x000E9C: return 0x001562; 
							case 0x000EA1: return 0x00157A; 
							case 0x000EDE: return 0x0014FC; 
							case 0x000EA5: return 0x00158C; 
							case 0x000E84: return 0x00150E; 
							case 0x000E95: return 0x00153E; 
							case 0x000EAD: return 0x0015AA; 
							case 0x000E9B: return 0x00155C; 
							case 0x000E99: return 0x001550; 
							case 0x000EDF: return 0x00152C; 
							case 0x000E9F: return 0x001574; 
							case 0x000E94: return 0x001538; 
							case 0x000E88: return 0x00151A; 
							case 0x000EDC: return 0x00159E; 
							case 0x000E81: return 0x001502; 
							case 0x000E9A: return 0x001556; 
							case 0x000E8D: return 0x001532; 
							case 0x000E9E: return 0x00156E; 
							case 0x000EA3: return 0x001586; 
							case 0x000EA7: return 0x001592; 
							case 0x000EAB: return 0x001598; 
							case 0x000E82: return 0x001508; 
							case 0x000E97: return 0x00154A; 
							case 0x000E9D: return 0x001568; 
							case 0x000EA2: return 0x001580; 
							case 0x000E87: return 0x001514; 
							case 0x000E8A: return 0x001526; 
							case 0x000EDD: return 0x0015A4; 
							case 0x000EAA: return 0x001520; 
							}

							*w = 1;
							return 0x0015BA;
						}
					}
				}
				else { /* weight > state_000EC2 */
					if (weight == state_001B0B) {
						switch (u) {
						case 0x001B35: return 0x001A7A; 
						}

						*w = 1;
						return 0x001A79;
					}
					else if (weight < state_001B0B) {
						if (weight == state_000EC4) {
							switch (u) {
							case 0x000EDD: return 0x0015A5; 
							case 0x000E9F: return 0x001575; 
							case 0x000EAA: return 0x001521; 
							case 0x000EA7: return 0x001593; 
							case 0x000E82: return 0x001509; 
							case 0x000E97: return 0x00154B; 
							case 0x000EDC: return 0x00159F; 
							case 0x000EAE: return 0x0015B1; 
							case 0x000E9C: return 0x001563; 
							case 0x000E94: return 0x001539; 
							case 0x000EAB: return 0x001599; 
							case 0x000E81: return 0x001503; 
							case 0x000EA1: return 0x00157B; 
							case 0x000EDF: return 0x00152D; 
							case 0x000E9D: return 0x001569; 
							case 0x000EA5: return 0x00158D; 
							case 0x000E8A: return 0x001527; 
							case 0x000E84: return 0x00150F; 
							case 0x000E95: return 0x00153F; 
							case 0x000E9A: return 0x001557; 
							case 0x000E8D: return 0x001533; 
							case 0x000E99: return 0x001551; 
							case 0x000E9E: return 0x00156F; 
							case 0x000EA2: return 0x001581; 
							case 0x000E87: return 0x001515; 
							case 0x000EDE: return 0x0014FD; 
							case 0x000E88: return 0x00151B; 
							case 0x000E96: return 0x001545; 
							case 0x000EAD: return 0x0015AB; 
							case 0x000E9B: return 0x00155D; 
							case 0x000EA3: return 0x001587; 
							}

							*w = 1;
							return 0x0015BB;
						}
					}
					else { /* weight > state_001B0B */
						if (weight == state_001B11) {
							switch (u) {
							case 0x001B35: return 0x001A80; 
							}

							*w = 1;
							return 0x001A7F;
						}
					}
				}
			}
		}
	}

	return 0;
}
