/*
1382281313
FNV_OFFSET_BASIS: FFFFFFFF,
FNV_PRIME: 01000193,
FNV_SIZE: 1043
*/

static const int16_t FNV[] = {
	-1042, -1041, -1040, 1, -1038, 1, -1034, 2, -1032, 1, -1030, 1, 
	-1028, 1, -1010, 1, -1008, -1006, -1003, 2, 0, 1, -998, 3, 
	0, 3, 0, 1, -988, -986, 0, 0, 2, -982, 2, -978, 
	2, -976, 2, -972, 3, -971, 1, -962, 1, -961, 1, -959, 
	1, 2, 1, 2, -958, 0, -956, 0, -940, 0, -934, 0, 
	-932, 0, -930, 0, 1, -928, 1, -926, -924, 0, -922, -916, 
	-912, 0, -910, 0, -908, 0, -906, 0, 3, -898, 1, -897, 
	-896, 0, -895, -894, -892, 0, -890, 0, -889, 0, -888, 0, 
	4, -885, 2, -883, 3, -881, 3, -880, -879, 0, -878, 0, 
	-877, 0, -876, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
	8, -874, 3, -872, 7, -870, 1, -868, 1, 2, 1, 1, 
	1, 1, 1, 4, 2, -867, 2, 5, 2, 2, 2, 1, 
	1, 2, 1, 1, 2, 1, 2, 1, -866, -865, -864, -860, 
	-855, -850, -845, -840, 2, 3, 3, 6, -838, -834, 3, 1, 
	-832, -829, -825, -817, -813, -810, -809, 0, 3, 0, 2, 0, 
	3, 0, 3, 0, 1, 0, -808, -801, -794, 0, -791, 0, 
	-789, -783, -776, -774, -769, -768, -766, -764, 0, 0, 0, -748, 
	0, -746, 0, -744, 0, -742, 0, -737, 0, -735, 0, -734, 
	0, -733, 0, -731, 0, -730, 0, -729, -728, 3, -727, 3, 
	-725, 2, -723, 2, 0, -721, 0, -720, 0, -719, 0, -717, 
	-715, 5, -714, 5, 0, -713, -709, 3, 0, -705, 0, -703, 
	0, -699, 0, -695, -689, 3, -687, 1, -686, 3, -685, 3, 
	0, -683, -682, 0, 0, 0, 0, 0, -681, -680, -679, -677, 
	-675, -673, -671, -670, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -668, -666, 
	0, -665, -664, 0, 0, -663, -661, 0, -659, 0, -658, -656, 
	-654, 0, 0, -653, 0, -651, 0, 0, -650, 0, 0, 0, 
	0, 0, -649, -647, 0, 0, -646, -645, -644, -643, -642, -641, 
	-640, -639, -638, -636, -634, -633, -632, -629, -628, -627, -626, -625, 
	-624, -623, -619, -617, -616, -615, -613, -611, -609, -607, -606, -603, 
	-602, -601, 2, 7, 2, 1, 2, 5, 1, 1, 3, 3, 
	2, 6, -600, 1, 5, 1, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -598, -596, 
	-594, -592, -590, -589, -588, -587, -586, -585, -584, -583, -582, -581, 
	-580, -579, -578, -577, -574, -573, 0, -572, -571, -569, -567, -566, 
	-565, -564, 0, -562, -560, -558, 0, 0, 0, 0, 0, -557, 
	0, 0, -556, -555, 0, 0, 0, 0, 0, 0, 0, -554, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -553, -552, -551, -550, -549, -547, -541, -540, -535, -533, -532, 
	-526, -524, -523, -521, -513, 0, 0, -512, 0, -510, -508, -507, 
	-505, 0, -503, -502, 0, -501, 0, -499, 0, -498, 0, -497, 
	0, -496, 0, -495, 0, -494, 0, 0, -493, 0, 0, 0, 
	-492, 0, -491, 0, -490, 0, 2, -489, 2, 0, 1, -488, 
	1, -486, 1, -485, 1, 1, -480, 2, 5, -473, 1, -472, 
	1, -469, 3, -467, 3, -460, -458, -457, 2, 2, 0, -454, 
	-453, 0, -452, -448, -447, -445, 0, -442, -441, 0, 0, -439, 
	0, -438, -436, -434, -432, 0, -429, 0, 0, 0, -427, -426, 
	0, -425, -423, 0, -422, 0, -421, -420, -419, -418, 1, 0, 
	0, 4, -416, 2, 1, -412, 1, 4, 3, -408, 0, -406, 
	0, -404, 0, 0, 0, 0, -400, 0, 0, 0, 2, 1, 
	-398, -396, -392, 1, -391, 1, -390, -386, 1, -382, -381, -380, 
	1, -378, 2, -374, 2, -369, 3, -367, 6, -360, -359, -358, 
	4, -356, -355, 0, -354, 0, -353, 0, -351, 0, -348, 0, 
	-346, 0, -344, 0, -342, 0, -340, 0, -338, 0, -335, 0, 
	-334, 0, -333, 0, -332, 0, -331, -329, 0, -328, -327, 0, 
	0, 4, 0, 0, -326, 0, -324, 0, -322, 0, -321, 0, 
	-320, 0, 1, 0, 3, 0, 3, 0, 2, 0, 2, 0, 
	2, 0, 2, 0, 1, 0, 1, 0, 4, -317, 1, -313, 
	7, -309, -307, -305, -303, 1, -300, -298, 1, 0, 1, -297, 
	-291, -287, 4, -285, -283, 0, -282, 0, -277, 0, 1, -276, 
	0, -275, -271, 3, -269, 2, -265, 0, -264, -263, -261, -260, 
	0, -259, -257, -255, -254, -253, 1, -252, 1, 4, 2, -250, 
	3, -249, -248, -245, 1, -243, -242, -241, 7, 1, -239, 1, 
	-238, 2, 0, 3, 0, 1, 0, 1, -237, 1, -236, 1, 
	0, 1, -235, 1, 0, 7, 0, 1, 0, 1, 0, 3, 
	0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 2, 
	0, 2, 0, 2, 0, 2, 0, 1, 0, 1, 0, 8, 
	0, -233, 0, 0, -232, -231, 0, -230, 0, -227, -226, -224, 
	0, -222, 0, -221, 0, -220, 0, -219, 0, -217, -216, -215, 
	-214, -212, -208, -206, 0, -204, 0, -202, 0, -200, 0, -198, 
	0, -197, 0, -196, 0, 1, 0, 7, 0, 4, 0, 1, 
	0, 7, 0, 1, 0, 3, 0, 1, -195, 5, -194, 1, 
	-193, 1, -192, 18, -191, 2, 2, 2, 4, 1, 3, 1, 
	14, 1, -190, 2, -189, 1, -188, 2, -187, 1, 8, 2, 
	6, -186, -184, -182, 0, 0, 0, 0, 0, 0, 0, -181, 
	0, -180, -178, -177, -176, -174, -170, -169, -168, -166, -163, -162, 
	-161, -160, 0, -159, 0, -158, 0, -156, 0, -155, 0, -153, 
	0, -152, 0, -151, 0, -148, -147, -144, -143, -142, 4, -141, 
	4, -140, 2, -136, 2, -135, 1, -132, 9, -130, 3, -126, 
	5, -124, 10, -123, 4, -122, 5, 3, 3, 1, 1, 2, 
	1, 3, 1, 1, 1, 11, 6, 1, 2, 1, 3, 2, 
	3, 1, 1, 6, 3, 1, 3, -119, -118, -108, 0, -98, 
	0, -94, 0, -92, 0, 3, 0, 2, 0, -90, -88, 3, 
	0, -86, 0, -72, 0, -71, 0, -70, 0, -66, 0, -60, 
	0, -54, 0, -52, 0, -50, 0, -47, 0, -46, 0, -42, 
	-38, -36, -30, -20, -14, -12, -10, -8, -6, -4, 3, 
};

static const nu_udb_t V00551 = {
	0x00551,
	"\xD6\x81"
};

static const nu_udb_t V00550 = {
	0x00550,
	"\xD6\x80"
};

static const nu_udb_t V00411 = {
	0x00411,
	"\xD0\xB1"
};

static const nu_udb_t V01EFC = {
	0x01EFC,
	"\xE1\xBB\xBD"
};

static const nu_udb_t V00555 = {
	0x00555,
	"\xD6\x85"
};

static const nu_udb_t V0050A = {
	0x0050A,
	"\xD4\x8B"
};

static const nu_udb_t V01FDA = {
	0x01FDA,
	"\xE1\xBD\xB6"
};

static const nu_udb_t V01EFE = {
	0x01EFE,
	"\xE1\xBB\xBF"
};

static const nu_udb_t V01FD8 = {
	0x01FD8,
	"\xE1\xBF\x90"
};

static const nu_udb_t V00504 = {
	0x00504,
	"\xD4\x85"
};

static const nu_udb_t V004B2 = {
	0x004B2,
	"\xD2\xB3"
};

static const nu_udb_t V01EF8 = {
	0x01EF8,
	"\xE1\xBB\xB9"
};

static const nu_udb_t V0041B = {
	0x0041B,
	"\xD0\xBB"
};

static const nu_udb_t V00506 = {
	0x00506,
	"\xD4\x87"
};

static const nu_udb_t V004B6 = {
	0x004B6,
	"\xD2\xB7"
};

static const nu_udb_t V01FF9 = {
	0x01FF9,
	"\xE1\xBD\xB9"
};

static const nu_udb_t V00541 = {
	0x00541,
	"\xD5\xB1"
};

static const nu_udb_t V00540 = {
	0x00540,
	"\xD5\xB0"
};

static const nu_udb_t V004BA = {
	0x004BA,
	"\xD2\xBB"
};

static const nu_udb_t V01EFA = {
	0x01EFA,
	"\xE1\xBB\xBB"
};

static const nu_udb_t V004BC = {
	0x004BC,
	"\xD2\xBD"
};

static const nu_udb_t V00544 = {
	0x00544,
	"\xD5\xB4"
};

static const nu_udb_t V004BE = {
	0x004BE,
	"\xD2\xBF"
};

static const nu_udb_t V00546 = {
	0x00546,
	"\xD5\xB6"
};

static const nu_udb_t V0216B = {
	0x0216B,
	"\xE2\x85\xBB"
};

static const nu_udb_t V0216A = {
	0x0216A,
	"\xE2\x85\xBA"
};

static const nu_udb_t V0054B = {
	0x0054B,
	"\xD5\xBB"
};

static const nu_udb_t V0054A = {
	0x0054A,
	"\xD5\xBA"
};

static const nu_udb_t V0054D = {
	0x0054D,
	"\xD5\xBD"
};

static const nu_udb_t V00500 = {
	0x00500,
	"\xD4\x81"
};

static const nu_udb_t V0054F = {
	0x0054F,
	"\xD5\xBF"
};

static const nu_udb_t V01FE9 = {
	0x01FE9,
	"\xE1\xBF\xA1"
};

static const nu_udb_t V004A8 = {
	0x004A8,
	"\xD2\xA9"
};

static const nu_udb_t V01FEB = {
	0x01FEB,
	"\xE1\xBD\xBB"
};

static const nu_udb_t V0FF22 = {
	0x0FF22,
	"\xEF\xBD\x82"
};

static const nu_udb_t V01EF4 = {
	0x01EF4,
	"\xE1\xBB\xB5"
};

static const nu_udb_t V0FF24 = {
	0x0FF24,
	"\xEF\xBD\x84"
};

static const nu_udb_t V00502 = {
	0x00502,
	"\xD4\x83"
};

static const nu_udb_t V0FF26 = {
	0x0FF26,
	"\xEF\xBD\x86"
};

static const nu_udb_t V0FF29 = {
	0x0FF29,
	"\xEF\xBD\x89"
};

static const nu_udb_t V0FF23 = {
	0x0FF23,
	"\xEF\xBD\x83"
};

static const nu_udb_t V01EF6 = {
	0x01EF6,
	"\xE1\xBB\xB7"
};

static const nu_udb_t V004D2 = {
	0x004D2,
	"\xD3\x93"
};

static const nu_udb_t V0FF2D = {
	0x0FF2D,
	"\xEF\xBD\x8D"
};

static const nu_udb_t V004D4 = {
	0x004D4,
	"\xD3\x95"
};

static const nu_udb_t V01EF0 = {
	0x01EF0,
	"\xE1\xBB\xB1"
};

static const nu_udb_t V01EF2 = {
	0x01EF2,
	"\xE1\xBB\xB3"
};

static const nu_udb_t V010BE = {
	0x010BE,
	"\xE2\xB4\x9E"
};

static const nu_udb_t V004D8 = {
	0x004D8,
	"\xD3\x99"
};

static const nu_udb_t V01EEC = {
	0x01EEC,
	"\xE1\xBB\xAD"
};

static const nu_udb_t V004DA = {
	0x004DA,
	"\xD3\x9B"
};

static const nu_udb_t V01EEE = {
	0x01EEE,
	"\xE1\xBB\xAF"
};

static const nu_udb_t V004DC = {
	0x004DC,
	"\xD3\x9D"
};

static const nu_udb_t V01EE8 = {
	0x01EE8,
	"\xE1\xBB\xA9"
};

static const nu_udb_t V004DE = {
	0x004DE,
	"\xD3\x9F"
};

static const nu_udb_t V004C1 = {
	0x004C1,
	"\xD3\x82"
};

static const nu_udb_t V0FF33 = {
	0x0FF33,
	"\xEF\xBD\x93"
};

static const nu_udb_t V004C3 = {
	0x004C3,
	"\xD3\x84"
};

static const nu_udb_t V0FF31 = {
	0x0FF31,
	"\xEF\xBD\x91"
};

static const nu_udb_t V01EEA = {
	0x01EEA,
	"\xE1\xBB\xAB"
};

static const nu_udb_t V10411 = {
	0x10411,
	"\xF0\x90\x90\xB9"
};

static const nu_udb_t V10410 = {
	0x10410,
	"\xF0\x90\x90\xB8"
};

static const nu_udb_t V10413 = {
	0x10413,
	"\xF0\x90\x90\xBB"
};

static const nu_udb_t V004C9 = {
	0x004C9,
	"\xD3\x8A"
};

static const nu_udb_t V10415 = {
	0x10415,
	"\xF0\x90\x90\xBD"
};

static const nu_udb_t V01EE4 = {
	0x01EE4,
	"\xE1\xBB\xA5"
};

static const nu_udb_t V10417 = {
	0x10417,
	"\xF0\x90\x90\xBF"
};

static const nu_udb_t V10416 = {
	0x10416,
	"\xF0\x90\x90\xBE"
};

static const nu_udb_t V02CBA = {
	0x02CBA,
	"\xE2\xB2\xBB"
};

static const nu_udb_t V01EE6 = {
	0x01EE6,
	"\xE1\xBB\xA7"
};

static const nu_udb_t V01EE0 = {
	0x01EE0,
	"\xE1\xBB\xA1"
};

static const nu_udb_t V01EE2 = {
	0x01EE2,
	"\xE1\xBB\xA3"
};

static const nu_udb_t V004F0 = {
	0x004F0,
	"\xD3\xB1"
};

static const nu_udb_t V1041C = {
	0x1041C,
	"\xF0\x90\x91\x84"
};

static const nu_udb_t V004F2 = {
	0x004F2,
	"\xD3\xB3"
};

static const nu_udb_t V01EC6 = {
	0x01EC6,
	"\xE1\xBB\x87"
};

static const nu_udb_t V10401 = {
	0x10401,
	"\xF0\x90\x90\xA9"
};

static const nu_udb_t V10400 = {
	0x10400,
	"\xF0\x90\x90\xA8"
};

static const nu_udb_t V10403 = {
	0x10403,
	"\xF0\x90\x90\xAB"
};

static const nu_udb_t V10402 = {
	0x10402,
	"\xF0\x90\x90\xAA"
};

static const nu_udb_t V10405 = {
	0x10405,
	"\xF0\x90\x90\xAD"
};

