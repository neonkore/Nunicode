/*
1382275192
FNV_OFFSET_BASIS: FFFFFFFF,
FNV_PRIME: 01000193,
FNV_SIZE: 1079
*/

static const int16_t FNV[] = {
	-1078, -1077, -1076, -1074, -1072, -1070, -1068, -1066, -1065, -1064, -1063, -1062, 
	-1060, 3, -1059, 3, -1058, 1, -1056, 3, 4, 1, 2, 1, 
	3, 1, 3, 1, 1, 2, 1, 2, 3, 1, 1, 1, 
	1, 1, 1, 1, -1054, 1, 1, 1, 1, 2, 1, 2, 
	2, 1, 2, 1, 0, -1053, 0, -1052, 0, -1051, 0, -1050, 
	0, 2, 0, 3, -1048, 3, -1046, 3, 0, -1044, 2, 3, 
	-1043, -1042, -1041, 3, -1039, 2, 2, 1, 1, 1, 1, 1, 
	2, 1, 1, 1, 7, 1, 4, 1, 7, 1, 1, 1, 
	2, 1, 1, 1, 1, 1, 1, 3, 4, 0, 1, -1038, 
	3, 0, -1037, -1036, 5, -1034, 1, 5, 3, -1032, 4, -1030, 
	1, -1029, 4, -1027, 2, -1026, 2, -1023, 2, -1022, 3, -1021, 
	2, -1020, 1, -1015, -1013, 0, -1010, 0, -1007, 0, 0, 0, 
	-1005, -1003, -1000, -995, -994, -993, 1, -990, -988, -987, -985, -982, 
	-979, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 2, 
	1, -974, 2, 1, -971, -969, -967, 2, 4, 1, 1, 2, 
	-965, 1, -962, 2, 0, -961, 0, -958, 0, 1, -956, 1, 
	-955, 2, -954, 3, -952, 3, -951, 3, -950, 1, -948, 2, 
	-947, 0, -943, -941, -937, 0, 0, -933, 0, -931, 0, 0, 
	-923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -919, -914, -912, -908, -901, -900, -893, 0, -884, -882, -878, 
	-875, -874, -868, -863, -860, -859, -857, -833, -821, 0, 0, 0, 
	0, 0, 0, -813, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, -811, 0, -792, 
	0, -790, 0, 0, 0, -788, 0, 0, 0, 0, 0, -786, 
	-780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, -774, 0, 0, 
	0, -773, 0, 0, 0, -754, 0, -752, 0, -739, 0, -738, 
	0, -737, 0, -736, 0, -734, 0, -730, 0, -725, 0, -723, 
	0, -721, 0, -713, 0, 0, -707, -705, -703, 0, -699, -694, 
	-693, 1, 3, -691, 4, -688, 7, 3, -686, 3, -684, 3, 
	-682, 1, -681, 6, -680, 2, 0, 6, -678, 1, 0, -677, 
	-676, 0, -675, -674, -673, 0, -672, 0, -671, -670, -669, -661, 
	-660, -659, -656, -655, -654, -653, -652, -651, -644, 1, 0, -638, 
	0, -634, -633, -632, -631, -630, -627, -623, -621, -619, -617, -615, 
	-612, -611, 0, 2, 0, -600, -594, -593, 0, -592, 0, 2, 
	0, -591, 0, 1, 0, -590, 0, -588, 0, 0, -586, 0, 
	0, -584, -581, 0, 0, -580, 0, 0, -576, 0, -572, 0, 
	0, 0, -570, 0, 0, 0, 0, -568, 0, 0, -566, 0, 
	0, 0, 0, -564, 0, -562, 0, -560, 0, 0, -558, 0, 
	-554, 0, -550, 0, 0, -549, 0, -545, 0, -544, 0, -542, 
	-539, 0, 0, -538, -534, 0, -532, 0, -526, 0, -524, 0, 
	-522, 0, -518, 0, -517, -516, 3, -514, 2, -512, 4, -511, 
	3, -510, 7, -508, 7, -506, 1, -504, 2, -502, 1, -500, 
	2, -498, 1, -496, 1, -495, 1, -494, 1, 1, 1, -490, 
	1, 1, -488, 1, 1, 1, 0, 2, 1, -472, -470, 1, 
	-463, 1, -454, 2, -452, 4, -451, 1, -450, 2, -444, 5, 
	-438, 5, -434, 3, -424, 2, -416, 8, -414, 1, -412, 2, 
	-408, 11, -406, 7, -404, 4, -403, 1, 4, 1, 7, 1, 
	1, 2, 1, 2, 4, 10, 1, 2, 1, 2, 1, 4, 
	-402, 1, -400, 1, 0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 4, 0, 5, 0, 1, 0, 3, 0, 1, 
	0, 1, 0, 1, 0, 11, 0, 12, 0, 4, 0, -398, 
	0, 3, 0, 3, 0, -384, 0, -378, 0, -376, 0, 4, 
	0, 10, 0, 1, 0, 3, -364, 3, -361, 9, -356, 4, 
	-355, 2, -353, 1, -351, 1, -348, 2, -345, 10, -342, 4, 
	-340, 5, -338, 7, -336, 4, -334, 10, -328, 5, -327, 3, 
	-326, 6, 0, 1, -324, 1, -322, 1, -312, 1, -308, 1, 
	-307, 1, -306, 1, -304, 1, -300, 1, -287, 1, -285, 1, 
	-283, 1, -282, 5, 0, 5, 0, 5, 0, -279, 0, -278, 
	0, -275, 0, -273, 0, -271, 0, -264, 0, -263, 0, -262, 
	0, -259, 0, -258, 0, -257, 0, -253, 0, -251, 0, -250, 
	0, 2, 0, 2, 0, 9, 0, 2, 0, -249, 0, -243, 
	0, -241, 0, -237, -236, 4, 0, 4, 0, 4, -235, 4, 
	-233, 4, -231, 1, -230, 3, -229, 4, -223, 2, -217, 1, 
	-211, 10, 0, 4, 0, -209, 0, 4, 0, -208, 0, 1, 
	0, -206, 0, -204, 0, -203, 0, -199, 0, -197, 0, -193, 
	0, -190, 0, 0, 0, -188, 0, -187, 0, -185, 0, -182, 
	0, -181, 0, -180, 0, -179, 0, -178, 0, -177, 0, -176, 
	0, -175, 0, -173, 0, -172, 0, -167, -165, -160, 0, 1, 
	0, -158, 0, -153, -151, 1, -149, 1, 0, -147, 0, 1, 
	0, 7, 0, -145, 0, 0, 0, 0, 0, -139, 0, 0, 
	0, 0, -130, 0, 0, -129, 0, 0, -127, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, -123, -121, -120, -119, 
	-118, 5, -116, 5, 13, 6, 2, 12, 1, 5, 6, 4, 
	3, 7, 8, 6, 8, 3, 5, 3, 20, 2, -115, 7, 
	1, 15, 9, 26, -113, -112, 0, 9, 12, -110, 0, 3, 
	0, -109, -108, 0, -106, 0, -105, -104, -103, 0, 0, 0, 
	0, -102, -101, 0, 0, 0, -97, 0, 0, 0, 0, 0, 
	0, 0, -95, 0, -79, 0, -75, -74, -72, 0, -64, 0, 
	-60, 0, -58, 0, -54, 0, -53, 0, 3, 0, 2, 0, 
	14, -50, 2, 0, 14, 0, 19, 0, 17, 0, 16, 0, 
	8, 0, -48, 0, 14, -47, 1, 0, 13, 21, 4, -46, 
	4, 0, 1, -39, 5, 0, 2, -37, 0, 0, 0, 0, 
	0, 0, 0, 0, -23, -9, 0, 4, -3, 0, -1, 
};

static const nu_udb_t V01FFC = {
	0x01FFC,
	"\xCE\xA9\xCE\x99"
};

static const nu_udb_t V01EB9 = {
	0x01EB9,
	"\xE1\xBA\xB8"
};

static const nu_udb_t V02CF3 = {
	0x02CF3,
	"\xE2\xB3\xB2"
};

static const nu_udb_t V00213 = {
	0x00213,
	"\xC8\x92"
};

static const nu_udb_t V00071 = {
	0x00071,
	"\x51"
};

static const nu_udb_t V0045B = {
	0x0045B,
	"\xD0\x8B"
};

static const nu_udb_t V00073 = {
	0x00073,
	"\x53"
};

static const nu_udb_t V00072 = {
	0x00072,
	"\x52"
};

static const nu_udb_t V02CEE = {
	0x02CEE,
	"\xE2\xB3\xAD"
};

static const nu_udb_t V00074 = {
	0x00074,
	"\x54"
};

static const nu_udb_t V00077 = {
	0x00077,
	"\x57"
};

static const nu_udb_t V000E1 = {
	0x000E1,
	"\xC3\x81"
};

static const nu_udb_t V0217D = {
	0x0217D,
	"\xE2\x85\xAD"
};

static const nu_udb_t V0217A = {
	0x0217A,
	"\xE2\x85\xAA"
};

static const nu_udb_t V02C76 = {
	0x02C76,
	"\xE2\xB1\xB5"
};

static const nu_udb_t V02D12 = {
	0x02D12,
	"\xE1\x82\xB2"
};

static const nu_udb_t V000EA = {
	0x000EA,
	"\xC3\x8A"
};

static const nu_udb_t V02D14 = {
	0x02D14,
	"\xE1\x82\xB4"
};

static const nu_udb_t V000E8 = {
	0x000E8,
	"\xC3\x88"
};

static const nu_udb_t V02D16 = {
	0x02D16,
	"\xE1\x82\xB6"
};

static const nu_udb_t V00061 = {
	0x00061,
	"\x41"
};

static const nu_udb_t V02D18 = {
	0x02D18,
	"\xE1\x82\xB8"
};

static const nu_udb_t V0023F = {
	0x0023F,
	"\xE2\xB1\xBE"
};

static const nu_udb_t V02D1A = {
	0x02D1A,
	"\xE1\x82\xBA"
};

static const nu_udb_t V01EAD = {
	0x01EAD,
	"\xE1\xBA\xAC"
};

static const nu_udb_t V02D1C = {
	0x02D1C,
	"\xE1\x82\xBC"
};

static const nu_udb_t V02D1F = {
	0x02D1F,
	"\xE1\x82\xBF"
};

static const nu_udb_t V02D1E = {
	0x02D1E,
	"\xE1\x82\xBE"
};

static const nu_udb_t V00069 = {
	0x00069,
	"\x49"
};

static const nu_udb_t V00068 = {
	0x00068,
	"\x48"
};

static const nu_udb_t V01EB7 = {
	0x01EB7,
	"\xE1\xBA\xB6"
};

static const nu_udb_t V0006A = {
	0x0006A,
	"\x4A"
};

static const nu_udb_t V000FA = {
	0x000FA,
	"\xC3\x9A"
};

static const nu_udb_t V0006C = {
	0x0006C,
	"\x4C"
};

static const nu_udb_t V000F8 = {
	0x000F8,
	"\xC3\x98"
};

static const nu_udb_t V0006E = {
	0x0006E,
	"\x4E"
};

static const nu_udb_t V01FF3 = {
	0x01FF3,
	"\xE1\xBF\xBC"
};

static const nu_udb_t V000FF = {
	0x000FF,
	"\xC5\xB8"
};

static const nu_udb_t V00585 = {
	0x00585,
	"\xD5\x95"
};

static const nu_udb_t V000FD = {
	0x000FD,
	"\xC3\x9D"
};

static const nu_udb_t V00515 = {
	0x00515,
	"\xD4\x94"
};

static const nu_udb_t V01E25 = {
	0x01E25,
	"\xE1\xB8\xA4"
};

static const nu_udb_t V0051B = {
	0x0051B,
	"\xD4\x9A"
};

static const nu_udb_t V02D0E = {
	0x02D0E,
	"\xE1\x82\xAE"
};

static const nu_udb_t V00519 = {
	0x00519,
	"\xD4\x98"
};

static const nu_udb_t V00581 = {
	0x00581,
	"\xD5\x91"
};

static const nu_udb_t V01FE1 = {
	0x01FE1,
	"\xE1\xBF\xA9"
};

static const nu_udb_t V02CD1 = {
	0x02CD1,
	"\xE2\xB3\x90"
};

static const nu_udb_t V0051D = {
	0x0051D,
	"\xD4\x9C"
};

static const nu_udb_t V01FD1 = {
	0x01FD1,
	"\xE1\xBF\x99"
};

static const nu_udb_t V00563 = {
	0x00563,
	"\xD4\xB3"
};

static const nu_udb_t V02C59 = {
	0x02C59,
	"\xE2\xB0\xA9"
};

static const nu_udb_t V0020D = {
	0x0020D,
	"\xC8\x8C"
};

static const nu_udb_t V0020F = {
	0x0020F,
	"\xC8\x8E"
};

static const nu_udb_t V00260 = {
	0x00260,
	"\xC6\x93"
};

static const nu_udb_t V00564 = {
	0x00564,
	"\xD4\xB4"
};

static const nu_udb_t V02C5C = {
	0x02C5C,
	"\xE2\xB0\xAC"
};

static const nu_udb_t V00209 = {
	0x00209,
	"\xC8\x88"
};

static const nu_udb_t V0056B = {
	0x0056B,
	"\xD4\xBB"
};

static const nu_udb_t V0020B = {
	0x0020B,
	"\xC8\x8A"
};

static const nu_udb_t V02D21 = {
	0x02D21,
	"\xE1\x83\x81"
};

static const nu_udb_t V02D20 = {
	0x02D20,
	"\xE1\x83\x80"
};

static const nu_udb_t V02D23 = {
	0x02D23,
	"\xE1\x83\x83"
};

static const nu_udb_t V00205 = {
	0x00205,
	"\xC8\x84"
};

static const nu_udb_t V0056D = {
	0x0056D,
	"\xD4\xBD"
};

static const nu_udb_t V02D24 = {
	0x02D24,
	"\xE1\x83\x84"
};

static const nu_udb_t V02D27 = {
	0x02D27,
	"\xE1\x83\x87"
};

static const nu_udb_t V024D8 = {
	0x024D8,
	"\xE2\x92\xBE"
};

static const nu_udb_t V00252 = {
	0x00252,
	"\xE2\xB1\xB0"
};

static const nu_udb_t V024DA = {
	0x024DA,
	"\xE2\x93\x80"
};

static const nu_udb_t V00250 = {
	0x00250,
	"\xE2\xB1\xAF"
};

static const nu_udb_t V00207 = {
	0x00207,
	"\xC8\x86"
};

static const nu_udb_t V000B5 = {
	0x000B5,
	"\xCE\x9C"
};

static const nu_udb_t V01FC3 = {
	0x01FC3,
	"\xE1\xBF\x8C"
};

static const nu_udb_t V00201 = {
	0x00201,
	"\xC8\x80"
};

static const nu_udb_t V02CB1 = {
	0x02CB1,
	"\xE2\xB2\xB0"
};

static const nu_udb_t V00579 = {
	0x00579,
	"\xD5\x89"
};

static const nu_udb_t V02CB7 = {
	0x02CB7,
	"\xE2\xB2\xB6"
};

static const nu_udb_t V00203 = {
	0x00203,
	"\xC8\x82"
};

static const nu_udb_t V02CB5 = {
	0x02CB5,
	"\xE2\xB2\xB4"
};

static const nu_udb_t V01EE5 = {
	0x01EE5,
	"\xE1\xBB\xA4"
};

static const nu_udb_t V10449 = {
	0x10449,
	"\xF0\x90\x90\xA1"
};

static const nu_udb_t V01EEB = {
	0x01EEB,
	"\xE1\xBB\xAA"
};

static const nu_udb_t V02CB9 = {
	0x02CB9,
	"\xE2\xB2\xB8"
};

static const nu_udb_t V00249 = {
	0x00249,
	"\xC9\x88"
};

static const nu_udb_t V024D4 = {
	0x024D4,
	"\xE2\x92\xBA"
};

static const nu_udb_t V01EEF = {
	0x01EEF,
	"\xE1\xBB\xAE"
};

static const nu_udb_t V02CBD = {
	0x02CBD,
	"\xE2\xB2\xBC"
};

static const nu_udb_t V01EED = {
	0x01EED,
	"\xE1\xBB\xAC"
};

static const nu_udb_t V00437 = {
	0x00437,
	"\xD0\x97"
};

static const nu_udb_t V024DF = {
	0x024DF,
	"\xE2\x93\x85"
};

static const nu_udb_t V00431 = {
	0x00431,
	"\xD0\x91"
};

