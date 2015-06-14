/* Automatically generated file (contractions-toc), 1434288115
 *
 * Tag          : _nu_ducet
 * Contractions : 686
 */

#include <stdint.h>

const size_t _NU_DUCET_CONTRACTIONS = 686; /* contractions included in switch */
const size_t _NU_DUCET_CODEPOINTS = 18046; /* complementary codepoints number */

#define state_00AAB9 -731
#define state_000430 -714
#define state_000433 -713
#define state_000435 -712
#define state_000436 -711
#define state_000437 -710
#define state_00043A -702
#define state_00043E -699
#define state_000438 -656
#define state_00006C -621
#define state_0004D9 -607
#define state_0004D8 -606
#define state_00064A -605
#define state_000648 -594
#define state_00042B -591
#define state_00042D -590
#define state_00AABB -587
#define state_000456 -566
#define state_000423 -546
#define state_000427 -545
#define state_00041A -440
#define state_00041E -438
#define state_000413 -437
#define state_000410 -436
#define state_000416 -435
#define state_000417 -434
#define state_000415 -433
#define state_000418 -432
#define state_001025 -399
#define state_00AABC -343
#define state_000627 -340
#define state_000B92 -330
#define state_000443 -329
#define state_000447 -328
#define state_00004C -293
#define state_00044B -287
#define state_00044D -286
#define state_001B05 -243
#define state_001B07 -241
#define state_001B09 -235
#define state_000406 -187
#define state_000E40 -167
#define state_000E41 -166
#define state_000E42 -165
#define state_000E43 -164
#define state_000E44 -163
#define state_00AAB5 -141
#define state_00AAB6 -132
#define state_001B0D -119
#define state_000EC1 -93
#define state_000EC0 -92
#define state_000EC3 -91
#define state_000EC2 -90
#define state_000EC4 -89
#define state_000474 -87
#define state_000475 -86
#define state_001B0B -52
#define state_0004E8 -47
#define state_0004E9 -46
#define state_001B11 -22