static const nu_udb_t V10404 = {
	0x10404,
	"\xF0\x90\x90\xAC"
};

static const nu_udb_t V10407 = {
	0x10407,
	"\xF0\x90\x90\xAF"
};

static const nu_udb_t V10406 = {
	0x10406,
	"\xF0\x90\x90\xAE"
};

static const nu_udb_t V004FC = {
	0x004FC,
	"\xD3\xBD"
};

static const nu_udb_t V01EDC = {
	0x01EDC,
	"\xE1\xBB\x9D"
};

static const nu_udb_t V004FE = {
	0x004FE,
	"\xD3\xBF"
};

static const nu_udb_t V0A77E = {
	0x0A77E,
	"\xEA\x9D\xBF"
};

static const nu_udb_t V1040D = {
	0x1040D,
	"\xF0\x90\x90\xB5"
};

static const nu_udb_t V01ED8 = {
	0x01ED8,
	"\xE1\xBB\x99"
};

static const nu_udb_t V004E2 = {
	0x004E2,
	"\xD3\xA3"
};

static const nu_udb_t V01ED6 = {
	0x01ED6,
	"\xE1\xBB\x97"
};

static const nu_udb_t V004E4 = {
	0x004E4,
	"\xD3\xA5"
};

static const nu_udb_t V01ED0 = {
	0x01ED0,
	"\xE1\xBB\x91"
};

static const nu_udb_t V004E6 = {
	0x004E6,
	"\xD3\xA7"
};

static const nu_udb_t V01EDA = {
	0x01EDA,
	"\xE1\xBB\x9B"
};

static const nu_udb_t V004E8 = {
	0x004E8,
	"\xD3\xA9"
};

static const nu_udb_t V01ED2 = {
	0x01ED2,
	"\xE1\xBB\x93"
};

static const nu_udb_t V10409 = {
	0x10409,
	"\xF0\x90\x90\xB1"
};

static const nu_udb_t V0FF37 = {
	0x0FF37,
	"\xEF\xBD\x97"
};

static const nu_udb_t V004EC = {
	0x004EC,
	"\xD3\xAD"
};

static const nu_udb_t V02163 = {
	0x02163,
	"\xE2\x85\xB3"
};

static const nu_udb_t V004EE = {
	0x004EE,
	"\xD3\xAF"
};

static const nu_udb_t V02161 = {
	0x02161,
	"\xE2\x85\xB1"
};

static const nu_udb_t V02CDE = {
	0x02CDE,
	"\xE2\xB3\x9F"
};

static const nu_udb_t V02167 = {
	0x02167,
	"\xE2\x85\xB7"
};

static const nu_udb_t V010AC = {
	0x010AC,
	"\xE2\xB4\x8C"
};

static const nu_udb_t V01ECC = {
	0x01ECC,
	"\xE1\xBB\x8D"
};

static const nu_udb_t V10421 = {
	0x10421,
	"\xF0\x90\x91\x89"
};

static const nu_udb_t V10420 = {
	0x10420,
	"\xF0\x90\x91\x88"
};

static const nu_udb_t V10423 = {
	0x10423,
	"\xF0\x90\x91\x8B"
};

static const nu_udb_t V02169 = {
	0x02169,
	"\xE2\x85\xB9"
};

static const nu_udb_t V02CC6 = {
	0x02CC6,
	"\xE2\xB3\x87"
};

static const nu_udb_t V10424 = {
	0x10424,
	"\xF0\x90\x91\x8C"
};

static const nu_udb_t V02CC8 = {
	0x02CC8,
	"\xE2\xB3\x89"
};

static const nu_udb_t V10426 = {
	0x10426,
	"\xF0\x90\x91\x8E"
};

static const nu_udb_t V02CCA = {
	0x02CCA,
	"\xE2\xB3\x8B"
};

static const nu_udb_t V0A76C = {
	0x0A76C,
	"\xEA\x9D\xAD"
};

static const nu_udb_t V01ECE = {
	0x01ECE,
	"\xE1\xBB\x8F"
};

static const nu_udb_t V01F48 = {
	0x01F48,
	"\xE1\xBD\x80"
};

static const nu_udb_t V02CCE = {
	0x02CCE,
	"\xE2\xB3\x8F"
};

static const nu_udb_t V00414 = {
	0x00414,
	"\xD0\xB4"
};

static const nu_udb_t V00416 = {
	0x00416,
	"\xD0\xB6"
};

static const nu_udb_t V00410 = {
	0x00410,
	"\xD0\xB0"
};

static const nu_udb_t V02160 = {
	0x02160,
	"\xE2\x85\xB0"
};

static const nu_udb_t V00412 = {
	0x00412,
	"\xD0\xB2"
};

static const nu_udb_t V01E32 = {
	0x01E32,
	"\xE1\xB8\xB3"
};

static const nu_udb_t V02165 = {
	0x02165,
	"\xE2\x85\xB5"
};

static const nu_udb_t V02164 = {
	0x02164,
	"\xE2\x85\xB4"
};

static const nu_udb_t V0040C = {
	0x0040C,
	"\xD1\x9C"
};

static const nu_udb_t V01E36 = {
	0x01E36,
	"\xE1\xB8\xB7"
};

static const nu_udb_t V0040E = {
	0x0040E,
	"\xD1\x9E"
};

static const nu_udb_t V01E34 = {
	0x01E34,
	"\xE1\xB8\xB5"
};

static const nu_udb_t V0A792 = {
	0x0A792,
	"\xEA\x9E\x93"
};

static const nu_udb_t V00408 = {
	0x00408,
	"\xD1\x98"
};

static const nu_udb_t V0040A = {
	0x0040A,
	"\xD1\x9A"
};

static const nu_udb_t V0216C = {
	0x0216C,
	"\xE2\x85\xBC"
};

static const nu_udb_t V003CF = {
	0x003CF,
	"\xCF\x97"
};

static const nu_udb_t V0216E = {
	0x0216E,
	"\xE2\x85\xBE"
};

static const nu_udb_t V00404 = {
	0x00404,
	"\xD1\x94"
};

static const nu_udb_t V00406 = {
	0x00406,
	"\xD1\x96"
};

static const nu_udb_t V00400 = {
	0x00400,
	"\xD1\x90"
};

static const nu_udb_t V00401 = {
	0x00401,
	"\xD1\x91"
};

static const nu_udb_t V00402 = {
	0x00402,
	"\xD1\x92"
};

static const nu_udb_t V01E20 = {
	0x01E20,
	"\xE1\xB8\xA1"
};

static const nu_udb_t V00122 = {
	0x00122,
	"\xC4\xA3"
};

static const nu_udb_t V00403 = {
	0x00403,
	"\xD1\x93"
};

static const nu_udb_t V0047C = {
	0x0047C,
	"\xD1\xBD"
};

static const nu_udb_t V01E24 = {
	0x01E24,
	"\xE1\xB8\xA5"
};

static const nu_udb_t V02CED = {
	0x02CED,
	"\xE2\xB3\xAE"
};

static const nu_udb_t V0047E = {
	0x0047E,
	"\xD1\xBF"
};

static const nu_udb_t V00478 = {
	0x00478,
	"\xD1\xB9"
};

static const nu_udb_t V0047A = {
	0x0047A,
	"\xD1\xBB"
};

static const nu_udb_t V010A1 = {
	0x010A1,
	"\xE2\xB4\x81"
};

static const nu_udb_t V00474 = {
	0x00474,
	"\xD1\xB5"
};

static const nu_udb_t V00476 = {
	0x00476,
	"\xD1\xB7"
};

static const nu_udb_t V01ECA = {
	0x01ECA,
	"\xE1\xBB\x8B"
};

static const nu_udb_t V00470 = {
	0x00470,
	"\xD1\xB1"
};

static const nu_udb_t V00472 = {
	0x00472,
	"\xD1\xB3"
};

static const nu_udb_t V0046C = {
	0x0046C,
	"\xD1\xAD"
};

static const nu_udb_t V0A7A8 = {
	0x0A7A8,
	"\xEA\x9E\xA9"
};

static const nu_udb_t V0046E = {
	0x0046E,
	"\xD1\xAF"
};

static const nu_udb_t V0A7AA = {
	0x0A7AA,
	"\xC9\xA6"
};

static const nu_udb_t V010A8 = {
	0x010A8,
	"\xE2\xB4\x88"
};

static const nu_udb_t V010A9 = {
	0x010A9,
	"\xE2\xB4\x89"
};

static const nu_udb_t V00468 = {
	0x00468,
	"\xD1\xA9"
};

static const nu_udb_t V010AF = {
	0x010AF,
	"\xE2\xB4\x8F"
};

static const nu_udb_t V0A7A4 = {
	0x0A7A4,
	"\xEA\x9E\xA5"
};

static const nu_udb_t V0046A = {
	0x0046A,
	"\xD1\xAB"
};

static const nu_udb_t V0A7A6 = {
	0x0A7A6,
	"\xEA\x9E\xA7"
};

static const nu_udb_t V003E8 = {
	0x003E8,
	"\xCF\xA9"
};

static const nu_udb_t V004B8 = {
	0x004B8,
	"\xD2\xB9"
};

static const nu_udb_t V0A748 = {
	0x0A748,
	"\xEA\x9D\x89"
};

static const nu_udb_t V00464 = {
	0x00464,
	"\xD1\xA5"
};

static const nu_udb_t V010B7 = {
	0x010B7,
	"\xE2\xB4\x97"
};

static const nu_udb_t V0A7A0 = {
	0x0A7A0,
	"\xEA\x9E\xA1"
};

static const nu_udb_t V00466 = {
	0x00466,
	"\xD1\xA7"
};

static const nu_udb_t V0A7A2 = {
	0x0A7A2,
	"\xEA\x9E\xA3"
};

static const nu_udb_t V010BB = {
	0x010BB,
	"\xE2\xB4\x9B"
};

static const nu_udb_t V00460 = {
	0x00460,
	"\xD1\xA1"
};

static const nu_udb_t V00462 = {
	0x00462,
	"\xD1\xA3"
};

static const nu_udb_t V0A66C = {
	0x0A66C,
	"\xEA\x99\xAD"
};

static const nu_udb_t V010BF = {
	0x010BF,
	"\xE2\xB4\x9F"
};

static const nu_udb_t V010BC = {
	0x010BC,
	"\xE2\xB4\x9C"
};

static const nu_udb_t V003FE = {
	0x003FE,
	"\xCD\xBC"
};

static const nu_udb_t V010BD = {
	0x010BD,
	"\xE2\xB4\x9D"
};

static const nu_udb_t V010BA = {
	0x010BA,
	"\xE2\xB4\x9A"
};

static const nu_udb_t V010B4 = {
	0x010B4,
	"\xE2\xB4\x94"
};

static const nu_udb_t V010B6 = {
	0x010B6,
	"\xE2\xB4\x96"
};

static const nu_udb_t V010B0 = {
	0x010B0,
	"\xE2\xB4\x90"
};

static const nu_udb_t V010AA = {
	0x010AA,
	"\xE2\xB4\x8A"
};

static const nu_udb_t V010A4 = {
	0x010A4,
	"\xE2\xB4\x84"
};

static const nu_udb_t V010A6 = {
	0x010A6,
	"\xE2\xB4\x86"
};

static const nu_udb_t V010A0 = {
	0x010A0,
	"\xE2\xB4\x80"
};

static const nu_udb_t V010A2 = {
	0x010A2,
	"\xE2\xB4\x82"
};

static const nu_udb_t V004AA = {
	0x004AA,
	"\xD2\xAB"
};

static const nu_udb_t V004A4 = {
	0x004A4,
	"\xD2\xA5"
};

static const nu_udb_t V004A6 = {
	0x004A6,
	"\xD2\xA7"
};

static const nu_udb_t V0A640 = {
	0x0A640,
	"\xEA\x99\x81"
};

static const nu_udb_t V004A0 = {
	0x004A0,
	"\xD2\xA1"
};

static const nu_udb_t V01E78 = {
	0x01E78,
	"\xE1\xB9\xB9"
};

static const nu_udb_t V004A2 = {
	0x004A2,
	"\xD2\xA3"
};

static const nu_udb_t V00427 = {
	0x00427,
	"\xD1\x87"
};

static const nu_udb_t V0049C = {
	0x0049C,
	"\xD2\x9D"
};

static const nu_udb_t V0A64A = {
	0x0A64A,
	"\xEA\x99\x8B"
};

static const nu_udb_t V0049E = {
	0x0049E,
	"\xD2\x9F"
};

static const nu_udb_t V0015A = {
	0x0015A,
	"\xC5\x9B"
};

static const nu_udb_t V00376 = {
	0x00376,
	"\xCD\xB7"
};

static const nu_udb_t V0A762 = {
	0x0A762,
	"\xEA\x9D\xA3"
};

static const nu_udb_t V0042E = {
	0x0042E,
	"\xD1\x8E"
};

static const nu_udb_t V01E66 = {
	0x01E66,
	"\xE1\xB9\xA7"
};

static const nu_udb_t V00498 = {
	0x00498,
	"\xD2\x99"
};

static const nu_udb_t V01E64 = {
	0x01E64,
	"\xE1\xB9\xA5"
};

static const nu_udb_t V00370 = {
	0x00370,
	"\xCD\xB1"
};

static const nu_udb_t V0049A = {
	0x0049A,
	"\xD2\x9B"
};

static const nu_udb_t V00372 = {
	0x00372,
	"\xCD\xB3"
};

static const nu_udb_t V00494 = {
	0x00494,
	"\xD2\x95"
};

static const nu_udb_t V0039F = {
	0x0039F,
	"\xCE\xBF"
};

static const nu_udb_t V00496 = {
	0x00496,
	"\xD2\x97"
};

static const nu_udb_t V00490 = {
	0x00490,
	"\xD2\x91"
};

static const nu_udb_t V00492 = {
	0x00492,
	"\xD2\x93"
};

static const nu_udb_t V0048C = {
	0x0048C,
	"\xD2\x8D"
};

static const nu_udb_t V01E52 = {
	0x01E52,
	"\xE1\xB9\x93"
};

static const nu_udb_t V0048E = {
	0x0048E,
	"\xD2\x8F"
};

static const nu_udb_t V0A694 = {
	0x0A694,
	"\xEA\x9A\x95"
};

static const nu_udb_t V0023D = {
	0x0023D,
	"\xC6\x9A"
};

static const nu_udb_t V0023E = {
	0x0023E,
	"\xE2\xB1\xA6"
};

static const nu_udb_t V02C2B = {
	0x02C2B,
	"\xE2\xB1\x9B"
};

static const nu_udb_t V02C2A = {
	0x02C2A,
	"\xE2\xB1\x9A"
};

static const nu_udb_t V0048A = {
	0x0048A,
	"\xD2\x8B"
};

static const nu_udb_t V0023A = {
	0x0023A,
	"\xE2\xB1\xA5"
};

static const nu_udb_t V0023B = {
	0x0023B,
	"\xC8\xBC"
};

static const nu_udb_t V00480 = {
	0x00480,
	"\xD2\x81"
};

static const nu_udb_t V0017D = {
	0x0017D,
	"\xC5\xBE"
};

static const nu_udb_t V010C4 = {
	0x010C4,
	"\xE2\xB4\xA4"
};

static const nu_udb_t V010C0 = {
	0x010C0,
	"\xE2\xB4\xA0"
};

static const nu_udb_t V010C2 = {
	0x010C2,
	"\xE2\xB4\xA2"
};

static const nu_udb_t V003A8 = {
	0x003A8,
	"\xCF\x88"
};

static const nu_udb_t V003AA = {
	0x003AA,
	"\xCF\x8A"
};

static const nu_udb_t V01F2A = {
	0x01F2A,
	"\xE1\xBC\xA2"
};

static const nu_udb_t V003A5 = {
	0x003A5,
	"\xCF\x85"
};

static const nu_udb_t V003A6 = {
	0x003A6,
	"\xCF\x86"
};

static const nu_udb_t V003A7 = {
	0x003A7,
	"\xCF\x87"
};