static const nu_udb_t V024DD = {
	0x024DD,
	"\xE2\x93\x83"
};

static const nu_udb_t V00433 = {
	0x00433,
	"\xD0\x93"
};

static const nu_udb_t V0027D = {
	0x0027D,
	"\xE2\xB1\xA4"
};

static const nu_udb_t V0024F = {
	0x0024F,
	"\xC9\x8E"
};

static const nu_udb_t V00275 = {
	0x00275,
	"\xC6\x9F"
};

static const nu_udb_t V0A737 = {
	0x0A737,
	"\xEA\x9C\xB6"
};

static const nu_udb_t V024E9 = {
	0x024E9,
	"\xE2\x93\x8F"
};

static const nu_udb_t V00439 = {
	0x00439,
	"\xD0\x99"
};

static const nu_udb_t V00271 = {
	0x00271,
	"\xE2\xB1\xAE"
};

static const nu_udb_t V00272 = {
	0x00272,
	"\xC6\x9D"
};

static const nu_udb_t V0026F = {
	0x0026F,
	"\xC6\x9C"
};

static const nu_udb_t V00268 = {
	0x00268,
	"\xC6\x97"
};

static const nu_udb_t V00269 = {
	0x00269,
	"\xC6\x96"
};

static const nu_udb_t V0026B = {
	0x0026B,
	"\xE2\xB1\xA2"
};

static const nu_udb_t V0A7A7 = {
	0x0A7A7,
	"\xEA\x9E\xA6"
};

static const nu_udb_t V00265 = {
	0x00265,
	"\xEA\x9E\x8D"
};

static const nu_udb_t V00266 = {
	0x00266,
	"\xEA\x9E\xAA"
};

static const nu_udb_t V0A73F = {
	0x0A73F,
	"\xEA\x9C\xBE"
};

static const nu_udb_t V01EC7 = {
	0x01EC7,
	"\xE1\xBB\x86"
};

static const nu_udb_t V0A73B = {
	0x0A73B,
	"\xEA\x9C\xBA"
};

static const nu_udb_t V024E4 = {
	0x024E4,
	"\xE2\x93\x8A"
};

static const nu_udb_t V024E6 = {
	0x024E6,
	"\xE2\x93\x8C"
};

static const nu_udb_t V024E2 = {
	0x024E2,
	"\xE2\x93\x88"
};

static const nu_udb_t V02175 = {
	0x02175,
	"\xE2\x85\xA5"
};

static const nu_udb_t V01EC9 = {
	0x01EC9,
	"\xE1\xBB\x88"
};

static const nu_udb_t V02177 = {
	0x02177,
	"\xE2\x85\xA7"
};

static const nu_udb_t V02170 = {
	0x02170,
	"\xE2\x85\xA0"
};

static const nu_udb_t V02171 = {
	0x02171,
	"\xE2\x85\xA1"
};

static const nu_udb_t V02172 = {
	0x02172,
	"\xE2\x85\xA2"
};

static const nu_udb_t V02C83 = {
	0x02C83,
	"\xE2\xB2\x82"
};

static const nu_udb_t V02173 = {
	0x02173,
	"\xE2\x85\xA3"
};

static const nu_udb_t V02C81 = {
	0x02C81,
	"\xE2\xB2\x80"
};

static const nu_udb_t V01ED1 = {
	0x01ED1,
	"\xE1\xBB\x90"
};

static const nu_udb_t V01F01 = {
	0x01F01,
	"\xE1\xBC\x89"
};

static const nu_udb_t V0A77C = {
	0x0A77C,
	"\xEA\x9D\xBB"
};

static const nu_udb_t V02C85 = {
	0x02C85,
	"\xE2\xB2\x84"
};

static const nu_udb_t V0A77F = {
	0x0A77F,
	"\xEA\x9D\xBE"
};

static const nu_udb_t V0A77A = {
	0x0A77A,
	"\xEA\x9D\xB9"
};

static const nu_udb_t V01EDB = {
	0x01EDB,
	"\xE1\xBB\x9A"
};

static const nu_udb_t V01E43 = {
	0x01E43,
	"\xE1\xB9\x82"
};

static const nu_udb_t V000F1 = {
	0x000F1,
	"\xC3\x91"
};

static const nu_udb_t V000F0 = {
	0x000F0,
	"\xC3\x90"
};

static const nu_udb_t V000F3 = {
	0x000F3,
	"\xC3\x93"
};

static const nu_udb_t V000F2 = {
	0x000F2,
	"\xC3\x92"
};

static const nu_udb_t V000F5 = {
	0x000F5,
	"\xC3\x95"
};

static const nu_udb_t V000F4 = {
	0x000F4,
	"\xC3\x94"
};

static const nu_udb_t V0214E = {
	0x0214E,
	"\xE2\x84\xB2"
};

static const nu_udb_t V000F6 = {
	0x000F6,
	"\xC3\x96"
};

static const nu_udb_t V000F9 = {
	0x000F9,
	"\xC3\x99"
};

static const nu_udb_t V004E3 = {
	0x004E3,
	"\xD3\xA2"
};

static const nu_udb_t V000FB = {
	0x000FB,
	"\xC3\x9B"
};

static const nu_udb_t V01F77 = {
	0x01F77,
	"\xE1\xBF\x9B"
};

static const nu_udb_t V0A76D = {
	0x0A76D,
	"\xEA\x9D\xAC"
};

static const nu_udb_t V000FC = {
	0x000FC,
	"\xC3\x9C"
};

static const nu_udb_t V0A76B = {
	0x0A76B,
	"\xEA\x9D\xAA"
};

static const nu_udb_t V000FE = {
	0x000FE,
	"\xC3\x9E"
};

static const nu_udb_t V00289 = {
	0x00289,
	"\xC9\x84"
};

static const nu_udb_t V000E0 = {
	0x000E0,
	"\xC3\x80"
};

static const nu_udb_t V0028B = {
	0x0028B,
	"\xC6\xB2"
};

static const nu_udb_t V000E2 = {
	0x000E2,
	"\xC3\x82"
};

static const nu_udb_t V0A761 = {
	0x0A761,
	"\xEA\x9D\xA0"
};

static const nu_udb_t V000E4 = {
	0x000E4,
	"\xC3\x84"
};

static const nu_udb_t V0A73D = {
	0x0A73D,
	"\xEA\x9C\xBC"
};

static const nu_udb_t V000E6 = {
	0x000E6,
	"\xC3\x86"
};

static const nu_udb_t V000E9 = {
	0x000E9,
	"\xC3\x89"
};

static const nu_udb_t V0A763 = {
	0x0A763,
	"\xEA\x9D\xA2"
};

static const nu_udb_t V000EB = {
	0x000EB,
	"\xC3\x8B"
};

static const nu_udb_t V0A75F = {
	0x0A75F,
	"\xEA\x9D\x9E"
};

static const nu_udb_t V000ED = {
	0x000ED,
	"\xC3\x8D"
};

static const nu_udb_t V000EC = {
	0x000EC,
	"\xC3\x8C"
};

static const nu_udb_t V01F64 = {
	0x01F64,
	"\xE1\xBD\xAC"
};

static const nu_udb_t V000EE = {
	0x000EE,
	"\xC3\x8E"
};

static const nu_udb_t V00283 = {
	0x00283,
	"\xC6\xA9"
};

static const nu_udb_t V004FB = {
	0x004FB,
	"\xD3\xBA"
};

static const nu_udb_t V0A759 = {
	0x0A759,
	"\xEA\x9D\x98"
};

static const nu_udb_t V00459 = {
	0x00459,
	"\xD0\x89"
};

static const nu_udb_t V0A72F = {
	0x0A72F,
	"\xEA\x9C\xAE"
};

static const nu_udb_t V02CD3 = {
	0x02CD3,
	"\xE2\xB3\x92"
};

static const nu_udb_t V0A72D = {
	0x0A72D,
	"\xEA\x9C\xAC"
};

static const nu_udb_t V0A75B = {
	0x0A75B,
	"\xEA\x9D\x9A"
};

static const nu_udb_t V0A755 = {
	0x0A755,
	"\xEA\x9D\x94"
};

static const nu_udb_t V00453 = {
	0x00453,
	"\xD0\x83"
};

static const nu_udb_t V0A757 = {
	0x0A757,
	"\xEA\x9D\x96"
};

static const nu_udb_t V0A751 = {
	0x0A751,
	"\xEA\x9D\x90"
};

static const nu_udb_t V0A753 = {
	0x0A753,
	"\xEA\x9D\x92"
};

static const nu_udb_t V0A74D = {
	0x0A74D,
	"\xEA\x9D\x8C"
};

static const nu_udb_t V0A74F = {
	0x0A74F,
	"\xEA\x9D\x8E"
};

static const nu_udb_t V0A749 = {
	0x0A749,
	"\xEA\x9D\x88"
};

static const nu_udb_t V0A74B = {
	0x0A74B,
	"\xEA\x9D\x8A"
};

static const nu_udb_t V0A745 = {
	0x0A745,
	"\xEA\x9D\x84"
};

static const nu_udb_t V01EDF = {
	0x01EDF,
	"\xE1\xBB\x9E"
};

static const nu_udb_t V02D06 = {
	0x02D06,
	"\xE1\x82\xA6"
};

static const nu_udb_t V0A747 = {
	0x0A747,
	"\xEA\x9D\x86"
};

static const nu_udb_t V02CC3 = {
	0x02CC3,
	"\xE2\xB3\x82"
};

static const nu_udb_t V0A741 = {
	0x0A741,
	"\xEA\x9D\x80"
};

static const nu_udb_t V0A743 = {
	0x0A743,
	"\xEA\x9D\x82"
};

static const nu_udb_t V01F42 = {
	0x01F42,
	"\xE1\xBD\x8A"
};

static const nu_udb_t V01E3D = {
	0x01E3D,
	"\xE1\xB8\xBC"
};

static const nu_udb_t V01F40 = {
	0x01F40,
	"\xE1\xBD\x88"
};

static const nu_udb_t V10445 = {
	0x10445,
	"\xF0\x90\x90\x9D"
};

static const nu_udb_t V01E3F = {
	0x01E3F,
	"\xE1\xB8\xBE"
};

static const nu_udb_t V1044B = {
	0x1044B,
	"\xF0\x90\x90\xA3"
};

static const nu_udb_t V01F44 = {
	0x01F44,
	"\xE1\xBD\x8C"
};

static const nu_udb_t V00499 = {
	0x00499,
	"\xD2\x98"
};

static const nu_udb_t V01E39 = {
	0x01E39,
	"\xE1\xB8\xB8"
};

static const nu_udb_t V1044F = {
	0x1044F,
	"\xF0\x90\x90\xA7"
};

static const nu_udb_t V01E3B = {
	0x01E3B,
	"\xE1\xB8\xBA"
};

static const nu_udb_t V1044D = {
	0x1044D,
	"\xF0\x90\x90\xA5"
};

static const nu_udb_t V003D0 = {
	0x003D0,
	"\xCE\x92"
};

static const nu_udb_t V024E5 = {
	0x024E5,
	"\xE2\x93\x8B"
};

static const nu_udb_t V01E35 = {
	0x01E35,
	"\xE1\xB8\xB4"
};

static const nu_udb_t V01E37 = {
	0x01E37,
	"\xE1\xB8\xB6"
};

static const nu_udb_t V00259 = {
	0x00259,
	"\xC6\x8F"
};

static const nu_udb_t V01E31 = {
	0x01E31,
	"\xE1\xB8\xB0"
};

static const nu_udb_t V02178 = {
	0x02178,
	"\xE2\x85\xA8"
};

static const nu_udb_t V01E2D = {
	0x01E2D,
	"\xE1\xB8\xAC"
};

static const nu_udb_t V01E29 = {
	0x01E29,
	"\xE1\xB8\xA8"
};

static const nu_udb_t V004AF = {
	0x004AF,
	"\xD2\xAE"
};

static const nu_udb_t V0043C = {
	0x0043C,
	"\xD0\x9C"
};

static const nu_udb_t V01E15 = {
	0x01E15,
	"\xE1\xB8\x94"
};

static const nu_udb_t V0A665 = {
	0x0A665,
	"\xEA\x99\xA4"
};

static const nu_udb_t V01E17 = {
	0x01E17,
	"\xE1\xB8\x96"
};

static const nu_udb_t V01EBF = {
	0x01EBF,
	"\xE1\xBA\xBE"
};

static const nu_udb_t V01E11 = {
	0x01E11,
	"\xE1\xB8\x90"
};

static const nu_udb_t V0043E = {
	0x0043E,
	"\xD0\x9E"
};

static const nu_udb_t V02CDB = {
	0x02CDB,
	"\xE2\xB3\x9A"
};

static const nu_udb_t V01FBC = {
	0x01FBC,
	"\xCE\x91\xCE\x99"
};

static const nu_udb_t V01FA3 = {
	0x01FA3,
	"\xE1\xBE\xAB"
};

static const nu_udb_t V00163 = {
	0x00163,
	"\xC5\xA2"
};

static const nu_udb_t V0FF49 = {
	0x0FF49,
	"\xEF\xBC\xA9"
};

static const nu_udb_t V00438 = {
	0x00438,
	"\xD0\x98"
};

static const nu_udb_t V01E19 = {
	0x01E19,
	"\xE1\xB8\x98"
};

static const nu_udb_t V024D1 = {
	0x024D1,
	"\xE2\x92\xB7"
};

static const nu_udb_t V01E1B = {
	0x01E1B,
	"\xE1\xB8\x9A"
};

static const nu_udb_t V0043B = {
	0x0043B,
	"\xD0\x9B"
};

static const nu_udb_t V004B9 = {
	0x004B9,
	"\xD2\xB8"
};

static const nu_udb_t V0043A = {
	0x0043A,
	"\xD0\x9A"
};

static const nu_udb_t V00434 = {
	0x00434,
	"\xD0\x94"
};

static const nu_udb_t V00436 = {
	0x00436,
	"\xD0\x96"
};

static const nu_udb_t V024E8 = {
	0x024E8,
	"\xE2\x93\x8E"
};

static const nu_udb_t V00430 = {
	0x00430,
	"\xD0\x90"
};

static const nu_udb_t V01E23 = {
	0x01E23,
	"\xE1\xB8\xA2"
};

static const nu_udb_t V00432 = {
	0x00432,
	"\xD0\x92"
};

static const nu_udb_t V0A78C = {
	0x0A78C,
	"\xEA\x9E\x8B"
};

static const nu_udb_t V01E13 = {
	0x01E13,
	"\xE1\xB8\x92"
};

static const nu_udb_t V01E2F = {
	0x01E2F,
	"\xE1\xB8\xAE"
};

static const nu_udb_t V01F90 = {
	0x01F90,
	"\xE1\xBE\x98"
};

static const nu_udb_t V024D6 = {
	0x024D6,
	"\xE2\x92\xBC"
};

static const nu_udb_t V01E0D = {
	0x01E0D,
	"\xE1\xB8\x8C"
};

static const nu_udb_t V01E2B = {
	0x01E2B,
	"\xE1\xB8\xAA"
};

static const nu_udb_t V01E0F = {
	0x01E0F,
	"\xE1\xB8\x8E"
};

static const nu_udb_t V01F9B = {
	0x01F9B,
	"\xE1\xBC\xAB\xCE\x99"
};

static const nu_udb_t V024D3 = {
	0x024D3,
	"\xE2\x92\xB9"
};

static const nu_udb_t V01F99 = {
	0x01F99,
	"\xE1\xBC\xA9\xCE\x99"
};

static const nu_udb_t V00159 = {
	0x00159,
	"\xC5\x98"
};

static const nu_udb_t V02CCB = {
	0x02CCB,
	"\xE2\xB3\x8A"
};

static const nu_udb_t V01E09 = {
	0x01E09,
	"\xE1\xB8\x88"
};

static const nu_udb_t V01E03 = {
	0x01E03,
	"\xE1\xB8\x82"
};

static const nu_udb_t V01E7D = {
	0x01E7D,
	"\xE1\xB9\xBC"
};

static const nu_udb_t V02CC7 = {
	0x02CC7,
	"\xE2\xB3\x86"
};

static const nu_udb_t V01E7F = {
	0x01E7F,
	"\xE1\xB9\xBE"
};

static const nu_udb_t V00263 = {
	0x00263,
	"\xC6\x94"
};

static const nu_udb_t V024D9 = {
	0x024D9,
	"\xE2\x92\xBF"
};

static const nu_udb_t V00583 = {
	0x00583,
	"\xD5\x93"
};

