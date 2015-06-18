/* Automatically generated file (contractions-toc), 1434551853
 *
 * Tag          : _nu_ducet
 * Contractions : 686
 */

#include <stdint.h>

#include "udb.h"

const size_t _NU_DUCET_CONTRACTIONS = 686; /* contractions included in switch */
const size_t _NU_DUCET_CODEPOINTS = 18046; /* complementary codepoints number */

#define state_00AAB9 -731
#define state_000430 -713
#define state_000433 -712
#define state_000435 -711
#define state_000436 -710
#define state_000437 -709
#define state_00043A -701
#define state_00043E -698
#define state_001B07 -656
#define state_000438 -655
#define state_001B09 -636
#define state_00006C -620
#define state_0004D9 -608
#define state_0004D8 -607
#define state_00064A -606
#define state_000648 -595
#define state_00042B -592
#define state_00042D -591
#define state_00AABB -588
#define state_000456 -567
#define state_000423 -547
#define state_000427 -546
#define state_00041A -441
#define state_00041E -439
#define state_000413 -438
#define state_000410 -437
#define state_000416 -436
#define state_000417 -435
#define state_000415 -434
#define state_000418 -433
#define state_001B05 -387
#define state_00AABC -344
#define state_000627 -341
#define state_000B92 -331
#define state_000443 -330
#define state_000447 -329
#define state_00004C -294
#define state_00044B -288
#define state_00044D -287
#define state_001B0D -221
#define state_001025 -188
#define state_000406 -187
#define state_000E40 -167
#define state_000E41 -166
#define state_000E42 -165
#define state_000E43 -164
#define state_000E44 -163
#define state_00AAB5 -141
#define state_00AAB6 -132
#define state_000EC1 -93
#define state_000EC0 -92
#define state_000EC3 -91
#define state_000EC2 -90
#define state_000EC4 -89
#define state_000474 -87
#define state_000475 -86
#define state_001B0B -53
#define state_0004E8 -48
#define state_0004E9 -47
#define state_001B11 -23

const int16_t _NU_DUCET_ROOTS_G[] = {
	0, 0, 0, 0, -56, -53, 0, 0, 32, 0, 0, 0, 
	-52, 0, 0, -51, -42, 0, -41, -35, -31, -25, 1, 0, 
	0, -23, -20, 6, 0, 1, -17, 0, 1, 0, -15, 0, 
	4, -13, 8, 8, 1, 0, -12, -11, 8, 31, 4, 12, 
	-10, -9, 12, 2, 0, 5, 0, -3, 0, 3, 0, 0, 
};

const size_t _NU_DUCET_ROOTS_G_SIZE = sizeof(_NU_DUCET_ROOTS_G) / sizeof(*_NU_DUCET_ROOTS_G);

/* codepoints */
const uint32_t _NU_DUCET_ROOTS_VALUES_C[] = {
	0x000E40, 0x00064A, 0x000418, 0x000EC3, 0x000EC0, 0x000EC1, 0x000438, 0x00043E, 
	0x000416, 0x000417, 0x000EC4, 0x001B05, 0x000EC2, 0x001B0D, 0x00AAB9, 0x001B0B, 
	0x00AAB5, 0x000E42, 0x001B07, 0x000475, 0x00AABC, 0x000B92, 0x00043A, 0x00AAB6, 
	0x000436, 0x001B09, 0x00AABB, 0x000456, 0x001B11, 0x000415, 0x000437, 0x000413, 
	0x000410, 0x00041E, 0x000430, 0x00041A, 0x00006C, 0x0004D9, 0x000423, 0x000427, 
	0x00044D, 0x000433, 0x0004D8, 0x000627, 0x000648, 0x00042D, 0x00042B, 0x000447, 
	0x0004E8, 0x0004E9, 0x00004C, 0x00044B, 0x000406, 0x000E41, 0x000E44, 0x000443, 
	0x000435, 0x001025, 0x000474, 0x000E43, };