static const nu_udb_t V01F2E = {
	0x01F2E,
	"\xE1\xBC\xA6"
};

static const nu_udb_t V003A1 = {
	0x003A1,
	"\xCF\x81"
};

static const nu_udb_t V01F2C = {
	0x01F2C,
	"\xE1\xBC\xA4"
};

static const nu_udb_t V00216 = {
	0x00216,
	"\xC8\x97"
};

static const nu_udb_t V004CB = {
	0x004CB,
	"\xD3\x8C"
};

static const nu_udb_t V003A3 = {
	0x003A3,
	"\xCF\x83"
};

static const nu_udb_t V0039D = {
	0x0039D,
	"\xCE\xBD"
};

static const nu_udb_t V10422 = {
	0x10422,
	"\xF0\x90\x91\x8A"
};

static const nu_udb_t V00399 = {
	0x00399,
	"\xCE\xB9"
};

static const nu_udb_t V0039B = {
	0x0039B,
	"\xCE\xBB"
};

static const nu_udb_t V00394 = {
	0x00394,
	"\xCE\xB4"
};

static const nu_udb_t V00395 = {
	0x00395,
	"\xCE\xB5"
};

static const nu_udb_t V10427 = {
	0x10427,
	"\xF0\x90\x91\x8F"
};

static const nu_udb_t V00396 = {
	0x00396,
	"\xCE\xB6"
};

static const nu_udb_t V10425 = {
	0x10425,
	"\xF0\x90\x91\x8D"
};

static const nu_udb_t V00397 = {
	0x00397,
	"\xCE\xB7"
};

static const nu_udb_t V00391 = {
	0x00391,
	"\xCE\xB1"
};

static const nu_udb_t V00392 = {
	0x00392,
	"\xCE\xB2"
};

static const nu_udb_t V01F1C = {
	0x01F1C,
	"\xE1\xBC\x94"
};

static const nu_udb_t V00393 = {
	0x00393,
	"\xCE\xB3"
};

static const nu_udb_t V0038C = {
	0x0038C,
	"\xCF\x8C"
};

static const nu_udb_t V0038E = {
	0x0038E,
	"\xCF\x8D"
};

static const nu_udb_t V02C28 = {
	0x02C28,
	"\xE2\xB1\x98"
};

static const nu_udb_t V0011E = {
	0x0011E,
	"\xC4\x9F"
};

static const nu_udb_t V00051 = {
	0x00051,
	"\x71"
};

static const nu_udb_t V00388 = {
	0x00388,
	"\xCE\xAD"
};

static const nu_udb_t V00053 = {
	0x00053,
	"\x73"
};

static const nu_udb_t V0038A = {
	0x0038A,
	"\xCE\xAF"
};

static const nu_udb_t V01F0A = {
	0x01F0A,
	"\xE1\xBC\x82"
};

static const nu_udb_t V00548 = {
	0x00548,
	"\xD5\xB8"
};

static const nu_udb_t V01F08 = {
	0x01F08,
	"\xE1\xBC\x80"
};

static const nu_udb_t V00139 = {
	0x00139,
	"\xC4\xBA"
};

static const nu_udb_t V0013B = {
	0x0013B,
	"\xC4\xBC"
};

static const nu_udb_t V00136 = {
	0x00136,
	"\xC4\xB7"
};

static const nu_udb_t V0042B = {
	0x0042B,
	"\xD1\x8B"
};

static const nu_udb_t V01EAA = {
	0x01EAA,
	"\xE1\xBA\xAB"
};

static const nu_udb_t V00429 = {
	0x00429,
	"\xD1\x89"
};

static const nu_udb_t V0012C = {
	0x0012C,
	"\xC4\xAD"
};

static const nu_udb_t V00130 = {
	0x00130,
	"\x69\xCC\x87"
};

static const nu_udb_t V00132 = {
	0x00132,
	"\xC4\xB3"
};

static const nu_udb_t V0042D = {
	0x0042D,
	"\xD1\x8D"
};

static const nu_udb_t V003FD = {
	0x003FD,
	"\xCD\xBB"
};

static const nu_udb_t V00413 = {
	0x00413,
	"\xD0\xB3"
};

static const nu_udb_t V003FF = {
	0x003FF,
	"\xCD\xBD"
};

static const nu_udb_t V00045 = {
	0x00045,
	"\x65"
};

static const nu_udb_t V01E7A = {
	0x01E7A,
	"\xE1\xB9\xBB"
};

static const nu_udb_t V00047 = {
	0x00047,
	"\x67"
};

static const nu_udb_t V0012E = {
	0x0012E,
	"\xC4\xAF"
};

static const nu_udb_t V00049 = {
	0x00049,
	"\x69"
};

static const nu_udb_t V00048 = {
	0x00048,
	"\x68"
};

static const nu_udb_t V0004B = {
	0x0004B,
	"\x6B"
};

static const nu_udb_t V0041A = {
	0x0041A,
	"\xD0\xBA"
};

static const nu_udb_t V00419 = {
	0x00419,
	"\xD0\xB9"
};

static const nu_udb_t V003F9 = {
	0x003F9,
	"\xCF\xB2"
};

static const nu_udb_t V0024C = {
	0x0024C,
	"\xC9\x8D"
};

static const nu_udb_t V10412 = {
	0x10412,
	"\xF0\x90\x90\xBA"
};

static const nu_udb_t V00124 = {
	0x00124,
	"\xC4\xA5"
};

static const nu_udb_t V0041C = {
	0x0041C,
	"\xD0\xBC"
};

static const nu_udb_t V00118 = {
	0x00118,
	"\xC4\x99"
};

static const nu_udb_t V00126 = {
	0x00126,
	"\xC4\xA7"
};

static const nu_udb_t V0011A = {
	0x0011A,
	"\xC4\x9B"
};

static const nu_udb_t V00248 = {
	0x00248,
	"\xC9\x89"
};

static const nu_udb_t V0011C = {
	0x0011C,
	"\xC4\x9D"
};

static const nu_udb_t V00120 = {
	0x00120,
	"\xC4\xA1"
};

static const nu_udb_t V1041B = {
	0x1041B,
	"\xF0\x90\x91\x83"
};

static const nu_udb_t V0024A = {
	0x0024A,
	"\xC9\x8B"
};

static const nu_udb_t V10419 = {
	0x10419,
	"\xF0\x90\x91\x81"
};

static const nu_udb_t V1041E = {
	0x1041E,
	"\xF0\x90\x91\x86"
};

static const nu_udb_t V1041F = {
	0x1041F,
	"\xF0\x90\x91\x87"
};

static const nu_udb_t V00244 = {
	0x00244,
	"\xCA\x89"
};

static const nu_udb_t V1041D = {
	0x1041D,
	"\xF0\x90\x91\x85"
};

static const nu_udb_t V0004D = {
	0x0004D,
	"\x6D"
};

static const nu_udb_t V02168 = {
	0x02168,
	"\xE2\x85\xB8"
};

static const nu_udb_t V00246 = {
	0x00246,
	"\xC9\x87"
};

static const nu_udb_t V00108 = {
	0x00108,
	"\xC4\x89"
};

static const nu_udb_t V01F5B = {
	0x01F5B,
	"\xE1\xBD\x93"
};

static const nu_udb_t V0010A = {
	0x0010A,
	"\xC4\x8B"
};

static const nu_udb_t V00104 = {
	0x00104,
	"\xC4\x85"
};

static const nu_udb_t V00106 = {
	0x00106,
	"\xC4\x87"
};

static const nu_udb_t V01F5F = {
	0x01F5F,
	"\xE1\xBD\x97"
};

static const nu_udb_t V00100 = {
	0x00100,
	"\xC4\x81"
};

static const nu_udb_t V01F5D = {
	0x01F5D,
	"\xE1\xBD\x95"
};

static const nu_udb_t V00102 = {
	0x00102,
	"\xC4\x83"
};

static const nu_udb_t V00178 = {
	0x00178,
	"\xC3\xBF"
};

static const nu_udb_t V00179 = {
	0x00179,
	"\xC5\xBA"
};

static const nu_udb_t V0017B = {
	0x0017B,
	"\xC5\xBC"
};

static const nu_udb_t V00134 = {
	0x00134,
	"\xC4\xB5"
};

static const nu_udb_t V00174 = {
	0x00174,
	"\xC5\xB5"
};

static const nu_udb_t V00176 = {
	0x00176,
	"\xC5\xB7"
};

static const nu_udb_t V00170 = {
	0x00170,
	"\xC5\xB1"
};

static const nu_udb_t V00172 = {
	0x00172,
	"\xC5\xB3"
};

static const nu_udb_t V0016C = {
	0x0016C,
	"\xC5\xAD"
};

static const nu_udb_t V01F4A = {
	0x01F4A,
	"\xE1\xBD\x82"
};

static const nu_udb_t V01F49 = {
	0x01F49,
	"\xE1\xBD\x81"
};

static const nu_udb_t V0016E = {
	0x0016E,
	"\xC5\xAF"
};

static const nu_udb_t V02CB4 = {
	0x02CB4,
	"\xE2\xB2\xB5"
};

static const nu_udb_t V00168 = {
	0x00168,
	"\xC5\xA9"
};

static const nu_udb_t V01F4D = {
	0x01F4D,
	"\xE1\xBD\x85"
};

static const nu_udb_t V0016A = {
	0x0016A,
	"\xC5\xAB"
};

static const nu_udb_t V02CB8 = {
	0x02CB8,
	"\xE2\xB2\xB9"
};

static const nu_udb_t V00164 = {
	0x00164,
	"\xC5\xA5"
};

static const nu_udb_t V02CBE = {
	0x02CBE,
	"\xE2\xB2\xBF"
};

static const nu_udb_t V00166 = {
	0x00166,
	"\xC5\xA7"
};

static const nu_udb_t V00537 = {
	0x00537,
	"\xD5\xA7"
};

static const nu_udb_t V00160 = {
	0x00160,
	"\xC5\xA1"
};

static const nu_udb_t V0013D = {
	0x0013D,
	"\xC4\xBE"
};

static const nu_udb_t V00128 = {
	0x00128,
	"\xC4\xA9"
};

static const nu_udb_t V00162 = {
	0x00162,
	"\xC5\xA3"
};

static const nu_udb_t V0012A = {
	0x0012A,
	"\xC4\xAB"
};

static const nu_udb_t V0015C = {
	0x0015C,
	"\xC5\x9D"
};

static const nu_udb_t V0015E = {
	0x0015E,
	"\xC5\x9F"
};

static const nu_udb_t V00158 = {
	0x00158,
	"\xC5\x99"
};

static const nu_udb_t V0FF38 = {
	0x0FF38,
	"\xEF\xBD\x98"
};

static const nu_udb_t V01ED4 = {
	0x01ED4,
	"\xE1\xBB\x95"
};

static const nu_udb_t V0FF3A = {
	0x0FF3A,
	"\xEF\xBD\x9A"
};

static const nu_udb_t V00154 = {
	0x00154,
	"\xC5\x95"
};

static const nu_udb_t V0FF34 = {
	0x0FF34,
	"\xEF\xBD\x94"
};

static const nu_udb_t V02CAE = {
	0x02CAE,
	"\xE2\xB2\xAF"
};

static const nu_udb_t V00520 = {
	0x00520,
	"\xD4\xA1"
};

static const nu_udb_t V01EDE = {
	0x01EDE,
	"\xE1\xBB\x9F"
};

static const nu_udb_t V00526 = {
	0x00526,
	"\xD4\xA7"
};

static const nu_udb_t V001F6 = {
	0x001F6,
	"\xC6\x95"
};

static const nu_udb_t V00112 = {
	0x00112,
	"\xC4\x93"
};

static const nu_udb_t V0FF36 = {
	0x0FF36,
	"\xEF\xBD\x96"
};

static const nu_udb_t V00110 = {
	0x00110,
	"\xC4\x91"
};

static const nu_udb_t V0FF30 = {
	0x0FF30,
	"\xEF\xBD\x90"
};

static const nu_udb_t V00116 = {
	0x00116,
	"\xC4\x97"
};

static const nu_udb_t V02C94 = {
	0x02C94,
	"\xE2\xB2\x95"
};

static const nu_udb_t V00114 = {
	0x00114,
	"\xC4\x95"
};

static const nu_udb_t V02C9A = {
	0x02C9A,
	"\xE2\xB2\x9B"
};

static const nu_udb_t V0FF32 = {
	0x0FF32,
	"\xEF\xBD\x92"
};

static const nu_udb_t V00143 = {
	0x00143,
	"\xC5\x84"
};

static const nu_udb_t V02CDA = {
	0x02CDA,
	"\xE2\xB3\x9B"
};

static const nu_udb_t V00145 = {
	0x00145,
	"\xC5\x86"
};

static const nu_udb_t V0FF2C = {
	0x0FF2C,
	"\xEF\xBD\x8C"
};

static const nu_udb_t V00147 = {
	0x00147,
	"\xC5\x88"
};

static const nu_udb_t V0FF2E = {
	0x0FF2E,
	"\xEF\xBD\x8E"
};

static const nu_udb_t V0FF2F = {
	0x0FF2F,
	"\xEF\xBD\x8F"
};

static const nu_udb_t V0FF28 = {
	0x0FF28,
	"\xEF\xBD\x88"
};

static const nu_udb_t V00210 = {
	0x00210,
	"\xC8\x91"
};

static const nu_udb_t V0014A = {
	0x0014A,
	"\xC5\x8B"
};

static const nu_udb_t V00212 = {
	0x00212,
	"\xC8\x93"
};

static const nu_udb_t V0FF2A = {
	0x0FF2A,
	"\xEF\xBD\x8A"
};

static const nu_udb_t V00214 = {
	0x00214,
	"\xC8\x95"
};

static const nu_udb_t V0014E = {
	0x0014E,
	"\xC5\x8F"
};

static const nu_udb_t V004B4 = {
	0x004B4,
	"\xD2\xB5"
};

static const nu_udb_t V0FF2B = {
	0x0FF2B,
	"\xEF\xBD\x8B"
};

static const nu_udb_t V0FF25 = {
	0x0FF25,
	"\xEF\xBD\x85"
};

static const nu_udb_t V0FF27 = {
	0x0FF27,
	"\xEF\xBD\x87"
};

static const nu_udb_t V0021A = {
	0x0021A,
	"\xC8\x9B"
};

static const nu_udb_t V003EC = {
	0x003EC,
	"\xCF\xAD"
};

static const nu_udb_t V0021C = {
	0x0021C,
	"\xC8\x9D"
};

static const nu_udb_t V00141 = {
	0x00141,
	"\xC5\x82"
};

static const nu_udb_t V0021E = {
	0x0021E,
	"\xC8\x9F"
};

static const nu_udb_t V0FF21 = {
	0x0FF21,
	"\xEF\xBD\x81"
};

static const nu_udb_t V00200 = {
	0x00200,
	"\xC8\x81"
};

static const nu_udb_t V001B8 = {
	0x001B8,
	"\xC6\xB9"
};

static const nu_udb_t V00202 = {
	0x00202,
	"\xC8\x83"
};

static const nu_udb_t V00508 = {
	0x00508,
	"\xD4\x89"
};

static const nu_udb_t V01F8F = {
	0x01F8F,
	"\xE1\xBE\x87"
};

static const nu_udb_t V001B5 = {
	0x001B5,
	"\xC6\xB6"
};

static const nu_udb_t V01F8D = {
	0x01F8D,
	"\xE1\xBE\x85"
};

static const nu_udb_t V001B7 = {
	0x001B7,
	"\xCA\x92"
};

static const nu_udb_t V00208 = {
	0x00208,
	"\xC8\x89"
};

static const nu_udb_t V001B1 = {
	0x001B1,
	"\xCA\x8A"
};

static const nu_udb_t V0020A = {
	0x0020A,
	"\xC8\x8B"
};

static const nu_udb_t V0A654 = {
	0x0A654,
	"\xEA\x99\x95"
};

static const nu_udb_t V0020C = {
	0x0020C,
	"\xC8\x8D"
};