static const nu_udb_t V01E79 = {
	0x01E79,
	"\xE1\xB9\xB8"
};

static const nu_udb_t V01E7B = {
	0x01E7B,
	"\xE1\xB9\xBA"
};

static const nu_udb_t V01E75 = {
	0x01E75,
	"\xE1\xB9\xB4"
};

static const nu_udb_t V01EC5 = {
	0x01EC5,
	"\xE1\xBB\x84"
};

static const nu_udb_t V01E1F = {
	0x01E1F,
	"\xE1\xB8\x9E"
};

static const nu_udb_t V01E77 = {
	0x01E77,
	"\xE1\xB9\xB6"
};

static const nu_udb_t V01E71 = {
	0x01E71,
	"\xE1\xB9\xB0"
};

static const nu_udb_t V01E73 = {
	0x01E73,
	"\xE1\xB9\xB2"
};

static const nu_udb_t V01F8E = {
	0x01F8E,
	"\xE1\xBC\x8E\xCE\x99"
};

static const nu_udb_t V02D25 = {
	0x02D25,
	"\xE1\x83\x85"
};

static const nu_udb_t V01F8C = {
	0x01F8C,
	"\xE1\xBC\x8C\xCE\x99"
};

static const nu_udb_t V02CD7 = {
	0x02CD7,
	"\xE2\xB3\x96"
};

static const nu_udb_t V0A65D = {
	0x0A65D,
	"\xEA\x99\x9C"
};

static const nu_udb_t V02D0A = {
	0x02D0A,
	"\xE1\x82\xAA"
};

static const nu_udb_t V01E6D = {
	0x01E6D,
	"\xE1\xB9\xAC"
};

static const nu_udb_t V02D08 = {
	0x02D08,
	"\xE1\x82\xA8"
};

static const nu_udb_t V01E6F = {
	0x01E6F,
	"\xE1\xB9\xAE"
};

static const nu_udb_t V02D2D = {
	0x02D2D,
	"\xE1\x83\x8D"
};

static const nu_udb_t V01E69 = {
	0x01E69,
	"\xE1\xB9\xA8"
};

static const nu_udb_t V003D7 = {
	0x003D7,
	"\xCF\x8F"
};

static const nu_udb_t V003D6 = {
	0x003D6,
	"\xCE\xA0"
};

static const nu_udb_t V01E6B = {
	0x01E6B,
	"\xE1\xB9\xAA"
};

static const nu_udb_t V01E65 = {
	0x01E65,
	"\xE1\xB9\xA4"
};

static const nu_udb_t V003DB = {
	0x003DB,
	"\xCF\x9A"
};

static const nu_udb_t V01E33 = {
	0x01E33,
	"\xE1\xB8\xB2"
};

static const nu_udb_t V1043C = {
	0x1043C,
	"\xF0\x90\x90\x94"
};

static const nu_udb_t V1043E = {
	0x1043E,
	"\xF0\x90\x90\x96"
};

static const nu_udb_t V01EDD = {
	0x01EDD,
	"\xE1\xBB\x9C"
};

static const nu_udb_t V10438 = {
	0x10438,
	"\xF0\x90\x90\x90"
};

static const nu_udb_t V003C1 = {
	0x003C1,
	"\xCE\xA1"
};

static const nu_udb_t V1043A = {
	0x1043A,
	"\xF0\x90\x90\x92"
};

static const nu_udb_t V003C3 = {
	0x003C3,
	"\xCE\xA3"
};

static const nu_udb_t V003C2 = {
	0x003C2,
	"\xCE\xA3"
};

static const nu_udb_t V003C5 = {
	0x003C5,
	"\xCE\xA5"
};

static const nu_udb_t V003C4 = {
	0x003C4,
	"\xCE\xA4"
};

static const nu_udb_t V003C7 = {
	0x003C7,
	"\xCE\xA7"
};

static const nu_udb_t V02D00 = {
	0x02D00,
	"\xE1\x82\xA0"
};

static const nu_udb_t V10442 = {
	0x10442,
	"\xF0\x90\x90\x9A"
};

static const nu_udb_t V003C8 = {
	0x003C8,
	"\xCE\xA8"
};

static const nu_udb_t V003CB = {
	0x003CB,
	"\xCE\xAB"
};

static const nu_udb_t V003CA = {
	0x003CA,
	"\xCE\xAA"
};

static const nu_udb_t V003CD = {
	0x003CD,
	"\xCE\x8E"
};

static const nu_udb_t V0FF54 = {
	0x0FF54,
	"\xEF\xBC\xB4"
};

static const nu_udb_t V10434 = {
	0x10434,
	"\xF0\x90\x90\x8C"
};

static const nu_udb_t V01E27 = {
	0x01E27,
	"\xE1\xB8\xA6"
};

static const nu_udb_t V1044A = {
	0x1044A,
	"\xF0\x90\x90\xA2"
};

static const nu_udb_t V0A787 = {
	0x0A787,
	"\xEA\x9E\x86"
};

static const nu_udb_t V10436 = {
	0x10436,
	"\xF0\x90\x90\x8E"
};

static const nu_udb_t V02D0C = {
	0x02D0C,
	"\xE1\x82\xAC"
};

static const nu_udb_t V10430 = {
	0x10430,
	"\xF0\x90\x90\x88"
};

static const nu_udb_t V10432 = {
	0x10432,
	"\xF0\x90\x90\x8A"
};

static const nu_udb_t V1042C = {
	0x1042C,
	"\xF0\x90\x90\x84"
};

static const nu_udb_t V02D10 = {
	0x02D10,
	"\xE1\x82\xB0"
};

static const nu_udb_t V0A75D = {
	0x0A75D,
	"\xEA\x9D\x9C"
};

static const nu_udb_t V01E51 = {
	0x01E51,
	"\xE1\xB9\x90"
};

static const nu_udb_t V1042E = {
	0x1042E,
	"\xF0\x90\x90\x86"
};

static const nu_udb_t V01E53 = {
	0x01E53,
	"\xE1\xB9\x92"
};

static const nu_udb_t V01EF3 = {
	0x01EF3,
	"\xE1\xBB\xB2"
};

static const nu_udb_t V01E55 = {
	0x01E55,
	"\xE1\xB9\x94"
};

static const nu_udb_t V01E8D = {
	0x01E8D,
	"\xE1\xBA\x8C"
};

static const nu_udb_t V01E57 = {
	0x01E57,
	"\xE1\xB9\x96"
};

static const nu_udb_t V003E1 = {
	0x003E1,
	"\xCF\xA0"
};

static const nu_udb_t V01E59 = {
	0x01E59,
	"\xE1\xB9\x98"
};

static const nu_udb_t V003E3 = {
	0x003E3,
	"\xCF\xA2"
};

static const nu_udb_t V01E5B = {
	0x01E5B,
	"\xE1\xB9\x9A"
};

static const nu_udb_t V10428 = {
	0x10428,
	"\xF0\x90\x90\x80"
};

static const nu_udb_t V01E5D = {
	0x01E5D,
	"\xE1\xB9\x9C"
};

static const nu_udb_t V1042A = {
	0x1042A,
	"\xF0\x90\x90\x82"
};

static const nu_udb_t V01E5F = {
	0x01E5F,
	"\xE1\xB9\x9E"
};

static const nu_udb_t V0045C = {
	0x0045C,
	"\xD0\x8C"
};

static const nu_udb_t V0045E = {
	0x0045E,
	"\xD0\x8E"
};

static const nu_udb_t V00458 = {
	0x00458,
	"\xD0\x88"
};

static const nu_udb_t V0045D = {
	0x0045D,
	"\xD0\x8D"
};

static const nu_udb_t V01E83 = {
	0x01E83,
	"\xE1\xBA\x82"
};

static const nu_udb_t V00443 = {
	0x00443,
	"\xD0\xA3"
};

static const nu_udb_t V003EF = {
	0x003EF,
	"\xCF\xAE"
};

static const nu_udb_t V00441 = {
	0x00441,
	"\xD0\xA1"
};

static const nu_udb_t V0045A = {
	0x0045A,
	"\xD0\x8A"
};

static const nu_udb_t V01E49 = {
	0x01E49,
	"\xE1\xB9\x88"
};

static const nu_udb_t V00454 = {
	0x00454,
	"\xD0\x84"
};

static const nu_udb_t V01E4B = {
	0x01E4B,
	"\xE1\xB9\x8A"
};

static const nu_udb_t V00456 = {
	0x00456,
	"\xD0\x86"
};

static const nu_udb_t V01E4D = {
	0x01E4D,
	"\xE1\xB9\x8C"
};

static const nu_udb_t V00450 = {
	0x00450,
	"\xD0\x80"
};

static const nu_udb_t V01E4F = {
	0x01E4F,
	"\xE1\xB9\x8E"
};

static const nu_udb_t V00452 = {
	0x00452,
	"\xD0\x82"
};

static const nu_udb_t V00103 = {
	0x00103,
	"\xC4\x82"
};

static const nu_udb_t V01E91 = {
	0x01E91,
	"\xE1\xBA\x90"
};

static const nu_udb_t V0044C = {
	0x0044C,
	"\xD0\xAC"
};

static const nu_udb_t V0FF56 = {
	0x0FF56,
	"\xEF\xBC\xB6"
};

static const nu_udb_t V004B3 = {
	0x004B3,
	"\xD2\xB2"
};

static const nu_udb_t V0044E = {
	0x0044E,
	"\xD0\xAE"
};

static const nu_udb_t V004B1 = {
	0x004B1,
	"\xD2\xB0"
};

static const nu_udb_t V0A765 = {
	0x0A765,
	"\xEA\x9D\xA4"
};

static const nu_udb_t V00448 = {
	0x00448,
	"\xD0\xA8"
};

static const nu_udb_t V0A767 = {
	0x0A767,
	"\xEA\x9D\xA6"
};

static const nu_udb_t V0044A = {
	0x0044A,
	"\xD0\xAA"
};

static const nu_udb_t V0A769 = {
	0x0A769,
	"\xEA\x9D\xA8"
};

static const nu_udb_t V00444 = {
	0x00444,
	"\xD0\xA4"
};

static const nu_udb_t V00446 = {
	0x00446,
	"\xD0\xA6"
};

static const nu_udb_t V00131 = {
	0x00131,
	"\x49"
};

static const nu_udb_t V0FF5A = {
	0x0FF5A,
	"\xEF\xBC\xBA"
};

static const nu_udb_t V00133 = {
	0x00133,
	"\xC4\xB2"
};

static const nu_udb_t V01ED9 = {
	0x01ED9,
	"\xE1\xBB\x98"
};

static const nu_udb_t V00440 = {
	0x00440,
	"\xD0\xA0"
};

static const nu_udb_t V01EA3 = {
	0x01EA3,
	"\xE1\xBA\xA2"
};

static const nu_udb_t V004A3 = {
	0x004A3,
	"\xD2\xA2"
};

static const nu_udb_t V00442 = {
	0x00442,
	"\xD0\xA2"
};

static const nu_udb_t V10431 = {
	0x10431,
	"\xF0\x90\x90\x89"
};

static const nu_udb_t V01EAF = {
	0x01EAF,
	"\xE1\xBA\xAE"
};

static const nu_udb_t V10433 = {
	0x10433,
	"\xF0\x90\x90\x8B"
};

static const nu_udb_t V0013A = {
	0x0013A,
	"\xC4\xB9"
};

static const nu_udb_t V10435 = {
	0x10435,
	"\xF0\x90\x90\x8D"
};

static const nu_udb_t V0013C = {
	0x0013C,
	"\xC4\xBB"
};

static const nu_udb_t V10437 = {
	0x10437,
	"\xF0\x90\x90\x8F"
};

static const nu_udb_t V0013E = {
	0x0013E,
	"\xC4\xBD"
};

static const nu_udb_t V10439 = {
	0x10439,
	"\xF0\x90\x90\x91"
};

static const nu_udb_t V00219 = {
	0x00219,
	"\xC8\x98"
};

static const nu_udb_t V1043B = {
	0x1043B,
	"\xF0\x90\x90\x93"
};

static const nu_udb_t V004BB = {
	0x004BB,
	"\xD2\xBA"
};

static const nu_udb_t V1043D = {
	0x1043D,
	"\xF0\x90\x90\x95"
};

static const nu_udb_t V004B5 = {
	0x004B5,
	"\xD2\xB4"
};

static const nu_udb_t V1043F = {
	0x1043F,
	"\xF0\x90\x90\x97"
};

static const nu_udb_t V01EBD = {
	0x01EBD,
	"\xE1\xBA\xBC"
};

static const nu_udb_t V00129 = {
	0x00129,
	"\xC4\xA8"
};

static const nu_udb_t V00167 = {
	0x00167,
	"\xC5\xA6"
};

static const nu_udb_t V0012B = {
	0x0012B,
	"\xC4\xAA"
};

static const nu_udb_t V004B7 = {
	0x004B7,
	"\xD2\xB6"
};

static const nu_udb_t V0012D = {
	0x0012D,
	"\xC4\xAC"
};

static const nu_udb_t V01EBB = {
	0x01EBB,
	"\xE1\xBA\xBA"
};

static const nu_udb_t V001C5 = {
	0x001C5,
	"\xC7\x84"
};

static const nu_udb_t V00161 = {
	0x00161,
	"\xC5\xA0"
};

static const nu_udb_t V10429 = {
	0x10429,
	"\xF0\x90\x90\x81"
};

static const nu_udb_t V0A76F = {
	0x0A76F,
	"\xEA\x9D\xAE"
};

static const nu_udb_t V1042B = {
	0x1042B,
	"\xF0\x90\x90\x83"
};

static const nu_udb_t V001C8 = {
	0x001C8,
	"\xC7\x87"
};

static const nu_udb_t V1042D = {
	0x1042D,
	"\xF0\x90\x90\x85"
};

static const nu_udb_t V001CE = {
	0x001CE,
	"\xC7\x8D"
};

static const nu_udb_t V1042F = {
	0x1042F,
	"\xF0\x90\x90\x87"
};

static const nu_udb_t V001CC = {
	0x001CC,
	"\xC7\x8A"
};

static const nu_udb_t V01E87 = {
	0x01E87,
	"\xE1\xBA\x86"
};

static const nu_udb_t V004AD = {
	0x004AD,
	"\xD2\xAC"
};

static const nu_udb_t V01E89 = {
	0x01E89,
	"\xE1\xBA\x88"
};

static const nu_udb_t V00135 = {
	0x00135,
	"\xC4\xB4"
};

static const nu_udb_t V01E8B = {
	0x01E8B,
	"\xE1\xBA\x8A"
};

static const nu_udb_t V00137 = {
	0x00137,
	"\xC4\xB6"
};

static const nu_udb_t V00121 = {
	0x00121,
	"\xC4\xA0"
};

static const nu_udb_t V00123 = {
	0x00123,
	"\xC4\xA2"
};

static const nu_udb_t V01E8F = {
	0x01E8F,
	"\xE1\xBA\x8E"
};

static const nu_udb_t V0011D = {
	0x0011D,
	"\xC4\x9C"
};

static const nu_udb_t V01EB1 = {
	0x01EB1,
	"\xE1\xBA\xB0"
};

static const nu_udb_t V0011F = {
	0x0011F,
	"\xC4\x9E"
};

static const nu_udb_t V01EB3 = {
	0x01EB3,
	"\xE1\xBA\xB2"
};

static const nu_udb_t V0A7A1 = {
	0x0A7A1,
	"\xEA\x9E\xA0"
};

static const nu_udb_t V02D02 = {
	0x02D02,
	"\xE1\x82\xA2"
};

static const nu_udb_t V00119 = {
	0x00119,
	"\xC4\x98"
};

static const nu_udb_t V10441 = {
	0x10441,
	"\xF0\x90\x90\x99"
};

static const nu_udb_t V0011B = {
	0x0011B,
	"\xC4\x9A"
};

static const nu_udb_t V10443 = {
	0x10443,
	"\xF0\x90\x90\x9B"
};

static const nu_udb_t V00115 = {
	0x00115,
	"\xC4\x94"
};

static const nu_udb_t V02D04 = {
	0x02D04,
	"\xE1\x82\xA4"
};

static const nu_udb_t V10444 = {
	0x10444,
	"\xF0\x90\x90\x9C"
};

static const nu_udb_t V10447 = {
	0x10447,
	"\xF0\x90\x90\x9F"
};

static const nu_udb_t V10446 = {
	0x10446,
	"\xF0\x90\x90\x9E"
};

static const nu_udb_t V00171 = {
	0x00171,
	"\xC5\xB0"
};