/* binary search on balanced tree */
int32_t _nu_ducet_weight_switch(uint32_t u, int32_t *w, void *context) {
	(void)(context);

	if (*w == 0) { /* root states */
		if (u == 0x0004D8) { return state_0004D8; }
		else if (u < 0x0004D8) { 
			if (u == 0x000430) { return state_000430; }
			else if (u < 0x000430) { 
				if (u == 0x000417) { return state_000417; }
				else if (u < 0x000417) { 
					if (u == 0x000410) { return state_000410; }
					else if (u < 0x000410) { 
						if (u == 0x00006C) { return state_00006C; }
						else if (u < 0x00006C) { 
							if (u == 0x00004C) { return state_00004C; }
						}
						else { /* u > 0x00006C */ 
							if (u == 0x000406) { return state_000406; }
						}
					}
					else { /* u > 0x000410 */ 
						if (u == 0x000415) { return state_000415; }
						else if (u < 0x000415) { 
							if (u == 0x000413) { return state_000413; }
						}
						else { /* u > 0x000415 */ 
							if (u == 0x000416) { return state_000416; }
						}
					}
				}
				else { /* u > 0x000417 */ 
					if (u == 0x000423) { return state_000423; }
					else if (u < 0x000423) { 
						if (u == 0x00041A) { return state_00041A; }
						else if (u < 0x00041A) { 
							if (u == 0x000418) { return state_000418; }
						}
						else { /* u > 0x00041A */ 
							if (u == 0x00041E) { return state_00041E; }
						}
					}
					else { /* u > 0x000423 */ 
						if (u == 0x00042B) { return state_00042B; }
						else if (u < 0x00042B) { 
							if (u == 0x000427) { return state_000427; }
						}
						else { /* u > 0x00042B */ 
							if (u == 0x00042D) { return state_00042D; }
						}
					}
				}
			}
			else { /* u > 0x000430 */ 
				if (u == 0x000443) { return state_000443; }
				else if (u < 0x000443) { 
					if (u == 0x000437) { return state_000437; }
					else if (u < 0x000437) { 
						if (u == 0x000435) { return state_000435; }
						else if (u < 0x000435) { 
							if (u == 0x000433) { return state_000433; }
						}
						else { /* u > 0x000435 */ 
							if (u == 0x000436) { return state_000436; }
						}
					}
					else { /* u > 0x000437 */ 
						if (u == 0x00043A) { return state_00043A; }
						else if (u < 0x00043A) { 
							if (u == 0x000438) { return state_000438; }
						}
						else { /* u > 0x00043A */ 
							if (u == 0x00043E) { return state_00043E; }
						}
					}
				}
				else { /* u > 0x000443 */ 
					if (u == 0x000456) { return state_000456; }
					else if (u < 0x000456) { 
						if (u == 0x00044B) { return state_00044B; }
						else if (u < 0x00044B) { 
							if (u == 0x000447) { return state_000447; }
						}
						else { /* u > 0x00044B */ 
							if (u == 0x00044D) { return state_00044D; }
						}
					}
					else { /* u > 0x000456 */ 
						if (u == 0x000475) { return state_000475; }
						else if (u < 0x000475) { 
							if (u == 0x000474) { return state_000474; }
						}
					}
				}
			}
		}
		else { /* u > 0x0004D8 */ 
			if (u == 0x000EC2) { return state_000EC2; }
			else if (u < 0x000EC2) { 
				if (u == 0x000E40) { return state_000E40; }
				else if (u < 0x000E40) { 
					if (u == 0x000627) { return state_000627; }
					else if (u < 0x000627) { 
						if (u == 0x0004E8) { return state_0004E8; }
						else if (u < 0x0004E8) { 
							if (u == 0x0004D9) { return state_0004D9; }
						}
						else { /* u > 0x0004E8 */ 
							if (u == 0x0004E9) { return state_0004E9; }
						}
					}
					else { /* u > 0x000627 */ 
						if (u == 0x00064A) { return state_00064A; }
						else if (u < 0x00064A) { 
							if (u == 0x000648) { return state_000648; }
						}
						else { /* u > 0x00064A */ 
							if (u == 0x000B92) { return state_000B92; }
						}
					}
				}
				else { /* u > 0x000E40 */ 
					if (u == 0x000E44) { return state_000E44; }
					else if (u < 0x000E44) { 
						if (u == 0x000E42) { return state_000E42; }
						else if (u < 0x000E42) { 
							if (u == 0x000E41) { return state_000E41; }
						}
						else { /* u > 0x000E42 */ 
							if (u == 0x000E43) { return state_000E43; }
						}
					}
					else { /* u > 0x000E44 */ 
						if (u == 0x000EC1) { return state_000EC1; }
						else if (u < 0x000EC1) { 
							if (u == 0x000EC0) { return state_000EC0; }
						}
					}
				}
			}
			else { /* u > 0x000EC2 */ 
				if (u == 0x001B0D) { return state_001B0D; }
				else if (u < 0x001B0D) { 
					if (u == 0x001B05) { return state_001B05; }
					else if (u < 0x001B05) { 
						if (u == 0x000EC4) { return state_000EC4; }
						else if (u < 0x000EC4) { 
							if (u == 0x000EC3) { return state_000EC3; }
						}
						else { /* u > 0x000EC4 */ 
							if (u == 0x001025) { return state_001025; }
						}
					}
					else { /* u > 0x001B05 */ 
						if (u == 0x001B09) { return state_001B09; }
						else if (u < 0x001B09) { 
							if (u == 0x001B07) { return state_001B07; }
						}
						else { /* u > 0x001B09 */ 
							if (u == 0x001B0B) { return state_001B0B; }
						}
					}
				}
				else { /* u > 0x001B0D */ 
					if (u == 0x00AAB9) { return state_00AAB9; }
					else if (u < 0x00AAB9) { 
						if (u == 0x00AAB5) { return state_00AAB5; }
						else if (u < 0x00AAB5) { 
							if (u == 0x001B11) { return state_001B11; }
						}
						else { /* u > 0x00AAB5 */ 
							if (u == 0x00AAB6) { return state_00AAB6; }
						}
					}
					else { /* u > 0x00AAB9 */ 
						if (u == 0x00AABC) { return state_00AABC; }
						else if (u < 0x00AABC) { 
							if (u == 0x00AABB) { return state_00AABB; }
						}
					}
				}
			}
		}
	}

	if (*w != 0) { /* intermediate states */
		int32_t weight = *w;
		*w = 0;

		if (weight == state_000627) {
			switch (u) {
			case 0x000653: return 4819; 
			case 0x000655: return 4835; 
			case 0x000654: return 4823; 
			}

			*w = 1;
			return 4886;
		}
		else if (weight < state_000627) {
			if (weight == state_00042D) {
				switch (u) {
				case 0x000308: return 4306; 
				}

				*w = 1;
				return 4302;
			}
			else if (weight < state_00042D) {
				if (weight == state_00043E) {
					switch (u) {
					case 0x000308: return 4144; 
					}

					*w = 1;
					return 4130;
				}
				else if (weight < state_00043E) {
					if (weight == state_000435) {
						switch (u) {
						case 0x000306: return 3998; 
						}

						*w = 1;
						return 3991;
					}
					else if (weight < state_000435) {
						if (weight == state_000430) {
							switch (u) {
							case 0x000306: return 3940; 
							case 0x000308: return 3944; 
							}

							*w = 1;
							return 3937;
						}
						else if (weight < state_000430) {
							if (weight == state_00AAB9) {
								switch (u) {
								case 0x00AA92: return 8415; 
								case 0x00AAA5: return 8529; 
								case 0x00AAAC: return 8571; 
								case 0x00AA8F: return 8397; 
								case 0x00AA82: return 8319; 
								case 0x00AA9C: return 8475; 
								case 0x00AAA1: return 8505; 
								case 0x00AA97: return 8445; 
								case 0x00AAAD: return 8577; 
								case 0x00AA86: return 8343; 
								case 0x00AA93: return 8421; 
								case 0x00AA9D: return 8481; 
								case 0x00AA8A: return 8367; 
								case 0x00AAA6: return 8535; 
								case 0x00AA94: return 8427; 
								case 0x00AA8E: return 8391; 
								case 0x00AAAE: return 8583; 
								case 0x00AA81: return 8313; 
								case 0x00AAA2: return 8511; 
								case 0x00AA90: return 8403; 
								case 0x00AA9E: return 8487; 
								case 0x00AAAA: return 8559; 
								case 0x00AA85: return 8337; 
								case 0x00AA9A: return 8463; 
								case 0x00AAA7: return 8541; 
								case 0x00AA95: return 8433; 
								case 0x00AA89: return 8361; 
								case 0x00AA8D: return 8385; 
								case 0x00AA80: return 8307; 
								case 0x00AA98: return 8451; 
								case 0x00AAA3: return 8517; 
								case 0x00AA91: return 8409; 
								case 0x00AAA8: return 8547; 
								case 0x00AAAF: return 8589; 
								case 0x00AA84: return 8331; 
								case 0x00AA8C: return 8379; 
								case 0x00AA9F: return 8493; 
								case 0x00AAA4: return 8523; 
								case 0x00AAAB: return 8565; 
								case 0x00AA88: return 8355; 
								case 0x00AA83: return 8325; 
								case 0x00AA99: return 8457; 
								case 0x00AA9B: return 8469; 
								case 0x00AAA0: return 8499; 
								case 0x00AA96: return 8439; 
								case 0x00AAA9: return 8553; 
								case 0x00AA87: return 8349; 
								case 0x00AA8B: return 8373; 
								}

								*w = 1;
								return 8595;
							}
						}
						else { /* weight > state_000430 */
							if (weight == state_000433) {
								switch (u) {
								case 0x000341: return 3985; 
								case 0x000301: return 3984; 
								}

								*w = 1;
								return 3959;
							}
						}
					}
					else { /* weight > state_000435 */
						if (weight == state_000437) {
							switch (u) {
							case 0x000308: return 4026; 
							}

							*w = 1;
							return 4017;
						}
						else if (weight < state_000437) {
							if (weight == state_000436) {
								switch (u) {
								case 0x000308: return 4012; 
								}

								*w = 1;
								return 4003;
							}
						}
						else { /* weight > state_000437 */
							if (weight == state_00043A) {
								switch (u) {
								case 0x000341: return 4187; 
								case 0x000301: return 4186; 
								}

								*w = 1;
								return 4071;
							}
						}
					}
				}
				else { /* weight > state_00043E */
					if (weight == state_0004D8) {
						switch (u) {
						case 0x000308: return 3952; 
						}

						*w = 1;
						return 3948;
					}
					else if (weight < state_0004D8) {
						if (weight == state_00006C) {
							switch (u) {
							case 0x0000B7: return 2127; 
							case 0x000387: return 2128; 
							}

							*w = 1;
							return 2077;
						}
						else if (weight < state_00006C) {
							if (weight == state_000438) {
								switch (u) {
								case 0x000306: return 4064; 
								case 0x000308: return 4052; 
								}

								*w = 1;
								return 4043;
							}
						}
						else { /* weight > state_00006C */
							if (weight == state_0004D9) {
								switch (u) {
								case 0x000308: return 3950; 
								}

								*w = 1;
								return 3947;
							}
						}
					}
					else { /* weight > state_0004D8 */
						if (weight == state_000648) {
							switch (u) {
							case 0x000654: return 4831; 
							}

							*w = 1;
							return 5779;
						}
						else if (weight < state_000648) {
							if (weight == state_00064A) {
								switch (u) {
								case 0x000654: return 4842; 
								}

								*w = 1;
								return 5821;
							}
						}
						else { /* weight > state_000648 */
							if (weight == state_00042B) {
								switch (u) {
								case 0x000308: return 4292; 
								}

								*w = 1;
								return 4288;
							}
						}
					}
				}
			}
			else { /* weight > state_00042D */
				if (weight == state_000410) {
					switch (u) {
					case 0x000308: return 3946; 
					case 0x000306: return 3942; 
					}

					*w = 1;
					return 3938;
				}
				else if (weight < state_000410) {
					if (weight == state_000427) {
						switch (u) {
						case 0x000308: return 4260; 
						}

						*w = 1;
						return 4252;
					}
					else if (weight < state_000427) {
						if (weight == state_000456) {
							switch (u) {
							case 0x000308: return 4060; 
							}

							*w = 1;
							return 4055;
						}
						else if (weight < state_000456) {
							if (weight == state_00AABB) {
								switch (u) {
								case 0x00AAA0: return 8500; 
								case 0x00AA8D: return 8386; 
								case 0x00AA81: return 8314; 
								case 0x00AA99: return 8458; 
								case 0x00AA90: return 8404; 
								case 0x00AAAF: return 8590; 
								case 0x00AA9D: return 8482; 
								case 0x00AA85: return 8338; 
								case 0x00AA8A: return 8368; 
								case 0x00AAAB: return 8566; 
								case 0x00AA89: return 8362; 
								case 0x00AAA7: return 8542; 
								case 0x00AA8E: return 8392; 
								case 0x00AA82: return 8320; 
								case 0x00AA98: return 8452; 
								case 0x00AA97: return 8446; 
								case 0x00AAAE: return 8584; 
								case 0x00AAA3: return 8518; 
								case 0x00AA86: return 8344; 
								case 0x00AA8B: return 8374; 
								case 0x00AA93: return 8422; 
								case 0x00AAAA: return 8560; 
								case 0x00AAA6: return 8536; 
								case 0x00AA8F: return 8398; 
								case 0x00AA83: return 8326; 
								case 0x00AA9C: return 8476; 
								case 0x00AA96: return 8440; 
								case 0x00AAAD: return 8578; 
								case 0x00AAA2: return 8512; 
								case 0x00AA87: return 8350; 
								case 0x00AAA9: return 8554; 
								case 0x00AA8C: return 8380; 
								case 0x00AA92: return 8416; 
								case 0x00AA9F: return 8494; 
								case 0x00AAA5: return 8530; 
								case 0x00AA9B: return 8470; 
								case 0x00AA95: return 8434; 
								case 0x00AAA1: return 8506; 
								case 0x00AA80: return 8308; 
								case 0x00AAA8: return 8548; 
								case 0x00AA91: return 8410; 
								case 0x00AA9E: return 8488; 
								case 0x00AA84: return 8332; 
								case 0x00AAA4: return 8524; 
								case 0x00AAAC: return 8572; 
								case 0x00AA9A: return 8464; 
								case 0x00AA94: return 8428; 
								case 0x00AA88: return 8356; 
								}

								*w = 1;
								return 8597;
							}
						}
						else { /* weight > state_000456 */
							if (weight == state_000423) {
								switch (u) {
								case 0x000306: return 4198; 
								case 0x000308: return 4202; 
								case 0x00030B: return 4206; 
								}

								*w = 1;
								return 4192;
							}
						}
					}
					else { /* weight > state_000427 */
						if (weight == state_00041E) {
							switch (u) {
							case 0x000308: return 4146; 
							}

							*w = 1;
							return 4137;
						}
						else if (weight < state_00041E) {
							if (weight == state_00041A) {
								switch (u) {
								case 0x000341: return 4190; 
								case 0x000301: return 4189; 
								}

								*w = 1;
								return 4072;
							}
						}
						else { /* weight > state_00041E */
							if (weight == state_000413) {
								switch (u) {
								case 0x000341: return 3988; 
								case 0x000301: return 3987; 
								}

								*w = 1;
								return 3960;
							}
						}
					}
				}
				else { /* weight > state_000410 */
					if (weight == state_000418) {
						switch (u) {
						case 0x000308: return 4054; 
						case 0x000306: return 4066; 
						}

						*w = 1;
						return 4044;
					}
					else if (weight < state_000418) {
						if (weight == state_000417) {
							switch (u) {
							case 0x000308: return 4028; 
							}

							*w = 1;
							return 4018;
						}
						else if (weight < state_000417) {
							if (weight == state_000416) {
								switch (u) {
								case 0x000308: return 4014; 
								}

								*w = 1;
								return 4004;
							}
						}
						else { /* weight > state_000417 */
							if (weight == state_000415) {
								switch (u) {
								case 0x000306: return 4000; 
								}

								*w = 1;
								return 3992;
							}
						}
					}
					else { /* weight > state_000418 */
						if (weight == state_00AABC) {
							switch (u) {
							case 0x00AA95: return 8435; 
							case 0x00AAA1: return 8507; 
							case 0x00AA84: return 8333; 
							case 0x00AA98: return 8453; 
							case 0x00AA91: return 8411; 
							case 0x00AAAC: return 8573; 
							case 0x00AA9E: return 8489; 
							case 0x00AA88: return 8357; 
							case 0x00AAA6: return 8537; 
							case 0x00AA8D: return 8387; 
							case 0x00AA9A: return 8465; 
							case 0x00AA96: return 8441; 
							case 0x00AAA2: return 8513; 
							case 0x00AA83: return 8327; 
							case 0x00AA99: return 8459; 
							case 0x00AA92: return 8417; 
							case 0x00AAAD: return 8579; 
							case 0x00AA9F: return 8495; 
							case 0x00AA87: return 8351; 
							case 0x00AAA7: return 8543; 
							case 0x00AA8C: return 8381; 
							case 0x00AA9B: return 8471; 
							case 0x00AA97: return 8447; 
							case 0x00AAA3: return 8519; 
							case 0x00AA82: return 8321; 
							case 0x00AA93: return 8423; 
							case 0x00AAAE: return 8585; 
							case 0x00AA86: return 8345; 
							case 0x00AAA8: return 8549; 
							case 0x00AA8B: return 8375; 
							case 0x00AAAA: return 8561; 
							case 0x00AA9C: return 8477; 
							case 0x00AAA4: return 8525; 
							case 0x00AA8F: return 8399; 
							case 0x00AA81: return 8315; 
							case 0x00AA94: return 8429; 
							case 0x00AAAF: return 8591; 
							case 0x00AAA0: return 8501; 
							case 0x00AA85: return 8339; 
							case 0x00AAA9: return 8555; 
							case 0x00AA8A: return 8369; 
							case 0x00AA90: return 8405; 
							case 0x00AAAB: return 8567; 
							case 0x00AA9D: return 8483; 
							case 0x00AA89: return 8363; 
							case 0x00AAA5: return 8531; 
							case 0x00AA8E: return 8393; 
							case 0x00AA80: return 8309; 
							}

							*w = 1;
							return 8598;
						}
						else if (weight < state_00AABC) {
							if (weight == state_001025) {
								switch (u) {
								case 0x00102E: return 9064; 
								}

								*w = 1;
								return 9062;
							}
						}
					}
				}
			}
		}
		else { /* weight > state_000627 */
			if (weight == state_000E44) {
				switch (u) {
				case 0x000E1E: return 8001; 
				case 0x000E10: return 7917; 
				case 0x000E08: return 7869; 
				case 0x000E01: return 7827; 
				case 0x000E28: return 8061; 
				case 0x000E0E: return 7905; 
				case 0x000E14: return 7941; 
				case 0x000E2B: return 8079; 
				case 0x000E27: return 8055; 
				case 0x000E29: return 8067; 
				case 0x000E0A: return 7881; 
				case 0x000E18: return 7965; 
				case 0x000E22: return 8025; 
				case 0x000E1D: return 7995; 
				case 0x000E13: return 7935; 
				case 0x000E09: return 7875; 
				case 0x000E06: return 7857; 
				case 0x000E17: return 7959; 
				case 0x000E1C: return 7989; 
				case 0x000E2C: return 8085; 
				case 0x000E02: return 7833; 
				case 0x000E0F: return 7911; 
				case 0x000E12: return 7929; 
				case 0x000E24: return 8037; 
				case 0x000E0B: return 7887; 
				case 0x000E07: return 7863; 
				case 0x000E16: return 7953; 
				case 0x000E20: return 8013; 
				case 0x000E23: return 8031; 
				case 0x000E1B: return 7983; 
				case 0x000E2D: return 8091; 
				case 0x000E03: return 7839; 
				case 0x000E1F: return 8007; 
				case 0x000E25: return 8043; 
				case 0x000E0C: return 7893; 
				case 0x000E04: return 7845; 
				case 0x000E11: return 7923; 
				case 0x000E21: return 8019; 
				case 0x000E2E: return 8097; 
				case 0x000E0D: return 7899; 
				case 0x000E15: return 7947; 
				case 0x000E1A: return 7977; 
				case 0x000E2A: return 8073; 
				case 0x000E26: return 8049; 
				case 0x000E05: return 7851; 
				case 0x000E19: return 7971; 
				}

				*w = 1;
				return 8106;
			}
			else if (weight < state_000E44) {
				if (weight == state_001B07) {
					switch (u) {
					case 0x001B35: return 9361; 
					}

					*w = 1;
					return 9359;
				}
				else if (weight < state_001B07) {
					if (weight == state_00004C) {
						switch (u) {
						case 0x000387: return 2131; 
						case 0x0000B7: return 2130; 
						}

						*w = 1;
						return 2094;
					}
					else if (weight < state_00004C) {
						if (weight == state_000443) {
							switch (u) {
							case 0x00030B: return 4204; 
							case 0x000308: return 4200; 
							case 0x000306: return 4196; 
							}

							*w = 1;
							return 4191;
						}
						else if (weight < state_000443) {
							if (weight == state_000B92) {
								switch (u) {
								case 0x000BD7: return 6845; 
								}

								*w = 1;
								return 6842;
							}
						}
						else { /* weight > state_000443 */
							if (weight == state_000447) {
								switch (u) {
								case 0x000308: return 4258; 
								}

								*w = 1;
								return 4251;
							}
						}
					}
					else { /* weight > state_00004C */
						if (weight == state_00044D) {
							switch (u) {
							case 0x000308: return 4304; 
							}

							*w = 1;
							return 4301;
						}
						else if (weight < state_00044D) {
							if (weight == state_00044B) {
								switch (u) {
								case 0x000308: return 4290; 
								}

								*w = 1;
								return 4287;
							}
						}
						else { /* weight > state_00044D */
							if (weight == state_001B05) {
								switch (u) {
								case 0x001B35: return 9358; 
								}

								*w = 1;
								return 9356;
							}
						}
					}
				}
				else { /* weight > state_001B07 */
					if (weight == state_000E41) {
						switch (u) {
						case 0x000E2C: return 8082; 
						case 0x000E26: return 8046; 
						case 0x000E14: return 7938; 
						case 0x000E01: return 7824; 
						case 0x000E0E: return 7902; 
						case 0x000E08: return 7866; 
						case 0x000E1D: return 7992; 
						case 0x000E11: return 7920; 
						case 0x000E0A: return 7878; 
						case 0x000E04: return 7842; 
						case 0x000E29: return 8064; 
						case 0x000E2B: return 8076; 
						case 0x000E25: return 8040; 
						case 0x000E15: return 7944; 
						case 0x000E1A: return 7974; 
						case 0x000E0D: return 7896; 
						case 0x000E21: return 8016; 
						case 0x000E2E: return 8094; 
						case 0x000E1E: return 7998; 
						case 0x000E23: return 8028; 
						case 0x000E07: return 7860; 
						case 0x000E2A: return 8070; 
						case 0x000E24: return 8034; 
						case 0x000E12: return 7926; 
						case 0x000E03: return 7836; 
						case 0x000E20: return 8010; 
						case 0x000E16: return 7950; 
						case 0x000E28: return 8058; 
						case 0x000E2D: return 8088; 
						case 0x000E1B: return 7980; 
						case 0x000E0C: return 7890; 
						case 0x000E06: return 7854; 
						case 0x000E1F: return 8004; 
						case 0x000E13: return 7932; 
						case 0x000E18: return 7962; 
						case 0x000E02: return 7830; 
						case 0x000E0F: return 7908; 
						case 0x000E27: return 8052; 
						case 0x000E17: return 7956; 
						case 0x000E1C: return 7986; 
						case 0x000E0B: return 7884; 
						case 0x000E09: return 7872; 
						case 0x000E22: return 8022; 
						case 0x000E10: return 7914; 
						case 0x000E19: return 7968; 
						case 0x000E05: return 7848; 
						}

						*w = 1;
						return 8103;
					}
					else if (weight < state_000E41) {
						if (weight == state_000406) {
							switch (u) {
							case 0x000308: return 4062; 
							}

							*w = 1;
							return 4056;
						}
						else if (weight < state_000406) {
							if (weight == state_001B09) {
								switch (u) {
								case 0x001B35: return 9364; 
								}

								*w = 1;
								return 9362;
							}
						}
						else { /* weight > state_000406 */
							if (weight == state_000E40) {
								switch (u) {
								case 0x000E04: return 7841; 
								case 0x000E27: return 8051; 
								case 0x000E11: return 7919; 
								case 0x000E2C: return 8081; 
								case 0x000E1E: return 7997; 
								case 0x000E18: return 7961; 
								case 0x000E0D: return 7895; 
								case 0x000E01: return 7823; 
								case 0x000E1A: return 7973; 
								case 0x000E14: return 7937; 
								case 0x000E05: return 7847; 
								case 0x000E0A: return 7877; 
								case 0x000E20: return 8009; 
								case 0x000E10: return 7913; 
								case 0x000E29: return 8063; 
								case 0x000E1D: return 7991; 
								case 0x000E0E: return 7901; 
								case 0x000E24: return 8033; 
								case 0x000E17: return 7955; 
								case 0x000E02: return 7829; 
								case 0x000E2D: return 8087; 
								case 0x000E21: return 8015; 
								case 0x000E13: return 7931; 
								case 0x000E22: return 8021; 
								case 0x000E06: return 7853; 
								case 0x000E0B: return 7883; 
								case 0x000E25: return 8039; 
								case 0x000E2A: return 8069; 
								case 0x000E1C: return 7985; 
								case 0x000E16: return 7949; 
								case 0x000E0F: return 7907; 
								case 0x000E03: return 7835; 
								case 0x000E2E: return 8093; 
								case 0x000E08: return 7865; 
								case 0x000E12: return 7925; 
								case 0x000E1F: return 8003; 
								case 0x000E07: return 7859; 
								case 0x000E0C: return 7889; 
								case 0x000E26: return 8045; 
								case 0x000E2B: return 8075; 
								case 0x000E1B: return 7979; 
								case 0x000E19: return 7967; 
								case 0x000E23: return 8027; 
								case 0x000E28: return 8057; 
								case 0x000E09: return 7871; 
								case 0x000E15: return 7943; 
								}

								*w = 1;
								return 8102;
							}
						}
					}
					else { /* weight > state_000E41 */
						if (weight == state_000E43) {
							switch (u) {
							case 0x000E02: return 7832; 
							case 0x000E22: return 8024; 
							case 0x000E13: return 7934; 
							case 0x000E25: return 8042; 
							case 0x000E2A: return 8072; 
							case 0x000E06: return 7856; 
							case 0x000E0B: return 7886; 
							case 0x000E28: return 8060; 
							case 0x000E1C: return 7988; 
							case 0x000E2E: return 8096; 
							case 0x000E20: return 8012; 
							case 0x000E0F: return 7910; 
							case 0x000E01: return 7826; 
							case 0x000E14: return 7940; 
							case 0x000E24: return 8036; 
							case 0x000E05: return 7850; 
							case 0x000E0A: return 7880; 
							case 0x000E10: return 7916; 
							case 0x000E1D: return 7994; 
							case 0x000E2D: return 8090; 
							case 0x000E09: return 7874; 
							case 0x000E0E: return 7904; 
							case 0x000E15: return 7946; 
							case 0x000E27: return 8054; 
							case 0x000E2C: return 8084; 
							case 0x000E04: return 7844; 
							case 0x000E18: return 7964; 
							case 0x000E11: return 7922; 
							case 0x000E1E: return 8000; 
							case 0x000E08: return 7868; 
							case 0x000E23: return 8030; 
							case 0x000E0D: return 7898; 
							case 0x000E1A: return 7976; 
							case 0x000E16: return 7952; 
							case 0x000E26: return 8048; 
							case 0x000E2B: return 8078; 
							case 0x000E03: return 7838; 
							case 0x000E19: return 7970; 
							case 0x000E29: return 8066; 
							case 0x000E12: return 7928; 
							case 0x000E1F: return 8006; 
							case 0x000E07: return 7862; 
							case 0x000E0C: return 7892; 
							case 0x000E1B: return 7982; 
							case 0x000E17: return 7958; 
							case 0x000E21: return 8018; 
							}

							*w = 1;
							return 8105;
						}
						else if (weight < state_000E43) {
							if (weight == state_000E42) {
								switch (u) {
								case 0x000E1C: return 7987; 
								case 0x000E16: return 7951; 
								case 0x000E24: return 8035; 
								case 0x000E07: return 7861; 
								case 0x000E0C: return 7891; 
								case 0x000E12: return 7927; 
								case 0x000E1F: return 8005; 
								case 0x000E2D: return 8089; 
								case 0x000E21: return 8017; 
								case 0x000E1B: return 7981; 
								case 0x000E15: return 7945; 
								case 0x000E25: return 8041; 
								case 0x000E2A: return 8071; 
								case 0x000E23: return 8029; 
								case 0x000E11: return 7921; 
								case 0x000E1E: return 7999; 
								case 0x000E2E: return 8095; 
								case 0x000E04: return 7843; 
								case 0x000E1A: return 7975; 
								case 0x000E14: return 7939; 
								case 0x000E08: return 7867; 
								case 0x000E0D: return 7897; 
								case 0x000E01: return 7825; 
								case 0x000E19: return 7969; 
								case 0x000E28: return 8059; 
								case 0x000E10: return 7915; 
								case 0x000E26: return 8047; 
								case 0x000E1D: return 7993; 
								case 0x000E2B: return 8077; 
								case 0x000E05: return 7849; 
								case 0x000E0A: return 7879; 
								case 0x000E09: return 7873; 
								case 0x000E0E: return 7903; 
								case 0x000E02: return 7831; 
								case 0x000E18: return 7963; 
								case 0x000E17: return 7957; 
								case 0x000E27: return 8053; 
								case 0x000E2C: return 8083; 
								case 0x000E06: return 7855; 
								case 0x000E0B: return 7885; 
								case 0x000E13: return 7933; 
								case 0x000E29: return 8065; 
								case 0x000E20: return 8011; 
								case 0x000E22: return 8023; 
								case 0x000E0F: return 7909; 
								case 0x000E03: return 7837; 
								}

								*w = 1;
								return 8104;
							}
						}
					}
				}
			}
			else { /* weight > state_000E44 */
				if (weight == state_000EC4) {
					switch (u) {
					case 0x000EDD: return 8276; 
					case 0x000E9F: return 8233; 
					case 0x000EAA: return 8149; 
					case 0x000EA7: return 8263; 
					case 0x000E82: return 8125; 
					case 0x000E97: return 8191; 
					case 0x000EDC: return 8270; 
					case 0x000EAE: return 8293; 
					case 0x000E9C: return 8215; 
					case 0x000E94: return 8173; 
					case 0x000EAB: return 8281; 
					case 0x000E81: return 8119; 
					case 0x000EA1: return 8239; 
					case 0x000EDF: return 8161; 
					case 0x000E9D: return 8221; 
					case 0x000EA5: return 8257; 
					case 0x000E8A: return 8155; 
					case 0x000E84: return 8131; 
					case 0x000E95: return 8179; 
					case 0x000E9A: return 8203; 
					case 0x000E8D: return 8167; 
					case 0x000E99: return 8197; 
					case 0x000E9E: return 8227; 
					case 0x000EA2: return 8245; 
					case 0x000E87: return 8137; 
					case 0x000EDE: return 8113; 
					case 0x000E88: return 8143; 
					case 0x000E96: return 8185; 
					case 0x000EAD: return 8287; 
					case 0x000E9B: return 8209; 
					case 0x000EA3: return 8251; 
					}

					*w = 1;
					return 8303;
				}
				else if (weight < state_000EC4) {
					if (weight == state_000EC1) {
						switch (u) {
						case 0x000EAD: return 8284; 
						case 0x000E97: return 8188; 
						case 0x000EA1: return 8236; 
						case 0x000E9C: return 8212; 
						case 0x000E82: return 8122; 
						case 0x000EDE: return 8110; 
						case 0x000EA5: return 8254; 
						case 0x000E87: return 8134; 
						case 0x000E96: return 8182; 
						case 0x000E9B: return 8206; 
						case 0x000E99: return 8194; 
						case 0x000E88: return 8140; 
						case 0x000EAB: return 8278; 
						case 0x000E9F: return 8230; 
						case 0x000E84: return 8128; 
						case 0x000EDF: return 8158; 
						case 0x000EA3: return 8248; 
						case 0x000E8D: return 8164; 
						case 0x000E95: return 8176; 
						case 0x000EDC: return 8267; 
						case 0x000EA7: return 8260; 
						case 0x000E9A: return 8200; 
						case 0x000EAA: return 8146; 
						case 0x000E9E: return 8224; 
						case 0x000EA2: return 8242; 
						case 0x000E81: return 8116; 
						case 0x000EAE: return 8290; 
						case 0x000E94: return 8170; 
						case 0x000E8A: return 8152; 
						case 0x000EDD: return 8273; 
						case 0x000E9D: return 8218; 
						}

						*w = 1;
						return 8300;
					}
					else if (weight < state_000EC1) {
						if (weight == state_00AAB6) {
							switch (u) {
							case 0x00AA9D: return 8480; 
							case 0x00AA87: return 8348; 
							case 0x00AA8A: return 8366; 
							case 0x00AAA9: return 8552; 
							case 0x00AAAD: return 8576; 
							case 0x00AA92: return 8414; 
							case 0x00AAA0: return 8498; 
							case 0x00AA99: return 8456; 
							case 0x00AA83: return 8324; 
							case 0x00AA96: return 8438; 
							case 0x00AA8F: return 8396; 
							case 0x00AAA4: return 8522; 
							case 0x00AA9C: return 8474; 
							case 0x00AA88: return 8354; 
							case 0x00AA8B: return 8372; 
							case 0x00AAA8: return 8546; 
							case 0x00AAAC: return 8570; 
							case 0x00AA91: return 8408; 
							case 0x00AA98: return 8450; 
							case 0x00AA84: return 8330; 
							case 0x00AA95: return 8432; 
							case 0x00AAA3: return 8516; 
							case 0x00AA80: return 8306; 
							case 0x00AA9B: return 8468; 
							case 0x00AA89: return 8360; 
							case 0x00AA8C: return 8378; 
							case 0x00AAA7: return 8540; 
							case 0x00AAAB: return 8564; 
							case 0x00AA90: return 8402; 
							case 0x00AA9F: return 8492; 
							case 0x00AA85: return 8336; 
							case 0x00AAAF: return 8588; 
							case 0x00AA94: return 8426; 
							case 0x00AAA2: return 8510; 
							case 0x00AA81: return 8312; 
							case 0x00AA9A: return 8462; 
							case 0x00AA8D: return 8384; 
							case 0x00AAA6: return 8534; 
							case 0x00AAAA: return 8558; 
							case 0x00AA9E: return 8486; 
							case 0x00AA86: return 8342; 
							case 0x00AAAE: return 8582; 
							case 0x00AA93: return 8420; 
							case 0x00AAA1: return 8504; 
							case 0x00AA82: return 8318; 
							case 0x00AA97: return 8444; 
							case 0x00AA8E: return 8390; 
							case 0x00AAA5: return 8528; 
							}

							*w = 1;
							return 8594;
						}
						else if (weight < state_00AAB6) {
							if (weight == state_00AAB5) {
								switch (u) {
								case 0x00AAA8: return 8545; 
								case 0x00AA9F: return 8491; 
								case 0x00AA93: return 8419; 
								case 0x00AAAA: return 8557; 
								case 0x00AAA7: return 8539; 
								case 0x00AA82: return 8317; 
								case 0x00AA8F: return 8395; 
								case 0x00AA97: return 8443; 
								case 0x00AAAE: return 8581; 
								case 0x00AA9C: return 8473; 
								case 0x00AAA0: return 8497; 
								case 0x00AA8B: return 8371; 
								case 0x00AAA9: return 8551; 
								case 0x00AA90: return 8401; 
								case 0x00AAA4: return 8521; 
								case 0x00AA85: return 8335; 
								case 0x00AA94: return 8425; 
								case 0x00AAAB: return 8563; 
								case 0x00AA81: return 8311; 
								case 0x00AAA1: return 8503; 
								case 0x00AA8E: return 8389; 
								case 0x00AA98: return 8449; 
								case 0x00AAAF: return 8587; 
								case 0x00AA9D: return 8479; 
								case 0x00AA91: return 8407; 
								case 0x00AAA5: return 8527; 
								case 0x00AA8A: return 8365; 
								case 0x00AA84: return 8329; 
								case 0x00AA95: return 8431; 
								case 0x00AA89: return 8359; 
								case 0x00AAAC: return 8569; 
								case 0x00AA9A: return 8461; 
								case 0x00AA80: return 8305; 
								case 0x00AA8D: return 8383; 
								case 0x00AA99: return 8455; 
								case 0x00AA9E: return 8485; 
								case 0x00AAA2: return 8509; 
								case 0x00AA87: return 8347; 
								case 0x00AA92: return 8413; 
								case 0x00AA88: return 8353; 
								case 0x00AAA6: return 8533; 
								case 0x00AA83: return 8323; 
								case 0x00AA96: return 8437; 
								case 0x00AAAD: return 8575; 
								case 0x00AA9B: return 8467; 
								case 0x00AAA3: return 8515; 
								case 0x00AA8C: return 8377; 
								case 0x00AA86: return 8341; 
								}

								*w = 1;
								return 8593;
							}
						}
						else { /* weight > state_00AAB6 */
							if (weight == state_001B0D) {
								switch (u) {
								case 0x001B35: return 9370; 
								}

								*w = 1;
								return 9368;
							}
						}
					}
					else { /* weight > state_000EC1 */
						if (weight == state_000EC3) {
							switch (u) {
							case 0x000E96: return 8184; 
							case 0x000EAE: return 8292; 
							case 0x000E9C: return 8214; 
							case 0x000EA1: return 8238; 
							case 0x000EDE: return 8112; 
							case 0x000EA5: return 8256; 
							case 0x000E84: return 8130; 
							case 0x000E95: return 8178; 
							case 0x000EAD: return 8286; 
							case 0x000E9B: return 8208; 
							case 0x000E99: return 8196; 
							case 0x000EDF: return 8160; 
							case 0x000E9F: return 8232; 
							case 0x000E94: return 8172; 
							case 0x000E88: return 8142; 
							case 0x000EDC: return 8269; 
							case 0x000E81: return 8118; 
							case 0x000E9A: return 8202; 
							case 0x000E8D: return 8166; 
							case 0x000E9E: return 8226; 
							case 0x000EA3: return 8250; 
							case 0x000EA7: return 8262; 
							case 0x000EAB: return 8280; 
							case 0x000E82: return 8124; 
							case 0x000E97: return 8190; 
							case 0x000E9D: return 8220; 
							case 0x000EA2: return 8244; 
							case 0x000E87: return 8136; 
							case 0x000E8A: return 8154; 
							case 0x000EDD: return 8275; 
							case 0x000EAA: return 8148; 
							}

							*w = 1;
							return 8302;
						}
						else if (weight < state_000EC3) {
							if (weight == state_000EC0) {
								switch (u) {
								case 0x000E84: return 8127; 
								case 0x000E9D: return 8217; 
								case 0x000E8A: return 8151; 
								case 0x000EAB: return 8277; 
								case 0x000E88: return 8139; 
								case 0x000E99: return 8193; 
								case 0x000E96: return 8181; 
								case 0x000EA2: return 8241; 
								case 0x000E87: return 8133; 
								case 0x000E9E: return 8223; 
								case 0x000EDE: return 8109; 
								case 0x000E9A: return 8199; 
								case 0x000EA7: return 8259; 
								case 0x000E82: return 8121; 
								case 0x000E8D: return 8163; 
								case 0x000E97: return 8187; 
								case 0x000EA3: return 8247; 
								case 0x000EAD: return 8283; 
								case 0x000EDD: return 8272; 
								case 0x000E9F: return 8229; 
								case 0x000E94: return 8169; 
								case 0x000E9B: return 8205; 
								case 0x000EAE: return 8289; 
								case 0x000E81: return 8115; 
								case 0x000EAA: return 8145; 
								case 0x000EA5: return 8253; 
								case 0x000EDC: return 8266; 
								case 0x000E95: return 8175; 
								case 0x000E9C: return 8211; 
								case 0x000EA1: return 8235; 
								case 0x000EDF: return 8157; 
								}

								*w = 1;
								return 8299;
							}
						}
						else { /* weight > state_000EC3 */
							if (weight == state_000EC2) {
								switch (u) {
								case 0x000E82: return 8123; 
								case 0x000E9B: return 8207; 
								case 0x000EDD: return 8274; 
								case 0x000EAD: return 8285; 
								case 0x000E9F: return 8231; 
								case 0x000EAA: return 8147; 
								case 0x000E81: return 8117; 
								case 0x000E9C: return 8213; 
								case 0x000E94: return 8171; 
								case 0x000EDC: return 8268; 
								case 0x000EAE: return 8291; 
								case 0x000EA1: return 8237; 
								case 0x000E84: return 8129; 
								case 0x000EA5: return 8255; 
								case 0x000EAB: return 8279; 
								case 0x000E95: return 8177; 
								case 0x000EA2: return 8243; 
								case 0x000E99: return 8195; 
								case 0x000E8A: return 8153; 
								case 0x000EDF: return 8159; 
								case 0x000E88: return 8141; 
								case 0x000E9D: return 8219; 
								case 0x000E87: return 8135; 
								case 0x000E96: return 8183; 
								case 0x000E8D: return 8165; 
								case 0x000E9A: return 8201; 
								case 0x000EA3: return 8249; 
								case 0x000EDE: return 8111; 
								case 0x000E9E: return 8225; 
								case 0x000EA7: return 8261; 
								case 0x000E97: return 8189; 
								}

								*w = 1;
								return 8301;
							}
						}
					}
				}
				else { /* weight > state_000EC4 */
					if (weight == state_0004E8) {
						switch (u) {
						case 0x000308: return 4152; 
						}

						*w = 1;
						return 4148;
					}
					else if (weight < state_0004E8) {
						if (weight == state_000475) {
							switch (u) {
							case 0x00030F: return 4342; 
							}

							*w = 1;
							return 4339;
						}
						else if (weight < state_000475) {
							if (weight == state_000474) {
								switch (u) {
								case 0x00030F: return 4344; 
								}

								*w = 1;
								return 4340;
							}
						}
						else { /* weight > state_000475 */
							if (weight == state_001B0B) {
								switch (u) {
								case 0x001B35: return 9367; 
								}

								*w = 1;
								return 9365;
							}
						}
					}
					else { /* weight > state_0004E8 */
						if (weight == state_001B11) {
							switch (u) {
							case 0x001B35: return 9375; 
							}

							*w = 1;
							return 9373;
						}
						else if (weight < state_001B11) {
							if (weight == state_0004E9) {
								switch (u) {
								case 0x000308: return 4150; 
								}

								*w = 1;
								return 4147;
							}
						}
					}
				}
			}
		}
	}

	return 0;
}