static const nu_udb_t V024BF = {
	0x024BF,
	"\xE2\x93\x99"
};

static const nu_udb_t V0020E = {
	0x0020E,
	"\xC8\x8F"
};

static const nu_udb_t V001A9 = {
	0x001A9,
	"\xCA\x83"
};

static const nu_udb_t V01FFB = {
	0x01FFB,
	"\xE1\xBD\xBD"
};

static const nu_udb_t V024BA = {
	0x024BA,
	"\xE2\x93\x94"
};

static const nu_udb_t V00232 = {
	0x00232,
	"\xC8\xB3"
};

static const nu_udb_t V024B7 = {
	0x024B7,
	"\xE2\x93\x91"
};

static const nu_udb_t V001A6 = {
	0x001A6,
	"\xCA\x80"
};

static const nu_udb_t V001A7 = {
	0x001A7,
	"\xC6\xA8"
};

static const nu_udb_t V001A0 = {
	0x001A0,
	"\xC6\xA1"
};

static const nu_udb_t V001A2 = {
	0x001A2,
	"\xC6\xA3"
};

static const nu_udb_t V0019C = {
	0x0019C,
	"\xC9\xAF"
};

static const nu_udb_t V001B3 = {
	0x001B3,
	"\xC6\xB4"
};

static const nu_udb_t V0019D = {
	0x0019D,
	"\xC9\xB2"
};

static const nu_udb_t V0019F = {
	0x0019F,
	"\xC9\xB5"
};

static const nu_udb_t V00198 = {
	0x00198,
	"\xC6\x99"
};

static const nu_udb_t V0014C = {
	0x0014C,
	"\xC5\x8D"
};

static const nu_udb_t V00194 = {
	0x00194,
	"\xC9\xA3"
};

static const nu_udb_t V00152 = {
	0x00152,
	"\xC5\x93"
};

static const nu_udb_t V00220 = {
	0x00220,
	"\xC6\x9E"
};

static const nu_udb_t V00196 = {
	0x00196,
	"\xC9\xA9"
};

static const nu_udb_t V00222 = {
	0x00222,
	"\xC8\xA3"
};

static const nu_udb_t V00197 = {
	0x00197,
	"\xC9\xA8"
};

static const nu_udb_t V02CD4 = {
	0x02CD4,
	"\xE2\xB3\x95"
};

static const nu_udb_t V00190 = {
	0x00190,
	"\xC9\x9B"
};

static const nu_udb_t V00226 = {
	0x00226,
	"\xC8\xA7"
};

static const nu_udb_t V00191 = {
	0x00191,
	"\xC6\x92"
};

static const nu_udb_t V00193 = {
	0x00193,
	"\xC9\xA0"
};

static const nu_udb_t V00552 = {
	0x00552,
	"\xD6\x82"
};

static const nu_udb_t V0018E = {
	0x0018E,
	"\xC7\x9D"
};

static const nu_udb_t V0018F = {
	0x0018F,
	"\xC9\x99"
};

static const nu_udb_t V0022C = {
	0x0022C,
	"\xC8\xAD"
};

static const nu_udb_t V00556 = {
	0x00556,
	"\xD6\x86"
};

static const nu_udb_t V00189 = {
	0x00189,
	"\xC9\x96"
};

static const nu_udb_t V00554 = {
	0x00554,
	"\xD6\x84"
};

static const nu_udb_t V0018A = {
	0x0018A,
	"\xC9\x97"
};

static const nu_udb_t V0018B = {
	0x0018B,
	"\xC6\x8C"
};

static const nu_udb_t V0FF39 = {
	0x0FF39,
	"\xEF\xBD\x99"
};

static const nu_udb_t V003A4 = {
	0x003A4,
	"\xCF\x84"
};

static const nu_udb_t V0A790 = {
	0x0A790,
	"\xEA\x9E\x91"
};

static const nu_udb_t V00184 = {
	0x00184,
	"\xC6\x85"
};

static const nu_udb_t V00186 = {
	0x00186,
	"\xC9\x94"
};

static const nu_udb_t V00187 = {
	0x00187,
	"\xC6\x88"
};

static const nu_udb_t V00543 = {
	0x00543,
	"\xD5\xB3"
};

static const nu_udb_t V00542 = {
	0x00542,
	"\xD5\xB2"
};

static const nu_udb_t V0005A = {
	0x0005A,
	"\x7A"
};

static const nu_udb_t V001FC = {
	0x001FC,
	"\xC7\xBD"
};

static const nu_udb_t V001AF = {
	0x001AF,
	"\xC6\xB0"
};

static const nu_udb_t V00054 = {
	0x00054,
	"\x74"
};

static const nu_udb_t V00545 = {
	0x00545,
	"\xD5\xB5"
};

static const nu_udb_t V00241 = {
	0x00241,
	"\xC9\x82"
};

static const nu_udb_t V02C22 = {
	0x02C22,
	"\xE2\xB1\x92"
};

static const nu_udb_t V00243 = {
	0x00243,
	"\xC6\x80"
};

static const nu_udb_t V01E7E = {
	0x01E7E,
	"\xE1\xB9\xBF"
};

static const nu_udb_t V00245 = {
	0x00245,
	"\xCA\x8C"
};

static const nu_udb_t V00056 = {
	0x00056,
	"\x76"
};

static const nu_udb_t V0A646 = {
	0x0A646,
	"\xEA\x99\x87"
};

static const nu_udb_t V00050 = {
	0x00050,
	"\x70"
};

static const nu_udb_t V0054C = {
	0x0054C,
	"\xD5\xBC"
};

static const nu_udb_t V004EA = {
	0x004EA,
	"\xD3\xAB"
};

static const nu_udb_t V00052 = {
	0x00052,
	"\x72"
};

static const nu_udb_t V0004C = {
	0x0004C,
	"\x6C"
};

static const nu_udb_t V001A4 = {
	0x001A4,
	"\xC6\xA5"
};

static const nu_udb_t V00218 = {
	0x00218,
	"\xC8\x99"
};

static const nu_udb_t V001BC = {
	0x001BC,
	"\xC6\xBD"
};

static const nu_udb_t V0024E = {
	0x0024E,
	"\xC9\x8F"
};

static const nu_udb_t V00182 = {
	0x00182,
	"\xC6\x83"
};

static const nu_udb_t V004E0 = {
	0x004E0,
	"\xD3\xA1"
};

static const nu_udb_t V0004F = {
	0x0004F,
	"\x6F"
};

static const nu_udb_t V00181 = {
	0x00181,
	"\xC9\x93"
};

static const nu_udb_t V001AC = {
	0x001AC,
	"\xC6\xAD"
};

static const nu_udb_t V004D6 = {
	0x004D6,
	"\xD3\x97"
};

static const nu_udb_t V001AE = {
	0x001AE,
	"\xCA\x88"
};

static const nu_udb_t V0004A = {
	0x0004A,
	"\x6A"
};

static const nu_udb_t V00044 = {
	0x00044,
	"\x64"
};

static const nu_udb_t V00204 = {
	0x00204,
	"\xC8\x85"
};

static const nu_udb_t V00046 = {
	0x00046,
	"\x66"
};

static const nu_udb_t V00042 = {
	0x00042,
	"\x62"
};

static const nu_udb_t V001E6 = {
	0x001E6,
	"\xC7\xA7"
};

static const nu_udb_t V001E0 = {
	0x001E0,
	"\xC7\xA1"
};

static const nu_udb_t V001E2 = {
	0x001E2,
	"\xC7\xA3"
};

static const nu_udb_t V001DE = {
	0x001DE,
	"\xC7\x9F"
};

static const nu_udb_t V001D9 = {
	0x001D9,
	"\xC7\x9A"
};

static const nu_udb_t V001DB = {
	0x001DB,
	"\xC7\x9C"
};

static const nu_udb_t V001D5 = {
	0x001D5,
	"\xC7\x96"
};

static const nu_udb_t V001D7 = {
	0x001D7,
	"\xC7\x98"
};

static const nu_udb_t V001D1 = {
	0x001D1,
	"\xC7\x92"
};

static const nu_udb_t V001D3 = {
	0x001D3,
	"\xC7\x94"
};

static const nu_udb_t V004C5 = {
	0x004C5,
	"\xD3\x86"
};

static const nu_udb_t V001CD = {
	0x001CD,
	"\xC7\x8E"
};

static const nu_udb_t V001CF = {
	0x001CF,
	"\xC7\x90"
};

static const nu_udb_t V001C8 = {
	0x001C8,
	"\xC7\x89"
};

static const nu_udb_t V00043 = {
	0x00043,
	"\x63"
};

static const nu_udb_t V001CA = {
	0x001CA,
	"\xC7\x8C"
};

static const nu_udb_t V00041 = {
	0x00041,
	"\x61"
};

static const nu_udb_t V001CB = {
	0x001CB,
	"\xC7\x8C"
};

static const nu_udb_t V001C4 = {
	0x001C4,
	"\xC7\x86"
};

static const nu_udb_t V00405 = {
	0x00405,
	"\xD1\x95"
};

static const nu_udb_t V001C5 = {
	0x001C5,
	"\xC7\x86"
};

static const nu_udb_t V00407 = {
	0x00407,
	"\xD1\x97"
};

static const nu_udb_t V001C7 = {
	0x001C7,
	"\xC7\x89"
};

static const nu_udb_t V024CC = {
	0x024CC,
	"\xE2\x93\xA6"
};

static const nu_udb_t V004CD = {
	0x004CD,
	"\xD3\x8E"
};

static const nu_udb_t V0004E = {
	0x0004E,
	"\x6E"
};

static const nu_udb_t V001E4 = {
	0x001E4,
	"\xC7\xA5"
};

static const nu_udb_t V001F1 = {
	0x001F1,
	"\xC7\xB3"
};

static const nu_udb_t V001EA = {
	0x001EA,
	"\xC7\xAB"
};

static const nu_udb_t V0FF35 = {
	0x0FF35,
	"\xEF\xBD\x95"
};

static const nu_udb_t V001F2 = {
	0x001F2,
	"\xC7\xB3"
};

static const nu_udb_t V024CD = {
	0x024CD,
	"\xE2\x93\xA7"
};

static const nu_udb_t V001F4 = {
	0x001F4,
	"\xC7\xB5"
};

static const nu_udb_t V024CE = {
	0x024CE,
	"\xE2\x93\xA8"
};

static const nu_udb_t V024CF = {
	0x024CF,
	"\xE2\x93\xA9"
};

static const nu_udb_t V00415 = {
	0x00415,
	"\xD0\xB5"
};

static const nu_udb_t V024C8 = {
	0x024C8,
	"\xE2\x93\xA2"
};

static const nu_udb_t V004B0 = {
	0x004B0,
	"\xD2\xB1"
};

static const nu_udb_t V001FA = {
	0x001FA,
	"\xC7\xBB"
};

static const nu_udb_t V00058 = {
	0x00058,
	"\x78"
};

static const nu_udb_t V00059 = {
	0x00059,
	"\x79"
};

static const nu_udb_t V001F7 = {
	0x001F7,
	"\xC6\xBF"
};

static const nu_udb_t V024C9 = {
	0x024C9,
	"\xE2\x93\xA3"
};

static const nu_udb_t V024CA = {
	0x024CA,
	"\xE2\x93\xA4"
};

static const nu_udb_t V02166 = {
	0x02166,
	"\xE2\x85\xB6"
};

static const nu_udb_t V024CB = {
	0x024CB,
	"\xE2\x93\xA5"
};

static const nu_udb_t V0A73A = {
	0x0A73A,
	"\xEA\x9C\xBB"
};

static const nu_udb_t V00230 = {
	0x00230,
	"\xC8\xB1"
};

static const nu_udb_t V0A738 = {
	0x0A738,
	"\xEA\x9C\xB9"
};

static const nu_udb_t V0216D = {
	0x0216D,
	"\xE2\x85\xBD"
};

static const nu_udb_t V024C4 = {
	0x024C4,
	"\xE2\x93\x9E"
};

static const nu_udb_t V024C5 = {
	0x024C5,
	"\xE2\x93\x9F"
};

static const nu_udb_t V001E8 = {
	0x001E8,
	"\xC7\xA9"
};

static const nu_udb_t V10418 = {
	0x10418,
	"\xF0\x90\x91\x80"
};

static const nu_udb_t V0A722 = {
	0x0A722,
	"\xEA\x9C\xA3"
};

static const nu_udb_t V004AE = {
	0x004AE,
	"\xD2\xAF"
};

static const nu_udb_t V001EC = {
	0x001EC,
	"\xC7\xAD"
};

static const nu_udb_t V024C6 = {
	0x024C6,
	"\xE2\x93\xA0"
};

static const nu_udb_t V001EE = {
	0x001EE,
	"\xC7\xAF"
};

static const nu_udb_t V024C7 = {
	0x024C7,
	"\xE2\x93\xA1"
};

static const nu_udb_t V024C0 = {
	0x024C0,
	"\xE2\x93\x9A"
};

static const nu_udb_t V024C1 = {
	0x024C1,
	"\xE2\x93\x9B"
};

static const nu_udb_t V024C2 = {
	0x024C2,
	"\xE2\x93\x9C"
};

static const nu_udb_t V024C3 = {
	0x024C3,
	"\xE2\x93\x9D"
};

static const nu_udb_t V02132 = {
	0x02132,
	"\xE2\x85\x8E"
};

static const nu_udb_t V0212A = {
	0x0212A,
	"\x6B"
};

static const nu_udb_t V0212B = {
	0x0212B,
	"\xC3\xA5"
};

static const nu_udb_t V02126 = {
	0x02126,
	"\xCF\x89"
};

static const nu_udb_t V000DC = {
	0x000DC,
	"\xC3\xBC"
};

static const nu_udb_t V0A740 = {
	0x0A740,
	"\xEA\x9D\x81"
};

static const nu_udb_t V000DD = {
	0x000DD,
	"\xC3\xBD"
};

static const nu_udb_t V0A742 = {
	0x0A742,
	"\xEA\x9D\x83"
};

static const nu_udb_t V000DE = {
	0x000DE,
	"\xC3\xBE"
};

static const nu_udb_t V0A64E = {
	0x0A64E,
	"\xEA\x99\x8F"
};

static const nu_udb_t V000D8 = {
	0x000D8,
	"\xC3\xB8"
};

static const nu_udb_t V000D9 = {
	0x000D9,
	"\xC3\xB9"
};

static const nu_udb_t V000DA = {
	0x000DA,
	"\xC3\xBA"
};

static const nu_udb_t V000DB = {
	0x000DB,
	"\xC3\xBB"
};

static const nu_udb_t V00549 = {
	0x00549,
	"\xD5\xB9"
};

static const nu_udb_t V000D4 = {
	0x000D4,
	"\xC3\xB4"
};

static const nu_udb_t V00420 = {
	0x00420,
	"\xD1\x80"
};

static const nu_udb_t V000D5 = {
	0x000D5,
	"\xC3\xB5"
};

static const nu_udb_t V000D6 = {
	0x000D6,
	"\xC3\xB6"
};

static const nu_udb_t V000D0 = {
	0x000D0,
	"\xC3\xB0"
};

static const nu_udb_t V000D1 = {
	0x000D1,
	"\xC3\xB1"
};

static const nu_udb_t V0A750 = {
	0x0A750,
	"\xEA\x9D\x91"
};

static const nu_udb_t V004C0 = {
	0x004C0,
	"\xD3\x8F"
};

static const nu_udb_t V000D2 = {
	0x000D2,
	"\xC3\xB2"
};

static const nu_udb_t V000D3 = {
	0x000D3,
	"\xC3\xB3"
};

static const nu_udb_t V000CC = {
	0x000CC,
	"\xC3\xAC"
};

static const nu_udb_t V000CD = {
	0x000CD,
	"\xC3\xAD"
};

static const nu_udb_t V000CE = {
	0x000CE,
	"\xC3\xAE"
};

static const nu_udb_t V000CF = {
	0x000CF,
	"\xC3\xAF"
};