static const nu_udb_t V10448 = {
	0x10448,
	"\xF0\x90\x90\xA0"
};

static const nu_udb_t V00173 = {
	0x00173,
	"\xC5\xB2"
};

static const nu_udb_t V00117 = {
	0x00117,
	"\xC4\x96"
};

static const nu_udb_t V00175 = {
	0x00175,
	"\xC5\xB4"
};

static const nu_udb_t V1044C = {
	0x1044C,
	"\xF0\x90\x90\xA4"
};

static const nu_udb_t V00177 = {
	0x00177,
	"\xC5\xB6"
};

static const nu_udb_t V1044E = {
	0x1044E,
	"\xF0\x90\x90\xA6"
};

static const nu_udb_t V01EA7 = {
	0x01EA7,
	"\xE1\xBA\xA6"
};

static const nu_udb_t V003E7 = {
	0x003E7,
	"\xCF\xA6"
};

static const nu_udb_t V0043F = {
	0x0043F,
	"\xD0\x9F"
};

static const nu_udb_t V0017A = {
	0x0017A,
	"\xC5\xB9"
};

static const nu_udb_t V0A739 = {
	0x0A739,
	"\xEA\x9C\xB8"
};

static const nu_udb_t V00111 = {
	0x00111,
	"\xC4\x90"
};

static const nu_udb_t V0017F = {
	0x0017F,
	"\x53"
};

static const nu_udb_t V0017E = {
	0x0017E,
	"\xC5\xBD"
};

static const nu_udb_t V004E9 = {
	0x004E9,
	"\xD3\xA8"
};

static const nu_udb_t V00113 = {
	0x00113,
	"\xC4\x92"
};

static const nu_udb_t V00435 = {
	0x00435,
	"\xD0\x95"
};

static const nu_udb_t V003ED = {
	0x003ED,
	"\xCF\xAC"
};

static const nu_udb_t V00165 = {
	0x00165,
	"\xC5\xA4"
};

static const nu_udb_t V00577 = {
	0x00577,
	"\xD5\x87"
};

static const nu_udb_t V01ED5 = {
	0x01ED5,
	"\xE1\xBB\x94"
};

static const nu_udb_t V0010D = {
	0x0010D,
	"\xC4\x8C"
};

static const nu_udb_t V00169 = {
	0x00169,
	"\xC5\xA8"
};

static const nu_udb_t V00257 = {
	0x00257,
	"\xC6\x8A"
};

static const nu_udb_t V0043D = {
	0x0043D,
	"\xD0\x9D"
};

static const nu_udb_t V00125 = {
	0x00125,
	"\xC4\xA4"
};

static const nu_udb_t V0016D = {
	0x0016D,
	"\xC5\xAC"
};

static const nu_udb_t V0010F = {
	0x0010F,
	"\xC4\x8E"
};

static const nu_udb_t V00109 = {
	0x00109,
	"\xC4\x88"
};

static const nu_udb_t V0010B = {
	0x0010B,
	"\xC4\x8A"
};

static const nu_udb_t V004ED = {
	0x004ED,
	"\xD3\xAC"
};

static const nu_udb_t V00105 = {
	0x00105,
	"\xC4\x84"
};

static const nu_udb_t V01EC1 = {
	0x01EC1,
	"\xE1\xBB\x80"
};

static const nu_udb_t V0217B = {
	0x0217B,
	"\xE2\x85\xAB"
};

static const nu_udb_t V01EC3 = {
	0x01EC3,
	"\xE1\xBB\x82"
};

static const nu_udb_t V0A72B = {
	0x0A72B,
	"\xEA\x9C\xAA"
};

static const nu_udb_t V003C0 = {
	0x003C0,
	"\xCE\xA0"
};

static const nu_udb_t V00501 = {
	0x00501,
	"\xD4\x80"
};

static const nu_udb_t V003C6 = {
	0x003C6,
	"\xCE\xA6"
};

static const nu_udb_t V024DC = {
	0x024DC,
	"\xE2\x93\x82"
};

static const nu_udb_t V00107 = {
	0x00107,
	"\xC4\x86"
};

static const nu_udb_t V02C65 = {
	0x02C65,
	"\xC8\xBA"
};

static const nu_udb_t V01ECB = {
	0x01ECB,
	"\xE1\xBB\x8A"
};

static const nu_udb_t V01F70 = {
	0x01F70,
	"\xE1\xBE\xBA"
};

static const nu_udb_t V01F73 = {
	0x01F73,
	"\xE1\xBF\x89"
};

static const nu_udb_t V003C9 = {
	0x003C9,
	"\xCE\xA9"
};

static const nu_udb_t V003CE = {
	0x003CE,
	"\xCE\x8F"
};

static const nu_udb_t V00101 = {
	0x00101,
	"\xC4\x80"
};

static const nu_udb_t V01EF1 = {
	0x01EF1,
	"\xE1\xBB\xB0"
};

static const nu_udb_t V004DB = {
	0x004DB,
	"\xD3\x9A"
};

static const nu_udb_t V01ED7 = {
	0x01ED7,
	"\xE1\xBB\x96"
};

static const nu_udb_t V00517 = {
	0x00517,
	"\xD4\x96"
};

static const nu_udb_t V01EF5 = {
	0x01EF5,
	"\xE1\xBB\xB4"
};

static const nu_udb_t V003D1 = {
	0x003D1,
	"\xCE\x98"
};

static const nu_udb_t V01EF7 = {
	0x01EF7,
	"\xE1\xBB\xB6"
};

static const nu_udb_t V00513 = {
	0x00513,
	"\xD4\x92"
};

static const nu_udb_t V01EF9 = {
	0x01EF9,
	"\xE1\xBB\xB8"
};

static const nu_udb_t V003D5 = {
	0x003D5,
	"\xCE\xA6"
};

static const nu_udb_t V01EFB = {
	0x01EFB,
	"\xE1\xBB\xBA"
};

static const nu_udb_t V0018C = {
	0x0018C,
	"\xC6\x8B"
};

static const nu_udb_t V01EFD = {
	0x01EFD,
	"\xE1\xBB\xBC"
};

static const nu_udb_t V003D9 = {
	0x003D9,
	"\xCF\x98"
};

static const nu_udb_t V01EFF = {
	0x01EFF,
	"\xE1\xBB\xBE"
};

static const nu_udb_t V01E93 = {
	0x01E93,
	"\xE1\xBA\x92"
};

static const nu_udb_t V01EE1 = {
	0x01EE1,
	"\xE1\xBB\xA0"
};

static const nu_udb_t V02D22 = {
	0x02D22,
	"\xE1\x83\x82"
};

static const nu_udb_t V01EE3 = {
	0x01EE3,
	"\xE1\xBB\xA2"
};

static const nu_udb_t V02D1D = {
	0x02D1D,
	"\xE1\x82\xBD"
};

static const nu_udb_t V00449 = {
	0x00449,
	"\xD0\xA9"
};

static const nu_udb_t V01FE5 = {
	0x01FE5,
	"\xE1\xBF\xAC"
};

static const nu_udb_t V01EE7 = {
	0x01EE7,
	"\xE1\xBB\xA6"
};

static const nu_udb_t V02D19 = {
	0x02D19,
	"\xE1\x82\xB9"
};

static const nu_udb_t V02D1B = {
	0x02D1B,
	"\xE1\x82\xBB"
};

static const nu_udb_t V02D15 = {
	0x02D15,
	"\xE1\x82\xB5"
};

static const nu_udb_t V0044F = {
	0x0044F,
	"\xD0\xAF"
};

static const nu_udb_t V02D17 = {
	0x02D17,
	"\xE1\x82\xB7"
};

static const nu_udb_t V00471 = {
	0x00471,
	"\xD1\xB0"
};

static const nu_udb_t V02D11 = {
	0x02D11,
	"\xE1\x82\xB1"
};

static const nu_udb_t V00473 = {
	0x00473,
	"\xD1\xB2"
};

static const nu_udb_t V02D13 = {
	0x02D13,
	"\xE1\x82\xB3"
};

static const nu_udb_t V00475 = {
	0x00475,
	"\xD1\xB4"
};

static const nu_udb_t V02D0D = {
	0x02D0D,
	"\xE1\x82\xAD"
};

static const nu_udb_t V00477 = {
	0x00477,
	"\xD1\xB6"
};

static const nu_udb_t V02D0F = {
	0x02D0F,
	"\xE1\x82\xAF"
};

static const nu_udb_t V0044B = {
	0x0044B,
	"\xD0\xAB"
};

static const nu_udb_t V02D09 = {
	0x02D09,
	"\xE1\x82\xA9"
};

static const nu_udb_t V0047B = {
	0x0047B,
	"\xD1\xBA"
};

static const nu_udb_t V02D0B = {
	0x02D0B,
	"\xE1\x82\xAB"
};

static const nu_udb_t V02D05 = {
	0x02D05,
	"\xE1\x82\xA5"
};

static const nu_udb_t V02D07 = {
	0x02D07,
	"\xE1\x82\xA7"
};

static const nu_udb_t V0044D = {
	0x0044D,
	"\xD0\xAD"
};

static const nu_udb_t V02D01 = {
	0x02D01,
	"\xE1\x82\xA1"
};

static const nu_udb_t V00461 = {
	0x00461,
	"\xD1\xA0"
};

static const nu_udb_t V02D03 = {
	0x02D03,
	"\xE1\x82\xA3"
};

static const nu_udb_t V0015B = {
	0x0015B,
	"\xC5\x9A"
};

static const nu_udb_t V00155 = {
	0x00155,
	"\xC5\x94"
};

static const nu_udb_t V00465 = {
	0x00465,
	"\xD1\xA4"
};

static const nu_udb_t V001D2 = {
	0x001D2,
	"\xC7\x91"
};

static const nu_udb_t V00467 = {
	0x00467,
	"\xD1\xA6"
};

static const nu_udb_t V00157 = {
	0x00157,
	"\xC5\x96"
};

static const nu_udb_t V00469 = {
	0x00469,
	"\xD1\xA8"
};

static const nu_udb_t V00151 = {
	0x00151,
	"\xC5\x90"
};

static const nu_udb_t V0046B = {
	0x0046B,
	"\xD1\xAA"
};

static const nu_udb_t V00153 = {
	0x00153,
	"\xC5\x92"
};

static const nu_udb_t V0046D = {
	0x0046D,
	"\xD1\xAC"
};

static const nu_udb_t V001DA = {
	0x001DA,
	"\xC7\x99"
};

static const nu_udb_t V0046F = {
	0x0046F,
	"\xD1\xAE"
};

static const nu_udb_t V0021F = {
	0x0021F,
	"\xC8\x9E"
};

static const nu_udb_t V00491 = {
	0x00491,
	"\xD2\x90"
};

static const nu_udb_t V0014D = {
	0x0014D,
	"\xC5\x8C"
};

static const nu_udb_t V00493 = {
	0x00493,
	"\xD2\x92"
};

static const nu_udb_t V0014F = {
	0x0014F,
	"\xC5\x8E"
};

static const nu_udb_t V00495 = {
	0x00495,
	"\xD2\x94"
};

static const nu_udb_t V0A735 = {
	0x0A735,
	"\xEA\x9C\xB4"
};

static const nu_udb_t V00497 = {
	0x00497,
	"\xD2\x96"
};

static const nu_udb_t V00148 = {
	0x00148,
	"\xC5\x87"
};

static const nu_udb_t V0014B = {
	0x0014B,
	"\xC5\x8A"
};

static const nu_udb_t V001C6 = {
	0x001C6,
	"\xC7\x84"
};

static const nu_udb_t V0049B = {
	0x0049B,
	"\xD2\x9A"
};

static const nu_udb_t V00144 = {
	0x00144,
	"\xC5\x83"
};

static const nu_udb_t V0049D = {
	0x0049D,
	"\xD2\x9C"
};

static const nu_udb_t V00146 = {
	0x00146,
	"\xC5\x85"
};

static const nu_udb_t V00140 = {
	0x00140,
	"\xC4\xBF"
};

static const nu_udb_t V01F23 = {
	0x01F23,
	"\xE1\xBC\xAB"
};

static const nu_udb_t V00509 = {
	0x00509,
	"\xD4\x88"
};

static const nu_udb_t V01F21 = {
	0x01F21,
	"\xE1\xBC\xA9"
};

static const nu_udb_t V00142 = {
	0x00142,
	"\xC5\x81"
};

static const nu_udb_t V001BD = {
	0x001BD,
	"\xC6\xBC"
};

static const nu_udb_t V01F24 = {
	0x01F24,
	"\xE1\xBC\xAC"
};

static const nu_udb_t V001F2 = {
	0x001F2,
	"\xC7\xB1"
};

static const nu_udb_t V0016B = {
	0x0016B,
	"\xC5\xAA"
};

static const nu_udb_t V001BF = {
	0x001BF,
	"\xC7\xB7"
};

static const nu_udb_t V01EA9 = {
	0x01EA9,
	"\xE1\xBA\xA8"
};

static const nu_udb_t V001C9 = {
	0x001C9,
	"\xC7\x87"
};

static const nu_udb_t V0016F = {
	0x0016F,
	"\xC5\xAE"
};

static const nu_udb_t V001B9 = {
	0x001B9,
	"\xC6\xB8"
};

static const nu_udb_t V0048D = {
	0x0048D,
	"\xD2\x8C"
};

static const nu_udb_t V001B4 = {
	0x001B4,
	"\xC6\xB3"
};

static const nu_udb_t V0048F = {
	0x0048F,
	"\xD2\x8E"
};

static const nu_udb_t V001B6 = {
	0x001B6,
	"\xC6\xB5"
};

static const nu_udb_t V01F30 = {
	0x01F30,
	"\xE1\xBC\xB8"
};

static const nu_udb_t V001B0 = {
	0x001B0,
	"\xC6\xAF"
};

static const nu_udb_t V00481 = {
	0x00481,
	"\xD2\x80"
};

static const nu_udb_t V001AD = {
	0x001AD,
	"\xC6\xAC"
};

static const nu_udb_t V01F34 = {
	0x01F34,
	"\xE1\xBC\xBC"
};

static const nu_udb_t V001A8 = {
	0x001A8,
	"\xC6\xA7"
};

static const nu_udb_t V00455 = {
	0x00455,
	"\xD0\x85"
};

static const nu_udb_t V001A5 = {
	0x001A5,
	"\xC6\xA4"
};

static const nu_udb_t V0048B = {
	0x0048B,
	"\xD2\x8A"
};

static const nu_udb_t V001A1 = {
	0x001A1,
	"\xC6\xA0"
};

static const nu_udb_t V00447 = {
	0x00447,
	"\xD0\xA7"
};

static const nu_udb_t V0017C = {
	0x0017C,
	"\xC5\xBB"
};

static const nu_udb_t V004BD = {
	0x004BD,
	"\xD2\xBC"
};

static const nu_udb_t V001A3 = {
	0x001A3,
	"\xC6\xA2"
};

static const nu_udb_t V0217C = {
	0x0217C,
	"\xE2\x85\xAC"
};

static const nu_udb_t V01F03 = {
	0x01F03,
	"\xE1\xBC\x8B"
};

static const nu_udb_t V004A1 = {
	0x004A1,
	"\xD2\xA0"
};

static const nu_udb_t V0019E = {
	0x0019E,
	"\xC8\xA0"
};

static const nu_udb_t V00199 = {
	0x00199,
	"\xC6\x98"
};

static const nu_udb_t V01F07 = {
	0x01F07,
	"\xE1\xBC\x8F"
};

static const nu_udb_t V004A5 = {
	0x004A5,
	"\xD2\xA4"
};

static const nu_udb_t V0019A = {
	0x0019A,
	"\xC8\xBD"
};

static const nu_udb_t V004A7 = {
	0x004A7,
	"\xD2\xA6"
};

static const nu_udb_t V00195 = {
	0x00195,
	"\xC7\xB6"
};

static const nu_udb_t V00580 = {
	0x00580,
	"\xD5\x90"
};

static const nu_udb_t V0A66D = {
	0x0A66D,
	"\xEA\x99\xAC"
};

static const nu_udb_t V00582 = {
	0x00582,
	"\xD5\x92"
};

static const nu_udb_t V00192 = {
	0x00192,
	"\xC6\x91"
};

static const nu_udb_t V0A66B = {
	0x0A66B,
	"\xEA\x99\xAA"
};

static const nu_udb_t V0A667 = {
	0x0A667,
	"\xEA\x99\xA6"
};

static const nu_udb_t V0A661 = {
	0x0A661,
	"\xEA\x99\xA0"
};