/* indexes */
const uint16_t _NU_DUCET_ROOTS_VALUES_I[] = {
	0x00A7, 0x025E, 0x01B1, 0x005B, 0x005C, 0x005D, 0x028F, 0x02BA, 0x01B4, 0x01B3, 
	0x0059, 0x0183, 0x005A, 0x00DD, 0x02DB, 0x0035, 0x008D, 0x00A5, 0x0290, 0x0056, 
	0x0158, 0x014B, 0x02BD, 0x0084, 0x02C6, 0x027C, 0x024C, 0x0237, 0x0017, 0x01B2, 
	0x02C5, 0x01B6, 0x01B5, 0x01B7, 0x02C9, 0x01B9, 0x026C, 0x0260, 0x0223, 0x0222, 
	0x011F, 0x02C8, 0x025F, 0x0155, 0x0253, 0x024F, 0x0250, 0x0149, 0x0030, 0x002F, 
	0x0126, 0x0120, 0x00BB, 0x00A6, 0x00A3, 0x014A, 0x02C7, 0x00BC, 0x0057, 0x00A4, 
};

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

		if (weight == state_001B05) {
			switch (u) {
			case 0x001B35: return 0x001D2E; 
			}

			*w = 1;
			return 0x001D2D;
		}
		else if (weight < state_001B05) {
			if (weight == state_000648) {
				switch (u) {
				case 0x000654: return 0x000C01; 
				}

				*w = 1;
				return 0x000F4B;
			}
			else if (weight < state_000648) {
				if (weight == state_00043E) {
					switch (u) {
					case 0x000308: return 0x00096A; 
					}

					*w = 1;
					return 0x000966;
				}
				else if (weight < state_00043E) {
					if (weight == state_000435) {
						switch (u) {
						case 0x000306: return 0x0008ED; 
						}

						*w = 1;
						return 0x0008E7;
					}
					else if (weight < state_000435) {
						if (weight == state_000430) {
							switch (u) {
							case 0x000306: return 0x0008BD; 
							case 0x000308: return 0x0008BF; 
							}

							*w = 1;
							return 0x0008BB;
						}
						else if (weight < state_000430) {
							if (weight == state_00AAB9) {
								switch (u) {
								case 0x00AA92: return 0x001984; 
								case 0x00AAA5: return 0x0019F6; 
								case 0x00AAAC: return 0x001A20; 
								case 0x00AA8F: return 0x001972; 
								case 0x00AA82: return 0x001924; 
								case 0x00AA9C: return 0x0019C0; 
								case 0x00AAA1: return 0x0019DE; 
								case 0x00AA97: return 0x0019A2; 
								case 0x00AAAD: return 0x001A26; 
								case 0x00AA86: return 0x00193C; 
								case 0x00AA93: return 0x00198A; 
								case 0x00AA9D: return 0x0019C6; 
								case 0x00AA8A: return 0x001954; 
								case 0x00AAA6: return 0x0019FC; 
								case 0x00AA94: return 0x001990; 
								case 0x00AA8E: return 0x00196C; 
								case 0x00AAAE: return 0x001A2C; 
								case 0x00AA81: return 0x00191E; 
								case 0x00AAA2: return 0x0019E4; 
								case 0x00AA90: return 0x001978; 
								case 0x00AA9E: return 0x0019CC; 
								case 0x00AAAA: return 0x001A14; 
								case 0x00AA85: return 0x001936; 
								case 0x00AA9A: return 0x0019B4; 
								case 0x00AAA7: return 0x001A02; 
								case 0x00AA95: return 0x001996; 
								case 0x00AA89: return 0x00194E; 
								case 0x00AA8D: return 0x001966; 
								case 0x00AA80: return 0x001918; 
								case 0x00AA98: return 0x0019A8; 
								case 0x00AAA3: return 0x0019EA; 
								case 0x00AA91: return 0x00197E; 
								case 0x00AAA8: return 0x001A08; 
								case 0x00AAAF: return 0x001A32; 
								case 0x00AA84: return 0x001930; 
								case 0x00AA8C: return 0x001960; 
								case 0x00AA9F: return 0x0019D2; 
								case 0x00AAA4: return 0x0019F0; 
								case 0x00AAAB: return 0x001A1A; 
								case 0x00AA88: return 0x001948; 
								case 0x00AA83: return 0x00192A; 
								case 0x00AA99: return 0x0019AE; 
								case 0x00AA9B: return 0x0019BA; 
								case 0x00AAA0: return 0x0019D8; 
								case 0x00AA96: return 0x00199C; 
								case 0x00AAA9: return 0x001A0E; 
								case 0x00AA87: return 0x001942; 
								case 0x00AA8B: return 0x00195A; 
								}

								*w = 1;
								return 0x001A38;
							}
						}
						else { /* weight > state_000430 */
							if (weight == state_000433) {
								switch (u) {
								case 0x000341: return 0x0008E3; 
								case 0x000301: return 0x0008E3; 
								}

								*w = 1;
								return 0x0008CB;
							}
						}
					}
					else { /* weight > state_000435 */
						if (weight == state_000437) {
							switch (u) {
							case 0x000308: return 0x000905; 
							}

							*w = 1;
							return 0x0008FD;
						}
						else if (weight < state_000437) {
							if (weight == state_000436) {
								switch (u) {
								case 0x000308: return 0x0008F9; 
								}

								*w = 1;
								return 0x0008F1;
							}
						}
						else { /* weight > state_000437 */
							if (weight == state_00043A) {
								switch (u) {
								case 0x000341: return 0x000990; 
								case 0x000301: return 0x000990; 
								}

								*w = 1;
								return 0x00092B;
							}
						}
					}
				}
				else { /* weight > state_00043E */
					if (weight == state_00006C) {
						switch (u) {
						case 0x0000B7: return 0x0003ED; 
						case 0x000387: return 0x0003ED; 
						}

						*w = 1;
						return 0x0003E4;
					}
					else if (weight < state_00006C) {
						if (weight == state_000438) {
							switch (u) {
							case 0x000306: return 0x000925; 
							case 0x000308: return 0x00091D; 
							}

							*w = 1;
							return 0x000915;
						}
						else if (weight < state_000438) {
							if (weight == state_001B07) {
								switch (u) {
								case 0x001B35: return 0x001D30; 
								}

								*w = 1;
								return 0x001D2F;
							}
						}
						else { /* weight > state_000438 */
							if (weight == state_001B09) {
								switch (u) {
								case 0x001B35: return 0x001D32; 
								}

								*w = 1;
								return 0x001D31;
							}
						}
					}
					else { /* weight > state_00006C */
						if (weight == state_0004D8) {
							switch (u) {
							case 0x000308: return 0x0008C4; 
							}

							*w = 1;
							return 0x0008C2;
						}
						else if (weight < state_0004D8) {
							if (weight == state_0004D9) {
								switch (u) {
								case 0x000308: return 0x0008C3; 
								}

								*w = 1;
								return 0x0008C1;
							}
						}
						else { /* weight > state_0004D8 */
							if (weight == state_00064A) {
								switch (u) {
								case 0x000654: return 0x000C0A; 
								}

								*w = 1;
								return 0x000F73;
							}
						}
					}
				}
			}
			else { /* weight > state_000648 */
				if (weight == state_00041E) {
					switch (u) {
					case 0x000308: return 0x00096B; 
					}

					*w = 1;
					return 0x000968;
				}
				else if (weight < state_00041E) {
					if (weight == state_000456) {
						switch (u) {
						case 0x000308: return 0x000923; 
						}

						*w = 1;
						return 0x00091F;
					}
					else if (weight < state_000456) {
						if (weight == state_00042D) {
							switch (u) {
							case 0x000308: return 0x0009F9; 
							}

							*w = 1;
							return 0x0009F7;
						}
						else if (weight < state_00042D) {
							if (weight == state_00042B) {
								switch (u) {
								case 0x000308: return 0x0009ED; 
								}

								*w = 1;
								return 0x0009EB;
							}
						}
						else { /* weight > state_00042D */
							if (weight == state_00AABB) {
								switch (u) {
								case 0x00AAA0: return 0x0019D9; 
								case 0x00AA8D: return 0x001967; 
								case 0x00AA81: return 0x00191F; 
								case 0x00AA99: return 0x0019AF; 
								case 0x00AA90: return 0x001979; 
								case 0x00AAAF: return 0x001A33; 
								case 0x00AA9D: return 0x0019C7; 
								case 0x00AA85: return 0x001937; 
								case 0x00AA8A: return 0x001955; 
								case 0x00AAAB: return 0x001A1B; 
								case 0x00AA89: return 0x00194F; 
								case 0x00AAA7: return 0x001A03; 
								case 0x00AA8E: return 0x00196D; 
								case 0x00AA82: return 0x001925; 
								case 0x00AA98: return 0x0019A9; 
								case 0x00AA97: return 0x0019A3; 
								case 0x00AAAE: return 0x001A2D; 
								case 0x00AAA3: return 0x0019EB; 
								case 0x00AA86: return 0x00193D; 
								case 0x00AA8B: return 0x00195B; 
								case 0x00AA93: return 0x00198B; 
								case 0x00AAAA: return 0x001A15; 
								case 0x00AAA6: return 0x0019FD; 
								case 0x00AA8F: return 0x001973; 
								case 0x00AA83: return 0x00192B; 
								case 0x00AA9C: return 0x0019C1; 
								case 0x00AA96: return 0x00199D; 
								case 0x00AAAD: return 0x001A27; 
								case 0x00AAA2: return 0x0019E5; 
								case 0x00AA87: return 0x001943; 
								case 0x00AAA9: return 0x001A0F; 
								case 0x00AA8C: return 0x001961; 
								case 0x00AA92: return 0x001985; 
								case 0x00AA9F: return 0x0019D3; 
								case 0x00AAA5: return 0x0019F7; 
								case 0x00AA9B: return 0x0019BB; 
								case 0x00AA95: return 0x001997; 
								case 0x00AAA1: return 0x0019DF; 
								case 0x00AA80: return 0x001919; 
								case 0x00AAA8: return 0x001A09; 
								case 0x00AA91: return 0x00197F; 
								case 0x00AA9E: return 0x0019CD; 
								case 0x00AA84: return 0x001931; 
								case 0x00AAA4: return 0x0019F1; 
								case 0x00AAAC: return 0x001A21; 
								case 0x00AA9A: return 0x0019B5; 
								case 0x00AA94: return 0x001991; 
								case 0x00AA88: return 0x001949; 
								}

								*w = 1;
								return 0x001A3A;
							}
						}
					}
					else { /* weight > state_000456 */
						if (weight == state_000427) {
							switch (u) {
							case 0x000308: return 0x0009CF; 
							}

							*w = 1;
							return 0x0009C9;
						}
						else if (weight < state_000427) {
							if (weight == state_000423) {
								switch (u) {
								case 0x000306: return 0x000997; 
								case 0x000308: return 0x000999; 
								case 0x00030B: return 0x00099B; 
								}

								*w = 1;
								return 0x000994;
							}
						}
						else { /* weight > state_000427 */
							if (weight == state_00041A) {
								switch (u) {
								case 0x000341: return 0x000991; 
								case 0x000301: return 0x000991; 
								}

								*w = 1;
								return 0x00092C;
							}
						}
					}
				}
				else { /* weight > state_00041E */
					if (weight == state_000417) {
						switch (u) {
						case 0x000308: return 0x000906; 
						}

						*w = 1;
						return 0x0008FE;
					}
					else if (weight < state_000417) {
						if (weight == state_000410) {
							switch (u) {
							case 0x000308: return 0x0008C0; 
							case 0x000306: return 0x0008BE; 
							}

							*w = 1;
							return 0x0008BC;
						}
						else if (weight < state_000410) {
							if (weight == state_000413) {
								switch (u) {
								case 0x000341: return 0x0008E4; 
								case 0x000301: return 0x0008E4; 
								}

								*w = 1;
								return 0x0008CD;
							}
						}
						else { /* weight > state_000410 */
							if (weight == state_000416) {
								switch (u) {
								case 0x000308: return 0x0008FA; 
								}

								*w = 1;
								return 0x0008F3;
							}
						}
					}
					else { /* weight > state_000417 */
						if (weight == state_000418) {
							switch (u) {
							case 0x000308: return 0x00091E; 
							case 0x000306: return 0x000926; 
							}

							*w = 1;
							return 0x000918;
						}
						else if (weight < state_000418) {
							if (weight == state_000415) {
								switch (u) {
								case 0x000306: return 0x0008EE; 
								}

								*w = 1;
								return 0x0008EA;
							}
						}
					}
				}
			}
		}
		else { /* weight > state_001B05 */
			if (weight == state_000E43) {
				switch (u) {
				case 0x000E02: return 0x00173D; 
				case 0x000E22: return 0x0017FD; 
				case 0x000E13: return 0x0017A3; 
				case 0x000E25: return 0x00180F; 
				case 0x000E2A: return 0x00182D; 
				case 0x000E06: return 0x001755; 
				case 0x000E0B: return 0x001773; 
				case 0x000E28: return 0x001821; 
				case 0x000E1C: return 0x0017D9; 
				case 0x000E2E: return 0x001845; 
				case 0x000E20: return 0x0017F1; 
				case 0x000E0F: return 0x00178B; 
				case 0x000E01: return 0x001737; 
				case 0x000E14: return 0x0017A9; 
				case 0x000E24: return 0x001809; 
				case 0x000E05: return 0x00174F; 
				case 0x000E0A: return 0x00176D; 
				case 0x000E10: return 0x001791; 
				case 0x000E1D: return 0x0017DF; 
				case 0x000E2D: return 0x00183F; 
				case 0x000E09: return 0x001767; 
				case 0x000E0E: return 0x001785; 
				case 0x000E15: return 0x0017AF; 
				case 0x000E27: return 0x00181B; 
				case 0x000E2C: return 0x001839; 
				case 0x000E04: return 0x001749; 
				case 0x000E18: return 0x0017C1; 
				case 0x000E11: return 0x001797; 
				case 0x000E1E: return 0x0017E5; 
				case 0x000E08: return 0x001761; 
				case 0x000E23: return 0x001803; 
				case 0x000E0D: return 0x00177F; 
				case 0x000E1A: return 0x0017CD; 
				case 0x000E16: return 0x0017B5; 
				case 0x000E26: return 0x001815; 
				case 0x000E2B: return 0x001833; 
				case 0x000E03: return 0x001743; 
				case 0x000E19: return 0x0017C7; 
				case 0x000E29: return 0x001827; 
				case 0x000E12: return 0x00179D; 
				case 0x000E1F: return 0x0017EB; 
				case 0x000E07: return 0x00175B; 
				case 0x000E0C: return 0x001779; 
				case 0x000E1B: return 0x0017D3; 
				case 0x000E17: return 0x0017BB; 
				case 0x000E21: return 0x0017F7; 
				}

				*w = 1;
				return 0x00184E;
			}
			else if (weight < state_000E43) {
				if (weight == state_00044D) {
					switch (u) {
					case 0x000308: return 0x0009F8; 
					}

					*w = 1;
					return 0x0009F6;
				}
				else if (weight < state_00044D) {
					if (weight == state_000443) {
						switch (u) {
						case 0x00030B: return 0x00099A; 
						case 0x000308: return 0x000998; 
						case 0x000306: return 0x000996; 
						}

						*w = 1;
						return 0x000992;
					}
					else if (weight < state_000443) {
						if (weight == state_000627) {
							switch (u) {
							case 0x000653: return 0x000BF7; 
							case 0x000655: return 0x000C04; 
							case 0x000654: return 0x000BFA; 
							}

							*w = 1;
							return 0x000C34;
						}
						else if (weight < state_000627) {
							if (weight == state_00AABC) {
								switch (u) {
								case 0x00AA95: return 0x001998; 
								case 0x00AAA1: return 0x0019E0; 
								case 0x00AA84: return 0x001932; 
								case 0x00AA98: return 0x0019AA; 
								case 0x00AA91: return 0x001980; 
								case 0x00AAAC: return 0x001A22; 
								case 0x00AA9E: return 0x0019CE; 
								case 0x00AA88: return 0x00194A; 
								case 0x00AAA6: return 0x0019FE; 
								case 0x00AA8D: return 0x001968; 
								case 0x00AA9A: return 0x0019B6; 
								case 0x00AA96: return 0x00199E; 
								case 0x00AAA2: return 0x0019E6; 
								case 0x00AA83: return 0x00192C; 
								case 0x00AA99: return 0x0019B0; 
								case 0x00AA92: return 0x001986; 
								case 0x00AAAD: return 0x001A28; 
								case 0x00AA9F: return 0x0019D4; 
								case 0x00AA87: return 0x001944; 
								case 0x00AAA7: return 0x001A04; 
								case 0x00AA8C: return 0x001962; 
								case 0x00AA9B: return 0x0019BC; 
								case 0x00AA97: return 0x0019A4; 
								case 0x00AAA3: return 0x0019EC; 
								case 0x00AA82: return 0x001926; 
								case 0x00AA93: return 0x00198C; 
								case 0x00AAAE: return 0x001A2E; 
								case 0x00AA86: return 0x00193E; 
								case 0x00AAA8: return 0x001A0A; 
								case 0x00AA8B: return 0x00195C; 
								case 0x00AAAA: return 0x001A16; 
								case 0x00AA9C: return 0x0019C2; 
								case 0x00AAA4: return 0x0019F2; 
								case 0x00AA8F: return 0x001974; 
								case 0x00AA81: return 0x001920; 
								case 0x00AA94: return 0x001992; 
								case 0x00AAAF: return 0x001A34; 
								case 0x00AAA0: return 0x0019DA; 
								case 0x00AA85: return 0x001938; 
								case 0x00AAA9: return 0x001A10; 
								case 0x00AA8A: return 0x001956; 
								case 0x00AA90: return 0x00197A; 
								case 0x00AAAB: return 0x001A1C; 
								case 0x00AA9D: return 0x0019C8; 
								case 0x00AA89: return 0x001950; 
								case 0x00AAA5: return 0x0019F8; 
								case 0x00AA8E: return 0x00196E; 
								case 0x00AA80: return 0x00191A; 
								}

								*w = 1;
								return 0x001A3B;
							}
						}
						else { /* weight > state_000627 */
							if (weight == state_000B92) {
								switch (u) {
								case 0x000BD7: return 0x001363; 
								}

								*w = 1;
								return 0x001361;
							}
						}
					}
					else { /* weight > state_000443 */
						if (weight == state_00004C) {
							switch (u) {
							case 0x000387: return 0x0003FE; 
							case 0x0000B7: return 0x0003FE; 
							}

							*w = 1;
							return 0x0003F5;
						}
						else if (weight < state_00004C) {
							if (weight == state_000447) {
								switch (u) {
								case 0x000308: return 0x0009CE; 
								}

								*w = 1;
								return 0x0009C8;
							}
						}
						else { /* weight > state_00004C */
							if (weight == state_00044B) {
								switch (u) {
								case 0x000308: return 0x0009EC; 
								}

								*w = 1;
								return 0x0009EA;
							}
						}
					}
				}
				else { /* weight > state_00044D */
					if (weight == state_000E40) {
						switch (u) {
						case 0x000E04: return 0x001746; 
						case 0x000E27: return 0x001818; 
						case 0x000E11: return 0x001794; 
						case 0x000E2C: return 0x001836; 
						case 0x000E1E: return 0x0017E2; 
						case 0x000E18: return 0x0017BE; 
						case 0x000E0D: return 0x00177C; 
						case 0x000E01: return 0x001734; 
						case 0x000E1A: return 0x0017CA; 
						case 0x000E14: return 0x0017A6; 
						case 0x000E05: return 0x00174C; 
						case 0x000E0A: return 0x00176A; 
						case 0x000E20: return 0x0017EE; 
						case 0x000E10: return 0x00178E; 
						case 0x000E29: return 0x001824; 
						case 0x000E1D: return 0x0017DC; 
						case 0x000E0E: return 0x001782; 
						case 0x000E24: return 0x001806; 
						case 0x000E17: return 0x0017B8; 
						case 0x000E02: return 0x00173A; 
						case 0x000E2D: return 0x00183C; 
						case 0x000E21: return 0x0017F4; 
						case 0x000E13: return 0x0017A0; 
						case 0x000E22: return 0x0017FA; 
						case 0x000E06: return 0x001752; 
						case 0x000E0B: return 0x001770; 
						case 0x000E25: return 0x00180C; 
						case 0x000E2A: return 0x00182A; 
						case 0x000E1C: return 0x0017D6; 
						case 0x000E16: return 0x0017B2; 
						case 0x000E0F: return 0x001788; 
						case 0x000E03: return 0x001740; 
						case 0x000E2E: return 0x001842; 
						case 0x000E08: return 0x00175E; 
						case 0x000E12: return 0x00179A; 
						case 0x000E1F: return 0x0017E8; 
						case 0x000E07: return 0x001758; 
						case 0x000E0C: return 0x001776; 
						case 0x000E26: return 0x001812; 
						case 0x000E2B: return 0x001830; 
						case 0x000E1B: return 0x0017D0; 
						case 0x000E19: return 0x0017C4; 
						case 0x000E23: return 0x001800; 
						case 0x000E28: return 0x00181E; 
						case 0x000E09: return 0x001764; 
						case 0x000E15: return 0x0017AC; 
						}

						*w = 1;
						return 0x00184B;
					}
					else if (weight < state_000E40) {
						if (weight == state_001025) {
							switch (u) {
							case 0x00102E: return 0x001C09; 
							}

							*w = 1;
							return 0x001C08;
						}
						else if (weight < state_001025) {
							if (weight == state_001B0D) {
								switch (u) {
								case 0x001B35: return 0x001D36; 
								}

								*w = 1;
								return 0x001D35;
							}
						}
						else { /* weight > state_001025 */
							if (weight == state_000406) {
								switch (u) {
								case 0x000308: return 0x000924; 
								}

								*w = 1;
								return 0x000920;
							}
						}
					}
					else { /* weight > state_000E40 */
						if (weight == state_000E42) {
							switch (u) {
							case 0x000E1C: return 0x0017D8; 
							case 0x000E16: return 0x0017B4; 
							case 0x000E24: return 0x001808; 
							case 0x000E07: return 0x00175A; 
							case 0x000E0C: return 0x001778; 
							case 0x000E12: return 0x00179C; 
							case 0x000E1F: return 0x0017EA; 
							case 0x000E2D: return 0x00183E; 
							case 0x000E21: return 0x0017F6; 
							case 0x000E1B: return 0x0017D2; 
							case 0x000E15: return 0x0017AE; 
							case 0x000E25: return 0x00180E; 
							case 0x000E2A: return 0x00182C; 
							case 0x000E23: return 0x001802; 
							case 0x000E11: return 0x001796; 
							case 0x000E1E: return 0x0017E4; 
							case 0x000E2E: return 0x001844; 
							case 0x000E04: return 0x001748; 
							case 0x000E1A: return 0x0017CC; 
							case 0x000E14: return 0x0017A8; 
							case 0x000E08: return 0x001760; 
							case 0x000E0D: return 0x00177E; 
							case 0x000E01: return 0x001736; 
							case 0x000E19: return 0x0017C6; 
							case 0x000E28: return 0x001820; 
							case 0x000E10: return 0x001790; 
							case 0x000E26: return 0x001814; 
							case 0x000E1D: return 0x0017DE; 
							case 0x000E2B: return 0x001832; 
							case 0x000E05: return 0x00174E; 
							case 0x000E0A: return 0x00176C; 
							case 0x000E09: return 0x001766; 
							case 0x000E0E: return 0x001784; 
							case 0x000E02: return 0x00173C; 
							case 0x000E18: return 0x0017C0; 
							case 0x000E17: return 0x0017BA; 
							case 0x000E27: return 0x00181A; 
							case 0x000E2C: return 0x001838; 
							case 0x000E06: return 0x001754; 
							case 0x000E0B: return 0x001772; 
							case 0x000E13: return 0x0017A2; 
							case 0x000E29: return 0x001826; 
							case 0x000E20: return 0x0017F0; 
							case 0x000E22: return 0x0017FC; 
							case 0x000E0F: return 0x00178A; 
							case 0x000E03: return 0x001742; 
							}

							*w = 1;
							return 0x00184D;
						}
						else if (weight < state_000E42) {
							if (weight == state_000E41) {
								switch (u) {
								case 0x000E2C: return 0x001837; 
								case 0x000E26: return 0x001813; 
								case 0x000E14: return 0x0017A7; 
								case 0x000E01: return 0x001735; 
								case 0x000E0E: return 0x001783; 
								case 0x000E08: return 0x00175F; 
								case 0x000E1D: return 0x0017DD; 
								case 0x000E11: return 0x001795; 
								case 0x000E0A: return 0x00176B; 
								case 0x000E04: return 0x001747; 
								case 0x000E29: return 0x001825; 
								case 0x000E2B: return 0x001831; 
								case 0x000E25: return 0x00180D; 
								case 0x000E15: return 0x0017AD; 
								case 0x000E1A: return 0x0017CB; 
								case 0x000E0D: return 0x00177D; 
								case 0x000E21: return 0x0017F5; 
								case 0x000E2E: return 0x001843; 
								case 0x000E1E: return 0x0017E3; 
								case 0x000E23: return 0x001801; 
								case 0x000E07: return 0x001759; 
								case 0x000E2A: return 0x00182B; 
								case 0x000E24: return 0x001807; 
								case 0x000E12: return 0x00179B; 
								case 0x000E03: return 0x001741; 
								case 0x000E20: return 0x0017EF; 
								case 0x000E16: return 0x0017B3; 
								case 0x000E28: return 0x00181F; 
								case 0x000E2D: return 0x00183D; 
								case 0x000E1B: return 0x0017D1; 
								case 0x000E0C: return 0x001777; 
								case 0x000E06: return 0x001753; 
								case 0x000E1F: return 0x0017E9; 
								case 0x000E13: return 0x0017A1; 
								case 0x000E18: return 0x0017BF; 
								case 0x000E02: return 0x00173B; 
								case 0x000E0F: return 0x001789; 
								case 0x000E27: return 0x001819; 
								case 0x000E17: return 0x0017B9; 
								case 0x000E1C: return 0x0017D7; 
								case 0x000E0B: return 0x001771; 
								case 0x000E09: return 0x001765; 
								case 0x000E22: return 0x0017FB; 
								case 0x000E10: return 0x00178F; 
								case 0x000E19: return 0x0017C5; 
								case 0x000E05: return 0x00174D; 
								}

								*w = 1;
								return 0x00184C;
							}
						}
					}
				}
			}
			else { /* weight > state_000E43 */
				if (weight == state_000EC4) {
					switch (u) {
					case 0x000EDD: return 0x0018FE; 
					case 0x000E9F: return 0x0018CE; 
					case 0x000EAA: return 0x00187A; 
					case 0x000EA7: return 0x0018EC; 
					case 0x000E82: return 0x001862; 
					case 0x000E97: return 0x0018A4; 
					case 0x000EDC: return 0x0018F8; 
					case 0x000EAE: return 0x00190A; 
					case 0x000E9C: return 0x0018BC; 
					case 0x000E94: return 0x001892; 
					case 0x000EAB: return 0x0018F2; 
					case 0x000E81: return 0x00185C; 
					case 0x000EA1: return 0x0018D4; 
					case 0x000EDF: return 0x001886; 
					case 0x000E9D: return 0x0018C2; 
					case 0x000EA5: return 0x0018E6; 
					case 0x000E8A: return 0x001880; 
					case 0x000E84: return 0x001868; 
					case 0x000E95: return 0x001898; 
					case 0x000E9A: return 0x0018B0; 
					case 0x000E8D: return 0x00188C; 
					case 0x000E99: return 0x0018AA; 
					case 0x000E9E: return 0x0018C8; 
					case 0x000EA2: return 0x0018DA; 
					case 0x000E87: return 0x00186E; 
					case 0x000EDE: return 0x001856; 
					case 0x000E88: return 0x001874; 
					case 0x000E96: return 0x00189E; 
					case 0x000EAD: return 0x001904; 
					case 0x000E9B: return 0x0018B6; 
					case 0x000EA3: return 0x0018E0; 
					}

					*w = 1;
					return 0x001914;
				}
				else if (weight < state_000EC4) {
					if (weight == state_000EC1) {
						switch (u) {
						case 0x000EAD: return 0x001901; 
						case 0x000E97: return 0x0018A1; 
						case 0x000EA1: return 0x0018D1; 
						case 0x000E9C: return 0x0018B9; 
						case 0x000E82: return 0x00185F; 
						case 0x000EDE: return 0x001853; 
						case 0x000EA5: return 0x0018E3; 
						case 0x000E87: return 0x00186B; 
						case 0x000E96: return 0x00189B; 
						case 0x000E9B: return 0x0018B3; 
						case 0x000E99: return 0x0018A7; 
						case 0x000E88: return 0x001871; 
						case 0x000EAB: return 0x0018EF; 
						case 0x000E9F: return 0x0018CB; 
						case 0x000E84: return 0x001865; 
						case 0x000EDF: return 0x001883; 
						case 0x000EA3: return 0x0018DD; 
						case 0x000E8D: return 0x001889; 
						case 0x000E95: return 0x001895; 
						case 0x000EDC: return 0x0018F5; 
						case 0x000EA7: return 0x0018E9; 
						case 0x000E9A: return 0x0018AD; 
						case 0x000EAA: return 0x001877; 
						case 0x000E9E: return 0x0018C5; 
						case 0x000EA2: return 0x0018D7; 
						case 0x000E81: return 0x001859; 
						case 0x000EAE: return 0x001907; 
						case 0x000E94: return 0x00188F; 
						case 0x000E8A: return 0x00187D; 
						case 0x000EDD: return 0x0018FB; 
						case 0x000E9D: return 0x0018BF; 
						}

						*w = 1;
						return 0x001911;
					}
					else if (weight < state_000EC1) {
						if (weight == state_00AAB5) {
							switch (u) {
							case 0x00AAA8: return 0x001A06; 
							case 0x00AA9F: return 0x0019D0; 
							case 0x00AA93: return 0x001988; 
							case 0x00AAAA: return 0x001A12; 
							case 0x00AAA7: return 0x001A00; 
							case 0x00AA82: return 0x001922; 
							case 0x00AA8F: return 0x001970; 
							case 0x00AA97: return 0x0019A0; 
							case 0x00AAAE: return 0x001A2A; 
							case 0x00AA9C: return 0x0019BE; 
							case 0x00AAA0: return 0x0019D6; 
							case 0x00AA8B: return 0x001958; 
							case 0x00AAA9: return 0x001A0C; 
							case 0x00AA90: return 0x001976; 
							case 0x00AAA4: return 0x0019EE; 
							case 0x00AA85: return 0x001934; 
							case 0x00AA94: return 0x00198E; 
							case 0x00AAAB: return 0x001A18; 
							case 0x00AA81: return 0x00191C; 
							case 0x00AAA1: return 0x0019DC; 
							case 0x00AA8E: return 0x00196A; 
							case 0x00AA98: return 0x0019A6; 
							case 0x00AAAF: return 0x001A30; 
							case 0x00AA9D: return 0x0019C4; 
							case 0x00AA91: return 0x00197C; 
							case 0x00AAA5: return 0x0019F4; 
							case 0x00AA8A: return 0x001952; 
							case 0x00AA84: return 0x00192E; 
							case 0x00AA95: return 0x001994; 
							case 0x00AA89: return 0x00194C; 
							case 0x00AAAC: return 0x001A1E; 
							case 0x00AA9A: return 0x0019B2; 
							case 0x00AA80: return 0x001916; 
							case 0x00AA8D: return 0x001964; 
							case 0x00AA99: return 0x0019AC; 
							case 0x00AA9E: return 0x0019CA; 
							case 0x00AAA2: return 0x0019E2; 
							case 0x00AA87: return 0x001940; 
							case 0x00AA92: return 0x001982; 
							case 0x00AA88: return 0x001946; 
							case 0x00AAA6: return 0x0019FA; 
							case 0x00AA83: return 0x001928; 
							case 0x00AA96: return 0x00199A; 
							case 0x00AAAD: return 0x001A24; 
							case 0x00AA9B: return 0x0019B8; 
							case 0x00AAA3: return 0x0019E8; 
							case 0x00AA8C: return 0x00195E; 
							case 0x00AA86: return 0x00193A; 
							}

							*w = 1;
							return 0x001A36;
						}
						else if (weight < state_00AAB5) {
							if (weight == state_000E44) {
								switch (u) {
								case 0x000E1E: return 0x0017E6; 
								case 0x000E10: return 0x001792; 
								case 0x000E08: return 0x001762; 
								case 0x000E01: return 0x001738; 
								case 0x000E28: return 0x001822; 
								case 0x000E0E: return 0x001786; 
								case 0x000E14: return 0x0017AA; 
								case 0x000E2B: return 0x001834; 
								case 0x000E27: return 0x00181C; 
								case 0x000E29: return 0x001828; 
								case 0x000E0A: return 0x00176E; 
								case 0x000E18: return 0x0017C2; 
								case 0x000E22: return 0x0017FE; 
								case 0x000E1D: return 0x0017E0; 
								case 0x000E13: return 0x0017A4; 
								case 0x000E09: return 0x001768; 
								case 0x000E06: return 0x001756; 
								case 0x000E17: return 0x0017BC; 
								case 0x000E1C: return 0x0017DA; 
								case 0x000E2C: return 0x00183A; 
								case 0x000E02: return 0x00173E; 
								case 0x000E0F: return 0x00178C; 
								case 0x000E12: return 0x00179E; 
								case 0x000E24: return 0x00180A; 
								case 0x000E0B: return 0x001774; 
								case 0x000E07: return 0x00175C; 
								case 0x000E16: return 0x0017B6; 
								case 0x000E20: return 0x0017F2; 
								case 0x000E23: return 0x001804; 
								case 0x000E1B: return 0x0017D4; 
								case 0x000E2D: return 0x001840; 
								case 0x000E03: return 0x001744; 
								case 0x000E1F: return 0x0017EC; 
								case 0x000E25: return 0x001810; 
								case 0x000E0C: return 0x00177A; 
								case 0x000E04: return 0x00174A; 
								case 0x000E11: return 0x001798; 
								case 0x000E21: return 0x0017F8; 
								case 0x000E2E: return 0x001846; 
								case 0x000E0D: return 0x001780; 
								case 0x000E15: return 0x0017B0; 
								case 0x000E1A: return 0x0017CE; 
								case 0x000E2A: return 0x00182E; 
								case 0x000E26: return 0x001816; 
								case 0x000E05: return 0x001750; 
								case 0x000E19: return 0x0017C8; 
								}

								*w = 1;
								return 0x00184F;
							}
						}
						else { /* weight > state_00AAB5 */
							if (weight == state_00AAB6) {
								switch (u) {
								case 0x00AA9D: return 0x0019C5; 
								case 0x00AA87: return 0x001941; 
								case 0x00AA8A: return 0x001953; 
								case 0x00AAA9: return 0x001A0D; 
								case 0x00AAAD: return 0x001A25; 
								case 0x00AA92: return 0x001983; 
								case 0x00AAA0: return 0x0019D7; 
								case 0x00AA99: return 0x0019AD; 
								case 0x00AA83: return 0x001929; 
								case 0x00AA96: return 0x00199B; 
								case 0x00AA8F: return 0x001971; 
								case 0x00AAA4: return 0x0019EF; 
								case 0x00AA9C: return 0x0019BF; 
								case 0x00AA88: return 0x001947; 
								case 0x00AA8B: return 0x001959; 
								case 0x00AAA8: return 0x001A07; 
								case 0x00AAAC: return 0x001A1F; 
								case 0x00AA91: return 0x00197D; 
								case 0x00AA98: return 0x0019A7; 
								case 0x00AA84: return 0x00192F; 
								case 0x00AA95: return 0x001995; 
								case 0x00AAA3: return 0x0019E9; 
								case 0x00AA80: return 0x001917; 
								case 0x00AA9B: return 0x0019B9; 
								case 0x00AA89: return 0x00194D; 
								case 0x00AA8C: return 0x00195F; 
								case 0x00AAA7: return 0x001A01; 
								case 0x00AAAB: return 0x001A19; 
								case 0x00AA90: return 0x001977; 
								case 0x00AA9F: return 0x0019D1; 
								case 0x00AA85: return 0x001935; 
								case 0x00AAAF: return 0x001A31; 
								case 0x00AA94: return 0x00198F; 
								case 0x00AAA2: return 0x0019E3; 
								case 0x00AA81: return 0x00191D; 
								case 0x00AA9A: return 0x0019B3; 
								case 0x00AA8D: return 0x001965; 
								case 0x00AAA6: return 0x0019FB; 
								case 0x00AAAA: return 0x001A13; 
								case 0x00AA9E: return 0x0019CB; 
								case 0x00AA86: return 0x00193B; 
								case 0x00AAAE: return 0x001A2B; 
								case 0x00AA93: return 0x001989; 
								case 0x00AAA1: return 0x0019DD; 
								case 0x00AA82: return 0x001923; 
								case 0x00AA97: return 0x0019A1; 
								case 0x00AA8E: return 0x00196B; 
								case 0x00AAA5: return 0x0019F5; 
								}

								*w = 1;
								return 0x001A37;
							}
						}
					}
					else { /* weight > state_000EC1 */
						if (weight == state_000EC3) {
							switch (u) {
							case 0x000E96: return 0x00189D; 
							case 0x000EAE: return 0x001909; 
							case 0x000E9C: return 0x0018BB; 
							case 0x000EA1: return 0x0018D3; 
							case 0x000EDE: return 0x001855; 
							case 0x000EA5: return 0x0018E5; 
							case 0x000E84: return 0x001867; 
							case 0x000E95: return 0x001897; 
							case 0x000EAD: return 0x001903; 
							case 0x000E9B: return 0x0018B5; 
							case 0x000E99: return 0x0018A9; 
							case 0x000EDF: return 0x001885; 
							case 0x000E9F: return 0x0018CD; 
							case 0x000E94: return 0x001891; 
							case 0x000E88: return 0x001873; 
							case 0x000EDC: return 0x0018F7; 
							case 0x000E81: return 0x00185B; 
							case 0x000E9A: return 0x0018AF; 
							case 0x000E8D: return 0x00188B; 
							case 0x000E9E: return 0x0018C7; 
							case 0x000EA3: return 0x0018DF; 
							case 0x000EA7: return 0x0018EB; 
							case 0x000EAB: return 0x0018F1; 
							case 0x000E82: return 0x001861; 
							case 0x000E97: return 0x0018A3; 
							case 0x000E9D: return 0x0018C1; 
							case 0x000EA2: return 0x0018D9; 
							case 0x000E87: return 0x00186D; 
							case 0x000E8A: return 0x00187F; 
							case 0x000EDD: return 0x0018FD; 
							case 0x000EAA: return 0x001879; 
							}

							*w = 1;
							return 0x001913;
						}
						else if (weight < state_000EC3) {
							if (weight == state_000EC0) {
								switch (u) {
								case 0x000E84: return 0x001864; 
								case 0x000E9D: return 0x0018BE; 
								case 0x000E8A: return 0x00187C; 
								case 0x000EAB: return 0x0018EE; 
								case 0x000E88: return 0x001870; 
								case 0x000E99: return 0x0018A6; 
								case 0x000E96: return 0x00189A; 
								case 0x000EA2: return 0x0018D6; 
								case 0x000E87: return 0x00186A; 
								case 0x000E9E: return 0x0018C4; 
								case 0x000EDE: return 0x001852; 
								case 0x000E9A: return 0x0018AC; 
								case 0x000EA7: return 0x0018E8; 
								case 0x000E82: return 0x00185E; 
								case 0x000E8D: return 0x001888; 
								case 0x000E97: return 0x0018A0; 
								case 0x000EA3: return 0x0018DC; 
								case 0x000EAD: return 0x001900; 
								case 0x000EDD: return 0x0018FA; 
								case 0x000E9F: return 0x0018CA; 
								case 0x000E94: return 0x00188E; 
								case 0x000E9B: return 0x0018B2; 
								case 0x000EAE: return 0x001906; 
								case 0x000E81: return 0x001858; 
								case 0x000EAA: return 0x001876; 
								case 0x000EA5: return 0x0018E2; 
								case 0x000EDC: return 0x0018F4; 
								case 0x000E95: return 0x001894; 
								case 0x000E9C: return 0x0018B8; 
								case 0x000EA1: return 0x0018D0; 
								case 0x000EDF: return 0x001882; 
								}

								*w = 1;
								return 0x001910;
							}
						}
						else { /* weight > state_000EC3 */
							if (weight == state_000EC2) {
								switch (u) {
								case 0x000E82: return 0x001860; 
								case 0x000E9B: return 0x0018B4; 
								case 0x000EDD: return 0x0018FC; 
								case 0x000EAD: return 0x001902; 
								case 0x000E9F: return 0x0018CC; 
								case 0x000EAA: return 0x001878; 
								case 0x000E81: return 0x00185A; 
								case 0x000E9C: return 0x0018BA; 
								case 0x000E94: return 0x001890; 
								case 0x000EDC: return 0x0018F6; 
								case 0x000EAE: return 0x001908; 
								case 0x000EA1: return 0x0018D2; 
								case 0x000E84: return 0x001866; 
								case 0x000EA5: return 0x0018E4; 
								case 0x000EAB: return 0x0018F0; 
								case 0x000E95: return 0x001896; 
								case 0x000EA2: return 0x0018D8; 
								case 0x000E99: return 0x0018A8; 
								case 0x000E8A: return 0x00187E; 
								case 0x000EDF: return 0x001884; 
								case 0x000E88: return 0x001872; 
								case 0x000E9D: return 0x0018C0; 
								case 0x000E87: return 0x00186C; 
								case 0x000E96: return 0x00189C; 
								case 0x000E8D: return 0x00188A; 
								case 0x000E9A: return 0x0018AE; 
								case 0x000EA3: return 0x0018DE; 
								case 0x000EDE: return 0x001854; 
								case 0x000E9E: return 0x0018C6; 
								case 0x000EA7: return 0x0018EA; 
								case 0x000E97: return 0x0018A2; 
								}

								*w = 1;
								return 0x001912;
							}
						}
					}
				}
				else { /* weight > state_000EC4 */
					if (weight == state_0004E8) {
						switch (u) {
						case 0x000308: return 0x00096F; 
						}

						*w = 1;
						return 0x00096D;
					}
					else if (weight < state_0004E8) {
						if (weight == state_000475) {
							switch (u) {
							case 0x00030F: return 0x000A1C; 
							}

							*w = 1;
							return 0x000A1A;
						}
						else if (weight < state_000475) {
							if (weight == state_000474) {
								switch (u) {
								case 0x00030F: return 0x000A1D; 
								}

								*w = 1;
								return 0x000A1B;
							}
						}
						else { /* weight > state_000475 */
							if (weight == state_001B0B) {
								switch (u) {
								case 0x001B35: return 0x001D34; 
								}

								*w = 1;
								return 0x001D33;
							}
						}
					}
					else { /* weight > state_0004E8 */
						if (weight == state_001B11) {
							switch (u) {
							case 0x001B35: return 0x001D3A; 
							}

							*w = 1;
							return 0x001D39;
						}
						else if (weight < state_001B11) {
							if (weight == state_0004E9) {
								switch (u) {
								case 0x000308: return 0x00096E; 
								}

								*w = 1;
								return 0x00096C;
							}
						}
					}
				}
			}
		}
	}

	return 0;
}