static const nu_udb_t V000C8 = {
	0x000C8,
	"\xC3\xA8"
};

static const nu_udb_t V000C9 = {
	0x000C9,
	"\xC3\xA9"
};

static const nu_udb_t V000CA = {
	0x000CA,
	"\xC3\xAA"
};

static const nu_udb_t V000CB = {
	0x000CB,
	"\xC3\xAB"
};

static const nu_udb_t V000C4 = {
	0x000C4,
	"\xC3\xA4"
};

static const nu_udb_t V000C5 = {
	0x000C5,
	"\xC3\xA5"
};

static const nu_udb_t V000C6 = {
	0x000C6,
	"\xC3\xA6"
};

static const nu_udb_t V000C7 = {
	0x000C7,
	"\xC3\xA7"
};

static const nu_udb_t V00224 = {
	0x00224,
	"\xC8\xA5"
};

static const nu_udb_t V000C0 = {
	0x000C0,
	"\xC3\xA0"
};

static const nu_udb_t V0022A = {
	0x0022A,
	"\xC8\xAB"
};

static const nu_udb_t V000C1 = {
	0x000C1,
	"\xC3\xA1"
};

static const nu_udb_t V00228 = {
	0x00228,
	"\xC8\xA9"
};

static const nu_udb_t V000C2 = {
	0x000C2,
	"\xC3\xA2"
};

static const nu_udb_t V0022E = {
	0x0022E,
	"\xC8\xAF"
};

static const nu_udb_t V000C3 = {
	0x000C3,
	"\xC3\xA3"
};

static const nu_udb_t V0A77B = {
	0x0A77B,
	"\xEA\x9D\xBC"
};

static const nu_udb_t V0216F = {
	0x0216F,
	"\xE2\x85\xBF"
};

static const nu_udb_t V02C1C = {
	0x02C1C,
	"\xE2\xB1\x8C"
};

static const nu_udb_t V02C1D = {
	0x02C1D,
	"\xE2\xB1\x8D"
};

static const nu_udb_t V02C1E = {
	0x02C1E,
	"\xE2\xB1\x8E"
};

static const nu_udb_t V010B8 = {
	0x010B8,
	"\xE2\xB4\x98"
};

static const nu_udb_t V0A77D = {
	0x0A77D,
	"\xE1\xB5\xB9"
};

static const nu_udb_t V02C1F = {
	0x02C1F,
	"\xE2\xB1\x8F"
};

static const nu_udb_t V02C18 = {
	0x02C18,
	"\xE2\xB1\x88"
};

static const nu_udb_t V00398 = {
	0x00398,
	"\xCE\xB8"
};

static const nu_udb_t V02C19 = {
	0x02C19,
	"\xE2\xB1\x89"
};

static const nu_udb_t V0039A = {
	0x0039A,
	"\xCE\xBA"
};

static const nu_udb_t V02C1A = {
	0x02C1A,
	"\xE2\xB1\x8A"
};

static const nu_udb_t V0A766 = {
	0x0A766,
	"\xEA\x9D\xA7"
};

static const nu_udb_t V02C1B = {
	0x02C1B,
	"\xE2\xB1\x8B"
};

static const nu_udb_t V0A764 = {
	0x0A764,
	"\xEA\x9D\xA5"
};

static const nu_udb_t V02C14 = {
	0x02C14,
	"\xE2\xB1\x84"
};

static const nu_udb_t V02C15 = {
	0x02C15,
	"\xE2\xB1\x85"
};

static const nu_udb_t V02C16 = {
	0x02C16,
	"\xE2\xB1\x86"
};

static const nu_udb_t V0A768 = {
	0x0A768,
	"\xEA\x9D\xA9"
};

static const nu_udb_t V02C17 = {
	0x02C17,
	"\xE2\xB1\x87"
};

static const nu_udb_t V0A76E = {
	0x0A76E,
	"\xEA\x9D\xAF"
};

static const nu_udb_t V00206 = {
	0x00206,
	"\xC8\x87"
};

static const nu_udb_t V00386 = {
	0x00386,
	"\xCE\xAC"
};

static const nu_udb_t V02C10 = {
	0x02C10,
	"\xE2\xB1\x80"
};

static const nu_udb_t V02C11 = {
	0x02C11,
	"\xE2\xB1\x81"
};

static const nu_udb_t V02C12 = {
	0x02C12,
	"\xE2\xB1\x82"
};

static const nu_udb_t V02C13 = {
	0x02C13,
	"\xE2\xB1\x83"
};

static const nu_udb_t V02C0C = {
	0x02C0C,
	"\xE2\xB0\xBC"
};

static const nu_udb_t V02C0D = {
	0x02C0D,
	"\xE2\xB0\xBD"
};

static const nu_udb_t V02C0E = {
	0x02C0E,
	"\xE2\xB0\xBE"
};

static const nu_udb_t V0A754 = {
	0x0A754,
	"\xEA\x9D\x95"
};

static const nu_udb_t V00156 = {
	0x00156,
	"\xC5\x97"
};

static const nu_udb_t V02C0F = {
	0x02C0F,
	"\xE2\xB0\xBF"
};

static const nu_udb_t V02C08 = {
	0x02C08,
	"\xE2\xB0\xB8"
};

static const nu_udb_t V02C09 = {
	0x02C09,
	"\xE2\xB0\xB9"
};

static const nu_udb_t V01E62 = {
	0x01E62,
	"\xE1\xB9\xA3"
};

static const nu_udb_t V02C0A = {
	0x02C0A,
	"\xE2\xB0\xBA"
};

static const nu_udb_t V024B9 = {
	0x024B9,
	"\xE2\x93\x93"
};

static const nu_udb_t V02C0B = {
	0x02C0B,
	"\xE2\xB0\xBB"
};

static const nu_udb_t V02C04 = {
	0x02C04,
	"\xE2\xB0\xB4"
};

static const nu_udb_t V02C05 = {
	0x02C05,
	"\xE2\xB0\xB5"
};

static const nu_udb_t V02C06 = {
	0x02C06,
	"\xE2\xB0\xB6"
};

static const nu_udb_t V02C07 = {
	0x02C07,
	"\xE2\xB0\xB7"
};

static const nu_udb_t V02C00 = {
	0x02C00,
	"\xE2\xB0\xB0"
};

static const nu_udb_t V02C01 = {
	0x02C01,
	"\xE2\xB0\xB1"
};

static const nu_udb_t V02C02 = {
	0x02C02,
	"\xE2\xB0\xB2"
};

static const nu_udb_t V02C03 = {
	0x02C03,
	"\xE2\xB0\xB3"
};

static const nu_udb_t V02C7E = {
	0x02C7E,
	"\xC8\xBF"
};

static const nu_udb_t V003A0 = {
	0x003A0,
	"\xCF\x80"
};

static const nu_udb_t V02C7F = {
	0x02C7F,
	"\xC9\x80"
};

static const nu_udb_t V02C75 = {
	0x02C75,
	"\xE2\xB1\xB6"
};

static const nu_udb_t V02C70 = {
	0x02C70,
	"\xC9\x92"
};

static const nu_udb_t V0A74E = {
	0x0A74E,
	"\xEA\x9D\x8F"
};

static const nu_udb_t V02C72 = {
	0x02C72,
	"\xE2\xB1\xB3"
};

static const nu_udb_t V02C6D = {
	0x02C6D,
	"\xC9\x91"
};

static const nu_udb_t V003A9 = {
	0x003A9,
	"\xCF\x89"
};

static const nu_udb_t V02C6E = {
	0x02C6E,
	"\xC9\xB1"
};

static const nu_udb_t V003AB = {
	0x003AB,
	"\xCF\x8B"
};

static const nu_udb_t V02C6F = {
	0x02C6F,
	"\xC9\x90"
};

static const nu_udb_t V02C69 = {
	0x02C69,
	"\xE2\xB1\xAA"
};

static const nu_udb_t V0A72A = {
	0x0A72A,
	"\xEA\x9C\xAB"
};

static const nu_udb_t V02C6B = {
	0x02C6B,
	"\xE2\xB1\xAC"
};

static const nu_udb_t V02C26 = {
	0x02C26,
	"\xE2\xB1\x96"
};

static const nu_udb_t V02C64 = {
	0x02C64,
	"\xC9\xBD"
};

static const nu_udb_t V02C67 = {
	0x02C67,
	"\xE2\xB1\xA8"
};

static const nu_udb_t V02C60 = {
	0x02C60,
	"\xE2\xB1\xA1"
};

static const nu_udb_t V02C62 = {
	0x02C62,
	"\xC9\xAB"
};

static const nu_udb_t V02C2D = {
	0x02C2D,
	"\xE2\xB1\x9D"
};

static const nu_udb_t V02C63 = {
	0x02C63,
	"\xE1\xB5\xBD"
};

static const nu_udb_t V0038F = {
	0x0038F,
	"\xCF\x8E"
};

static const nu_udb_t V01F3C = {
	0x01F3C,
	"\xE1\xBC\xB4"
};

static const nu_udb_t V01F3D = {
	0x01F3D,
	"\xE1\xBC\xB5"
};

static const nu_udb_t V0A736 = {
	0x0A736,
	"\xEA\x9C\xB7"
};

static const nu_udb_t V01F3E = {
	0x01F3E,
	"\xE1\xBC\xB6"
};

static const nu_udb_t V003DA = {
	0x003DA,
	"\xCF\x9B"
};

static const nu_udb_t V01F3F = {
	0x01F3F,
	"\xE1\xBC\xB7"
};

static const nu_udb_t V004AC = {
	0x004AC,
	"\xD2\xAD"
};

static const nu_udb_t V01F38 = {
	0x01F38,
	"\xE1\xBC\xB0"
};

static const nu_udb_t V024BC = {
	0x024BC,
	"\xE2\x93\x96"
};

static const nu_udb_t V01F39 = {
	0x01F39,
	"\xE1\xBC\xB1"
};

static const nu_udb_t V01F3A = {
	0x01F3A,
	"\xE1\xBC\xB2"
};

static const nu_udb_t V01F3B = {
	0x01F3B,
	"\xE1\xBC\xB3"
};

static const nu_udb_t V02183 = {
	0x02183,
	"\xE2\x86\x84"
};

static const nu_udb_t V02CBC = {
	0x02CBC,
	"\xE2\xB2\xBD"
};

static const nu_udb_t V0039E = {
	0x0039E,
	"\xCE\xBE"
};

static const nu_udb_t V01F2D = {
	0x01F2D,
	"\xE1\xBC\xA5"
};

static const nu_udb_t V01F2F = {
	0x01F2F,
	"\xE1\xBC\xA7"
};

static const nu_udb_t V01F29 = {
	0x01F29,
	"\xE1\xBC\xA1"
};

static const nu_udb_t V003E2 = {
	0x003E2,
	"\xCF\xA3"
};

static const nu_udb_t V01F2B = {
	0x01F2B,
	"\xE1\xBC\xA3"
};

static const nu_udb_t V003E0 = {
	0x003E0,
	"\xCF\xA1"
};

static const nu_udb_t V00533 = {
	0x00533,
	"\xD5\xA3"
};

static const nu_udb_t V003E6 = {
	0x003E6,
	"\xCF\xA7"
};

static const nu_udb_t V00531 = {
	0x00531,
	"\xD5\xA1"
};

static const nu_udb_t V0A784 = {
	0x0A784,
	"\xEA\x9E\x85"
};

static const nu_udb_t V02CB6 = {
	0x02CB6,
	"\xE2\xB2\xB7"
};

static const nu_udb_t V0039C = {
	0x0039C,
	"\xCE\xBC"
};

static const nu_udb_t V010B2 = {
	0x010B2,
	"\xE2\xB4\x92"
};

static const nu_udb_t V02CC2 = {
	0x02CC2,
	"\xE2\xB3\x83"
};

static const nu_udb_t V02CB0 = {
	0x02CB0,
	"\xE2\xB2\xB1"
};

static const nu_udb_t V003F4 = {
	0x003F4,
	"\xCE\xB8"
};

static const nu_udb_t V003F7 = {
	0x003F7,
	"\xCF\xB8"
};

static const nu_udb_t V0053E = {
	0x0053E,
	"\xD5\xAE"
};

static const nu_udb_t V02CB2 = {
	0x02CB2,
	"\xE2\xB2\xB3"
};

static const nu_udb_t V0053C = {
	0x0053C,
	"\xD5\xAC"
};

static const nu_udb_t V02CAC = {
	0x02CAC,
	"\xE2\xB2\xAD"
};

static const nu_udb_t V003FA = {
	0x003FA,
	"\xCF\xBB"
};

static const nu_udb_t V00389 = {
	0x00389,
	"\xCE\xAE"
};

static const nu_udb_t V0A786 = {
	0x0A786,
	"\xEA\x9E\x87"
};

static const nu_udb_t V01F1D = {
	0x01F1D,
	"\xE1\xBC\x95"
};

static const nu_udb_t V00057 = {
	0x00057,
	"\x77"
};

static const nu_udb_t V0013F = {
	0x0013F,
	"\xC5\x80"
};

static const nu_udb_t V00055 = {
	0x00055,
	"\x75"
};

static const nu_udb_t V02CA8 = {
	0x02CA8,
	"\xE2\xB2\xA9"
};

static const nu_udb_t V01F19 = {
	0x01F19,
	"\xE1\xBC\x91"
};

static const nu_udb_t V01F1B = {
	0x01F1B,
	"\xE1\xBC\x93"
};

static const nu_udb_t V003E4 = {
	0x003E4,
	"\xCF\xA5"
};

static const nu_udb_t V02CA6 = {
	0x02CA6,
	"\xE2\xB2\xA7"
};

static const nu_udb_t V0A760 = {
	0x0A760,
	"\xEA\x9D\xA1"
};

static const nu_udb_t V02CA0 = {
	0x02CA0,
	"\xE2\xB2\xA1"
};

static const nu_udb_t V02CA2 = {
	0x02CA2,
	"\xE2\xB2\xA3"
};

static const nu_udb_t V02C9C = {
	0x02C9C,
	"\xE2\xB2\x9D"
};

static const nu_udb_t V003EA = {
	0x003EA,
	"\xCF\xAB"
};

static const nu_udb_t V01F0D = {
	0x01F0D,
	"\xE1\xBC\x85"
};

static const nu_udb_t V00510 = {
	0x00510,
	"\xD4\x91"
};

static const nu_udb_t V01F0F = {
	0x01F0F,
	"\xE1\xBC\x87"
};

static const nu_udb_t V003EE = {
	0x003EE,
	"\xCF\xAF"
};

static const nu_udb_t V01F09 = {
	0x01F09,
	"\xE1\xBC\x81"
};

static const nu_udb_t V01F0B = {
	0x01F0B,
	"\xE1\xBC\x83"
};

static const nu_udb_t V02C96 = {
	0x02C96,
	"\xE2\xB2\x97"
};

static const nu_udb_t V02C90 = {
	0x02C90,
	"\xE2\xB2\x91"
};

static const nu_udb_t V02C92 = {
	0x02C92,
	"\xE2\xB2\x93"
};

static const nu_udb_t V00417 = {
	0x00417,
	"\xD0\xB7"
};

static const nu_udb_t V02C8C = {
	0x02C8C,
	"\xE2\xB2\x8D"
};

static const nu_udb_t V02C8E = {
	0x02C8E,
	"\xE2\xB2\x8F"
};

static const nu_udb_t V02C88 = {
	0x02C88,
	"\xE2\xB2\x89"
};

static const nu_udb_t V0051C = {
	0x0051C,
	"\xD4\x9D"
};

static const nu_udb_t V02C8A = {
	0x02C8A,
	"\xE2\xB2\x8B"
};

static const nu_udb_t V01F18 = {
	0x01F18,
	"\xE1\xBC\x90"
};

static const nu_udb_t V01E10 = {
	0x01E10,
	"\xE1\xB8\x91"
};

static const nu_udb_t V01F1A = {
	0x01F1A,
	"\xE1\xBC\x92"
};