static const nu_udb_t V00185 = {
	0x00185,
	"\xC6\x84"
};

static const nu_udb_t V004D1 = {
	0x004D1,
	"\xD3\x90"
};

static const nu_udb_t V01F75 = {
	0x01F75,
	"\xE1\xBF\x8B"
};

static const nu_udb_t V004D3 = {
	0x004D3,
	"\xD3\x92"
};

static const nu_udb_t V02CE3 = {
	0x02CE3,
	"\xE2\xB3\xA2"
};

static const nu_udb_t V004E7 = {
	0x004E7,
	"\xD3\xA6"
};

static const nu_udb_t V0A663 = {
	0x0A663,
	"\xEA\x99\xA2"
};

static const nu_udb_t V004D7 = {
	0x004D7,
	"\xD3\x96"
};

static const nu_udb_t V003E5 = {
	0x003E5,
	"\xCF\xA4"
};

static const nu_udb_t V004D9 = {
	0x004D9,
	"\xD3\x98"
};

static const nu_udb_t V003EB = {
	0x003EB,
	"\xCF\xAA"
};

static const nu_udb_t V0015F = {
	0x0015F,
	"\xC5\x9E"
};

static const nu_udb_t V003E9 = {
	0x003E9,
	"\xCF\xA8"
};

static const nu_udb_t V004EF = {
	0x004EF,
	"\xD3\xAE"
};

static const nu_udb_t V01F79 = {
	0x01F79,
	"\xE1\xBF\xB9"
};

static const nu_udb_t V004DF = {
	0x004DF,
	"\xD3\x9E"
};

static const nu_udb_t V01F63 = {
	0x01F63,
	"\xE1\xBD\xAB"
};

static const nu_udb_t V0A65F = {
	0x0A65F,
	"\xEA\x99\x9E"
};

static const nu_udb_t V00183 = {
	0x00183,
	"\xC6\x82"
};

static const nu_udb_t V004F1 = {
	0x004F1,
	"\xD3\xB0"
};

static const nu_udb_t V004C2 = {
	0x004C2,
	"\xD3\x81"
};

static const nu_udb_t V0A659 = {
	0x0A659,
	"\xEA\x99\x98"
};

static const nu_udb_t V004C4 = {
	0x004C4,
	"\xD3\x83"
};

static const nu_udb_t V001FD = {
	0x001FD,
	"\xC7\xBC"
};

static const nu_udb_t V004C6 = {
	0x004C6,
	"\xD3\x85"
};

static const nu_udb_t V0A65B = {
	0x0A65B,
	"\xEA\x99\x9A"
};

static const nu_udb_t V004C8 = {
	0x004C8,
	"\xD3\x87"
};

static const nu_udb_t V001FF = {
	0x001FF,
	"\xC7\xBE"
};

static const nu_udb_t V004CA = {
	0x004CA,
	"\xD3\x89"
};

static const nu_udb_t V0A655 = {
	0x0A655,
	"\xEA\x99\x94"
};

static const nu_udb_t V004CC = {
	0x004CC,
	"\xD3\x8B"
};

static const nu_udb_t V004CF = {
	0x004CF,
	"\xD3\x80"
};

static const nu_udb_t V004CE = {
	0x004CE,
	"\xD3\x8D"
};

static const nu_udb_t V001F9 = {
	0x001F9,
	"\xC7\xB8"
};

static const nu_udb_t V00251 = {
	0x00251,
	"\xE2\xB1\xAD"
};

static const nu_udb_t V004F3 = {
	0x004F3,
	"\xD3\xB2"
};

static const nu_udb_t V0A657 = {
	0x0A657,
	"\xEA\x99\x96"
};

static const nu_udb_t V001FB = {
	0x001FB,
	"\xC7\xBA"
};

static const nu_udb_t V0A651 = {
	0x0A651,
	"\xEA\x99\x90"
};

static const nu_udb_t V001F5 = {
	0x001F5,
	"\xC7\xB4"
};

static const nu_udb_t V0A653 = {
	0x0A653,
	"\xEA\x99\x92"
};

static const nu_udb_t V004F9 = {
	0x004F9,
	"\xD3\xB8"
};

static const nu_udb_t V000E3 = {
	0x000E3,
	"\xC3\x83"
};

static const nu_udb_t V024D7 = {
	0x024D7,
	"\xE2\x92\xBD"
};

static const nu_udb_t V0A64D = {
	0x0A64D,
	"\xEA\x99\x8C"
};

static const nu_udb_t V004FD = {
	0x004FD,
	"\xD3\xBC"
};

static const nu_udb_t V01F7D = {
	0x01F7D,
	"\xE1\xBF\xBB"
};

static const nu_udb_t V004FF = {
	0x004FF,
	"\xD3\xBE"
};

static const nu_udb_t V00180 = {
	0x00180,
	"\xC9\x83"
};

static const nu_udb_t V004E1 = {
	0x004E1,
	"\xD3\xA0"
};

static const nu_udb_t V001F3 = {
	0x001F3,
	"\xC7\xB1"
};

static const nu_udb_t V00240 = {
	0x00240,
	"\xE2\xB1\xBF"
};

static const nu_udb_t V024DE = {
	0x024DE,
	"\xE2\x93\x84"
};

static const nu_udb_t V00242 = {
	0x00242,
	"\xC9\x81"
};

static const nu_udb_t V01F45 = {
	0x01F45,
	"\xE1\xBD\x8D"
};

static const nu_udb_t V004D5 = {
	0x004D5,
	"\xD3\x94"
};

static const nu_udb_t V00188 = {
	0x00188,
	"\xC6\x87"
};

static const nu_udb_t V0A649 = {
	0x0A649,
	"\xEA\x99\x88"
};

static const nu_udb_t V001ED = {
	0x001ED,
	"\xC7\xAC"
};

static const nu_udb_t V0A64B = {
	0x0A64B,
	"\xEA\x99\x8A"
};

static const nu_udb_t V001EF = {
	0x001EF,
	"\xC7\xAE"
};

static const nu_udb_t V0A645 = {
	0x0A645,
	"\xEA\x99\x84"
};

static const nu_udb_t V001E9 = {
	0x001E9,
	"\xC7\xA8"
};

static const nu_udb_t V004DD = {
	0x004DD,
	"\xD3\x9C"
};

static const nu_udb_t V01E45 = {
	0x01E45,
	"\xE1\xB9\x84"
};

static const nu_udb_t V0A647 = {
	0x0A647,
	"\xEA\x99\x86"
};

static const nu_udb_t V001EB = {
	0x001EB,
	"\xC7\xAA"
};

static const nu_udb_t V0A641 = {
	0x0A641,
	"\xEA\x99\x80"
};

static const nu_udb_t V01F57 = {
	0x01F57,
	"\xE1\xBD\x9F"
};

static const nu_udb_t V01E05 = {
	0x01E05,
	"\xE1\xB8\x84"
};

static const nu_udb_t V00584 = {
	0x00584,
	"\xD5\x94"
};

static const nu_udb_t V004F5 = {
	0x004F5,
	"\xD3\xB4"
};

static const nu_udb_t V01F33 = {
	0x01F33,
	"\xE1\xBC\xBB"
};

static const nu_udb_t V01F15 = {
	0x01F15,
	"\xE1\xBC\x9D"
};

static const nu_udb_t V00231 = {
	0x00231,
	"\xC8\xB0"
};

static const nu_udb_t V001E5 = {
	0x001E5,
	"\xC7\xA4"
};

static const nu_udb_t V0A643 = {
	0x0A643,
	"\xEA\x99\x82"
};

static const nu_udb_t V001E7 = {
	0x001E7,
	"\xC7\xA6"
};

static const nu_udb_t V001E1 = {
	0x001E1,
	"\xC7\xA0"
};

static const nu_udb_t V001E3 = {
	0x001E3,
	"\xC7\xA2"
};

static const nu_udb_t V001DC = {
	0x001DC,
	"\xC7\x9B"
};

static const nu_udb_t V001DD = {
	0x001DD,
	"\xC6\x8E"
};

static const nu_udb_t V001DF = {
	0x001DF,
	"\xC7\x9E"
};

static const nu_udb_t V001D8 = {
	0x001D8,
	"\xC7\x97"
};

static const nu_udb_t V0FF59 = {
	0x0FF59,
	"\xEF\xBC\xB9"
};

static const nu_udb_t V0051F = {
	0x0051F,
	"\xD4\x9E"
};

static const nu_udb_t V0FF55 = {
	0x0FF55,
	"\xEF\xBC\xB5"
};

static const nu_udb_t V0FF57 = {
	0x0FF57,
	"\xEF\xBC\xB7"
};

static const nu_udb_t V0FF51 = {
	0x0FF51,
	"\xEF\xBC\xB1"
};

static const nu_udb_t V01F05 = {
	0x01F05,
	"\xE1\xBC\x8D"
};

static const nu_udb_t V0FF53 = {
	0x0FF53,
	"\xEF\xBC\xB3"
};

static const nu_udb_t V01FAE = {
	0x01FAE,
	"\xE1\xBD\xAE\xCE\x99"
};

static const nu_udb_t V0FF4D = {
	0x0FF4D,
	"\xEF\xBC\xAD"
};

static const nu_udb_t V01FAC = {
	0x01FAC,
	"\xE1\xBD\xAC\xCE\x99"
};

static const nu_udb_t V0FF48 = {
	0x0FF48,
	"\xEF\xBC\xA8"
};

static const nu_udb_t V00505 = {
	0x00505,
	"\xD4\x84"
};

static const nu_udb_t V01FB3 = {
	0x01FB3,
	"\xE1\xBE\xBC"
};

static const nu_udb_t V0FF4A = {
	0x0FF4A,
	"\xEF\xBC\xAA"
};

static const nu_udb_t V01FB1 = {
	0x01FB1,
	"\xE1\xBE\xB9"
};

static const nu_udb_t V0FF45 = {
	0x0FF45,
	"\xEF\xBC\xA5"
};

static const nu_udb_t V0FF46 = {
	0x0FF46,
	"\xEF\xBC\xA6"
};

static const nu_udb_t V01F31 = {
	0x01F31,
	"\xE1\xBC\xB9"
};

static const nu_udb_t V02C37 = {
	0x02C37,
	"\xE2\xB0\x87"
};

static const nu_udb_t V0050D = {
	0x0050D,
	"\xD4\x8C"
};

static const nu_udb_t V01F32 = {
	0x01F32,
	"\xE1\xBC\xBA"
};

static const nu_udb_t V0FF47 = {
	0x0FF47,
	"\xEF\xBC\xA7"
};

static const nu_udb_t V00211 = {
	0x00211,
	"\xC8\x90"
};

static const nu_udb_t V01FBE = {
	0x01FBE,
	"\xCE\x99"
};

static const nu_udb_t V01F36 = {
	0x01F36,
	"\xE1\xBC\xBE"
};

static const nu_udb_t V0FF41 = {
	0x0FF41,
	"\xEF\xBC\xA1"
};

static const nu_udb_t V00215 = {
	0x00215,
	"\xC8\x94"
};

static const nu_udb_t V0FF42 = {
	0x0FF42,
	"\xEF\xBC\xA2"
};

static const nu_udb_t V02C3D = {
	0x02C3D,
	"\xE2\xB0\x8D"
};

static const nu_udb_t V0FF43 = {
	0x0FF43,
	"\xEF\xBC\xA3"
};

static const nu_udb_t V02C31 = {
	0x02C31,
	"\xE2\xB0\x81"
};

static const nu_udb_t V02174 = {
	0x02174,
	"\xE2\x85\xA4"
};

static const nu_udb_t V02C33 = {
	0x02C33,
	"\xE2\xB0\x83"
};

static const nu_udb_t V02176 = {
	0x02176,
	"\xE2\x85\xA6"
};

static const nu_udb_t V01F20 = {
	0x01F20,
	"\xE1\xBC\xA8"
};

static const nu_udb_t V0A695 = {
	0x0A695,
	"\xEA\x9A\x94"
};

static const nu_udb_t V01F22 = {
	0x01F22,
	"\xE1\xBC\xAA"
};

static const nu_udb_t V01F25 = {
	0x01F25,
	"\xE1\xBC\xAD"
};

static const nu_udb_t V00562 = {
	0x00562,
	"\xD4\xB2"
};

static const nu_udb_t V01F27 = {
	0x01F27,
	"\xE1\xBC\xAF"
};

static const nu_udb_t V01F26 = {
	0x01F26,
	"\xE1\xBC\xAE"
};

static const nu_udb_t V0217E = {
	0x0217E,
	"\xE2\x85\xAE"
};

static const nu_udb_t V00566 = {
	0x00566,
	"\xD4\xB6"
};

static const nu_udb_t V0A697 = {
	0x0A697,
	"\xEA\x9A\x96"
};

static const nu_udb_t V02C3F = {
	0x02C3F,
	"\xE2\xB0\x8F"
};

static const nu_udb_t V0A691 = {
	0x0A691,
	"\xEA\x9A\x90"
};

static const nu_udb_t V001D6 = {
	0x001D6,
	"\xC7\x95"
};

static const nu_udb_t V0A693 = {
	0x0A693,
	"\xEA\x9A\x92"
};

static const nu_udb_t V00233 = {
	0x00233,
	"\xC8\xB2"
};

static const nu_udb_t V01F51 = {
	0x01F51,
	"\xE1\xBD\x99"
};

static const nu_udb_t V01F95 = {
	0x01F95,
	"\xE1\xBE\x9D"
};

static const nu_udb_t V01F53 = {
	0x01F53,
	"\xE1\xBD\x9B"
};

static const nu_udb_t V0A68D = {
	0x0A68D,
	"\xEA\x9A\x8C"
};

static const nu_udb_t V01F55 = {
	0x01F55,
	"\xE1\xBD\x9D"
};

static const nu_udb_t V02CCF = {
	0x02CCF,
	"\xE2\xB3\x8E"
};

static const nu_udb_t V01F9E = {
	0x01F9E,
	"\xE1\xBC\xAE\xCE\x99"
};

static const nu_udb_t V0A68F = {
	0x0A68F,
	"\xEA\x9A\x8E"
};

static const nu_udb_t V01F9C = {
	0x01F9C,
	"\xE1\xBC\xAC\xCE\x99"
};

static const nu_udb_t V0A689 = {
	0x0A689,
	"\xEA\x9A\x88"
};

static const nu_udb_t V0A68B = {
	0x0A68B,
	"\xEA\x9A\x8A"
};

static const nu_udb_t V0A685 = {
	0x0A685,
	"\xEA\x9A\x84"
};

static const nu_udb_t V0A687 = {
	0x0A687,
	"\xEA\x9A\x86"
};

static const nu_udb_t V02C51 = {
	0x02C51,
	"\xE2\xB0\xA1"
};

static const nu_udb_t V0FF50 = {
	0x0FF50,
	"\xEF\xBC\xB0"
};

static const nu_udb_t V02C53 = {
	0x02C53,
	"\xE2\xB0\xA3"
};

static const nu_udb_t V02C52 = {
	0x02C52,
	"\xE2\xB0\xA2"
};

static const nu_udb_t V02C55 = {
	0x02C55,
	"\xE2\xB0\xA5"
};

static const nu_udb_t V02C54 = {
	0x02C54,
	"\xE2\xB0\xA4"
};

static const nu_udb_t V02C57 = {
	0x02C57,
	"\xE2\xB0\xA7"
};

static const nu_udb_t V02C56 = {
	0x02C56,
	"\xE2\xB0\xA6"
};

static const nu_udb_t V0A725 = {
	0x0A725,
	"\xEA\x9C\xA4"
};

static const nu_udb_t V0FF58 = {
	0x0FF58,
	"\xEF\xBC\xB8"
};

static const nu_udb_t V02C5B = {
	0x02C5B,
	"\xE2\xB0\xAB"
};

static const nu_udb_t V02C5A = {
	0x02C5A,
	"\xE2\xB0\xAA"
};

static const nu_udb_t V0A681 = {
	0x0A681,
	"\xEA\x9A\x80"
};

static const nu_udb_t V02C6C = {
	0x02C6C,
	"\xE2\xB1\xAB"
};

static const nu_udb_t V0A683 = {
	0x0A683,
	"\xEA\x9A\x82"
};

static const nu_udb_t V02C5E = {
	0x02C5E,
	"\xE2\xB0\xAE"
};

static const nu_udb_t V02C41 = {
	0x02C41,
	"\xE2\xB0\x91"
};

static const nu_udb_t V02C40 = {
	0x02C40,
	"\xE2\xB0\x90"
};