static const nu_udb_t V01E12 = {
	0x01E12,
	"\xE1\xB8\x93"
};

static const nu_udb_t V02C84 = {
	0x02C84,
	"\xE2\xB2\x85"
};

static const nu_udb_t V0A779 = {
	0x0A779,
	"\xEA\x9D\xBA"
};

static const nu_udb_t V02C86 = {
	0x02C86,
	"\xE2\xB2\x87"
};

static const nu_udb_t V010B1 = {
	0x010B1,
	"\xE2\xB4\x91"
};

static const nu_udb_t V02C80 = {
	0x02C80,
	"\xE2\xB2\x81"
};

static const nu_udb_t V010B3 = {
	0x010B3,
	"\xE2\xB4\x93"
};

static const nu_udb_t V02C82 = {
	0x02C82,
	"\xE2\xB2\x83"
};

static const nu_udb_t V010B5 = {
	0x010B5,
	"\xE2\xB4\x95"
};

static const nu_udb_t V003DC = {
	0x003DC,
	"\xCF\x9D"
};

static const nu_udb_t V0A780 = {
	0x0A780,
	"\xEA\x9E\x81"
};

static const nu_udb_t V0A746 = {
	0x0A746,
	"\xEA\x9D\x87"
};

static const nu_udb_t V010B9 = {
	0x010B9,
	"\xE2\xB4\x99"
};

static const nu_udb_t V0A744 = {
	0x0A744,
	"\xEA\x9D\x85"
};

static const nu_udb_t V01E00 = {
	0x01E00,
	"\xE1\xB8\x81"
};

static const nu_udb_t V003D8 = {
	0x003D8,
	"\xCF\x99"
};

static const nu_udb_t V01E02 = {
	0x01E02,
	"\xE1\xB8\x83"
};

static const nu_udb_t V003DE = {
	0x003DE,
	"\xCF\x9F"
};

static const nu_udb_t V01E04 = {
	0x01E04,
	"\xE1\xB8\x85"
};

static const nu_udb_t V0010E = {
	0x0010E,
	"\xC4\x8F"
};

static const nu_udb_t V01E06 = {
	0x01E06,
	"\xE1\xB8\x87"
};

static const nu_udb_t V0010C = {
	0x0010C,
	"\xC4\x8D"
};

static const nu_udb_t V010A3 = {
	0x010A3,
	"\xE2\xB4\x83"
};

static const nu_udb_t V01F6C = {
	0x01F6C,
	"\xE1\xBD\xA4"
};

static const nu_udb_t V010A5 = {
	0x010A5,
	"\xE2\xB4\x85"
};

static const nu_udb_t V01F6D = {
	0x01F6D,
	"\xE1\xBD\xA5"
};

static const nu_udb_t V010A7 = {
	0x010A7,
	"\xE2\xB4\x87"
};

static const nu_udb_t V01F6E = {
	0x01F6E,
	"\xE1\xBD\xA6"
};

static const nu_udb_t V01F6F = {
	0x01F6F,
	"\xE1\xBD\xA7"
};

static const nu_udb_t V00425 = {
	0x00425,
	"\xD1\x85"
};

static const nu_udb_t V0042A = {
	0x0042A,
	"\xD1\x8A"
};

static const nu_udb_t V0A650 = {
	0x0A650,
	"\xEA\x99\x91"
};

static const nu_udb_t V010AD = {
	0x010AD,
	"\xE2\xB4\x8D"
};

static const nu_udb_t V01F68 = {
	0x01F68,
	"\xE1\xBD\xA0"
};

static const nu_udb_t V00547 = {
	0x00547,
	"\xD5\xB7"
};

static const nu_udb_t V01F69 = {
	0x01F69,
	"\xE1\xBD\xA1"
};

static const nu_udb_t V024B6 = {
	0x024B6,
	"\xE2\x93\x90"
};

static const nu_udb_t V0A656 = {
	0x0A656,
	"\xEA\x99\x97"
};

static const nu_udb_t V024B8 = {
	0x024B8,
	"\xE2\x93\x92"
};

static const nu_udb_t V1040B = {
	0x1040B,
	"\xF0\x90\x90\xB3"
};

static const nu_udb_t V01E3A = {
	0x01E3A,
	"\xE1\xB8\xBB"
};

static const nu_udb_t V0054E = {
	0x0054E,
	"\xD5\xBE"
};

static const nu_udb_t V01F6A = {
	0x01F6A,
	"\xE1\xBD\xA2"
};

static const nu_udb_t V0A65C = {
	0x0A65C,
	"\xEA\x99\x9D"
};

static const nu_udb_t V024BE = {
	0x024BE,
	"\xE2\x93\x98"
};

static const nu_udb_t V0A65E = {
	0x0A65E,
	"\xEA\x99\x9F"
};

static const nu_udb_t V00553 = {
	0x00553,
	"\xD6\x83"
};

static const nu_udb_t V02CA4 = {
	0x02CA4,
	"\xE2\xB2\xA5"
};

static const nu_udb_t V01F6B = {
	0x01F6B,
	"\xE1\xBD\xA3"
};

static const nu_udb_t V0A642 = {
	0x0A642,
	"\xEA\x99\x83"
};

static const nu_udb_t V01E3C = {
	0x01E3C,
	"\xE1\xB8\xBD"
};

static const nu_udb_t V0A644 = {
	0x0A644,
	"\xEA\x99\x85"
};

static const nu_udb_t V010C1 = {
	0x010C1,
	"\xE2\xB4\xA1"
};

static const nu_udb_t V01E3E = {
	0x01E3E,
	"\xE1\xB8\xBF"
};

static const nu_udb_t V010C3 = {
	0x010C3,
	"\xE2\xB4\xA3"
};

static const nu_udb_t V0A648 = {
	0x0A648,
	"\xEA\x99\x89"
};

static const nu_udb_t V010C5 = {
	0x010C5,
	"\xE2\xB4\xA5"
};

static const nu_udb_t V00150 = {
	0x00150,
	"\xC5\x91"
};

static const nu_udb_t V010C7 = {
	0x010C7,
	"\xE2\xB4\xA7"
};

static const nu_udb_t V0A64C = {
	0x0A64C,
	"\xEA\x99\x8D"
};

static const nu_udb_t V02CF2 = {
	0x02CF2,
	"\xE2\xB3\xB3"
};

static const nu_udb_t V02CAA = {
	0x02CAA,
	"\xE2\xB2\xAB"
};

static const nu_udb_t V01E50 = {
	0x01E50,
	"\xE1\xB9\x91"
};

static const nu_udb_t V0040B = {
	0x0040B,
	"\xD1\x9B"
};

static const nu_udb_t V010CD = {
	0x010CD,
	"\xE2\xB4\xAD"
};

static const nu_udb_t V00409 = {
	0x00409,
	"\xD1\x99"
};

static const nu_udb_t V0A660 = {
	0x0A660,
	"\xEA\x99\xA1"
};

static const nu_udb_t V01E38 = {
	0x01E38,
	"\xE1\xB8\xB9"
};

static const nu_udb_t V01E2C = {
	0x01E2C,
	"\xE1\xB8\xAD"
};

static const nu_udb_t V02CE0 = {
	0x02CE0,
	"\xE2\xB3\xA1"
};

static const nu_udb_t V0A664 = {
	0x0A664,
	"\xEA\x99\xA5"
};

static const nu_udb_t V0A782 = {
	0x0A782,
	"\xEA\x9E\x83"
};

static const nu_udb_t V01E2E = {
	0x01E2E,
	"\xE1\xB8\xAF"
};

static const nu_udb_t V02C23 = {
	0x02C23,
	"\xE2\xB1\x93"
};

static const nu_udb_t V0A668 = {
	0x0A668,
	"\xEA\x99\xA9"
};

static const nu_udb_t V02C21 = {
	0x02C21,
	"\xE2\xB1\x91"
};

static const nu_udb_t V02CE2 = {
	0x02CE2,
	"\xE2\xB3\xA3"
};

static const nu_udb_t V02C27 = {
	0x02C27,
	"\xE2\xB1\x97"
};

static const nu_udb_t V01E40 = {
	0x01E40,
	"\xE1\xB9\x81"
};

static const nu_udb_t V010AB = {
	0x010AB,
	"\xE2\xB4\x8B"
};

static const nu_udb_t V01E42 = {
	0x01E42,
	"\xE1\xB9\x83"
};

static const nu_udb_t V0A662 = {
	0x0A662,
	"\xEA\x99\xA3"
};

static const nu_udb_t V0041E = {
	0x0041E,
	"\xD0\xBE"
};

static const nu_udb_t V02C29 = {
	0x02C29,
	"\xE2\xB1\x99"
};

static const nu_udb_t V01E28 = {
	0x01E28,
	"\xE1\xB8\xA9"
};

static const nu_udb_t V0A666 = {
	0x0A666,
	"\xEA\x99\xA7"
};

static const nu_udb_t V0A78D = {
	0x0A78D,
	"\xC9\xA5"
};

static const nu_udb_t V001B2 = {
	0x001B2,
	"\xCA\x8B"
};

static const nu_udb_t V02CDC = {
	0x02CDC,
	"\xE2\xB3\x9D"
};

static const nu_udb_t V0A66A = {
	0x0A66A,
	"\xEA\x99\xAB"
};

static const nu_udb_t V0A732 = {
	0x0A732,
	"\xEA\x9C\xB3"
};

static const nu_udb_t V01E2A = {
	0x01E2A,
	"\xE1\xB8\xAB"
};

static const nu_udb_t V0A734 = {
	0x0A734,
	"\xEA\x9C\xB5"
};

static const nu_udb_t V02CD8 = {
	0x02CD8,
	"\xE2\xB3\x99"
};

static const nu_udb_t V01E70 = {
	0x01E70,
	"\xE1\xB9\xB1"
};

static const nu_udb_t V0A690 = {
	0x0A690,
	"\xEA\x9A\x91"
};

static const nu_udb_t V01E72 = {
	0x01E72,
	"\xE1\xB9\xB3"
};

static const nu_udb_t V01E26 = {
	0x01E26,
	"\xE1\xB8\xA7"
};

static const nu_udb_t V01E74 = {
	0x01E74,
	"\xE1\xB9\xB5"
};

static const nu_udb_t V02CD6 = {
	0x02CD6,
	"\xE2\xB3\x97"
};

static const nu_udb_t V01E76 = {
	0x01E76,
	"\xE1\xB9\xB7"
};

static const nu_udb_t V0A696 = {
	0x0A696,
	"\xEA\x9A\x97"
};

static const nu_udb_t V0A73E = {
	0x0A73E,
	"\xEA\x9C\xBF"
};

static const nu_udb_t V02162 = {
	0x02162,
	"\xE2\x85\xB2"
};

static const nu_udb_t V01E1C = {
	0x01E1C,
	"\xE1\xB8\x9D"
};

static const nu_udb_t V01F0E = {
	0x01F0E,
	"\xE1\xBC\x86"
};

static const nu_udb_t V01E7C = {
	0x01E7C,
	"\xE1\xB9\xBD"
};

static const nu_udb_t V01F0C = {
	0x01F0C,
	"\xE1\xBC\x84"
};

static const nu_udb_t V0A724 = {
	0x0A724,
	"\xEA\x9C\xA5"
};

static const nu_udb_t V02CD0 = {
	0x02CD0,
	"\xE2\xB3\x91"
};

static const nu_udb_t V0A726 = {
	0x0A726,
	"\xEA\x9C\xA7"
};

static const nu_udb_t V0A680 = {
	0x0A680,
	"\xEA\x9A\x81"
};

static const nu_udb_t V0A728 = {
	0x0A728,
	"\xEA\x9C\xA9"
};

static const nu_udb_t V0A682 = {
	0x0A682,
	"\xEA\x9A\x83"
};

static const nu_udb_t V01E1E = {
	0x01E1E,
	"\xE1\xB8\x9F"
};

static const nu_udb_t V0A684 = {
	0x0A684,
	"\xEA\x9A\x85"
};

static const nu_udb_t V0A72C = {
	0x0A72C,
	"\xEA\x9C\xAD"
};

static const nu_udb_t V0A686 = {
	0x0A686,
	"\xEA\x9A\x87"
};

static const nu_udb_t V0A72E = {
	0x0A72E,
	"\xEA\x9C\xAF"
};

static const nu_udb_t V02CD2 = {
	0x02CD2,
	"\xE2\xB3\x93"
};

static const nu_udb_t V0A65A = {
	0x0A65A,
	"\xEA\x99\x9B"
};

static const nu_udb_t V0A68A = {
	0x0A68A,
	"\xEA\x9A\x8B"
};

static const nu_udb_t V0A658 = {
	0x0A658,
	"\xEA\x99\x99"
};

static const nu_udb_t V01E18 = {
	0x01E18,
	"\xE1\xB8\x99"
};

static const nu_udb_t V02CCC = {
	0x02CCC,
	"\xE2\xB3\x8D"
};

static const nu_udb_t V01E1A = {
	0x01E1A,
	"\xE1\xB8\x9B"
};

static const nu_udb_t V1041A = {
	0x1041A,
	"\xF0\x90\x91\x82"
};

static const nu_udb_t V1040C = {
	0x1040C,
	"\xF0\x90\x90\xB4"
};

static const nu_udb_t V0A758 = {
	0x0A758,
	"\xEA\x9D\x99"
};

static const nu_udb_t V1040E = {
	0x1040E,
	"\xF0\x90\x90\xB6"
};

static const nu_udb_t V0A75A = {
	0x0A75A,
	"\xEA\x9D\x9B"
};

static const nu_udb_t V10408 = {
	0x10408,
	"\xF0\x90\x90\xB0"
};

static const nu_udb_t V0A75C = {
	0x0A75C,
	"\xEA\x9D\x9D"
};

static const nu_udb_t V1040A = {
	0x1040A,
	"\xF0\x90\x90\xB2"
};

static const nu_udb_t V0A75E = {
	0x0A75E,
	"\xEA\x9D\x9F"
};

static const nu_udb_t V01E6C = {
	0x01E6C,
	"\xE1\xB9\xAD"
};

static const nu_udb_t V01E6E = {
	0x01E6E,
	"\xE1\xB9\xAF"
};

static const nu_udb_t V01E68 = {
	0x01E68,
	"\xE1\xB9\xA9"
};

static const nu_udb_t V01E6A = {
	0x01E6A,
	"\xE1\xB9\xAB"
};

static const nu_udb_t V01F8C = {
	0x01F8C,
	"\xE1\xBE\x84"
};

static const nu_udb_t V01F8E = {
	0x01F8E,
	"\xE1\xBE\x86"
};

static const nu_udb_t V0040D = {
	0x0040D,
	"\xD1\x9D"
};

static const nu_udb_t V01F88 = {
	0x01F88,
	"\xE1\xBE\x80"
};

static const nu_udb_t V01F28 = {
	0x01F28,
	"\xE1\xBC\xA0"
};

static const nu_udb_t V01F8A = {
	0x01F8A,
	"\xE1\xBE\x82"
};

static const nu_udb_t V0A752 = {
	0x0A752,
	"\xEA\x9D\x93"
};

static const nu_udb_t V0A74A = {
	0x0A74A,
	"\xEA\x9D\x8B"
};

static const nu_udb_t V01E5C = {
	0x01E5C,
	"\xE1\xB9\x9D"
};

static const nu_udb_t V01E5E = {
	0x01E5E,
	"\xE1\xB9\x9F"
};

static const nu_udb_t V01E58 = {
	0x01E58,
	"\xE1\xB9\x99"
};

static const nu_udb_t V01E22 = {
	0x01E22,
	"\xE1\xB8\xA3"
};

static const nu_udb_t V01E5A = {
	0x01E5A,
	"\xE1\xB9\x9B"
};

static const nu_udb_t V01F8B = {
	0x01F8B,
	"\xE1\xBE\x83"
};

static const nu_udb_t V01FFC = {
	0x01FFC,
	"\xE1\xBF\xB3"
};

static const nu_udb_t V01E54 = {
	0x01E54,
	"\xE1\xB9\x95"
};