static const nu_udb_t V01F97 = {
	0x01F97,
	"\xE1\xBE\x9F"
};

static const nu_udb_t V01F71 = {
	0x01F71,
	"\xE1\xBE\xBB"
};

static const nu_udb_t V02C45 = {
	0x02C45,
	"\xE2\xB0\x95"
};

static const nu_udb_t V0FF44 = {
	0x0FF44,
	"\xEF\xBC\xA4"
};

static const nu_udb_t V02C47 = {
	0x02C47,
	"\xE2\xB0\x97"
};

static const nu_udb_t V02C46 = {
	0x02C46,
	"\xE2\xB0\x96"
};

static const nu_udb_t V02C49 = {
	0x02C49,
	"\xE2\xB0\x99"
};

static const nu_udb_t V00256 = {
	0x00256,
	"\xC6\x89"
};

static const nu_udb_t V02C4B = {
	0x02C4B,
	"\xE2\xB0\x9B"
};

static const nu_udb_t V02C4A = {
	0x02C4A,
	"\xE2\xB0\x9A"
};

static const nu_udb_t V02C4D = {
	0x02C4D,
	"\xE2\xB0\x9D"
};

static const nu_udb_t V01F7B = {
	0x01F7B,
	"\xE1\xBF\xAB"
};

static const nu_udb_t V02C4F = {
	0x02C4F,
	"\xE2\xB0\x9F"
};

static const nu_udb_t V02C42 = {
	0x02C42,
	"\xE2\xB0\x92"
};

static const nu_udb_t V02C43 = {
	0x02C43,
	"\xE2\xB0\x93"
};

static const nu_udb_t V01D7D = {
	0x01D7D,
	"\xE2\xB1\xA3"
};

static const nu_udb_t V01D79 = {
	0x01D79,
	"\xEA\x9D\xBD"
};

static const nu_udb_t V01F61 = {
	0x01F61,
	"\xE1\xBD\xA9"
};

static const nu_udb_t V01F60 = {
	0x01F60,
	"\xE1\xBD\xA8"
};

static const nu_udb_t V02C44 = {
	0x02C44,
	"\xE2\xB0\x94"
};

static const nu_udb_t V01F62 = {
	0x01F62,
	"\xE1\xBD\xAA"
};

static const nu_udb_t V01F65 = {
	0x01F65,
	"\xE1\xBD\xAD"
};

static const nu_udb_t V0037C = {
	0x0037C,
	"\xCF\xBE"
};

static const nu_udb_t V01F67 = {
	0x01F67,
	"\xE1\xBD\xAF"
};

static const nu_udb_t V01F66 = {
	0x01F66,
	"\xE1\xBD\xAE"
};

static const nu_udb_t V01FCC = {
	0x01FCC,
	"\xCE\x97\xCE\x99"
};

static const nu_udb_t V00463 = {
	0x00463,
	"\xD1\xA2"
};

static const nu_udb_t V01E1D = {
	0x01E1D,
	"\xE1\xB8\x9C"
};

static const nu_udb_t V0037D = {
	0x0037D,
	"\xCF\xBF"
};

static const nu_udb_t V01FD0 = {
	0x01FD0,
	"\xE1\xBF\x98"
};

static const nu_udb_t V0037B = {
	0x0037B,
	"\xCF\xBD"
};

static const nu_udb_t V02C50 = {
	0x02C50,
	"\xE2\xB0\xA0"
};

static const nu_udb_t V00377 = {
	0x00377,
	"\xCD\xB6"
};

static const nu_udb_t V02C4E = {
	0x02C4E,
	"\xE2\xB0\x9E"
};

static const nu_udb_t V00371 = {
	0x00371,
	"\xCD\xB0"
};

static const nu_udb_t V00225 = {
	0x00225,
	"\xC8\xA4"
};

static const nu_udb_t V01F92 = {
	0x01F92,
	"\xE1\xBE\x9A"
};

static const nu_udb_t V02C66 = {
	0x02C66,
	"\xC8\xBE"
};

static const nu_udb_t V01F94 = {
	0x01F94,
	"\xE1\xBE\x9C"
};

static const nu_udb_t V02C68 = {
	0x02C68,
	"\xE2\xB1\xA7"
};

static const nu_udb_t V01F96 = {
	0x01F96,
	"\xE1\xBE\x9E"
};

static const nu_udb_t V0217F = {
	0x0217F,
	"\xE2\x85\xAF"
};

static const nu_udb_t V01F98 = {
	0x01F98,
	"\xE1\xBC\xA8\xCE\x99"
};

static const nu_udb_t V0022D = {
	0x0022D,
	"\xC8\xAC"
};

static const nu_udb_t V01F9A = {
	0x01F9A,
	"\xE1\xBC\xAA\xCE\x99"
};

static const nu_udb_t V01F9D = {
	0x01F9D,
	"\xE1\xBC\xAD\xCE\x99"
};

static const nu_udb_t V02CA3 = {
	0x02CA3,
	"\xE2\xB2\xA2"
};

static const nu_udb_t V01F9F = {
	0x01F9F,
	"\xE1\xBC\xAF\xCE\x99"
};

static const nu_udb_t V02CA1 = {
	0x02CA1,
	"\xE2\xB2\xA0"
};

static const nu_udb_t V02CCD = {
	0x02CCD,
	"\xE2\xB3\x8C"
};

static const nu_udb_t V02C95 = {
	0x02C95,
	"\xE2\xB2\x94"
};

static const nu_udb_t V02C58 = {
	0x02C58,
	"\xE2\xB0\xA8"
};

static const nu_udb_t V02C97 = {
	0x02C97,
	"\xE2\xB2\x96"
};

static const nu_udb_t V00373 = {
	0x00373,
	"\xCD\xB2"
};

static const nu_udb_t V02C99 = {
	0x02C99,
	"\xE2\xB2\x98"
};

static const nu_udb_t V00345 = {
	0x00345,
	"\xCE\x99"
};

static const nu_udb_t V02C9B = {
	0x02C9B,
	"\xE2\xB2\x9A"
};

static const nu_udb_t V0025B = {
	0x0025B,
	"\xC6\x90"
};

static const nu_udb_t V02C9D = {
	0x02C9D,
	"\xE2\xB2\x9C"
};

static const nu_udb_t V00254 = {
	0x00254,
	"\xC6\x86"
};

static const nu_udb_t V02C9F = {
	0x02C9F,
	"\xE2\xB2\x9E"
};

static const nu_udb_t V00511 = {
	0x00511,
	"\xD4\x90"
};

static const nu_udb_t V02CB3 = {
	0x02CB3,
	"\xE2\xB2\xB2"
};

static const nu_udb_t V003BC = {
	0x003BC,
	"\xCE\x9C"
};

static const nu_udb_t V0A733 = {
	0x0A733,
	"\xEA\x9C\xB2"
};

static const nu_udb_t V0022F = {
	0x0022F,
	"\xC8\xAE"
};

static const nu_udb_t V01FB0 = {
	0x01FB0,
	"\xE1\xBE\xB8"
};

static const nu_udb_t V00229 = {
	0x00229,
	"\xC8\xA8"
};

static const nu_udb_t V02C87 = {
	0x02C87,
	"\xE2\xB2\x86"
};

static const nu_udb_t V02C6A = {
	0x02C6A,
	"\xE2\xB1\xA9"
};

static const nu_udb_t V02C89 = {
	0x02C89,
	"\xE2\xB2\x88"
};

static const nu_udb_t V0A727 = {
	0x0A727,
	"\xEA\x9C\xA6"
};

static const nu_udb_t V02C8B = {
	0x02C8B,
	"\xE2\xB2\x8A"
};

static const nu_udb_t V0024B = {
	0x0024B,
	"\xC9\x8A"
};

static const nu_udb_t V02C8D = {
	0x02C8D,
	"\xE2\xB2\x8C"
};

static const nu_udb_t V003BD = {
	0x003BD,
	"\xCE\x9D"
};

static const nu_udb_t V02C8F = {
	0x02C8F,
	"\xE2\xB2\x8E"
};

static const nu_udb_t V024D5 = {
	0x024D5,
	"\xE2\x92\xBB"
};

static const nu_udb_t V0023C = {
	0x0023C,
	"\xC8\xBB"
};

static const nu_udb_t V00503 = {
	0x00503,
	"\xD4\x82"
};

static const nu_udb_t V02184 = {
	0x02184,
	"\xE2\x86\x83"
};

static const nu_udb_t V01FA1 = {
	0x01FA1,
	"\xE1\xBE\xA9"
};

static const nu_udb_t V01FA0 = {
	0x01FA0,
	"\xE1\xBE\xA8"
};

static const nu_udb_t V00507 = {
	0x00507,
	"\xD4\x86"
};

static const nu_udb_t V01FA2 = {
	0x01FA2,
	"\xE1\xBE\xAA"
};

static const nu_udb_t V01FA5 = {
	0x01FA5,
	"\xE1\xBE\xAD"
};

static const nu_udb_t V01FA4 = {
	0x01FA4,
	"\xE1\xBE\xAC"
};

static const nu_udb_t V01FA7 = {
	0x01FA7,
	"\xE1\xBE\xAF"
};

static const nu_udb_t V01FA6 = {
	0x01FA6,
	"\xE1\xBE\xAE"
};

static const nu_udb_t V01FA9 = {
	0x01FA9,
	"\xE1\xBD\xA9\xCE\x99"
};

static const nu_udb_t V01FA8 = {
	0x01FA8,
	"\xE1\xBD\xA8\xCE\x99"
};

static const nu_udb_t V0050F = {
	0x0050F,
	"\xD4\x8E"
};

static const nu_udb_t V01FAA = {
	0x01FAA,
	"\xE1\xBD\xAA\xCE\x99"
};

static const nu_udb_t V01FAD = {
	0x01FAD,
	"\xE1\xBD\xAD\xCE\x99"
};

static const nu_udb_t V02C93 = {
	0x02C93,
	"\xE2\xB2\x92"
};

static const nu_udb_t V01FAF = {
	0x01FAF,
	"\xE1\xBD\xAF\xCE\x99"
};

static const nu_udb_t V02C91 = {
	0x02C91,
	"\xE2\xB2\x90"
};

static const nu_udb_t V01E47 = {
	0x01E47,
	"\xE1\xB9\x86"
};

static const nu_udb_t V02CA5 = {
	0x02CA5,
	"\xE2\xB2\xA4"
};

static const nu_udb_t V003BE = {
	0x003BE,
	"\xCE\x9E"
};

static const nu_udb_t V02CA7 = {
	0x02CA7,
	"\xE2\xB2\xA6"
};

static const nu_udb_t V003BF = {
	0x003BF,
	"\xCE\x9F"
};

static const nu_udb_t V003B8 = {
	0x003B8,
	"\xCE\x98"
};

static const nu_udb_t V00223 = {
	0x00223,
	"\xC8\xA2"
};

static const nu_udb_t V0FF52 = {
	0x0FF52,
	"\xEF\xBC\xB2"
};

static const nu_udb_t V003B9 = {
	0x003B9,
	"\xCE\x99"
};

static const nu_udb_t V0A791 = {
	0x0A791,
	"\xEA\x9E\x90"
};

static const nu_udb_t V01E41 = {
	0x01E41,
	"\xE1\xB9\x80"
};

static const nu_udb_t V0A793 = {
	0x0A793,
	"\xEA\x9E\x92"
};

static const nu_udb_t V02C4C = {
	0x02C4C,
	"\xE2\xB0\x9C"
};

static const nu_udb_t V003BA = {
	0x003BA,
	"\xCE\x9A"
};

static const nu_udb_t V00523 = {
	0x00523,
	"\xD4\xA2"
};

static const nu_udb_t V02CE1 = {
	0x02CE1,
	"\xE2\xB3\xA0"
};

static const nu_udb_t V02C48 = {
	0x02C48,
	"\xE2\xB0\x98"
};

static const nu_udb_t V02CD5 = {
	0x02CD5,
	"\xE2\xB3\x94"
};

static const nu_udb_t V00457 = {
	0x00457,
	"\xD0\x87"
};

static const nu_udb_t V003BB = {
	0x003BB,
	"\xCE\x9B"
};

static const nu_udb_t V003B4 = {
	0x003B4,
	"\xCE\x94"
};

static const nu_udb_t V0A7A5 = {
	0x0A7A5,
	"\xEA\x9E\xA4"
};

static const nu_udb_t V0FF4F = {
	0x0FF4F,
	"\xEF\xBC\xAF"
};

static const nu_udb_t V003B5 = {
	0x003B5,
	"\xCE\x95"
};

static const nu_udb_t V001D4 = {
	0x001D4,
	"\xC7\x93"
};

static const nu_udb_t V02CDD = {
	0x02CDD,
	"\xE2\xB3\x9C"
};

static const nu_udb_t V0045F = {
	0x0045F,
	"\xD0\x8F"
};

static const nu_udb_t V003B6 = {
	0x003B6,
	"\xCE\x96"
};

static const nu_udb_t V001D0 = {
	0x001D0,
	"\xC7\x8F"
};

static const nu_udb_t V003B7 = {
	0x003B7,
	"\xCE\x97"
};

static const nu_udb_t V0FF4B = {
	0x0FF4B,
	"\xEF\xBC\xAB"
};

static const nu_udb_t V00280 = {
	0x00280,
	"\xC6\xA6"
};

static const nu_udb_t V0024D = {
	0x0024D,
	"\xC9\x8C"
};

static const nu_udb_t V0A7A9 = {
	0x0A7A9,
	"\xEA\x9E\xA8"
};

static const nu_udb_t V01EA5 = {
	0x01EA5,
	"\xE1\xBA\xA4"
};

static const nu_udb_t V0FF4E = {
	0x0FF4E,
	"\xEF\xBC\xAE"
};

static const nu_udb_t V01EAB = {
	0x01EAB,
	"\xE1\xBA\xAA"
};

static const nu_udb_t V0FF4C = {
	0x0FF4C,
	"\xEF\xBC\xAC"
};

static const nu_udb_t V003B1 = {
	0x003B1,
	"\xCE\x91"
};

static const nu_udb_t V00288 = {
	0x00288,
	"\xC6\xAE"
};

static const nu_udb_t V01E67 = {
	0x01E67,
	"\xE1\xB9\xA6"
};

static const nu_udb_t V0028A = {
	0x0028A,
	"\xC6\xB1"
};

static const nu_udb_t V01E61 = {
	0x01E61,
	"\xE1\xB9\xA0"
};

static const nu_udb_t V0028C = {
	0x0028C,
	"\xC9\x85"
};

static const nu_udb_t V01E63 = {
	0x01E63,
	"\xE1\xB9\xA2"
};

static const nu_udb_t V003B2 = {
	0x003B2,
	"\xCE\x92"
};

static const nu_udb_t V003B3 = {
	0x003B3,
	"\xCE\x93"
};

static const nu_udb_t V02CC1 = {
	0x02CC1,
	"\xE2\xB3\x80"
};

static const nu_udb_t V10440 = {
	0x10440,
	"\xF0\x90\x90\x98"
};

static const nu_udb_t V01FE0 = {
	0x01FE0,
	"\xE1\xBF\xA8"
};

static const nu_udb_t V01E95 = {
	0x01E95,
	"\xE1\xBA\x94"
};

static const nu_udb_t V02CC5 = {
	0x02CC5,
	"\xE2\xB3\x84"
};

static const nu_udb_t V01E9B = {
	0x01E9B,
	"\xE1\xB9\xA0"
};

static const nu_udb_t V003AC = {
	0x003AC,
	"\xCE\x86"
};

static const nu_udb_t V00253 = {
	0x00253,
	"\xC6\x81"
};

static const nu_udb_t V0015D = {
	0x0015D,
	"\xC5\x9C"
};

static const nu_udb_t V0047D = {
	0x0047D,
	"\xD1\xBC"
};

static const nu_udb_t V003AD = {
	0x003AD,
	"\xCE\x88"
};

static const nu_udb_t V0047F = {
	0x0047F,
	"\xD1\xBE"
};

static const nu_udb_t V003AE = {
	0x003AE,
	"\xCE\x89"
};

static const nu_udb_t V00479 = {
	0x00479,
	"\xD1\xB8"
};

static const nu_udb_t V00570 = {
	0x00570,
	"\xD5\x80"
};

static const nu_udb_t V00573 = {
	0x00573,
	"\xD5\x83"
};

static const nu_udb_t V00572 = {
	0x00572,
	"\xD5\x82"
};

static const nu_udb_t V003AF = {
	0x003AF,
	"\xCE\x8A"
};

static const nu_udb_t V00574 = {
	0x00574,
	"\xD5\x84"
};

static const nu_udb_t V01E85 = {
	0x01E85,
	"\xE1\xBA\x84"
};

static const nu_udb_t V00576 = {
	0x00576,
	"\xD5\x86"
};

static const nu_udb_t V003F8 = {
	0x003F8,
	"\xCF\xB7"
};

static const nu_udb_t V00578 = {
	0x00578,
	"\xD5\x88"
};

static const nu_udb_t V0057B = {
	0x0057B,
	"\xD5\x8B"
};

static const nu_udb_t V0057A = {
	0x0057A,
	"\xD5\x8A"
};

static const nu_udb_t V0057D = {
	0x0057D,
	"\xD5\x8D"
};

static const nu_udb_t V0057C = {
	0x0057C,
	"\xD5\x8C"
};

static const nu_udb_t V0057F = {
	0x0057F,
	"\xD5\x8F"
};

static const nu_udb_t V0057E = {
	0x0057E,
	"\xD5\x8E"
};

static const nu_udb_t V003FB = {
	0x003FB,
	"\xCF\xBA"
};

static const nu_udb_t V00227 = {
	0x00227,
	"\xC8\xA6"
};

static const nu_udb_t V003F5 = {
	0x003F5,
	"\xCE\x95"
};

static const nu_udb_t V0A7A3 = {
	0x0A7A3,
	"\xEA\x9E\xA2"
};

static const nu_udb_t V02179 = {
	0x02179,
	"\xE2\x85\xA9"
};

static const nu_udb_t V02CDF = {
	0x02CDF,
	"\xE2\xB3\x9E"
};

static const nu_udb_t V003F0 = {
	0x003F0,
	"\xCE\x9A"
};

static const nu_udb_t V02CD9 = {
	0x02CD9,
	"\xE2\xB3\x98"
};

static const nu_udb_t V00569 = {
	0x00569,
	"\xD4\xB9"
};

static const nu_udb_t V00568 = {
	0x00568,
	"\xD4\xB8"
};

static const nu_udb_t V003F1 = {
	0x003F1,
	"\xCE\xA1"
};

static const nu_udb_t V0056A = {
	0x0056A,
	"\xD4\xBA"
};

static const nu_udb_t V003F2 = {
	0x003F2,
	"\xCF\xB9"
};

static const nu_udb_t V0056C = {
	0x0056C,
	"\xD4\xBC"
};

static const nu_udb_t V0056F = {
	0x0056F,
	"\xD4\xBF"
};

static const nu_udb_t V0056E = {
	0x0056E,
	"\xD4\xBE"
};

static const nu_udb_t V02C3C = {
	0x02C3C,
	"\xE2\xB0\x8C"
};

static const nu_udb_t V02C3E = {
	0x02C3E,
	"\xE2\xB0\x8E"
};

static const nu_udb_t V02CEC = {
	0x02CEC,
	"\xE2\xB3\xAB"
};

static const nu_udb_t V02C38 = {
	0x02C38,
	"\xE2\xB0\x88"
};

static const nu_udb_t V02C3A = {
	0x02C3A,
	"\xE2\xB0\x8A"
};

static const nu_udb_t V02C34 = {
	0x02C34,
	"\xE2\xB0\x84"
};

static const nu_udb_t V00575 = {
	0x00575,
	"\xD5\x85"
};

static const nu_udb_t V02C36 = {
	0x02C36,
	"\xE2\xB0\x86"
};

static const nu_udb_t V02C30 = {
	0x02C30,
	"\xE2\xB0\x80"
};

static const nu_udb_t V02C32 = {
	0x02C32,
	"\xE2\xB0\x82"
};

static const nu_udb_t V00571 = {
	0x00571,
	"\xD5\x81"
};

static const nu_udb_t V003DD = {
	0x003DD,
	"\xCF\x9C"
};

static const nu_udb_t V024E3 = {
	0x024E3,
	"\xE2\x93\x89"
};

static const nu_udb_t V024D0 = {
	0x024D0,
	"\xE2\x92\xB6"
};

static const nu_udb_t V003DF = {
	0x003DF,
	"\xCF\x9E"
};

static const nu_udb_t V01F35 = {
	0x01F35,
	"\xE1\xBC\xBD"
};

static const nu_udb_t V01ED3 = {
	0x01ED3,
	"\xE1\xBB\x92"
};

static const nu_udb_t V01E21 = {
	0x01E21,
	"\xE1\xB8\xA0"
};

static const nu_udb_t V01F37 = {
	0x01F37,
	"\xE1\xBC\xBF"
};

static const nu_udb_t V0A783 = {
	0x0A783,
	"\xEA\x9E\x82"
};

static const nu_udb_t V00079 = {
	0x00079,
	"\x59"
};

static const nu_udb_t V0A781 = {
	0x0A781,
	"\xEA\x9E\x80"
};

static const nu_udb_t V0007A = {
	0x0007A,
	"\x5A"
};

static const nu_udb_t V00586 = {
	0x00586,
	"\xD5\x96"
};

static const nu_udb_t V003CC = {
	0x003CC,
	"\xCE\x8C"
};

static const nu_udb_t V0A785 = {
	0x0A785,
	"\xEA\x9E\x84"
};

static const nu_udb_t V0006F = {
	0x0006F,
	"\x4F"
};

static const nu_udb_t V00076 = {
	0x00076,
	"\x56"
};

static const nu_udb_t V0006D = {
	0x0006D,
	"\x4D"
};

static const nu_udb_t V0021B = {
	0x0021B,
	"\xC8\x9A"
};

static const nu_udb_t V00247 = {
	0x00247,
	"\xC9\x86"
};

static const nu_udb_t V00070 = {
	0x00070,
	"\x50"
};

static const nu_udb_t V0006B = {
	0x0006B,
	"\x4B"
};

static const nu_udb_t V00217 = {
	0x00217,
	"\xC8\x96"
};

static const nu_udb_t V02CC9 = {
	0x02CC9,
	"\xE2\xB3\x88"
};

static const nu_udb_t V00064 = {
	0x00064,
	"\x44"
};

static const nu_udb_t V00075 = {
	0x00075,
	"\x55"
};

static const nu_udb_t V00127 = {
	0x00127,
	"\xC4\xA6"
};

static const nu_udb_t V00065 = {
	0x00065,
	"\x45"
};

static const nu_udb_t V00078 = {
	0x00078,
	"\x58"
};

static const nu_udb_t V00066 = {
	0x00066,
	"\x46"
};

static const nu_udb_t V00067 = {
	0x00067,
	"\x47"
};

static const nu_udb_t V01EA1 = {
	0x01EA1,
	"\xE1\xBA\xA0"
};

static const nu_udb_t V01F14 = {
	0x01F14,
	"\xE1\xBC\x9C"
};

static const nu_udb_t V0A64F = {
	0x0A64F,
	"\xEA\x99\x8E"
};

static const nu_udb_t V0012F = {
	0x0012F,
	"\xC4\xAE"
};

static const nu_udb_t V00062 = {
	0x00062,
	"\x42"
};

static const nu_udb_t V00063 = {
	0x00063,
	"\x43"
};

static const nu_udb_t V01F10 = {
	0x01F10,
	"\xE1\xBC\x98"
};

static const nu_udb_t V01E01 = {
	0x01E01,
	"\xE1\xB8\x80"
};

static const nu_udb_t V01ECD = {
	0x01ECD,
	"\xE1\xBB\x8C"
};

static const nu_udb_t V01E07 = {
	0x01E07,
	"\xE1\xB8\x86"
};

static const nu_udb_t V01ECF = {
	0x01ECF,
	"\xE1\xBB\x8E"
};

static const nu_udb_t V01F11 = {
	0x01F11,
	"\xE1\xBC\x99"
};

static const nu_udb_t V00130 = {
	0x00130,
	"\xC4\xB0"
};

static const nu_udb_t V01E0B = {
	0x01E0B,
	"\xE1\xB8\x8A"
};

static const nu_udb_t V01F12 = {
	0x01F12,
	"\xE1\xBC\x9A"
};

static const nu_udb_t V0A723 = {
	0x0A723,
	"\xEA\x9C\xA2"
};

static const nu_udb_t V01F13 = {
	0x01F13,
	"\xE1\xBC\x9B"
};

static const nu_udb_t V024D2 = {
	0x024D2,
	"\xE2\x92\xB8"
};

static const nu_udb_t V00525 = {
	0x00525,
	"\xD4\xA4"
};

static const nu_udb_t V024E0 = {
	0x024E0,
	"\xE2\x93\x86"
};

static const nu_udb_t V01EB5 = {
	0x01EB5,
	"\xE1\xBA\xB4"
};

static const nu_udb_t V00527 = {
	0x00527,
	"\xD4\xA6"
};

static const nu_udb_t V00292 = {
	0x00292,
	"\xC6\xB7"
};

static const nu_udb_t V004A9 = {
	0x004A9,
	"\xD2\xA8"
};

static const nu_udb_t V00521 = {
	0x00521,
	"\xD4\xA0"
};

static const nu_udb_t V0A729 = {
	0x0A729,
	"\xEA\x9C\xA8"
};

static const nu_udb_t V01F04 = {
	0x01F04,
	"\xE1\xBC\x8C"
};

static const nu_udb_t V000E7 = {
	0x000E7,
	"\xC3\x87"
};

static const nu_udb_t V0A669 = {
	0x0A669,
	"\xEA\x99\xA8"
};

static const nu_udb_t V000E5 = {
	0x000E5,
	"\xC3\x85"
};

static const nu_udb_t V004AB = {
	0x004AB,
	"\xD2\xAA"
};

static const nu_udb_t V01F06 = {
	0x01F06,
	"\xE1\xBC\x8E"
};

static const nu_udb_t V01F00 = {
	0x01F00,
	"\xE1\xBC\x88"
};

static const nu_udb_t V01F02 = {
	0x01F02,
	"\xE1\xBC\x8A"
};

static const nu_udb_t V01F7C = {
	0x01F7C,
	"\xE1\xBF\xBA"
};

static const nu_udb_t V000EF = {
	0x000EF,
	"\xC3\x8F"
};

static const nu_udb_t V004BF = {
	0x004BF,
	"\xD2\xBE"
};

static const nu_udb_t V02C73 = {
	0x02C73,
	"\xE2\xB1\xB2"
};

static const nu_udb_t V01F78 = {
	0x01F78,
	"\xE1\xBF\xB8"
};

static const nu_udb_t V001CB = {
	0x001CB,
	"\xC7\x8A"
};

static const nu_udb_t V01F7A = {
	0x01F7A,
	"\xE1\xBF\xAA"
};

static const nu_udb_t V01F74 = {
	0x01F74,
	"\xE1\xBF\x8A"
};

static const nu_udb_t V02C35 = {
	0x02C35,
	"\xE2\xB0\x85"
};

static const nu_udb_t V01F76 = {
	0x01F76,
	"\xE1\xBF\x9A"
};

static const nu_udb_t V02C3B = {
	0x02C3B,
	"\xE2\xB0\x8B"
};

static const nu_udb_t V01F72 = {
	0x01F72,
	"\xE1\xBF\x88"
};

static const nu_udb_t V02C39 = {
	0x02C39,
	"\xE2\xB0\x89"
};

static const nu_udb_t V02C61 = {
	0x02C61,
	"\xE2\xB1\xA0"
};

static const nu_udb_t V0050B = {
	0x0050B,
	"\xD4\x8A"
};

static const nu_udb_t V02C5D = {
	0x02C5D,
	"\xE2\xB0\xAD"
};

static const nu_udb_t V00565 = {
	0x00565,
	"\xD4\xB5"
};

static const nu_udb_t V024E7 = {
	0x024E7,
	"\xE2\x93\x8D"
};

static const nu_udb_t V00567 = {
	0x00567,
	"\xD4\xB7"
};

static const nu_udb_t V02CBF = {
	0x02CBF,
	"\xE2\xB2\xBE"
};

static const nu_udb_t V00561 = {
	0x00561,
	"\xD4\xB1"
};

static const nu_udb_t V02CBB = {
	0x02CBB,
	"\xE2\xB2\xBA"
};

static const nu_udb_t V01EE9 = {
	0x01EE9,
	"\xE1\xBB\xA8"
};

static const nu_udb_t V01F41 = {
	0x01F41,
	"\xE1\xBD\x89"
};

static const nu_udb_t V004E5 = {
	0x004E5,
	"\xD3\xA4"
};

static const nu_udb_t V01F43 = {
	0x01F43,
	"\xE1\xBD\x8B"
};

static const nu_udb_t V024E1 = {
	0x024E1,
	"\xE2\x93\x87"
};

static const nu_udb_t V02CAD = {
	0x02CAD,
	"\xE2\xB2\xAC"
};

static const nu_udb_t V02CAF = {
	0x02CAF,
	"\xE2\xB2\xAE"
};

static const nu_udb_t V02CA9 = {
	0x02CA9,
	"\xE2\xB2\xA8"
};

static const nu_udb_t V02CAB = {
	0x02CAB,
	"\xE2\xB2\xAA"
};

static const nu_udb_t V01FAB = {
	0x01FAB,
	"\xE1\xBD\xAB\xCE\x99"
};

static const nu_udb_t V00445 = {
	0x00445,
	"\xD0\xA5"
};

static const nu_udb_t V01F91 = {
	0x01F91,
	"\xE1\xBE\x99"
};

static const nu_udb_t V01E81 = {
	0x01E81,
	"\xE1\xBA\x80"
};

static const nu_udb_t V01F93 = {
	0x01F93,
	"\xE1\xBE\x9B"
};

static const nu_udb_t V01F8D = {
	0x01F8D,
	"\xE1\xBC\x8D\xCE\x99"
};

static const nu_udb_t V01F8F = {
	0x01F8F,
	"\xE1\xBC\x8F\xCE\x99"
};

static const nu_udb_t V004EB = {
	0x004EB,
	"\xD3\xAA"
};

static const nu_udb_t V01F88 = {
	0x01F88,
	"\xE1\xBC\x88\xCE\x99"
};

static const nu_udb_t V01F89 = {
	0x01F89,
	"\xE1\xBC\x89\xCE\x99"
};

static const nu_udb_t V01F8A = {
	0x01F8A,
	"\xE1\xBC\x8A\xCE\x99"
};

static const nu_udb_t V01F8B = {
	0x01F8B,
	"\xE1\xBC\x8B\xCE\x99"
};

static const nu_udb_t V01F84 = {
	0x01F84,
	"\xE1\xBE\x8C"
};

static const nu_udb_t V0021D = {
	0x0021D,
	"\xC8\x9C"
};

static const nu_udb_t V01F85 = {
	0x01F85,
	"\xE1\xBE\x8D"
};

static const nu_udb_t V0022B = {
	0x0022B,
	"\xC8\xAA"
};

static const nu_udb_t V01F86 = {
	0x01F86,
	"\xE1\xBE\x8E"
};

static const nu_udb_t V024DB = {
	0x024DB,
	"\xE2\x93\x81"
};

static const nu_udb_t V01F87 = {
	0x01F87,
	"\xE1\xBE\x8F"
};

static const nu_udb_t V0049F = {
	0x0049F,
	"\xD2\x9E"
};

static const nu_udb_t V01F80 = {
	0x01F80,
	"\xE1\xBE\x88"
};

static const nu_udb_t V00451 = {
	0x00451,
	"\xD0\x81"
};

static const nu_udb_t V01F81 = {
	0x01F81,
	"\xE1\xBE\x89"
};

static const nu_udb_t V01F82 = {
	0x01F82,
	"\xE1\xBE\x8A"
};

static const nu_udb_t V01F83 = {
	0x01F83,
	"\xE1\xBE\x8B"
};

static const nu_udb_t V004F7 = {
	0x004F7,
	"\xD3\xB6"
};