static const nu_udb_t V01E56 = {
	0x01E56,
	"\xE1\xB9\x97"
};

static const nu_udb_t V01FF8 = {
	0x01FF8,
	"\xE1\xBD\xB8"
};

static const nu_udb_t V01FFA = {
	0x01FFA,
	"\xE1\xBD\xBC"
};

static const nu_udb_t V01EB0 = {
	0x01EB0,
	"\xE1\xBA\xB1"
};

static const nu_udb_t V00418 = {
	0x00418,
	"\xD0\xB8"
};

static const nu_udb_t V01EB2 = {
	0x01EB2,
	"\xE1\xBA\xB3"
};

static const nu_udb_t V001F8 = {
	0x001F8,
	"\xC7\xB9"
};

static const nu_udb_t V0041D = {
	0x0041D,
	"\xD0\xBD"
};

static const nu_udb_t V001FE = {
	0x001FE,
	"\xC7\xBF"
};

static const nu_udb_t V0041F = {
	0x0041F,
	"\xD0\xBF"
};

static const nu_udb_t V01E4C = {
	0x01E4C,
	"\xE1\xB9\x8D"
};

static const nu_udb_t V01F4B = {
	0x01F4B,
	"\xE1\xBD\x83"
};

static const nu_udb_t V01E4E = {
	0x01E4E,
	"\xE1\xB9\x8F"
};

static const nu_udb_t V01E30 = {
	0x01E30,
	"\xE1\xB8\xB1"
};

static const nu_udb_t V01E48 = {
	0x01E48,
	"\xE1\xB9\x89"
};

static const nu_udb_t V0A688 = {
	0x0A688,
	"\xEA\x9A\x89"
};

static const nu_udb_t V01E4A = {
	0x01E4A,
	"\xE1\xB9\x8B"
};

static const nu_udb_t V0A68E = {
	0x0A68E,
	"\xEA\x9A\x8F"
};

static const nu_udb_t V0A756 = {
	0x0A756,
	"\xEA\x9D\x97"
};

static const nu_udb_t V0A68C = {
	0x0A68C,
	"\xEA\x9A\x8D"
};

static const nu_udb_t V01FEC = {
	0x01FEC,
	"\xE1\xBF\xA5"
};

static const nu_udb_t V0A692 = {
	0x0A692,
	"\xEA\x9A\x93"
};

static const nu_udb_t V01FAC = {
	0x01FAC,
	"\xE1\xBE\xA4"
};

static const nu_udb_t V0A76A = {
	0x0A76A,
	"\xEA\x9D\xAB"
};

static const nu_udb_t V01F4C = {
	0x01F4C,
	"\xE1\xBD\x84"
};

static const nu_udb_t V0040F = {
	0x0040F,
	"\xD1\x9F"
};

static const nu_udb_t V01E44 = {
	0x01E44,
	"\xE1\xB9\x85"
};

static const nu_udb_t V01EA8 = {
	0x01EA8,
	"\xE1\xBA\xA9"
};

static const nu_udb_t V01E46 = {
	0x01E46,
	"\xE1\xB9\x87"
};

static const nu_udb_t V01F59 = {
	0x01F59,
	"\xE1\xBD\x91"
};

static const nu_udb_t V01FE8 = {
	0x01FE8,
	"\xE1\xBF\xA0"
};

static const nu_udb_t V01EAC = {
	0x01EAC,
	"\xE1\xBA\xAD"
};

static const nu_udb_t V01FEA = {
	0x01FEA,
	"\xE1\xBD\xBA"
};

static const nu_udb_t V01EAE = {
	0x01EAE,
	"\xE1\xBA\xAF"
};

static const nu_udb_t V01EBC = {
	0x01EBC,
	"\xE1\xBA\xBD"
};

static const nu_udb_t V01E0A = {
	0x01E0A,
	"\xE1\xB8\x8B"
};

static const nu_udb_t V01EBE = {
	0x01EBE,
	"\xE1\xBA\xBF"
};

static const nu_udb_t V01E08 = {
	0x01E08,
	"\xE1\xB8\x89"
};

static const nu_udb_t V01EB8 = {
	0x01EB8,
	"\xE1\xBA\xB9"
};

static const nu_udb_t V01E0E = {
	0x01E0E,
	"\xE1\xB8\x8F"
};

static const nu_udb_t V0A74C = {
	0x0A74C,
	"\xEA\x9D\x8D"
};

static const nu_udb_t V01E0C = {
	0x01E0C,
	"\xE1\xB8\x8D"
};

static const nu_udb_t V01FAA = {
	0x01FAA,
	"\xE1\xBE\xA2"
};

static const nu_udb_t V00421 = {
	0x00421,
	"\xD1\x81"
};

static const nu_udb_t V01EBA = {
	0x01EBA,
	"\xE1\xBA\xBB"
};

static const nu_udb_t V00423 = {
	0x00423,
	"\xD1\x83"
};

static const nu_udb_t V00422 = {
	0x00422,
	"\xD1\x82"
};

static const nu_udb_t V01E16 = {
	0x01E16,
	"\xE1\xB8\x97"
};

static const nu_udb_t V00424 = {
	0x00424,
	"\xD1\x84"
};

static const nu_udb_t V01E14 = {
	0x01E14,
	"\xE1\xB8\x95"
};

static const nu_udb_t V00426 = {
	0x00426,
	"\xD1\x86"
};

static const nu_udb_t V01EC0 = {
	0x01EC0,
	"\xE1\xBB\x81"
};

static const nu_udb_t V00428 = {
	0x00428,
	"\xD1\x88"
};

static const nu_udb_t V01EC2 = {
	0x01EC2,
	"\xE1\xBB\x83"
};

static const nu_udb_t V0A78B = {
	0x0A78B,
	"\xEA\x9E\x8C"
};

static const nu_udb_t V01EC4 = {
	0x01EC4,
	"\xE1\xBB\x85"
};

static const nu_udb_t V0042C = {
	0x0042C,
	"\xD1\x8C"
};

static const nu_udb_t V0042F = {
	0x0042F,
	"\xD1\x8F"
};

static const nu_udb_t V01FBA = {
	0x01FBA,
	"\xE1\xBD\xB0"
};

static const nu_udb_t V01EC8 = {
	0x01EC8,
	"\xE1\xBB\x89"
};

static const nu_udb_t V01EB4 = {
	0x01EB4,
	"\xE1\xBA\xB5"
};

static const nu_udb_t V01E60 = {
	0x01E60,
	"\xE1\xB9\xA1"
};

static const nu_udb_t V01EB6 = {
	0x01EB6,
	"\xE1\xBA\xB7"
};

static const nu_udb_t V00538 = {
	0x00538,
	"\xD5\xA8"
};

static const nu_udb_t V1040F = {
	0x1040F,
	"\xF0\x90\x90\xB7"
};

static const nu_udb_t V0053A = {
	0x0053A,
	"\xD5\xAA"
};

static const nu_udb_t V00534 = {
	0x00534,
	"\xD5\xA4"
};

static const nu_udb_t V01F99 = {
	0x01F99,
	"\xE1\xBE\x91"
};

static const nu_udb_t V01F98 = {
	0x01F98,
	"\xE1\xBE\x90"
};

static const nu_udb_t V01F9B = {
	0x01F9B,
	"\xE1\xBE\x93"
};

static const nu_udb_t V01F9A = {
	0x01F9A,
	"\xE1\xBE\x92"
};

static const nu_udb_t V01F9D = {
	0x01F9D,
	"\xE1\xBE\x95"
};

static const nu_udb_t V01F9C = {
	0x01F9C,
	"\xE1\xBE\x94"
};

static const nu_udb_t V01F9F = {
	0x01F9F,
	"\xE1\xBE\x97"
};

static const nu_udb_t V01F9E = {
	0x01F9E,
	"\xE1\xBE\x96"
};

static const nu_udb_t V00536 = {
	0x00536,
	"\xD5\xA6"
};

static const nu_udb_t V01FCC = {
	0x01FCC,
	"\xE1\xBF\x83"
};

static const nu_udb_t V01F89 = {
	0x01F89,
	"\xE1\xBE\x81"
};

static const nu_udb_t V024BD = {
	0x024BD,
	"\xE2\x93\x97"
};

static const nu_udb_t V004F6 = {
	0x004F6,
	"\xD3\xB7"
};

static const nu_udb_t V00532 = {
	0x00532,
	"\xD5\xA2"
};

static const nu_udb_t V004F4 = {
	0x004F4,
	"\xD3\xB5"
};

static const nu_udb_t V01FC8 = {
	0x01FC8,
	"\xE1\xBD\xB2"
};

static const nu_udb_t V004FA = {
	0x004FA,
	"\xD3\xBB"
};

static const nu_udb_t V024BB = {
	0x024BB,
	"\xE2\x93\x95"
};

static const nu_udb_t V004F8 = {
	0x004F8,
	"\xD3\xB9"
};

static const nu_udb_t V01FCA = {
	0x01FCA,
	"\xE1\xBD\xB4"
};

static const nu_udb_t V00512 = {
	0x00512,
	"\xD4\x93"
};

static const nu_udb_t V010AE = {
	0x010AE,
	"\xE2\xB4\x8E"
};

static const nu_udb_t V00514 = {
	0x00514,
	"\xD4\x95"
};

static const nu_udb_t V0A73C = {
	0x0A73C,
	"\xEA\x9C\xBD"
};

static const nu_udb_t V00516 = {
	0x00516,
	"\xD4\x97"
};

static const nu_udb_t V01E9E = {
	0x01E9E,
	"\xC3\x9F"
};

static const nu_udb_t V00518 = {
	0x00518,
	"\xD4\x99"
};

static const nu_udb_t V02C20 = {
	0x02C20,
	"\xE2\xB1\x90"
};

static const nu_udb_t V0051A = {
	0x0051A,
	"\xD4\x9B"
};

static const nu_udb_t V004C7 = {
	0x004C7,
	"\xD3\x88"
};

static const nu_udb_t V02C25 = {
	0x02C25,
	"\xE2\xB1\x95"
};

static const nu_udb_t V02C24 = {
	0x02C24,
	"\xE2\xB1\x94"
};

static const nu_udb_t V01FB9 = {
	0x01FB9,
	"\xE1\xBE\xB1"
};

static const nu_udb_t V01FB8 = {
	0x01FB8,
	"\xE1\xBE\xB0"
};

static const nu_udb_t V01FBB = {
	0x01FBB,
	"\xE1\xBD\xB1"
};

static const nu_udb_t V01E94 = {
	0x01E94,
	"\xE1\xBA\x95"
};

static const nu_udb_t V02C98 = {
	0x02C98,
	"\xE2\xB2\x99"
};

static const nu_udb_t V01FBC = {
	0x01FBC,
	"\xE1\xBE\xB3"
};

static const nu_udb_t V02C9E = {
	0x02C9E,
	"\xE2\xB2\x9F"
};

static const nu_udb_t V02C2C = {
	0x02C2C,
	"\xE2\xB1\x9C"
};

static const nu_udb_t V01E90 = {
	0x01E90,
	"\xE1\xBA\x91"
};

static const nu_udb_t V02C2E = {
	0x02C2E,
	"\xE2\xB1\x9E"
};

static const nu_udb_t V004D0 = {
	0x004D0,
	"\xD3\x91"
};

static const nu_udb_t V0051E = {
	0x0051E,
	"\xD4\x9F"
};

static const nu_udb_t V0A652 = {
	0x0A652,
	"\xEA\x99\x93"
};

static const nu_udb_t V01E92 = {
	0x01E92,
	"\xE1\xBA\x93"
};

static const nu_udb_t V0050C = {
	0x0050C,
	"\xD4\x8D"
};

static const nu_udb_t V01E8C = {
	0x01E8C,
	"\xE1\xBA\x8D"
};

static const nu_udb_t V01FA9 = {
	0x01FA9,
	"\xE1\xBE\xA1"
};

static const nu_udb_t V01FA8 = {
	0x01FA8,
	"\xE1\xBE\xA0"
};

static const nu_udb_t V01FAB = {
	0x01FAB,
	"\xE1\xBE\xA3"
};

static const nu_udb_t V02CEB = {
	0x02CEB,
	"\xE2\xB3\xAC"
};

static const nu_udb_t V01FAD = {
	0x01FAD,
	"\xE1\xBE\xA5"
};

static const nu_udb_t V00535 = {
	0x00535,
	"\xD5\xA5"
};

static const nu_udb_t V01FAF = {
	0x01FAF,
	"\xE1\xBE\xA7"
};

static const nu_udb_t V01FAE = {
	0x01FAE,
	"\xE1\xBE\xA6"
};

static const nu_udb_t V01EA2 = {
	0x01EA2,
	"\xE1\xBA\xA3"
};

static const nu_udb_t V00539 = {
	0x00539,
	"\xD5\xA9"
};

static const nu_udb_t V01EA0 = {
	0x01EA0,
	"\xE1\xBA\xA1"
};

static const nu_udb_t V0053B = {
	0x0053B,
	"\xD5\xAB"
};

static const nu_udb_t V01EA6 = {
	0x01EA6,
	"\xE1\xBA\xA7"
};

static const nu_udb_t V0053D = {
	0x0053D,
	"\xD5\xAD"
};

static const nu_udb_t V01EA4 = {
	0x01EA4,
	"\xE1\xBA\xA5"
};

static const nu_udb_t V0053F = {
	0x0053F,
	"\xD5\xAF"
};

static const nu_udb_t V01FD9 = {
	0x01FD9,
	"\xE1\xBF\x91"
};

static const nu_udb_t V01E8E = {
	0x01E8E,
	"\xE1\xBA\x8F"
};

static const nu_udb_t V01FDB = {
	0x01FDB,
	"\xE1\xBD\xB7"
};

static const nu_udb_t V01E88 = {
	0x01E88,
	"\xE1\xBA\x89"
};

static const nu_udb_t V00522 = {
	0x00522,
	"\xD4\xA3"
};

static const nu_udb_t V01E8A = {
	0x01E8A,
	"\xE1\xBA\x8B"
};

static const nu_udb_t V00524 = {
	0x00524,
	"\xD4\xA5"
};

static const nu_udb_t V01E84 = {
	0x01E84,
	"\xE1\xBA\x85"
};

static const nu_udb_t V01FCB = {
	0x01FCB,
	"\xE1\xBD\xB5"
};

static const nu_udb_t V10414 = {
	0x10414,
	"\xF0\x90\x90\xBC"
};

static const nu_udb_t V01FC9 = {
	0x01FC9,
	"\xE1\xBD\xB3"
};

static const nu_udb_t V01E86 = {
	0x01E86,
	"\xE1\xBA\x87"
};

static const nu_udb_t V02CC0 = {
	0x02CC0,
	"\xE2\xB3\x81"
};

static const nu_udb_t V01E80 = {
	0x01E80,
	"\xE1\xBA\x81"
};

static const nu_udb_t V0050E = {
	0x0050E,
	"\xD4\x8F"
};

static const nu_udb_t V01E82 = {
	0x01E82,
	"\xE1\xBA\x83"
};

static const nu_udb_t V02CC4 = {
	0x02CC4,
	"\xE2\xB3\x85"
};


static const nu_udb_t* VALUES[] = {
	&V00551, &V00550, &V00411, &V01EFC, &V00555, &V0050A, 
	&V01FDA, &V01EFE, &V01FD8, &V00504, &V004B2, &V01EF8, 
	&V0041B, &V00506, &V004B6, &V01FF9, &V00541, &V00540, 
	&V004BA, &V01EFA, &V004BC, &V00544, &V004BE, &V00546, 
	&V0216B, &V0216A, &V0054B, &V0054A, &V0054D, &V00500, 
	&V0054F, &V01FE9, &V004A8, &V01FEB, &V0FF22, &V01EF4, 
	&V0FF24, &V00502, &V0FF26, &V0FF29, &V0FF23, &V01EF6, 
	&V004D2, &V0FF2D, &V004D4, &V01EF0, &V01EF2, &V010BE, 
	&V004D8, &V01EEC, &V004DA, &V01EEE, &V004DC, &V01EE8, 
	&V004DE, &V004C1, &V0FF33, &V004C3, &V0FF31, &V01EEA, 
	&V10411, &V10410, &V10413, &V004C9, &V10415, &V01EE4, 
	&V10417, &V10416, &V02CBA, &V01EE6, &V01EE0, &V01EE2, 
	&V004F0, &V1041C, &V004F2, &V01EC6, &V10401, &V10400, 
	&V10403, &V10402, &V10405, &V10404, &V10407, &V10406, 
	&V004FC, &V01EDC, &V004FE, &V0A77E, &V1040D, &V01ED8, 
	&V004E2, &V01ED6, &V004E4, &V01ED0, &V004E6, &V01EDA, 
	&V004E8, &V01ED2, &V10409, &V0FF37, &V004EC, &V02163, 
	&V004EE, &V02161, &V02CDE, &V02167, &V010AC, &V01ECC, 
	&V10421, &V10420, &V10423, &V02169, &V02CC6, &V10424, 
	&V02CC8, &V10426, &V02CCA, &V0A76C, &V01ECE, &V01F48, 
	&V02CCE, &V00414, &V00416, &V00410, &V02160, &V00412, 
	&V01E32, &V02165, &V02164, &V0040C, &V01E36, &V0040E, 
	&V01E34, &V0A792, &V00408, &V0040A, &V0216C, &V003CF, 
	&V0216E, &V00404, &V00406, &V00400, &V00401, &V00402, 
	&V01E20, &V00122, &V00403, &V0047C, &V01E24, &V02CED, 
	&V0047E, &V00478, &V0047A, &V010A1, &V00474, &V00476, 
	&V01ECA, &V00470, &V00472, &V0046C, &V0A7A8, &V0046E, 
	&V0A7AA, &V010A8, &V010A9, &V00468, &V010AF, &V0A7A4, 
	&V0046A, &V0A7A6, &V003E8, &V004B8, &V0A748, &V00464, 
	&V010B7, &V0A7A0, &V00466, &V0A7A2, &V010BB, &V00460, 
	&V00462, &V0A66C, &V010BF, &V010BC, &V003FE, &V010BD, 
	&V010BA, &V010B4, &V010B6, &V010B0, &V010AA, &V010A4, 
	&V010A6, &V010A0, &V010A2, &V004AA, &V004A4, &V004A6, 
	&V0A640, &V004A0, &V01E78, &V004A2, &V00427, &V0049C, 
	&V0A64A, &V0049E, &V0015A, &V00376, &V0A762, &V0042E, 
	&V01E66, &V00498, &V01E64, &V00370, &V0049A, &V00372, 
	&V00494, &V0039F, &V00496, &V00490, &V00492, &V0048C, 
	&V01E52, &V0048E, &V0A694, &V0023D, &V0023E, &V02C2B, 
	&V02C2A, &V0048A, &V0023A, &V0023B, &V00480, &V0017D, 
	&V010C4, &V010C0, &V010C2, &V003A8, &V003AA, &V01F2A, 
	&V003A5, &V003A6, &V003A7, &V01F2E, &V003A1, &V01F2C, 
	&V00216, &V004CB, &V003A3, &V0039D, &V10422, &V00399, 
	&V0039B, &V00394, &V00395, &V10427, &V00396, &V10425, 
	&V00397, &V00391, &V00392, &V01F1C, &V00393, &V0038C, 
	&V0038E, &V02C28, &V0011E, &V00051, &V00388, &V00053, 
	&V0038A, &V01F0A, &V00548, &V01F08, &V00139, &V0013B, 
	&V00136, &V0042B, &V01EAA, &V00429, &V0012C, &V00130, 
	&V00132, &V0042D, &V003FD, &V00413, &V003FF, &V00045, 
	&V01E7A, &V00047, &V0012E, &V00049, &V00048, &V0004B, 
	&V0041A, &V00419, &V003F9, &V0024C, &V10412, &V00124, 
	&V0041C, &V00118, &V00126, &V0011A, &V00248, &V0011C, 
	&V00120, &V1041B, &V0024A, &V10419, &V1041E, &V1041F, 
	&V00244, &V1041D, &V0004D, &V02168, &V00246, &V00108, 
	&V01F5B, &V0010A, &V00104, &V00106, &V01F5F, &V00100, 
	&V01F5D, &V00102, &V00178, &V00179, &V0017B, &V00134, 
	&V00174, &V00176, &V00170, &V00172, &V0016C, &V01F4A, 
	&V01F49, &V0016E, &V02CB4, &V00168, &V01F4D, &V0016A, 
	&V02CB8, &V00164, &V02CBE, &V00166, &V00537, &V00160, 
	&V0013D, &V00128, &V00162, &V0012A, &V0015C, &V0015E, 
	&V00158, &V0FF38, &V01ED4, &V0FF3A, &V00154, &V0FF34, 
	&V02CAE, &V00520, &V01EDE, &V00526, &V001F6, &V00112, 
	&V0FF36, &V00110, &V0FF30, &V00116, &V02C94, &V00114, 
	&V02C9A, &V0FF32, &V00143, &V02CDA, &V00145, &V0FF2C, 
	&V00147, &V0FF2E, &V0FF2F, &V0FF28, &V00210, &V0014A, 
	&V00212, &V0FF2A, &V00214, &V0014E, &V004B4, &V0FF2B, 
	&V0FF25, &V0FF27, &V0021A, &V003EC, &V0021C, &V00141, 
	&V0021E, &V0FF21, &V00200, &V001B8, &V00202, &V00508, 
	&V01F8F, &V001B5, &V01F8D, &V001B7, &V00208, &V001B1, 
	&V0020A, &V0A654, &V0020C, &V024BF, &V0020E, &V001A9, 
	&V01FFB, &V024BA, &V00232, &V024B7, &V001A6, &V001A7, 
	&V001A0, &V001A2, &V0019C, &V001B3, &V0019D, &V0019F, 
	&V00198, &V0014C, &V00194, &V00152, &V00220, &V00196, 
	&V00222, &V00197, &V02CD4, &V00190, &V00226, &V00191, 
	&V00193, &V00552, &V0018E, &V0018F, &V0022C, &V00556, 
	&V00189, &V00554, &V0018A, &V0018B, &V0FF39, &V003A4, 
	&V0A790, &V00184, &V00186, &V00187, &V00543, &V00542, 
	&V0005A, &V001FC, &V001AF, &V00054, &V00545, &V00241, 
	&V02C22, &V00243, &V01E7E, &V00245, &V00056, &V0A646, 
	&V00050, &V0054C, &V004EA, &V00052, &V0004C, &V001A4, 
	&V00218, &V001BC, &V0024E, &V00182, &V004E0, &V0004F, 
	&V00181, &V001AC, &V004D6, &V001AE, &V0004A, &V00044, 
	&V00204, &V00046, &V00042, &V001E6, &V001E0, &V001E2, 
	&V001DE, &V001D9, &V001DB, &V001D5, &V001D7, &V001D1, 
	&V001D3, &V004C5, &V001CD, &V001CF, &V001C8, &V00043, 
	&V001CA, &V00041, &V001CB, &V001C4, &V00405, &V001C5, 
	&V00407, &V001C7, &V024CC, &V004CD, &V0004E, &V001E4, 
	&V001F1, &V001EA, &V0FF35, &V001F2, &V024CD, &V001F4, 
	&V024CE, &V024CF, &V00415, &V024C8, &V004B0, &V001FA, 
	&V00058, &V00059, &V001F7, &V024C9, &V024CA, &V02166, 
	&V024CB, &V0A73A, &V00230, &V0A738, &V0216D, &V024C4, 
	&V024C5, &V001E8, &V10418, &V0A722, &V004AE, &V001EC, 
	&V024C6, &V001EE, &V024C7, &V024C0, &V024C1, &V024C2, 
	&V024C3, &V02132, &V0212A, &V0212B, &V02126, &V000DC, 
	&V0A740, &V000DD, &V0A742, &V000DE, &V0A64E, &V000D8, 
	&V000D9, &V000DA, &V000DB, &V00549, &V000D4, &V00420, 
	&V000D5, &V000D6, &V000D0, &V000D1, &V0A750, &V004C0, 
	&V000D2, &V000D3, &V000CC, &V000CD, &V000CE, &V000CF, 
	&V000C8, &V000C9, &V000CA, &V000CB, &V000C4, &V000C5, 
	&V000C6, &V000C7, &V00224, &V000C0, &V0022A, &V000C1, 
	&V00228, &V000C2, &V0022E, &V000C3, &V0A77B, &V0216F, 
	&V02C1C, &V02C1D, &V02C1E, &V010B8, &V0A77D, &V02C1F, 
	&V02C18, &V00398, &V02C19, &V0039A, &V02C1A, &V0A766, 
	&V02C1B, &V0A764, &V02C14, &V02C15, &V02C16, &V0A768, 
	&V02C17, &V0A76E, &V00206, &V00386, &V02C10, &V02C11, 
	&V02C12, &V02C13, &V02C0C, &V02C0D, &V02C0E, &V0A754, 
	&V00156, &V02C0F, &V02C08, &V02C09, &V01E62, &V02C0A, 
	&V024B9, &V02C0B, &V02C04, &V02C05, &V02C06, &V02C07, 
	&V02C00, &V02C01, &V02C02, &V02C03, &V02C7E, &V003A0, 
	&V02C7F, &V02C75, &V02C70, &V0A74E, &V02C72, &V02C6D, 
	&V003A9, &V02C6E, &V003AB, &V02C6F, &V02C69, &V0A72A, 
	&V02C6B, &V02C26, &V02C64, &V02C67, &V02C60, &V02C62, 
	&V02C2D, &V02C63, &V0038F, &V01F3C, &V01F3D, &V0A736, 
	&V01F3E, &V003DA, &V01F3F, &V004AC, &V01F38, &V024BC, 
	&V01F39, &V01F3A, &V01F3B, &V02183, &V02CBC, &V0039E, 
	&V01F2D, &V01F2F, &V01F29, &V003E2, &V01F2B, &V003E0, 
	&V00533, &V003E6, &V00531, &V0A784, &V02CB6, &V0039C, 
	&V010B2, &V02CC2, &V02CB0, &V003F4, &V003F7, &V0053E, 
	&V02CB2, &V0053C, &V02CAC, &V003FA, &V00389, &V0A786, 
	&V01F1D, &V00057, &V0013F, &V00055, &V02CA8, &V01F19, 
	&V01F1B, &V003E4, &V02CA6, &V0A760, &V02CA0, &V02CA2, 
	&V02C9C, &V003EA, &V01F0D, &V00510, &V01F0F, &V003EE, 
	&V01F09, &V01F0B, &V02C96, &V02C90, &V02C92, &V00417, 
	&V02C8C, &V02C8E, &V02C88, &V0051C, &V02C8A, &V01F18, 
	&V01E10, &V01F1A, &V01E12, &V02C84, &V0A779, &V02C86, 
	&V010B1, &V02C80, &V010B3, &V02C82, &V010B5, &V003DC, 
	&V0A780, &V0A746, &V010B9, &V0A744, &V01E00, &V003D8, 
	&V01E02, &V003DE, &V01E04, &V0010E, &V01E06, &V0010C, 
	&V010A3, &V01F6C, &V010A5, &V01F6D, &V010A7, &V01F6E, 
	&V01F6F, &V00425, &V0042A, &V0A650, &V010AD, &V01F68, 
	&V00547, &V01F69, &V024B6, &V0A656, &V024B8, &V1040B, 
	&V01E3A, &V0054E, &V01F6A, &V0A65C, &V024BE, &V0A65E, 
	&V00553, &V02CA4, &V01F6B, &V0A642, &V01E3C, &V0A644, 
	&V010C1, &V01E3E, &V010C3, &V0A648, &V010C5, &V00150, 
	&V010C7, &V0A64C, &V02CF2, &V02CAA, &V01E50, &V0040B, 
	&V010CD, &V00409, &V0A660, &V01E38, &V01E2C, &V02CE0, 
	&V0A664, &V0A782, &V01E2E, &V02C23, &V0A668, &V02C21, 
	&V02CE2, &V02C27, &V01E40, &V010AB, &V01E42, &V0A662, 
	&V0041E, &V02C29, &V01E28, &V0A666, &V0A78D, &V001B2, 
	&V02CDC, &V0A66A, &V0A732, &V01E2A, &V0A734, &V02CD8, 
	&V01E70, &V0A690, &V01E72, &V01E26, &V01E74, &V02CD6, 
	&V01E76, &V0A696, &V0A73E, &V02162, &V01E1C, &V01F0E, 
	&V01E7C, &V01F0C, &V0A724, &V02CD0, &V0A726, &V0A680, 
	&V0A728, &V0A682, &V01E1E, &V0A684, &V0A72C, &V0A686, 
	&V0A72E, &V02CD2, &V0A65A, &V0A68A, &V0A658, &V01E18, 
	&V02CCC, &V01E1A, &V1041A, &V1040C, &V0A758, &V1040E, 
	&V0A75A, &V10408, &V0A75C, &V1040A, &V0A75E, &V01E6C, 
	&V01E6E, &V01E68, &V01E6A, &V01F8C, &V01F8E, &V0040D, 
	&V01F88, &V01F28, &V01F8A, &V0A752, &V0A74A, &V01E5C, 
	&V01E5E, &V01E58, &V01E22, &V01E5A, &V01F8B, &V01FFC, 
	&V01E54, &V01E56, &V01FF8, &V01FFA, &V01EB0, &V00418, 
	&V01EB2, &V001F8, &V0041D, &V001FE, &V0041F, &V01E4C, 
	&V01F4B, &V01E4E, &V01E30, &V01E48, &V0A688, &V01E4A, 
	&V0A68E, &V0A756, &V0A68C, &V01FEC, &V0A692, &V01FAC, 
	&V0A76A, &V01F4C, &V0040F, &V01E44, &V01EA8, &V01E46, 
	&V01F59, &V01FE8, &V01EAC, &V01FEA, &V01EAE, &V01EBC, 
	&V01E0A, &V01EBE, &V01E08, &V01EB8, &V01E0E, &V0A74C, 
	&V01E0C, &V01FAA, &V00421, &V01EBA, &V00423, &V00422, 
	&V01E16, &V00424, &V01E14, &V00426, &V01EC0, &V00428, 
	&V01EC2, &V0A78B, &V01EC4, &V0042C, &V0042F, &V01FBA, 
	&V01EC8, &V01EB4, &V01E60, &V01EB6, &V00538, &V1040F, 
	&V0053A, &V00534, &V01F99, &V01F98, &V01F9B, &V01F9A, 
	&V01F9D, &V01F9C, &V01F9F, &V01F9E, &V00536, &V01FCC, 
	&V01F89, &V024BD, &V004F6, &V00532, &V004F4, &V01FC8, 
	&V004FA, &V024BB, &V004F8, &V01FCA, &V00512, &V010AE, 
	&V00514, &V0A73C, &V00516, &V01E9E, &V00518, &V02C20, 
	&V0051A, &V004C7, &V02C25, &V02C24, &V01FB9, &V01FB8, 
	&V01FBB, &V01E94, &V02C98, &V01FBC, &V02C9E, &V02C2C, 
	&V01E90, &V02C2E, &V004D0, &V0051E, &V0A652, &V01E92, 
	&V0050C, &V01E8C, &V01FA9, &V01FA8, &V01FAB, &V02CEB, 
	&V01FAD, &V00535, &V01FAF, &V01FAE, &V01EA2, &V00539, 
	&V01EA0, &V0053B, &V01EA6, &V0053D, &V01EA4, &V0053F, 
	&V01FD9, &V01E8E, &V01FDB, &V01E88, &V00522, &V01E8A, 
	&V00524, &V01E84, &V01FCB, &V10414, &V01FC9, &V01E86, 
	&V02CC0, &V01E80, &V0050E, &V01E82, &V02CC4, 
};