static const nu_udb_t* VALUES[] = {
	&V01FFC, &V01EB9, &V02CF3, &V00213, &V00071, &V0045B, 
	&V00073, &V00072, &V02CEE, &V00074, &V00077, &V000E1, 
	&V0217D, &V0217A, &V02C76, &V02D12, &V000EA, &V02D14, 
	&V000E8, &V02D16, &V00061, &V02D18, &V0023F, &V02D1A, 
	&V01EAD, &V02D1C, &V02D1F, &V02D1E, &V00069, &V00068, 
	&V01EB7, &V0006A, &V000FA, &V0006C, &V000F8, &V0006E, 
	&V01FF3, &V000FF, &V00585, &V000FD, &V00515, &V01E25, 
	&V0051B, &V02D0E, &V00519, &V00581, &V01FE1, &V02CD1, 
	&V0051D, &V01FD1, &V00563, &V02C59, &V0020D, &V0020F, 
	&V00260, &V00564, &V02C5C, &V00209, &V0056B, &V0020B, 
	&V02D21, &V02D20, &V02D23, &V00205, &V0056D, &V02D24, 
	&V02D27, &V024D8, &V00252, &V024DA, &V00250, &V00207, 
	&V000B5, &V01FC3, &V00201, &V02CB1, &V00579, &V02CB7, 
	&V00203, &V02CB5, &V01EE5, &V10449, &V01EEB, &V02CB9, 
	&V00249, &V024D4, &V01EEF, &V02CBD, &V01EED, &V00437, 
	&V024DF, &V00431, &V024DD, &V00433, &V0027D, &V0024F, 
	&V00275, &V0A737, &V024E9, &V00439, &V00271, &V00272, 
	&V0026F, &V00268, &V00269, &V0026B, &V0A7A7, &V00265, 
	&V00266, &V0A73F, &V01EC7, &V0A73B, &V024E4, &V024E6, 
	&V024E2, &V02175, &V01EC9, &V02177, &V02170, &V02171, 
	&V02172, &V02C83, &V02173, &V02C81, &V01ED1, &V01F01, 
	&V0A77C, &V02C85, &V0A77F, &V0A77A, &V01EDB, &V01E43, 
	&V000F1, &V000F0, &V000F3, &V000F2, &V000F5, &V000F4, 
	&V0214E, &V000F6, &V000F9, &V004E3, &V000FB, &V01F77, 
	&V0A76D, &V000FC, &V0A76B, &V000FE, &V00289, &V000E0, 
	&V0028B, &V000E2, &V0A761, &V000E4, &V0A73D, &V000E6, 
	&V000E9, &V0A763, &V000EB, &V0A75F, &V000ED, &V000EC, 
	&V01F64, &V000EE, &V00283, &V004FB, &V0A759, &V00459, 
	&V0A72F, &V02CD3, &V0A72D, &V0A75B, &V0A755, &V00453, 
	&V0A757, &V0A751, &V0A753, &V0A74D, &V0A74F, &V0A749, 
	&V0A74B, &V0A745, &V01EDF, &V02D06, &V0A747, &V02CC3, 
	&V0A741, &V0A743, &V01F42, &V01E3D, &V01F40, &V10445, 
	&V01E3F, &V1044B, &V01F44, &V00499, &V01E39, &V1044F, 
	&V01E3B, &V1044D, &V003D0, &V024E5, &V01E35, &V01E37, 
	&V00259, &V01E31, &V02178, &V01E2D, &V01E29, &V004AF, 
	&V0043C, &V01E15, &V0A665, &V01E17, &V01EBF, &V01E11, 
	&V0043E, &V02CDB, &V01FBC, &V01FA3, &V00163, &V0FF49, 
	&V00438, &V01E19, &V024D1, &V01E1B, &V0043B, &V004B9, 
	&V0043A, &V00434, &V00436, &V024E8, &V00430, &V01E23, 
	&V00432, &V0A78C, &V01E13, &V01E2F, &V01F90, &V024D6, 
	&V01E0D, &V01E2B, &V01E0F, &V01F9B, &V024D3, &V01F99, 
	&V00159, &V02CCB, &V01E09, &V01E03, &V01E7D, &V02CC7, 
	&V01E7F, &V00263, &V024D9, &V00583, &V01E79, &V01E7B, 
	&V01E75, &V01EC5, &V01E1F, &V01E77, &V01E71, &V01E73, 
	&V01F8E, &V02D25, &V01F8C, &V02CD7, &V0A65D, &V02D0A, 
	&V01E6D, &V02D08, &V01E6F, &V02D2D, &V01E69, &V003D7, 
	&V003D6, &V01E6B, &V01E65, &V003DB, &V01E33, &V1043C, 
	&V1043E, &V01EDD, &V10438, &V003C1, &V1043A, &V003C3, 
	&V003C2, &V003C5, &V003C4, &V003C7, &V02D00, &V10442, 
	&V003C8, &V003CB, &V003CA, &V003CD, &V0FF54, &V10434, 
	&V01E27, &V1044A, &V0A787, &V10436, &V02D0C, &V10430, 
	&V10432, &V1042C, &V02D10, &V0A75D, &V01E51, &V1042E, 
	&V01E53, &V01EF3, &V01E55, &V01E8D, &V01E57, &V003E1, 
	&V01E59, &V003E3, &V01E5B, &V10428, &V01E5D, &V1042A, 
	&V01E5F, &V0045C, &V0045E, &V00458, &V0045D, &V01E83, 
	&V00443, &V003EF, &V00441, &V0045A, &V01E49, &V00454, 
	&V01E4B, &V00456, &V01E4D, &V00450, &V01E4F, &V00452, 
	&V00103, &V01E91, &V0044C, &V0FF56, &V004B3, &V0044E, 
	&V004B1, &V0A765, &V00448, &V0A767, &V0044A, &V0A769, 
	&V00444, &V00446, &V00131, &V0FF5A, &V00133, &V01ED9, 
	&V00440, &V01EA3, &V004A3, &V00442, &V10431, &V01EAF, 
	&V10433, &V0013A, &V10435, &V0013C, &V10437, &V0013E, 
	&V10439, &V00219, &V1043B, &V004BB, &V1043D, &V004B5, 
	&V1043F, &V01EBD, &V00129, &V00167, &V0012B, &V004B7, 
	&V0012D, &V01EBB, &V001C5, &V00161, &V10429, &V0A76F, 
	&V1042B, &V001C8, &V1042D, &V001CE, &V1042F, &V001CC, 
	&V01E87, &V004AD, &V01E89, &V00135, &V01E8B, &V00137, 
	&V00121, &V00123, &V01E8F, &V0011D, &V01EB1, &V0011F, 
	&V01EB3, &V0A7A1, &V02D02, &V00119, &V10441, &V0011B, 
	&V10443, &V00115, &V02D04, &V10444, &V10447, &V10446, 
	&V00171, &V10448, &V00173, &V00117, &V00175, &V1044C, 
	&V00177, &V1044E, &V01EA7, &V003E7, &V0043F, &V0017A, 
	&V0A739, &V00111, &V0017F, &V0017E, &V004E9, &V00113, 
	&V00435, &V003ED, &V00165, &V00577, &V01ED5, &V0010D, 
	&V00169, &V00257, &V0043D, &V00125, &V0016D, &V0010F, 
	&V00109, &V0010B, &V004ED, &V00105, &V01EC1, &V0217B, 
	&V01EC3, &V0A72B, &V003C0, &V00501, &V003C6, &V024DC, 
	&V00107, &V02C65, &V01ECB, &V01F70, &V01F73, &V003C9, 
	&V003CE, &V00101, &V01EF1, &V004DB, &V01ED7, &V00517, 
	&V01EF5, &V003D1, &V01EF7, &V00513, &V01EF9, &V003D5, 
	&V01EFB, &V0018C, &V01EFD, &V003D9, &V01EFF, &V01E93, 
	&V01EE1, &V02D22, &V01EE3, &V02D1D, &V00449, &V01FE5, 
	&V01EE7, &V02D19, &V02D1B, &V02D15, &V0044F, &V02D17, 
	&V00471, &V02D11, &V00473, &V02D13, &V00475, &V02D0D, 
	&V00477, &V02D0F, &V0044B, &V02D09, &V0047B, &V02D0B, 
	&V02D05, &V02D07, &V0044D, &V02D01, &V00461, &V02D03, 
	&V0015B, &V00155, &V00465, &V001D2, &V00467, &V00157, 
	&V00469, &V00151, &V0046B, &V00153, &V0046D, &V001DA, 
	&V0046F, &V0021F, &V00491, &V0014D, &V00493, &V0014F, 
	&V00495, &V0A735, &V00497, &V00148, &V0014B, &V001C6, 
	&V0049B, &V00144, &V0049D, &V00146, &V00140, &V01F23, 
	&V00509, &V01F21, &V00142, &V001BD, &V01F24, &V001F2, 
	&V0016B, &V001BF, &V01EA9, &V001C9, &V0016F, &V001B9, 
	&V0048D, &V001B4, &V0048F, &V001B6, &V01F30, &V001B0, 
	&V00481, &V001AD, &V01F34, &V001A8, &V00455, &V001A5, 
	&V0048B, &V001A1, &V00447, &V0017C, &V004BD, &V001A3, 
	&V0217C, &V01F03, &V004A1, &V0019E, &V00199, &V01F07, 
	&V004A5, &V0019A, &V004A7, &V00195, &V00580, &V0A66D, 
	&V00582, &V00192, &V0A66B, &V0A667, &V0A661, &V00185, 
	&V004D1, &V01F75, &V004D3, &V02CE3, &V004E7, &V0A663, 
	&V004D7, &V003E5, &V004D9, &V003EB, &V0015F, &V003E9, 
	&V004EF, &V01F79, &V004DF, &V01F63, &V0A65F, &V00183, 
	&V004F1, &V004C2, &V0A659, &V004C4, &V001FD, &V004C6, 
	&V0A65B, &V004C8, &V001FF, &V004CA, &V0A655, &V004CC, 
	&V004CF, &V004CE, &V001F9, &V00251, &V004F3, &V0A657, 
	&V001FB, &V0A651, &V001F5, &V0A653, &V004F9, &V000E3, 
	&V024D7, &V0A64D, &V004FD, &V01F7D, &V004FF, &V00180, 
	&V004E1, &V001F3, &V00240, &V024DE, &V00242, &V01F45, 
	&V004D5, &V00188, &V0A649, &V001ED, &V0A64B, &V001EF, 
	&V0A645, &V001E9, &V004DD, &V01E45, &V0A647, &V001EB, 
	&V0A641, &V01F57, &V01E05, &V00584, &V004F5, &V01F33, 
	&V01F15, &V00231, &V001E5, &V0A643, &V001E7, &V001E1, 
	&V001E3, &V001DC, &V001DD, &V001DF, &V001D8, &V0FF59, 
	&V0051F, &V0FF55, &V0FF57, &V0FF51, &V01F05, &V0FF53, 
	&V01FAE, &V0FF4D, &V01FAC, &V0FF48, &V00505, &V01FB3, 
	&V0FF4A, &V01FB1, &V0FF45, &V0FF46, &V01F31, &V02C37, 
	&V0050D, &V01F32, &V0FF47, &V00211, &V01FBE, &V01F36, 
	&V0FF41, &V00215, &V0FF42, &V02C3D, &V0FF43, &V02C31, 
	&V02174, &V02C33, &V02176, &V01F20, &V0A695, &V01F22, 
	&V01F25, &V00562, &V01F27, &V01F26, &V0217E, &V00566, 
	&V0A697, &V02C3F, &V0A691, &V001D6, &V0A693, &V00233, 
	&V01F51, &V01F95, &V01F53, &V0A68D, &V01F55, &V02CCF, 
	&V01F9E, &V0A68F, &V01F9C, &V0A689, &V0A68B, &V0A685, 
	&V0A687, &V02C51, &V0FF50, &V02C53, &V02C52, &V02C55, 
	&V02C54, &V02C57, &V02C56, &V0A725, &V0FF58, &V02C5B, 
	&V02C5A, &V0A681, &V02C6C, &V0A683, &V02C5E, &V02C41, 
	&V02C40, &V01F97, &V01F71, &V02C45, &V0FF44, &V02C47, 
	&V02C46, &V02C49, &V00256, &V02C4B, &V02C4A, &V02C4D, 
	&V01F7B, &V02C4F, &V02C42, &V02C43, &V01D7D, &V01D79, 
	&V01F61, &V01F60, &V02C44, &V01F62, &V01F65, &V0037C, 
	&V01F67, &V01F66, &V01FCC, &V00463, &V01E1D, &V0037D, 
	&V01FD0, &V0037B, &V02C50, &V00377, &V02C4E, &V00371, 
	&V00225, &V01F92, &V02C66, &V01F94, &V02C68, &V01F96, 
	&V0217F, &V01F98, &V0022D, &V01F9A, &V01F9D, &V02CA3, 
	&V01F9F, &V02CA1, &V02CCD, &V02C95, &V02C58, &V02C97, 
	&V00373, &V02C99, &V00345, &V02C9B, &V0025B, &V02C9D, 
	&V00254, &V02C9F, &V00511, &V02CB3, &V003BC, &V0A733, 
	&V0022F, &V01FB0, &V00229, &V02C87, &V02C6A, &V02C89, 
	&V0A727, &V02C8B, &V0024B, &V02C8D, &V003BD, &V02C8F, 
	&V024D5, &V0023C, &V00503, &V02184, &V01FA1, &V01FA0, 
	&V00507, &V01FA2, &V01FA5, &V01FA4, &V01FA7, &V01FA6, 
	&V01FA9, &V01FA8, &V0050F, &V01FAA, &V01FAD, &V02C93, 
	&V01FAF, &V02C91, &V01E47, &V02CA5, &V003BE, &V02CA7, 
	&V003BF, &V003B8, &V00223, &V0FF52, &V003B9, &V0A791, 
	&V01E41, &V0A793, &V02C4C, &V003BA, &V00523, &V02CE1, 
	&V02C48, &V02CD5, &V00457, &V003BB, &V003B4, &V0A7A5, 
	&V0FF4F, &V003B5, &V001D4, &V02CDD, &V0045F, &V003B6, 
	&V001D0, &V003B7, &V0FF4B, &V00280, &V0024D, &V0A7A9, 
	&V01EA5, &V0FF4E, &V01EAB, &V0FF4C, &V003B1, &V00288, 
	&V01E67, &V0028A, &V01E61, &V0028C, &V01E63, &V003B2, 
	&V003B3, &V02CC1, &V10440, &V01FE0, &V01E95, &V02CC5, 
	&V01E9B, &V003AC, &V00253, &V0015D, &V0047D, &V003AD, 
	&V0047F, &V003AE, &V00479, &V00570, &V00573, &V00572, 
	&V003AF, &V00574, &V01E85, &V00576, &V003F8, &V00578, 
	&V0057B, &V0057A, &V0057D, &V0057C, &V0057F, &V0057E, 
	&V003FB, &V00227, &V003F5, &V0A7A3, &V02179, &V02CDF, 
	&V003F0, &V02CD9, &V00569, &V00568, &V003F1, &V0056A, 
	&V003F2, &V0056C, &V0056F, &V0056E, &V02C3C, &V02C3E, 
	&V02CEC, &V02C38, &V02C3A, &V02C34, &V00575, &V02C36, 
	&V02C30, &V02C32, &V00571, &V003DD, &V024E3, &V024D0, 
	&V003DF, &V01F35, &V01ED3, &V01E21, &V01F37, &V0A783, 
	&V00079, &V0A781, &V0007A, &V00586, &V003CC, &V0A785, 
	&V0006F, &V00076, &V0006D, &V0021B, &V00247, &V00070, 
	&V0006B, &V00217, &V02CC9, &V00064, &V00075, &V00127, 
	&V00065, &V00078, &V00066, &V00067, &V01EA1, &V01F14, 
	&V0A64F, &V0012F, &V00062, &V00063, &V01F10, &V01E01, 
	&V01ECD, &V01E07, &V01ECF, &V01F11, &V00130, &V01E0B, 
	&V01F12, &V0A723, &V01F13, &V024D2, &V00525, &V024E0, 
	&V01EB5, &V00527, &V00292, &V004A9, &V00521, &V0A729, 
	&V01F04, &V000E7, &V0A669, &V000E5, &V004AB, &V01F06, 
	&V01F00, &V01F02, &V01F7C, &V000EF, &V004BF, &V02C73, 
	&V01F78, &V001CB, &V01F7A, &V01F74, &V02C35, &V01F76, 
	&V02C3B, &V01F72, &V02C39, &V02C61, &V0050B, &V02C5D, 
	&V00565, &V024E7, &V00567, &V02CBF, &V00561, &V02CBB, 
	&V01EE9, &V01F41, &V004E5, &V01F43, &V024E1, &V02CAD, 
	&V02CAF, &V02CA9, &V02CAB, &V01FAB, &V00445, &V01F91, 
	&V01E81, &V01F93, &V01F8D, &V01F8F, &V004EB, &V01F88, 
	&V01F89, &V01F8A, &V01F8B, &V01F84, &V0021D, &V01F85, 
	&V0022B, &V01F86, &V024DB, &V01F87, &V0049F, &V01F80, 
	&V00451, &V01F81, &V01F82, &V01F83, &V004F7, 
};

