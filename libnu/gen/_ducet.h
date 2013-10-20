/*
1382275191
FNV_OFFSET_BASIS: FFFFFFFF,
FNV_PRIME: 01000193,
FNV_SIZE: 3003
*/

static const int16_t FNV[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, -3003, 0, 0, 
	0, 0, -3002, 0, -3001, -3000, 2, 0, -2999, 0, -2994, 0, 
	-2993, 0, -2991, -2990, 0, -2989, 0, -2986, 0, -2985, -2982, -2979, 
	0, 1, -2977, 0, 0, -2976, 0, -2975, 0, -2974, 0, -2973, 
	0, -2970, 0, 0, -2969, 0, 0, -2965, -2963, -2957, 0, -2955, 
	0, -2952, 0, -2948, 0, -2946, 0, 0, 0, 0, 0, 0, 
	0, 0, -2944, -2943, -2940, -2939, -2936, -2929, -2928, -2927, -2924, -2923, 
	-2917, -2916, -2912, -2911, -2900, -2895, 1, 1, 4, -2894, -2889, -2872, 
	-2870, -2869, -2867, 2, 2, 1, -2866, -2864, 1, 1, -2858, -2852, 
	-2851, -2850, -2848, -2846, -2845, -2831, -2821, -2816, -2815, -2813, -2808, -2807, 
	-2806, -2805, -2803, -2801, -2800, 1, -2799, -2790, -2788, -2786, -2781, -2779, 
	-2777, -2776, -2775, -2774, -2772, -2770, -2769, -2768, -2767, -2766, -2765, -2764, 
	-2763, -2758, -2757, -2749, -2748, -2746, -2745, -2744, -2743, 3, -2742, -2741, 
	-2740, -2739, -2738, -2737, -2736, -2735, -2733, -2732, -2731, -2730, -2726, -2725, 
	-2724, -2723, -2722, -2721, -2705, -2702, -2699, -2698, -2694, -2693, -2692, -2691, 
	-2689, -2687, -2686, -2679, -2678, 1, -2673, 1, -2672, 1, -2671, 5, 
	3, -2668, -2667, -2666, -2665, 1, 1, 2, 1, 1, 1, 1, 
	2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, -2664, 3, 1, 1, 1, 1, 1, 1, 5, 3, 
	2, 1, -2663, -2662, -2660, -2659, -2658, 1, -2657, -2654, -2653, -2652, 
	-2651, -2648, -2646, -2643, -2642, 1, 1, 1, -2641, -2640, -2638, 3, 
	-2637, -2635, -2634, -2633, -2632, -2631, -2630, -2625, -2619, -2615, -2614, -2611, 
	-2610, -2609, -2607, -2600, -2595, -2584, -2580, -2575, -2561, -2559, -2556, -2550, 
	-2547, -2545, -2541, 1, -2539, 1, 4, -2537, 1, -2526, 1, 4, 
	-2525, -2523, 3, -2522, 4, 2, 2, 2, 2, -2519, -2516, -2505, 
	-2492, 6, 2, 1, 1, -2489, -2488, -2482, 4, -2468, 1, 3, 
	-2467, 3, 2, -2466, 1, -2461, 1, 2, -2460, -2453, 1, -2452, 
	1, -2439, -2431, 1, 2, -2430, -2424, -2422, -2418, -2416, -2415, -2413, 
	-2412, 3, 3, 1, -2405, -2401, -2399, -2396, -2394, -2389, -2386, -2383, 
	-2382, -2381, -2377, -2372, -2369, -2366, -2365, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, -2364, 0, 0, 0, 1, 1, 2, 1, 0, 
	-2363, -2362, -2361, -2360, -2359, 0, -2357, -2356, -2355, -2354, -2345, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -2343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -2342, 0, -2341, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -2338, 1, -2337, -2336, -2335, -2334, -2330, -2329, -2327, -2326, -2318, 
	-2317, 0, -2314, -2291, -2286, -2285, 0, -2283, -2282, 0, -2279, 0, 
	-2263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2252, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, -2250, -2249, 1, -2248, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 2, 0, 0, 0, -2247, -2245, -2244, -2243, -2241, 
	-2233, -2232, -2224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	-2209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, -2208, -2205, -2200, -2196, -2195, -2191, -2186, 
	-2185, -2183, -2182, 2, 3, 3, 2, 2, 2, 2, 2, 2, 
	2, 2, 2, 1, 1, 3, 2, 4, 2, 2, 2, 2, 
	1, 1, 2, 2, 3, 1, 1, 3, 2, -2181, -2180, -2179, 
	-2176, -2175, -2174, 2, 2, -2172, -2171, 1, 1, 2, 2, 2, 
	2, 2, 3, 2, 2, -2166, -2162, -2161, -2160, -2159, -2158, -2157, 
	-2156, 2, 1, -2155, -2154, -2152, -2151, -2149, -2146, -2145, -2143, -2141, 
	-2138, -2137, -2125, -2112, -2111, -2110, -2109, -2108, -2106, -2105, 0, -2104, 
	-2103, 0, -2098, 0, 0, -2097, -2094, -2093, -2092, -2091, -2090, -2089, 
	-2088, -2082, -2081, -2073, -2072, -2071, -2070, -2069, -2068, -2063, -2061, -2059, 
	-2055, -2046, -2038, -2037, -2029, -2022, -2019, -2016, -2012, -2004, -1998, -1997, 
	-1996, -1994, 1, 4, -1990, -1988, 3, 3, 1, -1985, -1984, 1, 
	-1968, -1967, 1, 2, -1959, -1952, -1950, -1948, -1947, -1943, -1940, -1936, 
	-1926, -1923, -1921, 1, -1920, -1919, -1915, -1913, -1911, 1, 1, -1910, 
	-1899, -1894, -1891, -1885, -1874, 7, 3, -1873, -1871, -1870, -1868, -1867, 
	-1866, -1865, -1859, -1858, -1857, -1855, -1852, -1850, -1848, -1844, -1843, -1842, 
	-1840, -1836, -1835, -1834, -1827, -1825, -1824, -1823, 1, -1821, 1, -1818, 
	-1814, 1, -1813, 1, -1811, 1, -1809, 4, 1, -1807, 3, 1, 
	1, -1806, -1805, -1804, 2, -1803, 1, -1802, -1797, 3, 1, -1796, 
	1, -1783, -1777, 4, -1769, -1720, -1699, -1694, 2, 1, -1690, -1663, 
	1, -1651, -1647, 1, 1, 1, 1, 1, -1624, -1622, 3, -1619, 
	3, -1609, -1593, -1590, -1588, -1578, -1575, -1574, -1571, 0, 0, 0, 
	0, -1570, 0, -1565, 0, -1562, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, -1561, 0, -1560, -1559, 0, 0, -1558, -1555, -1554, 
	-1553, -1545, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, -1543, 0, 0, 
	0, 0, 0, 0, -1542, 0, -1541, -1540, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, -1539, -1533, -1528, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, -1526, -1522, -1520, 
	0, -1515, 0, -1514, 0, -1500, 0, -1499, 0, -1498, 0, -1495, 
	0, -1492, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1491, 
	0, 0, 0, -1490, -1488, -1487, -1486, 0, 0, 0, 0, -1483, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, -1478, -1473, 0, 0, 0, 0, 0, -1468, -1467, 
	3, -1466, 1, -1465, -1464, 1, -1463, 0, 0, 0, -1462, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, -1461, -1459, -1458, 0, 0, 0, -1456, -1454, 
	-1452, -1446, -1445, -1435, -1434, -1418, -1412, -1411, -1410, -1409, -1404, -1384, 
	-1381, -1378, -1377, -1376, -1375, -1374, -1372, -1371, -1370, -1369, -1368, -1365, 
	-1364, -1363, 0, 0, -1361, -1360, 0, 0, 0, 0, 0, 0, 
	-1358, -1357, -1356, 0, -1355, 0, 0, 0, 0, -1354, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, -1353, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1352, 
	0, 0, 0, 0, 0, 0, -1351, 0, 0, 0, 0, -1350, 
	0, 0, 0, 0, -1349, -1347, 0, 0, -1345, -1344, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, -1343, -1341, -1336, -1334, -1332, 
	-1330, -1329, -1328, -1327, -1325, -1324, -1323, -1322, -1320, -1319, -1318, -1317, 
	-1314, -1313, -1311, -1310, -1308, -1307, -1306, 0, 0, -1305, -1300, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1299, 
	-1298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, -1297, -1296, -1295, -1294, 5, -1292, 0, 0, -1290, 3, 
	-1289, -1288, 1, 2, 1, 2, 1, 1, -1287, -1286, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 2, -1285, -1283, 1, 1, -1282, -1281, 1, 3, -1279, -1278, 
	-1275, -1273, -1272, -1266, -1265, -1264, 1, 1, 1, 1, -1253, -1250, 
	-1249, -1247, -1246, -1245, -1244, -1243, -1242, -1241, 1, 1, -1238, -1237, 
	-1236, -1234, -1233, -1232, -1231, -1230, -1228, -1227, -1226, -1219, -1218, -1217, 
	-1216, -1215, -1214, -1212, -1211, 1, 1, -1210, -1209, 1, 3, 1, 
	1, -1208, -1207, -1206, -1205, -1204, -1203, -1202, -1201, -1200, -1199, -1197, 
	-1195, -1192, -1188, -1186, -1182, -1174, -1173, -1171, -1170, -1168, -1165, 0, 
	0, 1, 9, 1, 1, 1, 1, 5, 1, -1160, 1, 1, 
	1, 1, 4, -1134, -1129, -1127, -1126, -1125, -1124, -1123, -1122, 10, 
	4, 1, -1120, -1119, -1118, -1117, -1116, 0, 0, -1113, -1112, 0, 
	-1111, 0, -1109, -1107, 1, 1, -1106, 2, 2, 2, 1, -1105, 
	2, 1, 1, -1104, 3, -1102, -1101, 0, -1099, -1097, -1095, -1093, 
	2, -1092, -1091, -1090, 5, -1089, -1088, 2, 1, -1087, -1084, 3, 
	6, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 
	2, -1081, 1, 1, 1, 1, 1, -1080, 1, 2, 1, 2, 
	5, -1078, -1077, -1075, 0, -1074, -1073, -1070, -1069, -1068, -1067, -1065, 
	-1064, 0, 0, 0, -1063, 0, 0, -1061, 2, -1060, -1058, -1051, 
	-1047, -1046, -1041, -1040, -1039, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, -1038, -1036, -1033, 0, 0, 1, 7, -1029, -1011, -1009, 
	-1008, 1, 1, -989, -988, 1, 1, 1, 2, 1, 2, 1, 
	2, -987, 1, 1, 1, -980, -977, -974, 1, -971, -969, -966, 
	-965, 5, -964, -958, -955, 1, -949, -944, 1, -943, -942, -941, 
	-940, -939, -936, -935, -934, -933, 7, 0, -932, 3, 1, -930, 
	0, -929, -927, -924, -923, 0, 0, 0, -921, -920, -916, 1, 
	1, 3, 2, 1, 1, 2, 1, 2, 3, 1, 3, 1, 
	17, 3, 2, 5, 1, 1, 3, 3, 3, -915, -914, 2, 
	-913, 1, 4, -912, 2, 4, 19, 5, 4, 4, 5, 1, 
	3, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 
	2, 1, 1, 2, 5, 1, 2, 1, 1, 2, 1, 1, 
	1, 2, 2, 2, 2, 1, 1, -910, 5, -907, -905, -904, 
	-903, -902, -900, -899, -898, -895, 1, -894, -893, 4, -892, -890, 
	2, 0, 0, -887, 1, 2, 3, -886, -883, -881, -880, 2, 
	0, 0, -879, -878, -875, 0, 0, 0, 0, -874, -871, 0, 
	0, 0, 0, 0, -870, 0, 0, 0, 0, -869, -868, 0, 
	0, 0, 0, -867, -865, -864, 0, 0, 0, 0, 0, -863, 
	0, 0, -862, -860, 0, 0, 0, -859, -858, 0, -857, -855, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	-854, -853, 0, 0, -851, -850, -849, -847, -844, -843, -842, -839, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, -838, -837, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, -834, -833, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, -829, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, -828, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -827, 
	-826, 0, 0, -824, -823, -822, -820, -819, -818, 0, 0, -815, 
	-813, -812, -809, -808, -807, 0, 0, -805, -804, -803, -802, -794, 
	-792, 0, 0, 0, 0, 0, -791, -790, -789, -788, -787, -784, 
	1, 6, -782, -779, -778, -777, -776, 0, 4, 3, 2, -775, 
	-774, -773, -772, 3, -771, 2, -770, -769, -764, -762, -758, -757, 
	-753, -751, -750, 1, 3, 4, 1, 5, 3, 3, 3, 3, 
	4, 3, 6, 6, 3, 2, 1, 6, 6, 2, 4, 3, 
	8, 1, 1, 1, 4, 3, 1, 1, 1, 6, 1, 1, 
	2, 3, 2, 1, 1, 3, 1, 1, 2, 2, 6, 8, 
	15, 1, 3, 3, 2, 3, 8, 11, 1, 1, 3, 3, 
	5, 8, 1, -748, 3, 3, 4, 9, 6, 1, 1, 7, 
	1, 1, 1, 8, 4, 3, 1, 1, 1, 1, 1, 1, 
	1, 2, 2, 2, 2, 4, 4, 6, 2, 3, 1, 2, 
	4, 4, 6, 2, 1, 1, 2, -745, 3, 1, 2, -744, 
	-743, -741, -737, -736, -735, -732, -731, 4, 9, 4, 7, 7, 
	1, 1, 1, 1, 2, 1, 4, 1, 1, 2, 1, 1, 
	1, 1, 1, 1, 1, 3, 3, 4, 1, 1, 2, 9, 
	8, 10, 7, 4, 6, 2, 15, 4, 1, 1, 16, 3, 
	1, 3, 10, 30, 3, 4, 9, 2, 9, 4, 4, 2, 
	2, 9, 1, 4, 15, 1, 1, 9, 1, 3, 2, 1, 
	6, 3, 4, 2, 6, 6, 1, 1, 6, 1, 1, 9, 
	1, 1, 1, -730, -728, -726, -723, -721, -719, -717, -716, -715, 
	-714, -713, -712, -711, -709, -708, 1, 1, 14, -707, -706, -705, 
	-704, -701, -700, -699, 8, -698, -697, -694, -691, 6, -689, -687, 
	-685, -684, -683, -682, -681, -679, 3, 1, -678, -677, -676, -675, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	-674, 0, -672, -670, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -668, 
	-666, 0, 0, 0, 0, -665, -663, -660, -659, -658, -656, -655, 
	-654, -651, -649, -648, -647, -645, -644, -642, -641, -640, -639, -637, 
	-635, -631, -629, -628, -627, -626, -625, -624, 3, -623, -622, -617, 
	-616, -615, -614, -613, -612, -611, -610, -609, -608, -607, -605, -604, 
	-603, -601, -600, -599, 1, 1, -598, -595, 1, 1, 21, 7, 
	-594, -590, -589, 3, 2, 1, 8, -588, -587, -586, -585, 4, 
	2, 9, 3, -583, -582, 6, 1, 2, 19, -580, -579, -578, 
	-577, -575, -573, -572, -570, -569, -568, -567, -565, -564, -559, -558, 
	-557, 15, 1, -550, -549, 1, 3, -546, -541, 1, 1, -540, 
	-539, -530, -529, -528, 2, 2, 8, 16, -527, 2, 6, 3, 
	2, 3, -526, 1, -522, 21, 10, 1, 1, -520, -519, -518, 
	1, -509, -507, -505, -501, -490, 2, 17, 1, 2, 4, 3, 
	-489, 3, -486, 3, 2, 15, -485, -467, 2, 2, 5, 3, 
	-459, -448, -447, 10, -443, 3, -442, 2, -441, -440, 21, -439, 
	-438, 1, -436, -435, 2, -434, 1, 1, 10, 1, -433, 1, 
	1, 1, 2, 1, -430, 1, 3, 5, 7, 6, 9, 1, 
	1, 3, 1, 2, 2, 3, 5, -429, 2, 7, 2, 2, 
	2, 2, -427, -426, 9, 1, 1, 1, 1, 2, 2, 1, 
	2, 2, 1, 2, -425, -422, -421, -420, -417, -416, 1, 1, 
	1, 1, 2, 2, -414, 1, 1, 1, 1, 4, 2, 1, 
	1, 1, 1, 1, 2, 1, 1, 1, 8, 3, 1, 1, 
	1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 
	1, 1, 1, 1, 4, 1, 4, 1, 5, 1, 8, 1, 
	6, 2, 5, 2, 11, 1, 15, 1, 1, 1, 1, -409, 
	2, 3, 10, 8, 1, 3, 2, 1, 1, 2, 1, 1, 
	2, 1, 1, 1, 10, 1, 10, 14, 1, -408, -407, -406, 
	2, 10, -404, 1, 17, 7, -403, 7, -401, -396, -395, -391, 
	-389, -386, -385, -384, -383, -381, -380, -369, -368, -367, -366, -365, 
	-364, -363, 1, -361, -360, -358, -344, -341, 0, -340, -327, -321, 
	-320, 4, -317, 7, 4, 4, 21, 1, 12, 8, -313, -309, 
	5, 12, 1, 1, 5, 8, -307, -303, 23, 2, 8, 11, 
	8, 1, 3, 2, 1, 1, 2, -302, 1, 0, -301, 0, 
	-297, 0, -296, -295, -290, -285, -282, -281, -280, -279, -277, -274, 
	-265, -260, -257, -254, -251, -250, -249, -237, -234, -229, -228, -221, 
	-209, -206, -203, -202, -201, -199, 0, 0, -198, -191, -190, -170, 
	-169, -168, -164, -162, -161, -159, -158, -138, -128, -97, -96, -92, 
	-90, -89, -88, -87, -86, -85, 0, 0, -84, -82, 9, -81, 
	-63, -61, 0, 0, -60, -57, -56, -55, -54, -53, -52, -51, 
	-50, -46, -44, -43, -42, 3, 3, -39, -38, 4, 1, 4, 
	5, 3, 1, 1, 5, -37, -36, -35, -34, -33, -31, -30, 
	-29, -28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, -27, -26, 0, 0, 0, 0, 0, 
	-25, 0, 0, -24, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, -23, -22, 0, -18, 0, -16, 
	0, -13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	-1, 0, 0, 
};

static const nu_udb_t V00B94 = {
	0x00B94,
	"\xE0\xAE\x92\xE0\xAF\x97"
};

static const nu_udb_t V00B82 = {
	0x00B82,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0A612 = {
	0x0A612,
	"\xEA\x96\x87"
};

static const nu_udb_t V01FDE = {
	0x01FDE,
	"\xE1\xBF\xBE\xCC\x81"
};

static const nu_udb_t V0A614 = {
	0x0A614,
	"\xEA\x94\x9E\xEA\x98\x8B"
};

static const nu_udb_t V0A617 = {
	0x0A617,
	"\xEA\x95\x92\xEA\x98\x8B"
};

static const nu_udb_t V0A616 = {
	0x0A616,
	"\xEA\x95\x87\xEA\x98\x8C"
};

static const nu_udb_t V0A619 = {
	0x0A619,
	"\xEA\x95\x9A\xEA\x98\x8C"
};

static const nu_udb_t V0A618 = {
	0x0A618,
	"\xEA\x95\x98\xEA\x98\x8C"
};

static const nu_udb_t V0A61B = {
	0x0A61B,
	"\xEA\x96\x85\xEA\x98\x8B"
};

static const nu_udb_t V2F969 = {
	0x2F969,
	"\xE7\xB3\xA3"
};

static const nu_udb_t V0A61D = {
	0x0A61D,
	"\xEA\x97\x8B\xEA\x98\x8B"
};

static const nu_udb_t V10C44 = {
	0x10C44,
	"\xF0\x90\xB1\x83"
};

static const nu_udb_t V0A61F = {
	0x0A61F,
	"\xEA\x97\x98\xEA\x98\x8B"
};

static const nu_udb_t V2F9EB = {
	0x2F9EB,
	"\xE9\x8F\xB9"
};

static const nu_udb_t V10C46 = {
	0x10C46,
	"\xF0\x90\xB1\x85"
};

static const nu_udb_t V11102 = {
	0x11102,
	"\xE0\xA4\x83"
};

static const nu_udb_t V10C40 = {
	0x10C40,
	"\xF0\x90\xB0\xBF"
};

static const nu_udb_t V11100 = {
	0x11100,
	"\xE0\xA4\x81"
};

static const nu_udb_t V11101 = {
	0x11101,
	"\xE0\xA4\x82"
};

static const nu_udb_t V01E86 = {
	0x01E86,
	"\x57\xCC\x87"
};

static const nu_udb_t V10C42 = {
	0x10C42,
	"\xF0\x90\xB1\x81"
};

static const nu_udb_t V00E33 = {
	0x00E33,
	"\xE0\xB9\x8D\xE0\xB8\xB2"
};

static const nu_udb_t V02ADC = {
	0x02ADC,
	"\xE2\xAB\x9D\xCC\xB8"
};

static const nu_udb_t V00BCC = {
	0x00BCC,
	"\xE0\xAF\x86\xE0\xAF\x97"
};

static const nu_udb_t V00BCA = {
	0x00BCA,
	"\xE0\xAF\x86\xE0\xAE\xBE"
};

static const nu_udb_t V00BCB = {
	0x00BCB,
	"\xE0\xAF\x87\xE0\xAE\xBE"
};

static const nu_udb_t V01F3C = {
	0x01F3C,
	"\xCE\x99\xCC\x93\xCC\x81"
};

static const nu_udb_t V01F3D = {
	0x01F3D,
	"\xCE\x99\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F3E = {
	0x01F3E,
	"\xCE\x99\xCC\x93\xCD\x82"
};

static const nu_udb_t V01F3F = {
	0x01F3F,
	"\xCE\x99\xCC\x94\xCD\x82"
};

static const nu_udb_t V2F9FC = {
	0x2F9FC,
	"\xE4\xAA\xB2"
};

static const nu_udb_t V01F38 = {
	0x01F38,
	"\xCE\x99\xCC\x93"
};

static const nu_udb_t V01F39 = {
	0x01F39,
	"\xCE\x99\xCC\x94"
};

static const nu_udb_t V01F3A = {
	0x01F3A,
	"\xCE\x99\xCC\x93\xCC\x80"
};

static const nu_udb_t V01F3B = {
	0x01F3B,
	"\xCE\x99\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F34 = {
	0x01F34,
	"\xCE\xB9\xCC\x93\xCC\x81"
};

static const nu_udb_t V01F2D = {
	0x01F2D,
	"\xCE\x97\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F2E = {
	0x01F2E,
	"\xCE\x97\xCC\x93\xCD\x82"
};

static const nu_udb_t V0FAA1 = {
	0x0FAA1,
	"\xE7\x91\xB1"
};

static const nu_udb_t V00821 = {
	0x00821,
	"\xE0\xA0\xA3"
};

static const nu_udb_t V01F29 = {
	0x01F29,
	"\xCE\x97\xCC\x94"
};

static const nu_udb_t V01F2A = {
	0x01F2A,
	"\xCE\x97\xCC\x93\xCC\x80"
};

static const nu_udb_t V01F2B = {
	0x01F2B,
	"\xCE\x97\xCC\x94\xCC\x80"
};

static const nu_udb_t V030D6 = {
	0x030D6,
	"\xE3\x83\x95\xE3\x82\x99"
};

static const nu_udb_t V01F24 = {
	0x01F24,
	"\xCE\xB7\xCC\x93\xCC\x81"
};

static const nu_udb_t V030D4 = {
	0x030D4,
	"\xE3\x83\x92\xE3\x82\x9A"
};

static const nu_udb_t V00828 = {
	0x00828,
	"\xE0\xA0\xAA"
};

static const nu_udb_t V030DA = {
	0x030DA,
	"\xE3\x83\x98\xE3\x82\x9A"
};

static const nu_udb_t V01F25 = {
	0x01F25,
	"\xCE\xB7\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F26 = {
	0x01F26,
	"\xCE\xB7\xCC\x93\xCD\x82"
};

static const nu_udb_t V01F27 = {
	0x01F27,
	"\xCE\xB7\xCC\x94\xCD\x82"
};

static const nu_udb_t V01F20 = {
	0x01F20,
	"\xCE\xB7\xCC\x93"
};

static const nu_udb_t V01F21 = {
	0x01F21,
	"\xCE\xB7\xCC\x94"
};

static const nu_udb_t V01F22 = {
	0x01F22,
	"\xCE\xB7\xCC\x93\xCC\x80"
};

static const nu_udb_t V01F23 = {
	0x01F23,
	"\xCE\xB7\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F1C = {
	0x01F1C,
	"\xCE\x95\xCC\x93\xCC\x81"
};

static const nu_udb_t V0A62B = {
	0x0A62B,
	"\xEA\x97\x91"
};

static const nu_udb_t V02244 = {
	0x02244,
	"\xE2\x89\x83\xCC\xB8"
};

static const nu_udb_t V01F1D = {
	0x01F1D,
	"\xCE\x95\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F18 = {
	0x01F18,
	"\xCE\x95\xCC\x93"
};

static const nu_udb_t V000E6 = {
	0x000E6,
	"\x61\x65"
};

static const nu_udb_t V01F19 = {
	0x01F19,
	"\xCE\x95\xCC\x94"
};

static const nu_udb_t V00D4B = {
	0x00D4B,
	"\xE0\xB5\x87\xE0\xB4\xBE"
};

static const nu_udb_t V00D4A = {
	0x00D4A,
	"\xE0\xB5\x86\xE0\xB4\xBE"
};

static const nu_udb_t V01ED5 = {
	0x01ED5,
	"\x6F\xCC\x82\xCC\x89"
};

static const nu_udb_t V01ED4 = {
	0x01ED4,
	"\x4F\xCC\x82\xCC\x89"
};

static const nu_udb_t V00312 = {
	0x00312,
	""
};

static const nu_udb_t V00315 = {
	0x00315,
	""
};

static const nu_udb_t V0FA83 = {
	0x0FA83,
	"\xE5\xBB\x99"
};

static const nu_udb_t V00317 = {
	0x00317,
	""
};

static const nu_udb_t V00316 = {
	0x00316,
	""
};

static const nu_udb_t V00319 = {
	0x00319,
	""
};

static const nu_udb_t V00318 = {
	0x00318,
	""
};

static const nu_udb_t V01EDC = {
	0x01EDC,
	"\x4F\xCC\x9B\xCC\x80"
};

static const nu_udb_t V02209 = {
	0x02209,
	"\xE2\x88\x88\xCC\xB8"
};

static const nu_udb_t V0031D = {
	0x0031D,
	""
};

static const nu_udb_t V0031C = {
	0x0031C,
	""
};

static const nu_udb_t V0031F = {
	0x0031F,
	""
};

static const nu_udb_t V0031E = {
	0x0031E,
	""
};

static const nu_udb_t V01F1A = {
	0x01F1A,
	"\xCE\x95\xCC\x93\xCC\x80"
};

static const nu_udb_t V01F14 = {
	0x01F14,
	"\xCE\xB5\xCC\x93\xCC\x81"
};

static const nu_udb_t V2F92F = {
	0x2F92F,
	"\xE7\x91\x9C"
};

static const nu_udb_t V01F15 = {
	0x01F15,
	"\xCE\xB5\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F10 = {
	0x01F10,
	"\xCE\xB5\xCC\x93"
};

static const nu_udb_t V01F11 = {
	0x01F11,
	"\xCE\xB5\xCC\x94"
};

static const nu_udb_t V01F12 = {
	0x01F12,
	"\xCE\xB5\xCC\x93\xCC\x80"
};

static const nu_udb_t V01F13 = {
	0x01F13,
	"\xCE\xB5\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F0C = {
	0x01F0C,
	"\xCE\x91\xCC\x93\xCC\x81"
};

static const nu_udb_t V01F0D = {
	0x01F0D,
	"\xCE\x91\xCC\x94\xCC\x81"
};

static const nu_udb_t V0FF31 = {
	0x0FF31,
	"\x51"
};

static const nu_udb_t V01F0E = {
	0x01F0E,
	"\xCE\x91\xCC\x93\xCD\x82"
};

static const nu_udb_t V0030D = {
	0x0030D,
	""
};

static const nu_udb_t V01EF1 = {
	0x01EF1,
	"\x75\xCC\x9B\xCC\xA3"
};

static const nu_udb_t V01EF0 = {
	0x01EF0,
	"\x55\xCC\x9B\xCC\xA3"
};

static const nu_udb_t V01F0F = {
	0x01F0F,
	"\xCE\x91\xCC\x94\xCD\x82"
};

static const nu_udb_t V01F08 = {
	0x01F08,
	"\xCE\x91\xCC\x93"
};

static const nu_udb_t V0081E = {
	0x0081E,
	"\xE0\xA0\xA0"
};

static const nu_udb_t V00333 = {
	0x00333,
	""
};

static const nu_udb_t V0A675 = {
	0x0A675,
	"\xD0\xB8"
};

static const nu_udb_t V0A674 = {
	0x0A674,
	"\xD1\x94"
};

static const nu_udb_t V0A677 = {
	0x0A677,
	"\xD1\x83"
};

static const nu_udb_t V0A676 = {
	0x0A676,
	"\xD1\x97"
};

static const nu_udb_t V0A679 = {
	0x0A679,
	"\xD1\x8B"
};

static const nu_udb_t V02224 = {
	0x02224,
	"\xE2\x88\xA3\xCC\xB8"
};

static const nu_udb_t V0A67B = {
	0x0A67B,
	"\xD1\xA1"
};

static const nu_udb_t V0033B = {
	0x0033B,
	""
};

static const nu_udb_t V0A67D = {
	0x0A67D,
	""
};

static const nu_udb_t V0033D = {
	0x0033D,
	""
};

static const nu_udb_t V0033C = {
	0x0033C,
	""
};

static const nu_udb_t V0033F = {
	0x0033F,
	""
};

static const nu_udb_t V01EE3 = {
	0x01EE3,
	"\x6F\xCC\x9B\xCC\xA3"
};

static const nu_udb_t V0A678 = {
	0x0A678,
	"\xD1\x8A"
};

static const nu_udb_t V00320 = {
	0x00320,
	""
};

static const nu_udb_t V0A67A = {
	0x0A67A,
	"\xD1\x8C"
};

static const nu_udb_t V01EE7 = {
	0x01EE7,
	"\x75\xCC\x89"
};

static const nu_udb_t V01EE6 = {
	0x01EE6,
	"\x55\xCC\x89"
};

static const nu_udb_t V003AD = {
	0x003AD,
	"\xCE\xB5\xCC\x81"
};

static const nu_udb_t V0FF2D = {
	0x0FF2D,
	"\x4D"
};

static const nu_udb_t V0A669 = {
	0x0A669,
	"\xD0\xBE"
};

static const nu_udb_t V0A668 = {
	0x0A668,
	"\xD0\x9E"
};

static const nu_udb_t V0A66B = {
	0x0A66B,
	"\xD0\xBE"
};

static const nu_udb_t V0A66A = {
	0x0A66A,
	"\xD0\x9E"
};

static const nu_udb_t V0A66D = {
	0x0A66D,
	"\xD0\xBE"
};

static const nu_udb_t V0A66C = {
	0x0A66C,
	"\xD0\x9E"
};

static const nu_udb_t V0032C = {
	0x0032C,
	""
};

static const nu_udb_t V0A66E = {
	0x0A66E,
	"\xD0\xBE"
};

static const nu_udb_t V01F09 = {
	0x01F09,
	"\xCE\x91\xCC\x94"
};

static const nu_udb_t V0FF1B = {
	0x0FF1B,
	"\x3B"
};

static const nu_udb_t V00350 = {
	0x00350,
	""
};

static const nu_udb_t V0FF19 = {
	0x0FF19,
	"\x39"
};

static const nu_udb_t V0FF77 = {
	0x0FF77,
	"\xE3\x82\xAD"
};

static const nu_udb_t V00355 = {
	0x00355,
	""
};

static const nu_udb_t V0FF1E = {
	0x0FF1E,
	"\x3E"
};

static const nu_udb_t V00357 = {
	0x00357,
	""
};

static const nu_udb_t V00625 = {
	0x00625,
	"\xD8\xA7\xD9\x95"
};

static const nu_udb_t V0FA07 = {
	0x0FA07,
	"\xE8\xBC\xBB"
};

static const nu_udb_t V01F0A = {
	0x01F0A,
	"\xCE\x91\xCC\x93\xCC\x80"
};

static const nu_udb_t V0FF70 = {
	0x0FF70,
	"\xE3\x83\xBC"
};

static const nu_udb_t V02249 = {
	0x02249,
	"\xE2\x89\x88\xCC\xB8"
};

static const nu_udb_t V01BC8 = {
	0x01BC8,
	"\xE1\xAF\x87"
};

static const nu_udb_t V0A69F = {
	0x0A69F,
	"\xD1\xA5"
};

static const nu_udb_t V0FF05 = {
	0x0FF05,
	"\x25"
};

static const nu_udb_t V0FF04 = {
	0x0FF04,
	"\x24"
};

static const nu_udb_t V00341 = {
	0x00341,
	"\xCC\x81"
};

static const nu_udb_t V00340 = {
	0x00340,
	"\xCC\x80"
};

static const nu_udb_t V00623 = {
	0x00623,
	"\xD8\xA7\xD9\x94"
};

static const nu_udb_t V02271 = {
	0x02271,
	"\xE2\x89\xA5\xCC\xB8"
};

static const nu_udb_t V02270 = {
	0x02270,
	"\xE2\x89\xA4\xCC\xB8"
};

static const nu_udb_t V00344 = {
	0x00344,
	"\xCC\x88\xCC\x81"
};

static const nu_udb_t V2F963 = {
	0x2F963,
	"\xE7\xAF\x89"
};

static const nu_udb_t V00346 = {
	0x00346,
	""
};

static const nu_udb_t V01BDC = {
	0x01BDC,
	"\xE1\xAF\x9B"
};

static const nu_udb_t V00348 = {
	0x00348,
	""
};

static const nu_udb_t V0034B = {
	0x0034B,
	""
};

static const nu_udb_t V0034A = {
	0x0034A,
	""
};

static const nu_udb_t V02278 = {
	0x02278,
	"\xE2\x89\xB6\xCC\xB8"
};

static const nu_udb_t V01F0B = {
	0x01F0B,
	"\xCE\x91\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F04 = {
	0x01F04,
	"\xCE\xB1\xCC\x93\xCC\x81"
};

static const nu_udb_t V0034E = {
	0x0034E,
	""
};

static const nu_udb_t V01F05 = {
	0x01F05,
	"\xCE\xB1\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F06 = {
	0x01F06,
	"\xCE\xB1\xCC\x93\xCD\x82"
};

static const nu_udb_t V2F810 = {
	0x2F810,
	"\xE5\x85\xA4"
};

static const nu_udb_t V01F07 = {
	0x01F07,
	"\xCE\xB1\xCC\x94\xCD\x82"
};

static const nu_udb_t V02260 = {
	0x02260,
	"\x3D\xCC\xB8"
};

static const nu_udb_t V00374 = {
	0x00374,
	"\xCA\xB9"
};

static const nu_udb_t V02262 = {
	0x02262,
	"\xE2\x89\xA1\xCC\xB8"
};

static const nu_udb_t V01F00 = {
	0x01F00,
	"\xCE\xB1\xCC\x93"
};

static const nu_udb_t V01F01 = {
	0x01F01,
	"\xCE\xB1\xCC\x94"
};

static const nu_udb_t V01F02 = {
	0x01F02,
	"\xCE\xB1\xCC\x93\xCC\x80"
};

static const nu_udb_t V2F818 = {
	0x2F818,
	"\xE5\x86\xA4"
};

static const nu_udb_t V0037A = {
	0x0037A,
	"\xCE\xB9"
};

static const nu_udb_t V2F81A = {
	0x2F81A,
	"\xE5\x86\xAC"
};

static const nu_udb_t V0FF66 = {
	0x0FF66,
	"\xE3\x83\xB2"
};

static const nu_udb_t V2F81C = {
	0x2F81C,
	"\xF0\xA9\x87\x9F"
};

static const nu_udb_t V0037E = {
	0x0037E,
	"\x3B"
};

static const nu_udb_t V00DDA = {
	0x00DDA,
	"\xE0\xB7\x99\xE0\xB7\x8A"
};

static const nu_udb_t V03032 = {
	0x03032,
	"\xE3\x80\xB1\xE3\x82\x99"
};

static const nu_udb_t V00DDC = {
	0x00DDC,
	"\xE0\xB7\x99\xE0\xB7\x8F"
};

static const nu_udb_t V0FF47 = {
	0x0FF47,
	"\x67"
};

static const nu_udb_t V00365 = {
	0x00365,
	"\x69"
};

static const nu_udb_t V00364 = {
	0x00364,
	"\x65"
};

static const nu_udb_t V0FFB7 = {
	0x0FFB7,
	"\xE1\x84\x8B"
};

static const nu_udb_t V00366 = {
	0x00366,
	"\x6F"
};

static const nu_udb_t V02CF1 = {
	0x02CF1,
	"\xCC\x93"
};

static const nu_udb_t V00368 = {
	0x00368,
	"\x63"
};

static const nu_udb_t V0036B = {
	0x0036B,
	"\x6D"
};

static const nu_udb_t V0303C = {
	0x0303C,
	"\xE3\x81\xBE\xE3\x81\x99"
};

static const nu_udb_t V0036D = {
	0x0036D,
	"\x74"
};

static const nu_udb_t V01F03 = {
	0x01F03,
	"\xCE\xB1\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F7C = {
	0x01F7C,
	"\xCF\x89\xCC\x80"
};

static const nu_udb_t V2F80F = {
	0x2F80F,
	"\xE5\x85\x94"
};

static const nu_udb_t V2F80E = {
	0x2F80E,
	"\xE5\x85\x8D"
};

static const nu_udb_t V00390 = {
	0x00390,
	"\xCE\xB9\xCC\x88\xCC\x81"
};

static const nu_udb_t V0FF59 = {
	0x0FF59,
	"\x79"
};

static const nu_udb_t V2F833 = {
	0x2F833,
	"\xE5\x8D\xBF"
};

static const nu_udb_t V02280 = {
	0x02280,
	"\xE2\x89\xBA\xCC\xB8"
};

static const nu_udb_t V01F7D = {
	0x01F7D,
	"\xCF\x89\xCC\x81"
};

static const nu_udb_t V01F78 = {
	0x01F78,
	"\xCE\xBF\xCC\x80"
};

static const nu_udb_t V02285 = {
	0x02285,
	"\xE2\x8A\x83\xCC\xB8"
};

static const nu_udb_t V01F79 = {
	0x01F79,
	"\xCE\xBF\xCC\x81"
};

static const nu_udb_t V01F7A = {
	0x01F7A,
	"\xCF\x85\xCC\x80"
};

static const nu_udb_t V01F7B = {
	0x01F7B,
	"\xCF\x85\xCC\x81"
};

static const nu_udb_t V02289 = {
	0x02289,
	"\xE2\x8A\x87\xCC\xB8"
};

static const nu_udb_t V02288 = {
	0x02288,
	"\xE2\x8A\x86\xCC\xB8"
};

static const nu_udb_t V01F74 = {
	0x01F74,
	"\xCE\xB7\xCC\x80"
};

static const nu_udb_t V003CD = {
	0x003CD,
	"\xCF\x85\xCC\x81"
};

static const nu_udb_t V03050 = {
	0x03050,
	"\xE3\x81\x8F\xE3\x82\x99"
};

static const nu_udb_t V01F75 = {
	0x01F75,
	"\xCE\xB7\xCC\x81"
};

static const nu_udb_t V03052 = {
	0x03052,
	"\xE3\x81\x91\xE3\x82\x99"
};

static const nu_udb_t V0FF49 = {
	0x0FF49,
	"\x69"
};

static const nu_udb_t V03054 = {
	0x03054,
	"\xE3\x81\x93\xE3\x82\x99"
};

static const nu_udb_t V2F822 = {
	0x2F822,
	"\xE5\x89\xB2"
};

static const nu_udb_t V03056 = {
	0x03056,
	"\xE3\x81\x95\xE3\x82\x99"
};

static const nu_udb_t V02CEF = {
	0x02CEF,
	""
};

static const nu_udb_t V2F827 = {
	0x2F827,
	"\xE5\x8B\xA4"
};

static const nu_udb_t V0FFB3 = {
	0x0FFB3,
	"\xE1\x84\x88"
};

static const nu_udb_t V0305A = {
	0x0305A,
	"\xE3\x81\x99\xE3\x82\x99"
};

static const nu_udb_t V0FFB1 = {
	0x0FFB1,
	"\xE1\x84\x86"
};

static const nu_udb_t V0305C = {
	0x0305C,
	"\xE3\x81\x9B\xE3\x82\x99"
};

static const nu_udb_t V01F76 = {
	0x01F76,
	"\xCE\xB9\xCC\x80"
};

static const nu_udb_t V0038C = {
	0x0038C,
	"\xCE\x9F\xCC\x81"
};

static const nu_udb_t V005C7 = {
	0x005C7,
	"\xD6\xB8"
};

static const nu_udb_t V0FFB4 = {
	0x0FFB4,
	"\xE1\x84\xA1"
};

static const nu_udb_t V0FFBB = {
	0x0FFBB,
	"\xE1\x84\x8F"
};

static const nu_udb_t V2F851 = {
	0x2F851,
	"\xE5\xA3\xAE"
};

static const nu_udb_t V2F850 = {
	0x2F850,
	"\xE5\x88\x87"
};

static const nu_udb_t V01F77 = {
	0x01F77,
	"\xCE\xB9\xCC\x81"
};

static const nu_udb_t V01F70 = {
	0x01F70,
	"\xCE\xB1\xCC\x80"
};

static const nu_udb_t V0FFBE = {
	0x0FFBE,
	"\xE1\x84\x92"
};

static const nu_udb_t V0FFBD = {
	0x0FFBD,
	"\xE1\x84\x91"
};

static const nu_udb_t V2F857 = {
	0x2F857,
	"\xE5\xA0\xB1"
};

static const nu_udb_t V016B6 = {
	0x016B6,
	"\xE1\x9A\xB2"
};

static const nu_udb_t V01F71 = {
	0x01F71,
	"\xCE\xB1\xCC\x81"
};

static const nu_udb_t V0FFA1 = {
	0x0FFA1,
	"\xE1\x84\x80"
};

static const nu_udb_t V0304C = {
	0x0304C,
	"\xE3\x81\x8B\xE3\x82\x99"
};

static const nu_udb_t V01F72 = {
	0x01F72,
	"\xCE\xB5\xCC\x80"
};

static const nu_udb_t V0304E = {
	0x0304E,
	"\xE3\x81\x8D\xE3\x82\x99"
};

static const nu_udb_t V0FFA5 = {
	0x0FFA5,
	"\xE1\x86\xAC"
};

static const nu_udb_t V03070 = {
	0x03070,
	"\xE3\x81\xAF\xE3\x82\x99"
};

static const nu_udb_t V03073 = {
	0x03073,
	"\xE3\x81\xB2\xE3\x82\x99"
};

static const nu_udb_t V2F841 = {
	0x2F841,
	"\xE5\x93\xB6"
};

static const nu_udb_t V022AE = {
	0x022AE,
	"\xE2\x8A\xA9\xCC\xB8"
};

static const nu_udb_t V03074 = {
	0x03074,
	"\xE3\x81\xB2\xE3\x82\x9A"
};

static const nu_udb_t V03077 = {
	0x03077,
	"\xE3\x81\xB5\xE3\x82\x9A"
};

static const nu_udb_t V03076 = {
	0x03076,
	"\xE3\x81\xB5\xE3\x82\x99"
};

static const nu_udb_t V03079 = {
	0x03079,
	"\xE3\x81\xB8\xE3\x82\x99"
};

static const nu_udb_t V0FFAC = {
	0x0FFAC,
	"\xE1\x86\xB2"
};

static const nu_udb_t V01F73 = {
	0x01F73,
	"\xCE\xB5\xCC\x81"
};

static const nu_udb_t V01F6C = {
	0x01F6C,
	"\xCE\xA9\xCC\x93\xCC\x81"
};

static const nu_udb_t V01F6D = {
	0x01F6D,
	"\xCE\xA9\xCC\x94\xCC\x81"
};

static const nu_udb_t V2F84B = {
	0x2F84B,
	"\xE5\x9C\x96"
};

static const nu_udb_t V0FF97 = {
	0x0FF97,
	"\xE3\x83\xA9"
};

static const nu_udb_t V01F6E = {
	0x01F6E,
	"\xCE\xA9\xCC\x93\xCD\x82"
};

static const nu_udb_t V0FF0C = {
	0x0FF0C,
	"\x2C"
};

static const nu_udb_t V03060 = {
	0x03060,
	"\xE3\x81\x9F\xE3\x82\x99"
};

static const nu_udb_t V01F6F = {
	0x01F6F,
	"\xCE\xA9\xCC\x94\xCD\x82"
};

static const nu_udb_t V03062 = {
	0x03062,
	"\xE3\x81\xA1\xE3\x82\x99"
};

static const nu_udb_t V0FF99 = {
	0x0FF99,
	"\xE3\x83\xAB"
};

static const nu_udb_t V01F68 = {
	0x01F68,
	"\xCE\xA9\xCC\x93"
};

static const nu_udb_t V03067 = {
	0x03067,
	"\xE3\x81\xA6\xE3\x82\x99"
};

static const nu_udb_t V2F875 = {
	0x2F875,
	"\xE5\xB0\xA2"
};

static const nu_udb_t V03069 = {
	0x03069,
	"\xE3\x81\xA8\xE3\x82\x99"
};

static const nu_udb_t V2F877 = {
	0x2F877,
	"\xE5\xB1\xA0"
};

static const nu_udb_t V01F69 = {
	0x01F69,
	"\xCE\xA9\xCC\x94"
};

static const nu_udb_t V0FF82 = {
	0x0FF82,
	"\xE3\x83\x84"
};

static const nu_udb_t V2F878 = {
	0x2F878,
	"\xE5\xB1\xAE"
};

static const nu_udb_t V1D15E = {
	0x1D15E,
	"\xF0\x9D\x85\x97\xF0\x9D\x85\xA5"
};

static const nu_udb_t V2F87A = {
	0x2F87A,
	"\xE5\xB2\x8D"
};

static const nu_udb_t V0FF86 = {
	0x0FF86,
	"\xE3\x83\x8B"
};

static const nu_udb_t V0FF85 = {
	0x0FF85,
	"\xE3\x83\x8A"
};

static const nu_udb_t V0FF84 = {
	0x0FF84,
	"\xE3\x83\x88"
};

static const nu_udb_t V0FF8B = {
	0x0FF8B,
	"\xE3\x83\x92"
};

static const nu_udb_t V01F6A = {
	0x01F6A,
	"\xCE\xA9\xCC\x93\xCC\x80"
};

static const nu_udb_t V0FF89 = {
	0x0FF89,
	"\xE3\x83\x8E"
};

static const nu_udb_t V03094 = {
	0x03094,
	"\xE3\x81\x86\xE3\x82\x99"
};

static const nu_udb_t V01F6B = {
	0x01F6B,
	"\xCE\xA9\xCC\x94\xCC\x80"
};

static const nu_udb_t V0FF8E = {
	0x0FF8E,
	"\xE3\x83\x9B"
};

static const nu_udb_t V01F64 = {
	0x01F64,
	"\xCF\x89\xCC\x93\xCC\x81"
};

static const nu_udb_t V01F65 = {
	0x01F65,
	"\xCF\x89\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F66 = {
	0x01F66,
	"\xCF\x89\xCC\x93\xCD\x82"
};

static const nu_udb_t V01F67 = {
	0x01F67,
	"\xCF\x89\xCC\x94\xCD\x82"
};

static const nu_udb_t V003CB = {
	0x003CB,
	"\xCF\x85\xCC\x88"
};

static const nu_udb_t V003CA = {
	0x003CA,
	"\xCE\xB9\xCC\x88"
};

static const nu_udb_t V01F60 = {
	0x01F60,
	"\xCF\x89\xCC\x93"
};

static const nu_udb_t V0309E = {
	0x0309E,
	"\xE3\x82\x9D\xE3\x82\x99"
};

static const nu_udb_t V003CF = {
	0x003CF,
	"\xCE\x9A\xCE\xB1\xCE\xB9"
};

static const nu_udb_t V003CE = {
	0x003CE,
	"\xCF\x89\xCC\x81"
};

static const nu_udb_t V2F983 = {
	0x2F983,
	"\xE8\x84\x83"
};

static const nu_udb_t V01F61 = {
	0x01F61,
	"\xCF\x89\xCC\x94"
};

static const nu_udb_t V0FFAE = {
	0x0FFAE,
	"\xE1\x86\xB4"
};

static const nu_udb_t V022E1 = {
	0x022E1,
	"\xE2\x89\xBD\xCC\xB8"
};

static const nu_udb_t V2F97F = {
	0x2F97F,
	"\xE8\x81\xB0"
};

static const nu_udb_t V2F895 = {
	0x2F895,
	"\xE5\xBC\xA2"
};

static const nu_udb_t V01F62 = {
	0x01F62,
	"\xCF\x89\xCC\x93\xCC\x80"
};

static const nu_udb_t V01F63 = {
	0x01F63,
	"\xCF\x89\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F5D = {
	0x01F5D,
	"\xCE\xA5\xCC\x94\xCC\x81"
};

static const nu_udb_t V2F899 = {
	0x2F899,
	"\xE5\xBD\xA2"
};

static const nu_udb_t V0F9AE = {
	0x0F9AE,
	"\xE7\x91\xA9"
};

static const nu_udb_t V2F89B = {
	0x2F89B,
	"\xE3\xA3\xA3"
};

static const nu_udb_t V01F5F = {
	0x01F5F,
	"\xCE\xA5\xCC\x94\xCD\x82"
};

static const nu_udb_t V02DFD = {
	0x02DFD,
	"\xD1\xA7"
};

static const nu_udb_t V02DF1 = {
	0x02DF1,
	"\xD1\x87"
};

static const nu_udb_t V0095C = {
	0x0095C,
	"\xE0\xA4\xA1\xE0\xA4\xBC"
};

static const nu_udb_t V022EC = {
	0x022EC,
	"\xE2\x8A\xB4\xCC\xB8"
};

static const nu_udb_t V030B2 = {
	0x030B2,
	"\xE3\x82\xB1\xE3\x82\x99"
};

static const nu_udb_t V02DF2 = {
	0x02DF2,
	"\xD1\x88"
};

static const nu_udb_t V030B4 = {
	0x030B4,
	"\xE3\x82\xB3\xE3\x82\x99"
};

static const nu_udb_t V02DE9 = {
	0x02DE9,
	"\xD0\xBD"
};

static const nu_udb_t V030B6 = {
	0x030B6,
	"\xE3\x82\xB5\xE3\x82\x99"
};

static const nu_udb_t V0FFED = {
	0x0FFED,
	"\xE2\x96\xA0"
};

static const nu_udb_t V030B8 = {
	0x030B8,
	"\xE3\x82\xB7\xE3\x82\x99"
};

static const nu_udb_t V02DEA = {
	0x02DEA,
	"\xD0\xBE"
};

static const nu_udb_t V030BA = {
	0x030BA,
	"\xE3\x82\xB9\xE3\x82\x99"
};

static const nu_udb_t V02226 = {
	0x02226,
	"\xE2\x88\xA5\xCC\xB8"
};

static const nu_udb_t V10A0F = {
	0x10A0F,
	"\xE0\xA4\x83"
};

static const nu_udb_t V02DE2 = {
	0x02DE2,
	"\xD0\xB3"
};

static const nu_udb_t V030BE = {
	0x030BE,
	"\xE3\x82\xBD\xE3\x82\x99"
};

static const nu_udb_t V2F965 = {
	0x2F965,
	"\xF0\xA5\xB2\x80"
};

static const nu_udb_t V01FB9 = {
	0x01FB9,
	"\xCE\x91\xCC\x84"
};

static const nu_udb_t V01FBA = {
	0x01FBA,
	"\xCE\x91\xCC\x80"
};

static const nu_udb_t V2F8B1 = {
	0x2F8B1,
	"\xE6\x87\xB6"
};

static const nu_udb_t V2F8B0 = {
	0x2F8B0,
	"\xE6\x87\xB2"
};

static const nu_udb_t V2F8B3 = {
	0x2F8B3,
	"\xE6\x88\x9B"
};

static const nu_udb_t V2F8B2 = {
	0x2F8B2,
	"\xE6\x88\x90"
};

static const nu_udb_t V2F8B5 = {
	0x2F8B5,
	"\xE6\x8A\xB1"
};

static const nu_udb_t V01FBB = {
	0x01FBB,
	"\xCE\x91\xCC\x81"
};

static const nu_udb_t V2F8B7 = {
	0x2F8B7,
	"\xE6\x8D\x90"
};

static const nu_udb_t V2F8B6 = {
	0x2F8B6,
	"\xE6\x8B\x94"
};

static const nu_udb_t V2F8B9 = {
	0x2F8B9,
	"\xE6\x8C\xBD"
};

static const nu_udb_t V2F8B8 = {
	0x2F8B8,
	"\xF0\xA2\xAC\x8C"
};

static const nu_udb_t V030AC = {
	0x030AC,
	"\xE3\x82\xAB\xE3\x82\x99"
};

static const nu_udb_t V2F8BA = {
	0x2F8BA,
	"\xE6\x8B\xBC"
};

static const nu_udb_t V2F8BD = {
	0x2F8BD,
	"\xE6\x8F\xA4"
};

static const nu_udb_t V030D1 = {
	0x030D1,
	"\xE3\x83\x8F\xE3\x82\x9A"
};

static const nu_udb_t V2F8BF = {
	0x2F8BF,
	"\xE6\x90\xA2"
};

static const nu_udb_t V2F8BE = {
	0x2F8BE,
	"\xF0\xA2\xAF\xB1"
};

static const nu_udb_t V2F8A1 = {
	0x2F8A1,
	"\xE3\xA4\xBA"
};

static const nu_udb_t V2F8A0 = {
	0x2F8A0,
	"\xE6\x82\x81"
};

static const nu_udb_t V01FB4 = {
	0x01FB4,
	"\xCE\xB1\xCC\x81\xCD\x85"
};

static const nu_udb_t V01FB6 = {
	0x01FB6,
	"\xCE\xB1\xCD\x82"
};

static const nu_udb_t V2F8A5 = {
	0x2F8A5,
	"\xE6\x83\x87"
};

static const nu_udb_t V2F8A4 = {
	0x2F8A4,
	"\xF0\xA2\x9B\x94"
};

static const nu_udb_t V01FB7 = {
	0x01FB7,
	"\xCE\xB1\xCD\x82\xCD\x85"
};

static const nu_udb_t V2F8A6 = {
	0x2F8A6,
	"\xE6\x85\x88"
};

static const nu_udb_t V2F8A9 = {
	0x2F8A9,
	"\xE6\x85\x8C"
};

static const nu_udb_t V2F8A8 = {
	0x2F8A8,
	"\xE6\x85\x8E"
};

static const nu_udb_t V2F8AB = {
	0x2F8AB,
	"\xE6\x86\x8E"
};

static const nu_udb_t V02204 = {
	0x02204,
	"\xE2\x88\x83\xCC\xB8"
};

static const nu_udb_t V2F8AD = {
	0x2F8AD,
	"\xE6\x86\xA4"
};

static const nu_udb_t V2F8AC = {
	0x2F8AC,
	"\xE6\x86\xB2"
};

static const nu_udb_t V2F8AF = {
	0x2F8AF,
	"\xE6\x87\x9E"
};

static const nu_udb_t V2F8AE = {
	0x2F8AE,
	"\xE6\x86\xAF"
};

static const nu_udb_t V030C2 = {
	0x030C2,
	"\xE3\x83\x81\xE3\x82\x99"
};

static const nu_udb_t V030C5 = {
	0x030C5,
	"\xE3\x83\x84\xE3\x82\x99"
};

static const nu_udb_t V00351 = {
	0x00351,
	""
};

static const nu_udb_t V0220C = {
	0x0220C,
	"\xE2\x88\x8B\xCC\xB8"
};

static const nu_udb_t V01FB0 = {
	0x01FB0,
	"\xCE\xB1\xCC\x86"
};

static const nu_udb_t V030C9 = {
	0x030C9,
	"\xE3\x83\x88\xE3\x82\x99"
};

static const nu_udb_t V01FB1 = {
	0x01FB1,
	"\xCE\xB1\xCC\x84"
};

static const nu_udb_t V01FB2 = {
	0x01FB2,
	"\xCE\xB1\xCC\x80\xCD\x85"
};

static const nu_udb_t V2F8D9 = {
	0x2F8D9,
	"\xE6\x9C\x9B"
};

static const nu_udb_t V01FAC = {
	0x01FAC,
	"\xCE\xA9\xCC\x93\xCC\x81\xCD\x85"
};

static const nu_udb_t V01FAD = {
	0x01FAD,
	"\xCE\xA9\xCC\x94\xCC\x81\xCD\x85"
};

static const nu_udb_t V01FAE = {
	0x01FAE,
	"\xCE\xA9\xCC\x93\xCD\x82\xCD\x85"
};

static const nu_udb_t V01FAF = {
	0x01FAF,
	"\xCE\xA9\xCC\x94\xCD\x82\xCD\x85"
};

static const nu_udb_t V01FA8 = {
	0x01FA8,
	"\xCE\xA9\xCC\x93\xCD\x85"
};

static const nu_udb_t V01FA9 = {
	0x01FA9,
	"\xCE\xA9\xCC\x94\xCD\x85"
};

static const nu_udb_t V01FAA = {
	0x01FAA,
	"\xCE\xA9\xCC\x93\xCC\x80\xCD\x85"
};

static const nu_udb_t V2F8C1 = {
	0x2F8C1,
	"\xE6\x8E\xA9"
};

static const nu_udb_t V0FB2A = {
	0x0FB2A,
	"\xD7\xA9\xD7\x81"
};

static const nu_udb_t V030F4 = {
	0x030F4,
	"\xE3\x82\xA6\xE3\x82\x99"
};

static const nu_udb_t V030F7 = {
	0x030F7,
	"\xE3\x83\xAF\xE3\x82\x99"
};

static const nu_udb_t V2F8C5 = {
	0x2F8C5,
	"\xE6\x92\x9D"
};

static const nu_udb_t V030F9 = {
	0x030F9,
	"\xE3\x83\xB1\xE3\x82\x99"
};

static const nu_udb_t V030F8 = {
	0x030F8,
	"\xE3\x83\xB0\xE3\x82\x99"
};

static const nu_udb_t V2F8C6 = {
	0x2F8C6,
	"\xE6\x91\xB7"
};

static const nu_udb_t V030FA = {
	0x030FA,
	"\xE3\x83\xB2\xE3\x82\x99"
};

static const nu_udb_t V0F9FE = {
	0x0F9FE,
	"\xE8\x8C\xB6"
};

static const nu_udb_t V01FAB = {
	0x01FAB,
	"\xCE\xA9\xCC\x94\xCC\x80\xCD\x85"
};

static const nu_udb_t V01FA4 = {
	0x01FA4,
	"\xCF\x89\xCC\x93\xCC\x81\xCD\x85"
};

static const nu_udb_t V030FE = {
	0x030FE,
	"\xE3\x83\xBD\xE3\x82\x99"
};

static const nu_udb_t V01FA5 = {
	0x01FA5,
	"\xCF\x89\xCC\x94\xCC\x81\xCD\x85"
};

static const nu_udb_t V01FA6 = {
	0x01FA6,
	"\xCF\x89\xCC\x93\xCD\x82\xCD\x85"
};

static const nu_udb_t V01FA7 = {
	0x01FA7,
	"\xCF\x89\xCC\x94\xCD\x82\xCD\x85"
};

static const nu_udb_t V01FA0 = {
	0x01FA0,
	"\xCF\x89\xCC\x93\xCD\x85"
};

static const nu_udb_t V0226E = {
	0x0226E,
	"\x3C\xCC\xB8"
};

static const nu_udb_t V0226F = {
	0x0226F,
	"\x3E\xCC\xB8"
};

static const nu_udb_t V01FA1 = {
	0x01FA1,
	"\xCF\x89\xCC\x94\xCD\x85"
};

static const nu_udb_t V0226D = {
	0x0226D,
	"\xE2\x89\x8D\xCC\xB8"
};

static const nu_udb_t V01FA2 = {
	0x01FA2,
	"\xCF\x89\xCC\x93\xCC\x80\xCD\x85"
};

static const nu_udb_t V0FB41 = {
	0x0FB41,
	"\xD7\xA1\xD6\xBC"
};

static const nu_udb_t V0FB40 = {
	0x0FB40,
	"\xD7\xA0\xD6\xBC"
};

static const nu_udb_t V019DE = {
	0x019DE,
	"\xE1\xA6\x9C\xE1\xA6\xB6"
};

static const nu_udb_t V01FA3 = {
	0x01FA3,
	"\xCF\x89\xCC\x94\xCC\x80\xCD\x85"
};

static const nu_udb_t V01F9C = {
	0x01F9C,
	"\xCE\x97\xCC\x93\xCC\x81\xCD\x85"
};

static const nu_udb_t V02274 = {
	0x02274,
	"\xE2\x89\xB2\xCC\xB8"
};

static const nu_udb_t V02275 = {
	0x02275,
	"\xE2\x89\xB3\xCC\xB8"
};

static const nu_udb_t V0FB46 = {
	0x0FB46,
	"\xD7\xA6\xD6\xBC"
};

static const nu_udb_t V02DEF = {
	0x02DEF,
	"\xD1\x85"
};

static const nu_udb_t V01F9D = {
	0x01F9D,
	"\xCE\x97\xCC\x94\xCC\x81\xCD\x85"
};

static const nu_udb_t V02279 = {
	0x02279,
	"\xE2\x89\xB7\xCC\xB8"
};

static const nu_udb_t V01F9F = {
	0x01F9F,
	"\xCE\x97\xCC\x94\xCD\x82\xCD\x85"
};

static const nu_udb_t V01F9B = {
	0x01F9B,
	"\xCE\x97\xCC\x94\xCC\x80\xCD\x85"
};

static const nu_udb_t V02DE4 = {
	0x02DE4,
	"\xD0\xB6"
};

static const nu_udb_t V01F96 = {
	0x01F96,
	"\xCE\xB7\xCC\x93\xCD\x82\xCD\x85"
};

static const nu_udb_t V01F97 = {
	0x01F97,
	"\xCE\xB7\xCC\x94\xCD\x82\xCD\x85"
};

static const nu_udb_t V01F90 = {
	0x01F90,
	"\xCE\xB7\xCC\x93\xCD\x85"
};

static const nu_udb_t V000F3 = {
	0x000F3,
	"\x6F\xCC\x81"
};

static const nu_udb_t V00367 = {
	0x00367,
	"\x75"
};

static const nu_udb_t V0307A = {
	0x0307A,
	"\xE3\x81\xB8\xE3\x82\x9A"
};

static const nu_udb_t V02247 = {
	0x02247,
	"\xE2\x89\x85\xCC\xB8"
};

static const nu_udb_t V0A610 = {
	0x0A610,
	"\xEA\x95\x98"
};

static const nu_udb_t V0F920 = {
	0x0F920,
	"\xE9\xB8\x9E"
};

static const nu_udb_t V2F96C = {
	0x2F96C,
	"\xE7\xB5\xA3"
};

static const nu_udb_t V0F91F = {
	0x0F91F,
	"\xE8\x98\xAD"
};

static const nu_udb_t V0F918 = {
	0x0F918,
	"\xE8\x90\xBD"
};

static const nu_udb_t V0A615 = {
	0x0A615,
	"\xEA\x94\xB3\xEA\x98\x8B"
};

static const nu_udb_t V0A61A = {
	0x0A61A,
	"\xEA\x95\xA0\xEA\x98\x8B"
};

static const nu_udb_t V0F919 = {
	0x0F919,
	"\xE9\x85\xAA"
};

static const nu_udb_t V0F91A = {
	0x0F91A,
	"\xE9\xA7\xB1"
};

static const nu_udb_t V0F91B = {
	0x0F91B,
	"\xE4\xBA\x82"
};

static const nu_udb_t V0FF2A = {
	0x0FF2A,
	"\x4A"
};

static const nu_udb_t V0F9AD = {
	0x0F9AD,
	"\xE7\x8E\xB2"
};

static const nu_udb_t V0F914 = {
	0x0F914,
	"\xE6\xA8\x82"
};

static const nu_udb_t V0F909 = {
	0x0F909,
	"\xE5\xA5\x91"
};

static const nu_udb_t V0F90A = {
	0x0F90A,
	"\xE9\x87\x91"
};

static const nu_udb_t V000E8 = {
	0x000E8,
	"\x65\xCC\x80"
};

static const nu_udb_t V0F901 = {
	0x0F901,
	"\xE6\x9B\xB4"
};

static const nu_udb_t V0F970 = {
	0x0F970,
	"\xE6\xAE\xBA"
};

static const nu_udb_t V009DD = {
	0x009DD,
	"\xE0\xA6\xA2\xE0\xA4\xBC"
};

static const nu_udb_t V009DC = {
	0x009DC,
	"\xE0\xA6\xA1\xE0\xA4\xBC"
};

static const nu_udb_t V0F96E = {
	0x0F96E,
	"\xE8\x91\x89"
};

static const nu_udb_t V0F96B = {
	0x0F96B,
	"\xE5\x8F\x83"
};

static const nu_udb_t V0F965 = {
	0x0F965,
	"\xE4\xBE\xBF"
};

static const nu_udb_t V0F966 = {
	0x0F966,
	"\xE5\xBE\xA9"
};

static const nu_udb_t V000A0 = {
	0x000A0,
	"\x20"
};

static const nu_udb_t V0F960 = {
	0x0F960,
	"\xE6\x80\x92"
};

static const nu_udb_t V0F961 = {
	0x0F961,
	"\xE7\x8E\x87"
};

static const nu_udb_t V0F963 = {
	0x0F963,
	"\xE5\x8C\x97"
};

static const nu_udb_t V0F95C = {
	0x0F95C,
	"\xE6\xA8\x82"
};

static const nu_udb_t V0F95E = {
	0x0F95E,
	"\xE4\xB8\xB9"
};

static const nu_udb_t V0F958 = {
	0x0F958,
	"\xE8\x8F\xB1"
};

static const nu_udb_t V2F990 = {
	0x2F990,
	"\xE8\x8A\x8B"
};

static const nu_udb_t V0F930 = {
	0x0F930,
	"\xE6\x93\x84"
};

static const nu_udb_t V009CE = {
	0x009CE,
	"\xE0\xA6\xA4\xE0\xA7\x8D"
};

static const nu_udb_t V0F95A = {
	0x0F95A,
	"\xE8\xAE\x80"
};

static const nu_udb_t V0F95B = {
	0x0F95B,
	"\xE6\x8B\x8F"
};

static const nu_udb_t V0FF10 = {
	0x0FF10,
	"\x30"
};

static const nu_udb_t V2F82D = {
	0x2F82D,
	"\xE5\x8D\x91"
};

static const nu_udb_t V2F82C = {
	0x2F82C,
	"\xE5\x8D\x89"
};

static const nu_udb_t V000D1 = {
	0x000D1,
	"\x4E\xCC\x83"
};

static const nu_udb_t V000D0 = {
	0x000D0,
	"\x44"
};

static const nu_udb_t V022AD = {
	0x022AD,
	"\xE2\x8A\xA8\xCC\xB8"
};

static const nu_udb_t V000D2 = {
	0x000D2,
	"\x4F\xCC\x80"
};

static const nu_udb_t V2F817 = {
	0x2F817,
	"\xE5\x86\x97"
};

static const nu_udb_t V000D4 = {
	0x000D4,
	"\x4F\xCC\x82"
};

static const nu_udb_t V2F815 = {
	0x2F815,
	"\xE5\x86\x8D"
};

static const nu_udb_t V0F954 = {
	0x0F954,
	"\xE5\x87\x9C"
};

static const nu_udb_t V000D9 = {
	0x000D9,
	"\x55\xCC\x80"
};

static const nu_udb_t V000D8 = {
	0x000D8,
	"\x4F\xCC\xB8"
};

static const nu_udb_t V000DB = {
	0x000DB,
	"\x55\xCC\x82"
};

static const nu_udb_t V000DA = {
	0x000DA,
	"\x55\xCC\x81"
};

static const nu_udb_t V000DD = {
	0x000DD,
	"\x59\xCC\x81"
};

static const nu_udb_t V01F92 = {
	0x01F92,
	"\xCE\xB7\xCC\x93\xCC\x80\xCD\x85"
};

static const nu_udb_t V000DF = {
	0x000DF,
	"\x73\x73"
};

static const nu_udb_t V0F951 = {
	0x0F951,
	"\xE9\x99\x8B"
};

static const nu_udb_t V000C1 = {
	0x000C1,
	"\x41\xCC\x81"
};

static const nu_udb_t V000C0 = {
	0x000C0,
	"\x41\xCC\x80"
};

static const nu_udb_t V000C3 = {
	0x000C3,
	"\x41\xCC\x83"
};

static const nu_udb_t V000C2 = {
	0x000C2,
	"\x41\xCC\x82"
};

static const nu_udb_t V000C5 = {
	0x000C5,
	"\x41\xCC\x8A"
};

static const nu_udb_t V000C4 = {
	0x000C4,
	"\x41\xCC\x88"
};

static const nu_udb_t V000C7 = {
	0x000C7,
	"\x43\xCC\xA7"
};

static const nu_udb_t V017D0 = {
	0x017D0,
	""
};

static const nu_udb_t V017D1 = {
	0x017D1,
	""
};

static const nu_udb_t V000C8 = {
	0x000C8,
	"\x45\xCC\x80"
};

static const nu_udb_t V000CB = {
	0x000CB,
	"\x45\xCC\x88"
};

static const nu_udb_t V01F82 = {
	0x01F82,
	"\xCE\xB1\xCC\x93\xCC\x80\xCD\x85"
};

static const nu_udb_t V000CD = {
	0x000CD,
	"\x49\xCC\x81"
};

static const nu_udb_t V000CC = {
	0x000CC,
	"\x49\xCC\x80"
};

static const nu_udb_t V000CF = {
	0x000CF,
	"\x49\xCC\x88"
};

static const nu_udb_t V000CE = {
	0x000CE,
	"\x49\xCC\x82"
};

static const nu_udb_t V00EB3 = {
	0x00EB3,
	"\xE0\xBB\x8D\xE0\xBA\xB2"
};

static const nu_udb_t V0F952 = {
	0x0F952,
	"\xE5\x8B\x92"
};

static const nu_udb_t V0F94E = {
	0x0F94E,
	"\xE6\xBC\x8F"
};

static const nu_udb_t V0A8F5 = {
	0x0A8F5,
	"\xEA\xA3\xB2"
};

static const nu_udb_t V017DD = {
	0x017DD,
	""
};

static const nu_udb_t V0F948 = {
	0x0F948,
	"\xE8\xB3\x82"
};

static const nu_udb_t V0F947 = {
	0x0F947,
	"\xE7\xA3\x8A"
};

static const nu_udb_t V000F6 = {
	0x000F6,
	"\x6F\xCC\x88"
};

static const nu_udb_t V00A5B = {
	0x00A5B,
	"\xE0\xA8\x9C\xE0\xA4\xBC"
};

static const nu_udb_t V000F8 = {
	0x000F8,
	"\x6F\xCC\xB8"
};

static const nu_udb_t V000FB = {
	0x000FB,
	"\x75\xCC\x82"
};

static const nu_udb_t V000FA = {
	0x000FA,
	"\x75\xCC\x81"
};

static const nu_udb_t V000FD = {
	0x000FD,
	"\x79\xCC\x81"
};

static const nu_udb_t V000FC = {
	0x000FC,
	"\x75\xCC\x88"
};

static const nu_udb_t V000FF = {
	0x000FF,
	"\x79\xCC\x88"
};

static const nu_udb_t V2F87C = {
	0x2F87C,
	"\xE5\xB5\x83"
};

static const nu_udb_t V000E1 = {
	0x000E1,
	"\x61\xCC\x81"
};

static const nu_udb_t V0F940 = {
	0x0F940,
	"\xE9\xB9\xBF"
};

static const nu_udb_t V000E3 = {
	0x000E3,
	"\x61\xCC\x83"
};

static const nu_udb_t V022E2 = {
	0x022E2,
	"\xE2\x8A\x91\xCC\xB8"
};

static const nu_udb_t V2F826 = {
	0x2F826,
	"\xE5\x8B\x89"
};

static const nu_udb_t V0F941 = {
	0x0F941,
	"\xE8\xAB\x96"
};

static const nu_udb_t V000E7 = {
	0x000E7,
	"\x63\xCC\xA7"
};

static const nu_udb_t V0F942 = {
	0x0F942,
	"\xE5\xA3\x9F"
};

static const nu_udb_t V000E9 = {
	0x000E9,
	"\x65\xCC\x81"
};

static const nu_udb_t V0F943 = {
	0x0F943,
	"\xE5\xBC\x84"
};

static const nu_udb_t V02126 = {
	0x02126,
	"\xCE\xA9"
};

static const nu_udb_t V022EA = {
	0x022EA,
	"\xE2\x8A\xB2\xCC\xB8"
};

static const nu_udb_t V000ED = {
	0x000ED,
	"\x69\xCC\x81"
};

static const nu_udb_t V000EC = {
	0x000EC,
	"\x69\xCC\x80"
};

static const nu_udb_t V000EF = {
	0x000EF,
	"\x69\xCC\x88"
};

static const nu_udb_t V000EE = {
	0x000EE,
	"\x69\xCC\x82"
};

static const nu_udb_t V016B4 = {
	0x016B4,
	"\xE1\x9A\xB2"
};

static const nu_udb_t V01BDA = {
	0x01BDA,
	"\xE1\xAF\x98"
};

static const nu_udb_t V0F9BD = {
	0x0F9BD,
	"\xE5\xB0\xBF"
};

static const nu_udb_t V0F9BE = {
	0x0F9BE,
	"\xE6\x96\x99"
};

static const nu_udb_t V0F9BF = {
	0x0F9BF,
	"\xE6\xA8\x82"
};

static const nu_udb_t V016BB = {
	0x016BB,
	"\xE1\x9A\xBA"
};

static const nu_udb_t V0F9B4 = {
	0x0F9B4,
	"\xE9\xA0\x98"
};

static const nu_udb_t V016BD = {
	0x016BD,
	"\xE1\x9A\xBA"
};

static const nu_udb_t V2F85B = {
	0x2F85B,
	"\xE5\xA3\xB7"
};

static const nu_udb_t V0F974 = {
	0x0F974,
	"\xE8\x8B\xA5"
};

static const nu_udb_t V0F9B6 = {
	0x0F9B6,
	"\xE7\xA6\xAE"
};

static const nu_udb_t V0F9AC = {
	0x0F9AC,
	"\xE6\x80\x9C"
};

static const nu_udb_t V0F9A9 = {
	0x0F9A9,
	"\xE5\x9B\xB9"
};

static const nu_udb_t V0F9AA = {
	0x0F9AA,
	"\xE5\xAF\xA7"
};

static const nu_udb_t V0F9AB = {
	0x0F9AB,
	"\xE5\xB6\xBA"
};

static const nu_udb_t V016A5 = {
	0x016A5,
	"\xE1\x9A\xA2"
};

static const nu_udb_t V2F843 = {
	0x2F843,
	"\xE5\x95\x93"
};

static const nu_udb_t V016A7 = {
	0x016A7,
	"\xE1\x9A\xA6"
};

static const nu_udb_t V2F800 = {
	0x2F800,
	"\xE4\xB8\xBD"
};

static const nu_udb_t V2F801 = {
	0x2F801,
	"\xE4\xB8\xB8"
};

static const nu_udb_t V2F806 = {
	0x2F806,
	"\xE4\xBE\xBB"
};

static const nu_udb_t V2F807 = {
	0x2F807,
	"\xE5\x80\x82"
};

static const nu_udb_t V01BCD = {
	0x01BCD,
	"\xE1\xAF\x8B"
};

static const nu_udb_t V0F9A4 = {
	0x0F9A4,
	"\xE6\x8D\xBB"
};

static const nu_udb_t V0F9A5 = {
	0x0F9A5,
	"\xE6\xAE\xAE"
};

static const nu_udb_t V0F9A0 = {
	0x0F9A0,
	"\xE8\xA3\x82"
};

static const nu_udb_t V2F808 = {
	0x2F808,
	"\xE5\x81\xBA"
};

static const nu_udb_t V016D1 = {
	0x016D1,
	"\xE1\x9B\x8F"
};

static const nu_udb_t V016D0 = {
	0x016D0,
	"\xE1\x9B\x8F"
};

static const nu_udb_t V016D3 = {
	0x016D3,
	"\xE1\x9B\x92"
};

static const nu_udb_t V0F9A1 = {
	0x0F9A1,
	"\xE8\xAA\xAA"
};

static const nu_udb_t V016D5 = {
	0x016D5,
	"\xE1\x9B\x88"
};

static const nu_udb_t V016D4 = {
	0x016D4,
	"\xE1\x9B\x92"
};

static const nu_udb_t V0F99C = {
	0x0F99C,
	"\xE5\x88\x97"
};

static const nu_udb_t V0F99D = {
	0x0F99D,
	"\xE5\x8A\xA3"
};

static const nu_udb_t V016D9 = {
	0x016D9,
	"\xE1\x9B\x97"
};

static const nu_udb_t V016D8 = {
	0x016D8,
	"\xE1\x9B\x97"
};

static const nu_udb_t V016DB = {
	0x016DB,
	"\xE1\x9B\x9A"
};

static const nu_udb_t V2F814 = {
	0x2F814,
	"\xE5\x85\xA7"
};

static const nu_udb_t V016DD = {
	0x016DD,
	"\xE1\x9B\x9C"
};

static const nu_udb_t V2F8BB = {
	0x2F8BB,
	"\xE6\x8D\xA8"
};

static const nu_udb_t V0F998 = {
	0x0F998,
	"\xE8\xBC\xA6"
};

static const nu_udb_t V0F999 = {
	0x0F999,
	"\xE8\x93\xAE"
};

static const nu_udb_t V0F99A = {
	0x0F99A,
	"\xE9\x80\xA3"
};

static const nu_udb_t V016C0 = {
	0x016C0,
	"\xE1\x9A\xBE"
};

static const nu_udb_t V2F81F = {
	0x2F81F,
	"\xE3\x93\x9F"
};

static const nu_udb_t V016C2 = {
	0x016C2,
	"\xE1\x9B\x81"
};

static const nu_udb_t V00931 = {
	0x00931,
	"\xE0\xA4\xB0\xE0\xA4\xBC"
};

static const nu_udb_t V0F99B = {
	0x0F99B,
	"\xE9\x8D\x8A"
};

static const nu_udb_t V0F994 = {
	0x0F994,
	"\xE7\x92\x89"
};

static const nu_udb_t V016C6 = {
	0x016C6,
	"\xE1\x9B\x85"
};

static const nu_udb_t V0F995 = {
	0x0F995,
	"\xE7\xA7\x8A"
};

static const nu_udb_t V0F996 = {
	0x0F996,
	"\xE7\xB7\xB4"
};

static const nu_udb_t V0F997 = {
	0x0F997,
	"\xE8\x81\xAF"
};

static const nu_udb_t V0F990 = {
	0x0F990,
	"\xE6\x88\x80"
};

static const nu_udb_t V016CD = {
	0x016CD,
	"\xE1\x9B\x8A"
};

static const nu_udb_t V0F991 = {
	0x0F991,
	"\xE6\x92\x9A"
};

static const nu_udb_t V0F992 = {
	0x0F992,
	"\xE6\xBC\xA3"
};

static const nu_udb_t V016CE = {
	0x016CE,
	"\xE1\x9B\x8A"
};

static const nu_udb_t V0F993 = {
	0x0F993,
	"\xE7\x85\x89"
};

static const nu_udb_t V016F0 = {
	0x016F0,
	"\xE1\x9A\xA6\xE1\x9A\xA6"
};

static const nu_udb_t V0F98C = {
	0x0F98C,
	"\xE6\xAD\xB7"
};

static const nu_udb_t V0F98D = {
	0x0F98D,
	"\xE8\xBD\xA2"
};

static const nu_udb_t V0F98E = {
	0x0F98E,
	"\xE5\xB9\xB4"
};

static const nu_udb_t V0F98F = {
	0x0F98F,
	"\xE6\x86\x90"
};

static const nu_udb_t V01F4D = {
	0x01F4D,
	"\xCE\x9F\xCC\x94\xCC\x81"
};

static const nu_udb_t V0F984 = {
	0x0F984,
	"\xE6\xBF\xBE"
};

static const nu_udb_t V0F985 = {
	0x0F985,
	"\xE7\xA4\xAA"
};

static const nu_udb_t V2F90C = {
	0x2F90C,
	"\xE6\xBB\x87"
};

static const nu_udb_t V0F982 = {
	0x0F982,
	"\xE5\xBB\xAC"
};

static const nu_udb_t V0F983 = {
	0x0F983,
	"\xE6\x97\x85"
};

static const nu_udb_t V0F9FC = {
	0x0F9FC,
	"\xE8\xAD\x98"
};

static const nu_udb_t V0F9FD = {
	0x0F9FD,
	"\xE4\xBB\x80"
};

static const nu_udb_t V0F9FA = {
	0x0F9FA,
	"\xE7\x8B\x80"
};

static const nu_udb_t V0F9FB = {
	0x0F9FB,
	"\xE7\x82\x99"
};

static const nu_udb_t V0A611 = {
	0x0A611,
	"\xEA\x95\xAA"
};

static const nu_udb_t V01FF3 = {
	0x01FF3,
	"\xCF\x89\xCD\x85"
};

static const nu_udb_t V2F89E = {
	0x2F89E,
	"\xE5\xBF\x97"
};

static const nu_udb_t V0F9F4 = {
	0x0F9F4,
	"\xE6\x9E\x97"
};

static const nu_udb_t V0F9F1 = {
	0x0F9F1,
	"\xE9\x9A\xA3"
};

static const nu_udb_t V2F842 = {
	0x2F842,
	"\xE5\x94\x90"
};

static const nu_udb_t V016E7 = {
	0x016E7,
	"\xE1\x9B\xA6"
};

static const nu_udb_t V0F9F2 = {
	0x0F9F2,
	"\xE9\xB1\x97"
};

static const nu_udb_t V0F9ED = {
	0x0F9ED,
	"\xE5\x90\x9D"
};

static const nu_udb_t V0F9EE = {
	0x0F9EE,
	"\xE7\x87\x90"
};

static const nu_udb_t V0F9EF = {
	0x0F9EF,
	"\xE7\x92\x98"
};

static const nu_udb_t V016EA = {
	0x016EA,
	"\xE1\x9B\x8A"
};

static const nu_udb_t V0F9E8 = {
	0x0F9E8,
	"\xE8\xA3\xA1"
};

static const nu_udb_t V0F9E9 = {
	0x0F9E9,
	"\xE9\x87\x8C"
};

static const nu_udb_t V0F9EA = {
	0x0F9EA,
	"\xE9\x9B\xA2"
};

static const nu_udb_t V016EE = {
	0x016EE,
	"\xE1\x9B\x85\xE1\x9B\x9A"
};

static const nu_udb_t V0F9EB = {
	0x0F9EB,
	"\xE5\x8C\xBF"
};

static const nu_udb_t V0F9E4 = {
	0x0F9E4,
	"\xE7\x90\x86"
};

static const nu_udb_t V0F9E5 = {
	0x0F9E5,
	"\xE7\x97\xA2"
};

static const nu_udb_t V0F9E6 = {
	0x0F9E6,
	"\xE7\xBD\xB9"
};

static const nu_udb_t V0F9E7 = {
	0x0F9E7,
	"\xE8\xA3\x8F"
};

static const nu_udb_t V0F9E0 = {
	0x0F9E0,
	"\xE6\x98\x93"
};

static const nu_udb_t V0F9E1 = {
	0x0F9E1,
	"\xE6\x9D\x8E"
};

static const nu_udb_t V0F9E2 = {
	0x0F9E2,
	"\xE6\xA2\xA8"
};

static const nu_udb_t V0F9E3 = {
	0x0F9E3,
	"\xE6\xB3\xA5"
};

static const nu_udb_t V0F9DC = {
	0x0F9DC,
	"\xE9\x9A\x86"
};

static const nu_udb_t V0F9DD = {
	0x0F9DD,
	"\xE5\x88\xA9"
};

static const nu_udb_t V2F8F5 = {
	0x2F8F5,
	"\xE6\xAE\xBA"
};

static const nu_udb_t V0A8F4 = {
	0x0A8F4,
	"\xEA\xA3\xB2"
};

static const nu_udb_t V0A8F7 = {
	0x0A8F7,
	"\xEA\xA3\xB2"
};

static const nu_udb_t V0A8F6 = {
	0x0A8F6,
	"\xEA\xA3\xB2"
};

static const nu_udb_t V0F9DE = {
	0x0F9DE,
	"\xE5\x90\x8F"
};

static const nu_udb_t V0F9DF = {
	0x0F9DF,
	"\xE5\xB1\xA5"
};

static const nu_udb_t V0F9D9 = {
	0x0F9D9,
	"\xE6\x85\x84"
};

static const nu_udb_t V0F9DA = {
	0x0F9DA,
	"\xE6\xA0\x97"
};

static const nu_udb_t V0F9DB = {
	0x0F9DB,
	"\xE7\x8E\x87"
};

static const nu_udb_t V0F9D4 = {
	0x0F9D4,
	"\xE5\x80\xAB"
};

static const nu_udb_t V0F9D5 = {
	0x0F9D5,
	"\xE5\xB4\x99"
};

static const nu_udb_t V0F9D6 = {
	0x0F9D6,
	"\xE6\xB7\xAA"
};

static const nu_udb_t V10B2E = {
	0x10B2E,
	"\xF0\x90\xAC\xAD"
};

static const nu_udb_t V0F9D7 = {
	0x0F9D7,
	"\xE8\xBC\xAA"
};

static const nu_udb_t V2F95C = {
	0x2F95C,
	"\xF0\xA5\xA5\xBC"
};

static const nu_udb_t V2F8A7 = {
	0x2F8A7,
	"\xE6\x85\x8C"
};

static const nu_udb_t V0F907 = {
	0x0F907,
	"\xE9\xBE\x9C"
};

static const nu_udb_t V0F9D0 = {
	0x0F9D0,
	"\xE9\xA1\x9E"
};

static const nu_udb_t V2F8AA = {
	0x2F8AA,
	"\xE6\x85\xBA"
};

static const nu_udb_t V0F9D1 = {
	0x0F9D1,
	"\xE5\x85\xAD"
};

static const nu_udb_t V01F52 = {
	0x01F52,
	"\xCF\x85\xCC\x93\xCC\x80"
};

static const nu_udb_t V0F9D2 = {
	0x0F9D2,
	"\xE6\x88\xAE"
};

static const nu_udb_t V0F9D3 = {
	0x0F9D3,
	"\xE9\x99\xB8"
};

static const nu_udb_t V0F9CC = {
	0x0F9CC,
	"\xE7\x90\x89"
};

static const nu_udb_t V0F9CD = {
	0x0F9CD,
	"\xE7\x95\x99"
};

static const nu_udb_t V00D02 = {
	0x00D02,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0F9CE = {
	0x0F9CE,
	"\xE7\xA1\xAB"
};

static const nu_udb_t V0F9CF = {
	0x0F9CF,
	"\xE7\xB4\x90"
};

static const nu_udb_t V021AE = {
	0x021AE,
	"\xE2\x86\x94\xCC\xB8"
};

static const nu_udb_t V0F9C8 = {
	0x0F9C8,
	"\xE6\x9D\xBB"
};

static const nu_udb_t V0F9C9 = {
	0x0F9C9,
	"\xE6\x9F\xB3"
};

static const nu_udb_t V0F9CA = {
	0x0F9CA,
	"\xE6\xB5\x81"
};

static const nu_udb_t V1099A = {
	0x1099A,
	"\xF0\x90\xA6\xB5"
};

static const nu_udb_t V0F9CB = {
	0x0F9CB,
	"\xE6\xBA\x9C"
};

static const nu_udb_t V0F9F5 = {
	0x0F9F5,
	"\xE6\xB7\x8B"
};

static const nu_udb_t V10999 = {
	0x10999,
	"\xF0\x90\xA6\xB4"
};

static const nu_udb_t V0F9C4 = {
	0x0F9C4,
	"\xE9\xBE\x8D"
};

static const nu_udb_t V0F9C5 = {
	0x0F9C5,
	"\xE6\x9A\x88"
};

static const nu_udb_t V0F9C6 = {
	0x0F9C6,
	"\xE9\x98\xAE"
};

static const nu_udb_t V2F947 = {
	0x2F947,
	"\xE7\x9C\x9F"
};

static const nu_udb_t V0F9C7 = {
	0x0F9C7,
	"\xE5\x8A\x89"
};

static const nu_udb_t V0F9C0 = {
	0x0F9C0,
	"\xE7\x87\x8E"
};

static const nu_udb_t V0F9C1 = {
	0x0F9C1,
	"\xE7\x99\x82"
};

static const nu_udb_t V01F48 = {
	0x01F48,
	"\xCE\x9F\xCC\x93"
};

static const nu_udb_t V2F97A = {
	0x2F97A,
	"\xE8\x80\x85"
};

static const nu_udb_t V0F9C2 = {
	0x0F9C2,
	"\xE8\x93\xBC"
};

static const nu_udb_t V2F97C = {
	0x2F97C,
	"\xF0\xA6\x94\xA3"
};

static const nu_udb_t V0F9C3 = {
	0x0F9C3,
	"\xE9\x81\xBC"
};

static const nu_udb_t V0A9B3 = {
	0x0A9B3,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V2F971 = {
	0x2F971,
	"\xE4\x8C\xB4"
};

static const nu_udb_t V0A9AC = {
	0x0A9AC,
	"\xEA\xA6\xAB"
};

static const nu_udb_t V01F40 = {
	0x01F40,
	"\xCE\xBF\xCC\x93"
};

static const nu_udb_t V0A980 = {
	0x0A980,
	"\xE0\xA4\x81"
};

static const nu_udb_t V01CF3 = {
	0x01CF3,
	"\xE0\xA4\x83"
};

static const nu_udb_t V0A981 = {
	0x0A981,
	"\xE0\xA4\x82"
};

static const nu_udb_t V2F977 = {
	0x2F977,
	"\xF0\xA6\x8C\xBE"
};

static const nu_udb_t V0A983 = {
	0x0A983,
	"\xE0\xA4\x83"
};

static const nu_udb_t V2F93C = {
	0x2F93C,
	"\xF0\xA4\xBE\xB8"
};

static const nu_udb_t V2F93D = {
	0x2F93D,
	"\xF0\xA5\x81\x84"
};

static const nu_udb_t V2F93E = {
	0x2F93E,
	"\xE3\xBF\xBC"
};

static const nu_udb_t V2F93F = {
	0x2F93F,
	"\xE4\x80\x88"
};

static const nu_udb_t V2F93A = {
	0x2F93A,
	"\xE7\x98\x90"
};

static const nu_udb_t V005F0 = {
	0x005F0,
	"\xD7\x95\xD7\x95"
};

static const nu_udb_t V2F93B = {
	0x2F93B,
	"\xF0\xA4\xBE\xA1"
};

static const nu_udb_t V2F934 = {
	0x2F934,
	"\xE7\x94\xA4"
};

static const nu_udb_t V2F935 = {
	0x2F935,
	"\xF0\xA4\xB0\xB6"
};

static const nu_udb_t V2F936 = {
	0x2F936,
	"\xE7\x94\xBE"
};

static const nu_udb_t V2F937 = {
	0x2F937,
	"\xF0\xA4\xB2\x92"
};

static const nu_udb_t V01F51 = {
	0x01F51,
	"\xCF\x85\xCC\x94"
};

static const nu_udb_t V2F930 = {
	0x2F930,
	"\xE7\x91\xB1"
};

static const nu_udb_t V01F53 = {
	0x01F53,
	"\xCF\x85\xCC\x94\xCC\x80"
};

static const nu_udb_t V2F931 = {
	0x2F931,
	"\xE7\x92\x85"
};

static const nu_udb_t V0A61E = {
	0x0A61E,
	"\xEA\x97\x91\xEA\x98\x8C"
};

static const nu_udb_t V2F933 = {
	0x2F933,
	"\xE3\xBC\x9B"
};

static const nu_udb_t V0A61C = {
	0x0A61C,
	"\xEA\x96\xB4\xEA\x98\x8B"
};

static const nu_udb_t V1D1C0 = {
	0x1D1C0,
	"\xF0\x9D\x86\xBA\xF0\x9D\x85\xA5\xF0\x9D\x85\xAF"
};

static const nu_udb_t V2F92C = {
	0x2F92C,
	"\xE3\xBA\xB8"
};

static const nu_udb_t V01CEB = {
	0x01CEB,
	"\xE1\xB3\xA9"
};

static const nu_udb_t V01CEA = {
	0x01CEA,
	"\xE1\xB3\xA9"
};

static const nu_udb_t V2F92D = {
	0x2F92D,
	"\xE3\xBA\xB8"
};

static const nu_udb_t V2F92E = {
	0x2F92E,
	"\xE7\x91\x87"
};

static const nu_udb_t V2F928 = {
	0x2F928,
	"\xE7\x8D\xBA"
};

static const nu_udb_t V2F929 = {
	0x2F929,
	"\xE7\x8E\x8B"
};

static const nu_udb_t V2F92A = {
	0x2F92A,
	"\xE3\xBA\xAC"
};

static const nu_udb_t V01DDA = {
	0x01DDA,
	"\x67"
};

static const nu_udb_t V2F89F = {
	0x2F89F,
	"\xE5\xBF\xB9"
};

static const nu_udb_t V2F92B = {
	0x2F92B,
	"\xE7\x8E\xA5"
};

static const nu_udb_t V2F924 = {
	0x2F924,
	"\xE7\x8A\x80"
};

static const nu_udb_t V2F925 = {
	0x2F925,
	"\xE7\x8A\x95"
};

static const nu_udb_t V2F926 = {
	0x2F926,
	"\xF0\xA4\x9C\xB5"
};

static const nu_udb_t V2F922 = {
	0x2F922,
	"\xE7\x89\x90"
};

static const nu_udb_t V2F923 = {
	0x2F923,
	"\xF0\xA4\x98\x88"
};

static const nu_udb_t V001BE = {
	0x001BE,
	"\x74\x73"
};

static const nu_udb_t V2F91C = {
	0x2F91C,
	"\xE7\x85\x85"
};

static const nu_udb_t V2F91D = {
	0x2F91D,
	"\xF0\xA4\x89\xA3"
};

static const nu_udb_t V2F91E = {
	0x2F91E,
	"\xE7\x86\x9C"
};

static const nu_udb_t V2F91F = {
	0x2F91F,
	"\xF0\xA4\x8E\xAB"
};

static const nu_udb_t V2F918 = {
	0x2F918,
	"\xE7\x81\xBD"
};

static const nu_udb_t V2F919 = {
	0x2F919,
	"\xE7\x81\xB7"
};

static const nu_udb_t V2F91A = {
	0x2F91A,
	"\xE7\x82\xAD"
};

static const nu_udb_t V000E5 = {
	0x000E5,
	"\x61\xCC\x8A"
};

static const nu_udb_t V2F91B = {
	0x2F91B,
	"\xF0\xA0\x94\xA5"
};

static const nu_udb_t V000EB = {
	0x000EB,
	"\x65\xCC\x88"
};

static const nu_udb_t V2F914 = {
	0x2F914,
	"\xE7\x80\x9E"
};

static const nu_udb_t V00A59 = {
	0x00A59,
	"\xE0\xA8\x96\xE0\xA4\xBC"
};

static const nu_udb_t V2F915 = {
	0x2F915,
	"\xE7\x80\x9B"
};

static const nu_udb_t V2F8C2 = {
	0x2F8C2,
	"\xE3\xA8\xAE"
};

static const nu_udb_t V2F8C3 = {
	0x2F8C3,
	"\xE6\x91\xA9"
};

static const nu_udb_t V2F916 = {
	0x2F916,
	"\xE3\xB6\x96"
};

static const nu_udb_t V000F2 = {
	0x000F2,
	"\x6F\xCC\x80"
};

static const nu_udb_t V2F917 = {
	0x2F917,
	"\xE7\x81\x8A"
};

static const nu_udb_t V00A5E = {
	0x00A5E,
	"\xE0\xA8\xAB\xE0\xA4\xBC"
};

static const nu_udb_t V2F910 = {
	0x2F910,
	"\xF0\xA3\xBD\x9E"
};

static const nu_udb_t V2F941 = {
	0x2F941,
	"\xF0\xA5\x83\xB3"
};

static const nu_udb_t V2F942 = {
	0x2F942,
	"\xF0\xA5\x83\xB2"
};

static const nu_udb_t V000F4 = {
	0x000F4,
	"\x6F\xCC\x82"
};

static const nu_udb_t V2F8BC = {
	0x2F8BC,
	"\xE6\x8E\x83"
};

static const nu_udb_t V2F943 = {
	0x2F943,
	"\xF0\xA5\x84\x99"
};

static const nu_udb_t V2F9BC = {
	0x2F9BC,
	"\xE8\x9C\xA8"
};

static const nu_udb_t V2F9BD = {
	0x2F9BD,
	"\xE8\x9D\xAB"
};

static const nu_udb_t V000F9 = {
	0x000F9,
	"\x75\xCC\x80"
};

static const nu_udb_t V02281 = {
	0x02281,
	"\xE2\x89\xBB\xCC\xB8"
};

static const nu_udb_t V01BD3 = {
	0x01BD3,
	"\xE1\xAF\x92"
};

static const nu_udb_t V2F9BE = {
	0x2F9BE,
	"\xE8\x9E\x86"
};

static const nu_udb_t V01BD5 = {
	0x01BD5,
	"\xE1\xAF\x94"
};

static const nu_udb_t V2F9BF = {
	0x2F9BF,
	"\xE4\x97\x97"
};

static const nu_udb_t V2F9B8 = {
	0x2F9B8,
	"\xE8\x9A\x88"
};

static const nu_udb_t V2F9B4 = {
	0x2F9B4,
	"\xE8\x99\x9C"
};

static const nu_udb_t V01BD9 = {
	0x01BD9,
	"\xE1\xAF\x98"
};

static const nu_udb_t V000C6 = {
	0x000C6,
	"\x41\x45"
};

static const nu_udb_t V2F98C = {
	0x2F98C,
	"\xE8\x88\x84"
};

static const nu_udb_t V0015D = {
	0x0015D,
	"\x73\xCC\x82"
};

static const nu_udb_t V2F9D1 = {
	0x2F9D1,
	"\xE8\xAE\x8A"
};

static const nu_udb_t V2F9D2 = {
	0x2F9D2,
	"\xE8\xB1\x95"
};

static const nu_udb_t V01BDF = {
	0x01BDF,
	"\xE1\xAF\x9E"
};

static const nu_udb_t V2F9D3 = {
	0x2F9D3,
	"\xF0\xA7\xB2\xA8"
};

static const nu_udb_t V01BC1 = {
	0x01BC1,
	"\xE1\xAF\x80"
};

static const nu_udb_t V0FA36 = {
	0x0FA36,
	"\xE5\x96\x9D"
};

static const nu_udb_t V01BC3 = {
	0x01BC3,
	"\xE1\xAF\x82"
};

static const nu_udb_t V2F9CC = {
	0x2F9CC,
	"\xF0\xA7\xA5\xA6"
};

static const nu_udb_t V2F9CD = {
	0x2F9CD,
	"\xE4\x9A\xBE"
};

static const nu_udb_t V01BC4 = {
	0x01BC4,
	"\xE1\xAF\x82"
};

static const nu_udb_t V000D3 = {
	0x000D3,
	"\x4F\xCC\x81"
};

static const nu_udb_t V01BC6 = {
	0x01BC6,
	"\xE1\xAF\x85"
};

static const nu_udb_t V2F9CE = {
	0x2F9CE,
	"\xE4\x9B\x87"
};

static const nu_udb_t V000D6 = {
	0x000D6,
	"\x4F\xCC\x88"
};

static const nu_udb_t V2F9CF = {
	0x2F9CF,
	"\xE8\xAA\xA0"
};

static const nu_udb_t V01BCA = {
	0x01BCA,
	"\xE1\xAF\x89"
};

static const nu_udb_t V000D5 = {
	0x000D5,
	"\x4F\xCC\x83"
};

static const nu_udb_t V01BCC = {
	0x01BCC,
	"\xE1\xAF\x8B"
};

static const nu_udb_t V01BCF = {
	0x01BCF,
	"\xE1\xAF\x8E"
};

static const nu_udb_t V2F9C8 = {
	0x2F9C8,
	"\xE4\x98\xB5"
};

static const nu_udb_t V2F9C9 = {
	0x2F9C9,
	"\xE8\xA3\xBA"
};

static const nu_udb_t V2F9CB = {
	0x2F9CB,
	"\xF0\xA7\xA2\xAE"
};

static const nu_udb_t V2F9C5 = {
	0x2F9C5,
	"\xF0\xA7\x99\xA7"
};

static const nu_udb_t V2F9C6 = {
	0x2F9C6,
	"\xE8\xA3\x97"
};

static const nu_udb_t V2F9C7 = {
	0x2F9C7,
	"\xE8\xA3\x9E"
};

static const nu_udb_t V2F9C0 = {
	0x2F9C0,
	"\xE8\x9F\xA1"
};

static const nu_udb_t V0FFE8 = {
	0x0FFE8,
	"\xE2\x94\x82"
};

static const nu_udb_t V0FFE9 = {
	0x0FFE9,
	"\xE2\x86\x90"
};

static const nu_udb_t V0FFEA = {
	0x0FFEA,
	"\xE2\x86\x91"
};

static const nu_udb_t V0FFEB = {
	0x0FFEB,
	"\xE2\x86\x92"
};

static const nu_udb_t V00172 = {
	0x00172,
	"\x55\xCC\xA8"
};

static const nu_udb_t V00385 = {
	0x00385,
	"\xC2\xA8\xCC\x81"
};

static const nu_udb_t V0FFE4 = {
	0x0FFE4,
	"\xC2\xA6"
};

static const nu_udb_t V01F8D = {
	0x01F8D,
	"\xCE\x91\xCC\x94\xCC\x81\xCD\x85"
};

static const nu_udb_t V00C03 = {
	0x00C03,
	"\xE0\xA4\x83"
};

static const nu_udb_t V01F83 = {
	0x01F83,
	"\xCE\xB1\xCC\x94\xCC\x80\xCD\x85"
};

static const nu_udb_t V02E8E = {
	0x02E8E,
	"\xE5\xB0\xA2"
};

static const nu_udb_t V0FFE0 = {
	0x0FFE0,
	"\xC2\xA2"
};

static const nu_udb_t V0FFE1 = {
	0x0FFE1,
	"\xC2\xA3"
};

static const nu_udb_t V0FFE2 = {
	0x0FFE2,
	"\xC2\xAC"
};

static const nu_udb_t V0FFE3 = {
	0x0FFE3,
	"\xC2\xAF"
};

static const nu_udb_t V0FFDC = {
	0x0FFDC,
	"\xE1\x85\xB5"
};

static const nu_udb_t V0FFDA = {
	0x0FFDA,
	"\xE1\x85\xB3"
};

static const nu_udb_t V01BE6 = {
	0x01BE6,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V0FFDB = {
	0x0FFDB,
	"\xE1\x85\xB4"
};

static const nu_udb_t V01BE8 = {
	0x01BE8,
	"\xE1\xAF\xA7"
};

static const nu_udb_t V01BEB = {
	0x01BEB,
	"\xE1\xAF\xAA"
};

static const nu_udb_t V0016D = {
	0x0016D,
	"\x75\xCC\x86"
};

static const nu_udb_t V01BED = {
	0x01BED,
	"\xE1\xAF\xAC"
};

static const nu_udb_t V02EDD = {
	0x02EDD,
	"\xE9\xA3\x9F"
};

static const nu_udb_t V01BEF = {
	0x01BEF,
	"\xE1\xAF\xAE"
};

static const nu_udb_t V01F93 = {
	0x01F93,
	"\xCE\xB7\xCC\x94\xCC\x80\xCD\x85"
};

static const nu_udb_t V0FFD4 = {
	0x0FFD4,
	"\xE1\x85\xAF"
};

static const nu_udb_t V0FFD5 = {
	0x0FFD5,
	"\xE1\x85\xB0"
};

static const nu_udb_t V0FFD6 = {
	0x0FFD6,
	"\xE1\x85\xB1"
};

static const nu_udb_t V0FFD7 = {
	0x0FFD7,
	"\xE1\x85\xB2"
};

static const nu_udb_t V01F94 = {
	0x01F94,
	"\xCE\xB7\xCC\x93\xCC\x81\xCD\x85"
};

static const nu_udb_t V0FFD2 = {
	0x0FFD2,
	"\xE1\x85\xAD"
};

static const nu_udb_t V0FFD3 = {
	0x0FFD3,
	"\xE1\x85\xAE"
};

static const nu_udb_t V0FFCC = {
	0x0FFCC,
	"\xE1\x85\xA9"
};

static const nu_udb_t V0F987 = {
	0x0F987,
	"\xE9\xA9\xAA"
};

static const nu_udb_t V00F43 = {
	0x00F43,
	"\xE0\xBD\x82\xE0\xBE\xB7"
};

static const nu_udb_t V0FFCD = {
	0x0FFCD,
	"\xE1\x85\xAA"
};

static const nu_udb_t V0FFCE = {
	0x0FFCE,
	"\xE1\x85\xAB"
};

static const nu_udb_t V0011C = {
	0x0011C,
	"\x47\xCC\x82"
};

static const nu_udb_t V0FFCF = {
	0x0FFCF,
	"\xE1\x85\xAC"
};

static const nu_udb_t V0212A = {
	0x0212A,
	"\x4B"
};

static const nu_udb_t V00C01 = {
	0x00C01,
	"\xE0\xA4\x81"
};

static const nu_udb_t V0FFCA = {
	0x0FFCA,
	"\xE1\x85\xA7"
};

static const nu_udb_t V0FFCB = {
	0x0FFCB,
	"\xE1\x85\xA8"
};

static const nu_udb_t V0FFC4 = {
	0x0FFC4,
	"\xE1\x85\xA3"
};

static const nu_udb_t V000F0 = {
	0x000F0,
	"\x64"
};

static const nu_udb_t V0FFC5 = {
	0x0FFC5,
	"\xE1\x85\xA4"
};

static const nu_udb_t V0FFC6 = {
	0x0FFC6,
	"\xE1\x85\xA5"
};

static const nu_udb_t V0FFC7 = {
	0x0FFC7,
	"\xE1\x85\xA6"
};

static const nu_udb_t V0A728 = {
	0x0A728,
	"\x54\x7A"
};

static const nu_udb_t V0FFC2 = {
	0x0FFC2,
	"\xE1\x85\xA1"
};

static const nu_udb_t V0FFC3 = {
	0x0FFC3,
	"\xE1\x85\xA2"
};

static const nu_udb_t V00C48 = {
	0x00C48,
	"\xE0\xB1\x86\xE0\xB1\x96"
};

static const nu_udb_t V00CBC = {
	0x00CBC,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V0010C = {
	0x0010C,
	"\x43\xCC\x8C"
};

static const nu_udb_t V00F57 = {
	0x00F57,
	"\xE0\xBD\x96\xE0\xBE\xB7"
};

static const nu_udb_t V0FF23 = {
	0x0FF23,
	"\x43"
};

static const nu_udb_t V01D79 = {
	0x01D79,
	"\x67"
};

static const nu_udb_t V01D7A = {
	0x01D7A,
	"\x74\x68"
};

static const nu_udb_t V0FF26 = {
	0x0FF26,
	"\x46"
};

static const nu_udb_t V0FF27 = {
	0x0FF27,
	"\x47"
};

static const nu_udb_t V00C82 = {
	0x00C82,
	"\xE0\xA4\x82"
};

static const nu_udb_t V00C83 = {
	0x00C83,
	"\xE0\xA4\x83"
};

static const nu_udb_t V00F30 = {
	0x00F30,
	"\xE0\xBC\xA7"
};

static const nu_udb_t V00F5C = {
	0x00F5C,
	"\xE0\xBD\x9B\xE0\xBE\xB7"
};

static const nu_udb_t V02DE1 = {
	0x02DE1,
	"\xD0\xB2"
};

static const nu_udb_t V00F31 = {
	0x00F31,
	"\xE0\xBC\xA8"
};

static const nu_udb_t V00F32 = {
	0x00F32,
	"\xE0\xBC\xA9"
};

static const nu_udb_t V00F33 = {
	0x00F33,
	"\xE0\xBC\xA0"
};

static const nu_udb_t V0FF2C = {
	0x0FF2C,
	"\x4C"
};

static const nu_udb_t V01CED = {
	0x01CED,
	"\xE0\xA4\x82"
};

static const nu_udb_t V00F2C = {
	0x00F2C,
	"\xE0\xBC\xA3"
};

static const nu_udb_t V01CEF = {
	0x01CEF,
	"\xE1\xB3\xA9"
};

static const nu_udb_t V00F2D = {
	0x00F2D,
	"\xE0\xBC\xA4"
};

static const nu_udb_t V00F2E = {
	0x00F2E,
	"\xE0\xBC\xA5"
};

static const nu_udb_t V00F2F = {
	0x00F2F,
	"\xE0\xBC\xA6"
};

static const nu_udb_t V0FF37 = {
	0x0FF37,
	"\x57"
};

static const nu_udb_t V00F2A = {
	0x00F2A,
	"\xE0\xBC\xA1"
};

static const nu_udb_t V00F2B = {
	0x00F2B,
	"\xE0\xBC\xA2"
};

static const nu_udb_t V00F0C = {
	0x00F0C,
	"\xE0\xBC\x8B"
};

static const nu_udb_t V00FAC = {
	0x00FAC,
	"\xE0\xBE\xAB\xE0\xBE\xB7"
};

static const nu_udb_t V00CC8 = {
	0x00CC8,
	"\xE0\xB3\x86\xE0\xB3\x96"
};

static const nu_udb_t V00CCA = {
	0x00CCA,
	"\xE0\xB3\x86\xE0\xB3\x82"
};

static const nu_udb_t V00CCB = {
	0x00CCB,
	"\xE0\xB3\x8A\xE0\xB3\x95"
};

static const nu_udb_t V00CC7 = {
	0x00CC7,
	"\xE0\xB3\x86\xE0\xB3\x95"
};

static const nu_udb_t V02E93 = {
	0x02E93,
	"\xE5\xB9\xBA"
};

static const nu_udb_t V00CC0 = {
	0x00CC0,
	"\xE0\xB2\xBF\xE0\xB3\x95"
};

static const nu_udb_t V00F00 = {
	0x00F00,
	"\xE0\xBD\xA8\xE0\xBD\xBC\xE0\xA4\x82"
};

static const nu_udb_t V00F7E = {
	0x00F7E,
	"\xE0\xA4\x82"
};

static const nu_udb_t V00F7F = {
	0x00F7F,
	"\xE0\xA4\x83"
};

static const nu_udb_t V00FBA = {
	0x00FBA,
	"\xE0\xBE\xAD"
};

static const nu_udb_t V00F78 = {
	0x00F78,
	"\xE0\xBE\xB3\xE0\xBE\x80"
};

static const nu_udb_t V00F75 = {
	0x00F75,
	"\xE0\xBD\xB1\xE0\xBD\xB4"
};

static const nu_udb_t V00F76 = {
	0x00F76,
	"\xE0\xBE\xB2\xE0\xBE\x80"
};

static const nu_udb_t V00F73 = {
	0x00F73,
	"\xE0\xBD\xB1\xE0\xBD\xB2"
};

static const nu_udb_t V00F69 = {
	0x00F69,
	"\xE0\xBD\x80\xE0\xBE\xB5"
};

static const nu_udb_t V00FBC = {
	0x00FBC,
	"\xE0\xBE\xB2"
};

static const nu_udb_t V0FF08 = {
	0x0FF08,
	"\x28"
};

static const nu_udb_t V00F6A = {
	0x00F6A,
	"\xE0\xBD\xA2"
};

static const nu_udb_t V0013C = {
	0x0013C,
	"\x6C\xCC\xA7"
};

static const nu_udb_t V0202F = {
	0x0202F,
	"\x20"
};

static const nu_udb_t V00F81 = {
	0x00F81,
	"\xE0\xBD\xB1\xE0\xBE\x80"
};

static const nu_udb_t V0013D = {
	0x0013D,
	"\x4C\xCC\x8C"
};

static const nu_udb_t V0013E = {
	0x0013E,
	"\x6C\xCC\x8C"
};

static const nu_udb_t V0013A = {
	0x0013A,
	"\x6C\xCC\x81"
};

static const nu_udb_t V0013B = {
	0x0013B,
	"\x4C\xCC\xA7"
};

static const nu_udb_t V0FF11 = {
	0x0FF11,
	"\x31"
};

static const nu_udb_t V00134 = {
	0x00134,
	"\x4A\xCC\x82"
};

static const nu_udb_t V0A613 = {
	0x0A613,
	"\xEA\x94\x8C\xEA\x98\x8B"
};

static const nu_udb_t V022E0 = {
	0x022E0,
	"\xE2\x89\xBC\xCC\xB8"
};

static const nu_udb_t V00135 = {
	0x00135,
	"\x6A\xCC\x82"
};

static const nu_udb_t V01DFF = {
	0x01DFF,
	""
};

static const nu_udb_t V020D3 = {
	0x020D3,
	"\xE2\x83\x92"
};

static const nu_udb_t V2F961 = {
	0x2F961,
	"\xF0\xA5\xAE\xAB"
};

static const nu_udb_t V0012D = {
	0x0012D,
	"\x69\xCC\x86"
};

static const nu_udb_t V00F93 = {
	0x00F93,
	"\xE0\xBE\x92\xE0\xBE\xB7"
};

static const nu_udb_t V0012E = {
	0x0012E,
	"\x49\xCC\xA8"
};

static const nu_udb_t V00128 = {
	0x00128,
	"\x49\xCC\x83"
};

static const nu_udb_t V00129 = {
	0x00129,
	"\x69\xCC\x83"
};

static const nu_udb_t V0012B = {
	0x0012B,
	"\x69\xCC\x84"
};

static const nu_udb_t V0FF63 = {
	0x0FF63,
	"\xE3\x80\x8D"
};

static const nu_udb_t V0FF60 = {
	0x0FF60,
	"\xE2\xA6\x86"
};

static const nu_udb_t V00124 = {
	0x00124,
	"\x48\xCC\x82"
};

static const nu_udb_t V00125 = {
	0x00125,
	"\x68\xCC\x82"
};

static const nu_udb_t V00126 = {
	0x00126,
	"\x48\xCC\xB5"
};

static const nu_udb_t V0FF64 = {
	0x0FF64,
	"\xE3\x80\x81"
};

static const nu_udb_t V00127 = {
	0x00127,
	"\x68\xCC\xB5"
};

static const nu_udb_t V00120 = {
	0x00120,
	"\x47\xCC\x87"
};

static const nu_udb_t V00121 = {
	0x00121,
	"\x67\xCC\x87"
};

static const nu_udb_t V00122 = {
	0x00122,
	"\x47\xCC\xA7"
};

static const nu_udb_t V0FF42 = {
	0x0FF42,
	"\x62"
};

static const nu_udb_t V00123 = {
	0x00123,
	"\x67\xCC\xA7"
};

static const nu_udb_t V02EA0 = {
	0x02EA0,
	"\xE6\xB0\x91"
};

static const nu_udb_t V02EA3 = {
	0x02EA3,
	"\xE7\x81\xAC"
};

static const nu_udb_t V0011D = {
	0x0011D,
	"\x67\xCC\x82"
};

static const nu_udb_t V02CF0 = {
	0x02CF0,
	"\xCC\x94"
};

static const nu_udb_t V00169 = {
	0x00169,
	"\x75\xCC\x83"
};

static const nu_udb_t V00164 = {
	0x00164,
	"\x54\xCC\x8C"
};

static const nu_udb_t V02E94 = {
	0x02E94,
	"\xE5\xBD\x91"
};

static const nu_udb_t V02E95 = {
	0x02E95,
	"\xE5\xBD\x90"
};

static const nu_udb_t V0014E = {
	0x0014E,
	"\x4F\xCC\x86"
};

static const nu_udb_t V2F945 = {
	0x2F945,
	"\xE7\x9C\x9E"
};

static const nu_udb_t V2F944 = {
	0x2F944,
	"\xF0\xA5\x84\xB3"
};

static const nu_udb_t V0FF7A = {
	0x0FF7A,
	"\xE3\x82\xB3"
};

static const nu_udb_t V0014F = {
	0x0014F,
	"\x6F\xCC\x86"
};

static const nu_udb_t V00148 = {
	0x00148,
	"\x6E\xCC\x8C"
};

static const nu_udb_t V001E0 = {
	0x001E0,
	"\x41\xCC\x87\xCC\x84"
};

static const nu_udb_t V00144 = {
	0x00144,
	"\x6E\xCC\x81"
};

static const nu_udb_t V00145 = {
	0x00145,
	"\x4E\xCC\xA7"
};

static const nu_udb_t V0F908 = {
	0x0F908,
	"\xE9\xBE\x9C"
};

static const nu_udb_t V0FF7D = {
	0x0FF7D,
	"\xE3\x82\xB9"
};

static const nu_udb_t V00146 = {
	0x00146,
	"\x6E\xCC\xA7"
};

static const nu_udb_t V0FF5C = {
	0x0FF5C,
	"\x7C"
};

static const nu_udb_t V00147 = {
	0x00147,
	"\x4E\xCC\x8C"
};

static const nu_udb_t V00141 = {
	0x00141,
	"\x4C\xCC\xB5"
};

static const nu_udb_t V0FF5B = {
	0x0FF5B,
	"\x7B"
};

static const nu_udb_t V02EF2 = {
	0x02EF2,
	"\xE9\xBE\x9C"
};

static const nu_udb_t V02EED = {
	0x02EED,
	"\xE9\xBD\x92"
};

static const nu_udb_t V02EEE = {
	0x02EEE,
	"\xE9\xBD\xBF"
};

static const nu_udb_t V02EEF = {
	0x02EEF,
	"\xE9\xBE\x8D"
};

static const nu_udb_t V02EE8 = {
	0x02EE8,
	"\xE9\xBA\xA6"
};

static const nu_udb_t V00F4D = {
	0x00F4D,
	"\xE0\xBD\x8C\xE0\xBE\xB7"
};

static const nu_udb_t V0A77C = {
	0x0A77C,
	"\x66"
};

static const nu_udb_t V02EE9 = {
	0x02EE9,
	"\xE9\xBB\x84"
};

static const nu_udb_t V02EEA = {
	0x02EEA,
	"\xE9\xBB\xBE"
};

static const nu_udb_t V02EEB = {
	0x02EEB,
	"\xE9\xBD\x8A"
};

static const nu_udb_t V02EE4 = {
	0x02EE4,
	"\xE9\xAC\xBC"
};

static const nu_udb_t V02EE5 = {
	0x02EE5,
	"\xE9\xB1\xBC"
};

static const nu_udb_t V02EE7 = {
	0x02EE7,
	"\xE9\xB9\xB5"
};

static const nu_udb_t V0FF50 = {
	0x0FF50,
	"\x70"
};

static const nu_udb_t V0FF51 = {
	0x0FF51,
	"\x71"
};

static const nu_udb_t V0FF56 = {
	0x0FF56,
	"\x76"
};

static const nu_udb_t V0FF57 = {
	0x0FF57,
	"\x77"
};

static const nu_udb_t V02EE0 = {
	0x02EE0,
	"\xE9\xA5\xA3"
};

static const nu_udb_t V0FF36 = {
	0x0FF36,
	"\x56"
};

static const nu_udb_t V0FF5A = {
	0x0FF5A,
	"\x7A"
};

static const nu_udb_t V003B0 = {
	0x003B0,
	"\xCF\x85\xCC\x88\xCC\x81"
};

static const nu_udb_t V0FF35 = {
	0x0FF35,
	"\x55"
};

static const nu_udb_t V0FF32 = {
	0x0FF32,
	"\x52"
};

static const nu_udb_t V02EE2 = {
	0x02EE2,
	"\xE9\xA9\xAC"
};

static const nu_udb_t V0FF5F = {
	0x0FF5F,
	"\xE2\xA6\x85"
};

static const nu_udb_t V030C7 = {
	0x030C7,
	"\xE3\x83\x86\xE3\x82\x99"
};

static const nu_udb_t V02EE3 = {
	0x02EE3,
	"\xE9\xAA\xA8"
};

static const nu_udb_t V0FFA2 = {
	0x0FFA2,
	"\xE1\x84\x81"
};

static const nu_udb_t V02E91 = {
	0x02E91,
	"\xE5\xB0\xA3"
};

static const nu_udb_t V0FFA0 = {
	0x0FFA0,
	"\xE1\x85\xA0"
};

static const nu_udb_t V0FF3A = {
	0x0FF3A,
	"\x5A"
};

static const nu_udb_t V02E92 = {
	0x02E92,
	"\xE5\xB7\xB3"
};

static const nu_udb_t V02EDC = {
	0x02EDC,
	"\xE9\xA3\x9E"
};

static const nu_udb_t V02EDE = {
	0x02EDE,
	"\xE9\xA3\xA0"
};

static const nu_udb_t V02EDF = {
	0x02EDF,
	"\xE9\xA3\xA0"
};

static const nu_udb_t V0FFAA = {
	0x0FFAA,
	"\xE1\x86\xB0"
};

static const nu_udb_t V02E99 = {
	0x02E99,
	"\xE6\x94\xB5"
};

static const nu_udb_t V02ED8 = {
	0x02ED8,
	"\xE9\x9D\x92"
};

static const nu_udb_t V0FFA9 = {
	0x0FFA9,
	"\xE1\x84\x85"
};

static const nu_udb_t V02ED9 = {
	0x02ED9,
	"\xE9\x9F\xA6"
};

static const nu_udb_t V000F1 = {
	0x000F1,
	"\x6E\xCC\x83"
};

static const nu_udb_t V0A67C = {
	0x0A67C,
	""
};

static const nu_udb_t V02EDB = {
	0x02EDB,
	"\xE9\xA3\x8E"
};

static const nu_udb_t V0FFB2 = {
	0x0FFB2,
	"\xE1\x84\x87"
};

static const nu_udb_t V000F5 = {
	0x000F5,
	"\x6F\xCC\x83"
};

static const nu_udb_t V02ED4 = {
	0x02ED4,
	"\xE9\x97\xA8"
};

static const nu_udb_t V02E83 = {
	0x02E83,
	"\xE4\xB9\x9A"
};

static const nu_udb_t V02E82 = {
	0x02E82,
	"\xE4\xB9\x9B"
};

static const nu_udb_t V02ED5 = {
	0x02ED5,
	"\xE9\x98\x9C"
};

static const nu_udb_t V02E84 = {
	0x02E84,
	"\xE4\xB9\x99"
};

static const nu_udb_t V02E87 = {
	0x02E87,
	"\xE5\x87\xA0"
};

static const nu_udb_t V02E86 = {
	0x02E86,
	"\xE5\x86\x82"
};

static const nu_udb_t V02E89 = {
	0x02E89,
	"\xE5\x88\x82"
};

static const nu_udb_t V00F9D = {
	0x00F9D,
	"\xE0\xBE\x9C\xE0\xBE\xB7"
};

static const nu_udb_t V0FF12 = {
	0x0FF12,
	"\x32"
};

static const nu_udb_t V02ED1 = {
	0x02ED1,
	"\xE9\x95\xB7"
};

static const nu_udb_t V02ECA = {
	0x02ECA,
	"\xE8\xB6\xB3"
};

static const nu_udb_t V02ECB = {
	0x02ECB,
	"\xE8\xBD\xA6"
};

static const nu_udb_t V02E8F = {
	0x02E8F,
	"\xE5\xB0\xA3"
};

static const nu_udb_t V001AF = {
	0x001AF,
	"\x55\xCC\x9B"
};

static const nu_udb_t V02EB1 = {
	0x02EB1,
	"\xE7\xBD\x93"
};

static const nu_udb_t V02EB0 = {
	0x02EB0,
	"\xE7\xBA\x9F"
};

static const nu_udb_t V02EB3 = {
	0x02EB3,
	"\xE7\xBD\x93"
};

static const nu_udb_t V02EB2 = {
	0x02EB2,
	"\xE7\xBD\x92"
};

static const nu_udb_t V02EB5 = {
	0x02EB5,
	"\xE7\xBD\x92"
};

static const nu_udb_t V02EB4 = {
	0x02EB4,
	"\xE7\xBD\x93"
};

static const nu_udb_t V02EB7 = {
	0x02EB7,
	"\xE7\xBE\x8A"
};

static const nu_udb_t V02EB6 = {
	0x02EB6,
	"\xE7\xBE\x8A"
};

static const nu_udb_t V02EB9 = {
	0x02EB9,
	"\xE8\x80\x82"
};

static const nu_udb_t V0FFE5 = {
	0x0FFE5,
	"\xC2\xA5"
};

static const nu_udb_t V02EBB = {
	0x02EBB,
	"\xE8\x81\xBF"
};

static const nu_udb_t V02EBA = {
	0x02EBA,
	"\xE8\x82\x80"
};

static const nu_udb_t V02EBD = {
	0x02EBD,
	"\xE8\x87\xBC"
};

static const nu_udb_t V02EBC = {
	0x02EBC,
	"\xE8\x82\x89"
};

static const nu_udb_t V0FF8D = {
	0x0FF8D,
	"\xE3\x83\x98"
};

static const nu_udb_t V0F97A = {
	0x0F97A,
	"\xE6\xA2\x81"
};

static const nu_udb_t V02EC6 = {
	0x02EC6,
	"\xE8\xA7\x92"
};

static const nu_udb_t V02EC7 = {
	0x02EC7,
	"\xE8\xA7\x92"
};

static const nu_udb_t V0FF91 = {
	0x0FF91,
	"\xE3\x83\xA0"
};

static const nu_udb_t V02EC0 = {
	0x02EC0,
	"\xE8\x89\xB9"
};

static const nu_udb_t V02EA5 = {
	0x02EA5,
	"\xE7\x88\xAB"
};

static const nu_udb_t V00FB9 = {
	0x00FB9,
	"\xE0\xBE\x90\xE0\xBE\xB5"
};

static const nu_udb_t V02EA7 = {
	0x02EA7,
	"\xE7\x89\x9B"
};

static const nu_udb_t V00FBB = {
	0x00FBB,
	"\xE0\xBE\xB1"
};

static const nu_udb_t V02EA9 = {
	0x02EA9,
	"\xE7\x8E\x8B"
};

static const nu_udb_t V02EA8 = {
	0x02EA8,
	"\xE7\x8A\xAD"
};

static const nu_udb_t V02EAB = {
	0x02EAB,
	"\xE7\x9B\xAE"
};

static const nu_udb_t V02EAA = {
	0x02EAA,
	"\xE7\x96\x8B"
};

static const nu_udb_t V02EAD = {
	0x02EAD,
	"\xE7\xA4\xBB"
};

static const nu_udb_t V02EAC = {
	0x02EAC,
	"\xE7\xA4\xBA"
};

static const nu_udb_t V02EAF = {
	0x02EAF,
	"\xE7\xB3\xB9"
};

static const nu_udb_t V02EAE = {
	0x02EAE,
	"\xE7\xAB\xB9"
};

static const nu_udb_t V00FA2 = {
	0x00FA2,
	"\xE0\xBE\xA1\xE0\xBE\xB7"
};

static const nu_udb_t V02ED0 = {
	0x02ED0,
	"\xE9\x92\x85"
};

static const nu_udb_t V02ED3 = {
	0x02ED3,
	"\xE9\x95\xBF"
};

static const nu_udb_t V00FA7 = {
	0x00FA7,
	"\xE0\xBE\xA6\xE0\xBE\xB7"
};

static const nu_udb_t V000C9 = {
	0x000C9,
	"\x45\xCC\x81"
};

static const nu_udb_t V02EC1 = {
	0x02EC1,
	"\xE8\x99\x8E"
};

static const nu_udb_t V02ED7 = {
	0x02ED7,
	"\xE9\x9B\xA8"
};

static const nu_udb_t V02ED6 = {
	0x02ED6,
	"\xE9\x98\x9D"
};

static const nu_udb_t V00B01 = {
	0x00B01,
	"\xE0\xA4\x81"
};

static const nu_udb_t V11080 = {
	0x11080,
	"\xE0\xA4\x81"
};

static const nu_udb_t V0FA2A = {
	0x0FA2A,
	"\xE9\xA3\xAF"
};

static const nu_udb_t V02EDA = {
	0x02EDA,
	"\xE9\xA1\xB5"
};

static const nu_udb_t V11081 = {
	0x11081,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0FFEC = {
	0x0FFEC,
	"\xE2\x86\x93"
};

static const nu_udb_t V11082 = {
	0x11082,
	"\xE0\xA4\x83"
};

static const nu_udb_t V001FC = {
	0x001FC,
	"\x41\x45\xCC\x81"
};

static const nu_udb_t V001FD = {
	0x001FD,
	"\x61\x65\xCC\x81"
};

static const nu_udb_t V001FE = {
	0x001FE,
	"\x4F\xCC\xB8\xCC\x81"
};

static const nu_udb_t V02EC3 = {
	0x02EC3,
	"\xE8\xA6\x80"
};

static const nu_udb_t V0FA33 = {
	0x0FA33,
	"\xE5\x8B\x89"
};

static const nu_udb_t V02EC5 = {
	0x02EC5,
	"\xE8\xA7\x81"
};

static const nu_udb_t V02EC4 = {
	0x02EC4,
	"\xE8\xA5\xBF"
};

static const nu_udb_t V001FF = {
	0x001FF,
	"\x6F\xCC\xB8\xCC\x81"
};

static const nu_udb_t V001F8 = {
	0x001F8,
	"\x4E\xCC\x80"
};

static const nu_udb_t V02EC9 = {
	0x02EC9,
	"\xE8\xB4\x9D"
};

static const nu_udb_t V02EC8 = {
	0x02EC8,
	"\xE8\xAE\xA0"
};

static const nu_udb_t V0FA3A = {
	0x0FA3A,
	"\xE5\xA2\xA8"
};

static const nu_udb_t V001F9 = {
	0x001F9,
	"\x6E\xCC\x80"
};

static const nu_udb_t V02ECD = {
	0x02ECD,
	"\xE8\xBE\xB6"
};

static const nu_udb_t V0FA39 = {
	0x0FA39,
	"\xE5\xA1\x80"
};

static const nu_udb_t V02ECF = {
	0x02ECF,
	"\xE9\x82\x91"
};

static const nu_udb_t V0FA3F = {
	0x0FA3F,
	"\xE6\x86\x8E"
};

static const nu_udb_t V0FA3C = {
	0x0FA3C,
	"\xE5\xB1\xAE"
};

static const nu_udb_t V02EF0 = {
	0x02EF0,
	"\xE9\xBE\x99"
};

static const nu_udb_t V001FA = {
	0x001FA,
	"\x41\xCC\x8A\xCC\x81"
};

static const nu_udb_t V00C02 = {
	0x00C02,
	"\xE0\xA4\x82"
};

static const nu_udb_t V001FB = {
	0x001FB,
	"\x61\xCC\x8A\xCC\x81"
};

static const nu_udb_t V001F5 = {
	0x001F5,
	"\x67\xCC\x81"
};

static const nu_udb_t V0307C = {
	0x0307C,
	"\xE3\x81\xBB\xE3\x82\x99"
};

static const nu_udb_t V001F0 = {
	0x001F0,
	"\x6A\xCC\x8C"
};

static const nu_udb_t V001EC = {
	0x001EC,
	"\x4F\xCC\xA8\xCC\x84"
};

static const nu_udb_t V001ED = {
	0x001ED,
	"\x6F\xCC\xA8\xCC\x84"
};

static const nu_udb_t V004D7 = {
	0x004D7,
	"\xD0\xB5\xCC\x86"
};

static const nu_udb_t V001EE = {
	0x001EE,
	"\xC6\xB7\xCC\x8C"
};

static const nu_udb_t V001EF = {
	0x001EF,
	"\xCA\x92\xCC\x8C"
};

static const nu_udb_t V001E8 = {
	0x001E8,
	"\x4B\xCC\x8C"
};

static const nu_udb_t V001E9 = {
	0x001E9,
	"\x6B\xCC\x8C"
};

static const nu_udb_t V000EA = {
	0x000EA,
	"\x65\xCC\x82"
};

static const nu_udb_t V02EE1 = {
	0x02EE1,
	"\xE9\xA6\x96"
};

static const nu_udb_t V001EA = {
	0x001EA,
	"\x4F\xCC\xA8"
};

static const nu_udb_t V001EB = {
	0x001EB,
	"\x6F\xCC\xA8"
};

static const nu_udb_t V020F0 = {
	0x020F0,
	""
};

static const nu_udb_t V0FFA8 = {
	0x0FFA8,
	"\xE1\x84\x84"
};

static const nu_udb_t V001E6 = {
	0x001E6,
	"\x47\xCC\x8C"
};

static const nu_udb_t V001E7 = {
	0x001E7,
	"\x67\xCC\x8C"
};

static const nu_udb_t V02EE6 = {
	0x02EE6,
	"\xE9\xB8\x9F"
};

static const nu_udb_t V0A779 = {
	0x0A779,
	"\x44"
};

static const nu_udb_t V001DB = {
	0x001DB,
	"\x55\xCC\x88\xCC\x80"
};

static const nu_udb_t V0FA1A = {
	0x0FA1A,
	"\xE7\xA5\xA5"
};

static const nu_udb_t V0FA1B = {
	0x0FA1B,
	"\xE7\xA6\x8F"
};

static const nu_udb_t V0FA30 = {
	0x0FA30,
	"\xE4\xBE\xAE"
};

static const nu_udb_t V0FA19 = {
	0x0FA19,
	"\xE7\xA5\x9E"
};

static const nu_udb_t V0FA1E = {
	0x0FA1E,
	"\xE7\xBE\xBD"
};

static const nu_udb_t V0FA31 = {
	0x0FA31,
	"\xE5\x83\xA7"
};

static const nu_udb_t V0FA2C = {
	0x0FA2C,
	"\xE9\xA4\xA8"
};

static const nu_udb_t V0FA2D = {
	0x0FA2D,
	"\xE9\xB6\xB4"
};

static const nu_udb_t V0FA2F = {
	0x0FA2F,
	"\xE9\x9A\xB7"
};

static const nu_udb_t V00407 = {
	0x00407,
	"\xD0\x86\xCC\x88"
};

static const nu_udb_t V00400 = {
	0x00400,
	"\xD0\x95\xCC\x80"
};

static const nu_udb_t V0FA2B = {
	0x0FA2B,
	"\xE9\xA3\xBC"
};

static const nu_udb_t V2F994 = {
	0x2F994,
	"\xE8\x8A\xB3"
};

static const nu_udb_t V00403 = {
	0x00403,
	"\xD0\x93\xCD\x81"
};

static const nu_udb_t V01A59 = {
	0x01A59,
	"\xE1\xA8\xA6"
};

static const nu_udb_t V0FA25 = {
	0x0FA25,
	"\xE9\x80\xB8"
};

static const nu_udb_t V0F988 = {
	0x0F988,
	"\xE9\xBA\x97"
};

static const nu_udb_t V0FA26 = {
	0x0FA26,
	"\xE9\x83\xBD"
};

static const nu_udb_t V02241 = {
	0x02241,
	"\xE2\x88\xBC\xCC\xB8"
};

static const nu_udb_t V0FA20 = {
	0x0FA20,
	"\xE8\x98\x92"
};

static const nu_udb_t V031AE = {
	0x031AE,
	"\xE3\x84\x9E"
};

static const nu_udb_t V0FF8F = {
	0x0FF8F,
	"\xE3\x83\x9E"
};

static const nu_udb_t V031A8 = {
	0x031A8,
	"\xE3\x84\xA8"
};

static const nu_udb_t V00476 = {
	0x00476,
	"\xD1\xB4\xCC\x8F"
};

static const nu_udb_t V031A1 = {
	0x031A1,
	"\xE3\x84\x97"
};

static const nu_udb_t V0FA17 = {
	0x0FA17,
	"\xE7\x9B\x8A"
};

static const nu_udb_t V0FF88 = {
	0x0FF88,
	"\xE3\x83\x8D"
};

static const nu_udb_t V0FA10 = {
	0x0FA10,
	"\xE5\xA1\x9A"
};

static const nu_udb_t V0FF14 = {
	0x0FF14,
	"\x34"
};

static const nu_udb_t V0FA12 = {
	0x0FA12,
	"\xE6\x99\xB4"
};

static const nu_udb_t V0FA0C = {
	0x0FA0C,
	"\xE5\x85\x80"
};

static const nu_udb_t V0FA0D = {
	0x0FA0D,
	"\xE5\x97\x80"
};

static const nu_udb_t V0FF92 = {
	0x0FF92,
	"\xE3\x83\xA1"
};

static const nu_udb_t V0FF93 = {
	0x0FF93,
	"\xE3\x83\xA2"
};

static const nu_udb_t V0FA08 = {
	0x0FA08,
	"\xE8\xA1\x8C"
};

static const nu_udb_t V0FA09 = {
	0x0FA09,
	"\xE9\x99\x8D"
};

static const nu_udb_t V0FA0A = {
	0x0FA0A,
	"\xE8\xA6\x8B"
};

static const nu_udb_t V0FA0B = {
	0x0FA0B,
	"\xE5\xBB\x93"
};

static const nu_udb_t V0FA04 = {
	0x0FA04,
	"\xE5\xAE\x85"
};

static const nu_udb_t V0FF9D = {
	0x0FF9D,
	"\xE3\x83\xB3"
};

static const nu_udb_t V0FA00 = {
	0x0FA00,
	"\xE5\x88\x87"
};

static const nu_udb_t V0FA01 = {
	0x0FA01,
	"\xE5\xBA\xA6"
};

static const nu_udb_t V0FA02 = {
	0x0FA02,
	"\xE6\x8B\x93"
};

static const nu_udb_t V0FA03 = {
	0x0FA03,
	"\xE7\xB3\x96"
};

static const nu_udb_t V0FA7C = {
	0x0FA7C,
	"\xE5\xA1\x9A"
};

static const nu_udb_t V0FA7D = {
	0x0FA7D,
	"\xE5\xA2\xB3"
};

static const nu_udb_t V01DD1 = {
	0x01DD1,
	""
};

static const nu_udb_t V0FA7E = {
	0x0FA7E,
	"\xE5\xA5\x84"
};

static const nu_udb_t V01DD3 = {
	0x01DD3,
	"\x61"
};

static const nu_udb_t V01DD2 = {
	0x01DD2,
	"\xEA\x9D\xAF"
};

static const nu_udb_t V01DD5 = {
	0x01DD5,
	"\x61\x6F"
};

static const nu_udb_t V01DD4 = {
	0x01DD4,
	"\x61\x65"
};

static const nu_udb_t V0FA7F = {
	0x0FA7F,
	"\xE5\xA5\x94"
};

static const nu_udb_t V00215 = {
	0x00215,
	"\x75\xCC\x8F"
};

static const nu_udb_t V01DD9 = {
	0x01DD9,
	"\x64"
};

static const nu_udb_t V0A7A5 = {
	0x0A7A5,
	"\x6E"
};

static const nu_udb_t V00216 = {
	0x00216,
	"\x55\xCC\x91"
};

static const nu_udb_t V00219 = {
	0x00219,
	"\x73\xCC\xA6"
};

static const nu_udb_t V00218 = {
	0x00218,
	"\x53\xCC\xA6"
};

static const nu_udb_t V01DDC = {
	0x01DDC,
	"\x6B"
};

static const nu_udb_t V01DDF = {
	0x01DDF,
	"\xE1\xB4\x8D"
};

static const nu_udb_t V01DDE = {
	0x01DDE,
	"\xCA\x9F"
};

static const nu_udb_t V01DC1 = {
	0x01DC1,
	""
};

static const nu_udb_t V01DC0 = {
	0x01DC0,
	""
};

static const nu_udb_t V01DC3 = {
	0x01DC3,
	""
};

static const nu_udb_t V01DC2 = {
	0x01DC2,
	""
};

static const nu_udb_t V01DC5 = {
	0x01DC5,
	""
};

static const nu_udb_t V01DC4 = {
	0x01DC4,
	""
};

static const nu_udb_t V01DC7 = {
	0x01DC7,
	""
};

static const nu_udb_t V01DC6 = {
	0x01DC6,
	""
};

static const nu_udb_t V01DC9 = {
	0x01DC9,
	""
};

static const nu_udb_t V01DC8 = {
	0x01DC8,
	""
};

static const nu_udb_t V01DCB = {
	0x01DCB,
	""
};

static const nu_udb_t V01DCA = {
	0x01DCA,
	"\x72"
};

static const nu_udb_t V01DCD = {
	0x01DCD,
	""
};

static const nu_udb_t V01DCC = {
	0x01DCC,
	""
};

static const nu_udb_t V01DCF = {
	0x01DCF,
	""
};

static const nu_udb_t V01DCE = {
	0x01DCE,
	""
};

static const nu_udb_t V0FA75 = {
	0x0FA75,
	"\xE5\x86\x80"
};

static const nu_udb_t V0020F = {
	0x0020F,
	"\x6F\xCC\x91"
};

static const nu_udb_t V0020E = {
	0x0020E,
	"\x4F\xCC\x91"
};

static const nu_udb_t V00347 = {
	0x00347,
	""
};

static const nu_udb_t V0F962 = {
	0x0F962,
	"\xE7\x95\xB0"
};

static const nu_udb_t V0FA68 = {
	0x0FA68,
	"\xE9\x9B\xA3"
};

static const nu_udb_t V005F2 = {
	0x005F2,
	"\xD7\x99\xD7\x99"
};

static const nu_udb_t V005F1 = {
	0x005F1,
	"\xD7\x95\xD7\x99"
};

static const nu_udb_t V0FA69 = {
	0x0FA69,
	"\xE9\x9F\xBF"
};

static const nu_udb_t V02284 = {
	0x02284,
	"\xE2\x8A\x82\xCC\xB8"
};

static const nu_udb_t V0FA6A = {
	0x0FA6A,
	"\xE9\xA0\xBB"
};

static const nu_udb_t V0FA6B = {
	0x0FA6B,
	"\xE6\x81\xB5"
};

static const nu_udb_t V00238 = {
	0x00238,
	"\x64\x62"
};

static const nu_udb_t V0FA64 = {
	0x0FA64,
	"\xE8\xB3\x93"
};

static const nu_udb_t V0FA65 = {
	0x0FA65,
	"\xE8\xB4\x88"
};

static const nu_udb_t V01DFE = {
	0x01DFE,
	""
};

static const nu_udb_t V0212B = {
	0x0212B,
	"\x41\xCC\x8A"
};

static const nu_udb_t V00457 = {
	0x00457,
	"\xD1\x96\xCC\x88"
};

static const nu_udb_t V01DE3 = {
	0x01DE3,
	"\xEA\x9D\x9B"
};

static const nu_udb_t V01DE2 = {
	0x01DE2,
	"\xCA\x80"
};

static const nu_udb_t V01DE5 = {
	0x01DE5,
	"\x73"
};

static const nu_udb_t V01DE4 = {
	0x01DE4,
	"\x73"
};

static const nu_udb_t V0FA66 = {
	0x0FA66,
	"\xE8\xBE\xB6"
};

static const nu_udb_t V0045D = {
	0x0045D,
	"\xD0\xB8\xCC\x80"
};

static const nu_udb_t V10C08 = {
	0x10C08,
	"\xF0\x90\xB0\x87"
};

static const nu_udb_t V00622 = {
	0x00622,
	"\xD8\xA7\xD9\x93"
};

static const nu_udb_t V0FA67 = {
	0x0FA67,
	"\xE9\x80\xB8"
};

static const nu_udb_t V0016E = {
	0x0016E,
	"\x55\xCC\x8A"
};

static const nu_udb_t V0FA60 = {
	0x0FA60,
	"\xE8\xA4\x90"
};

static const nu_udb_t V0022B = {
	0x0022B,
	"\x6F\xCC\x88\xCC\x84"
};

static const nu_udb_t V0022A = {
	0x0022A,
	"\x4F\xCC\x88\xCC\x84"
};

static const nu_udb_t V0FA87 = {
	0x0FA87,
	"\xE6\x85\x8E"
};

static const nu_udb_t V0FA61 = {
	0x0FA61,
	"\xE8\xA6\x96"
};

static const nu_udb_t V0FA85 = {
	0x0FA85,
	"\xE5\xBE\xAD"
};

static const nu_udb_t V022E3 = {
	0x022E3,
	"\xE2\x8A\x92\xCC\xB8"
};

static const nu_udb_t V0FA62 = {
	0x0FA62,
	"\xE8\xAC\x81"
};

static const nu_udb_t V00714 = {
	0x00714,
	"\xDC\x93"
};

static const nu_udb_t V0FA63 = {
	0x0FA63,
	"\xE8\xAC\xB9"
};

static const nu_udb_t V2F927 = {
	0x2F927,
	"\xF0\xA4\xA0\x94"
};

static const nu_udb_t V0FA5C = {
	0x0FA5C,
	"\xE8\x87\xAD"
};

static const nu_udb_t V0FA5D = {
	0x0FA5D,
	"\xE8\x89\xB9"
};

static const nu_udb_t V0FA5E = {
	0x0FA5E,
	"\xE8\x89\xB9"
};

static const nu_udb_t V0FA5F = {
	0x0FA5F,
	"\xE8\x91\x97"
};

static const nu_udb_t V0FA58 = {
	0x0FA58,
	"\xE7\xB8\x89"
};

static const nu_udb_t V0FA59 = {
	0x0FA59,
	"\xE7\xB9\x81"
};

static const nu_udb_t V0FA5A = {
	0x0FA5A,
	"\xE7\xBD\xB2"
};

static const nu_udb_t V0FA5B = {
	0x0FA5B,
	"\xE8\x80\x85"
};

static const nu_udb_t V0FA54 = {
	0x0FA54,
	"\xE7\xA9\x80"
};

static const nu_udb_t V0FA55 = {
	0x0FA55,
	"\xE7\xAA\x81"
};

static const nu_udb_t V0FA52 = {
	0x0FA52,
	"\xE7\xA6\x8D"
};

static const nu_udb_t V0FA53 = {
	0x0FA53,
	"\xE7\xA6\x8E"
};

static const nu_udb_t V0FA4E = {
	0x0FA4E,
	"\xE7\xA5\x88"
};

static const nu_udb_t V0FA4F = {
	0x0FA4F,
	"\xE7\xA5\x90"
};

static const nu_udb_t V0FA99 = {
	0x0FA99,
	"\xE6\xBB\x8B"
};

static const nu_udb_t V0FA48 = {
	0x0FA48,
	"\xE7\x85\xAE"
};

static const nu_udb_t V0FA49 = {
	0x0FA49,
	"\xE7\x88\xAB"
};

static const nu_udb_t V0FA4A = {
	0x0FA4A,
	"\xE7\x90\xA2"
};

static const nu_udb_t V0FA4B = {
	0x0FA4B,
	"\xE7\xA2\x91"
};

static const nu_udb_t V0FA44 = {
	0x0FA44,
	"\xE6\xA2\x85"
};

static const nu_udb_t V0FA45 = {
	0x0FA45,
	"\xE6\xB5\xB7"
};

static const nu_udb_t V0FA6C = {
	0x0FA6C,
	"\xF0\xA4\x8B\xAE"
};

static const nu_udb_t V0F922 = {
	0x0F922,
	"\xE6\xBF\xAB"
};

static const nu_udb_t V00954 = {
	0x00954,
	"\xCC\x81"
};

static const nu_udb_t V02DE6 = {
	0x02DE6,
	"\xD0\xBA"
};

static const nu_udb_t V0F921 = {
	0x0F921,
	"\xE5\xB5\x90"
};

static const nu_udb_t V0F956 = {
	0x0F956,
	"\xE7\xA8\x9C"
};

static const nu_udb_t V0FA46 = {
	0x0FA46,
	"\xE6\xB8\x9A"
};

static const nu_udb_t V0FA47 = {
	0x0FA47,
	"\xE6\xBC\xA2"
};

static const nu_udb_t V0FA40 = {
	0x0FA40,
	"\xE6\x87\xB2"
};

static const nu_udb_t V0F92A = {
	0x0F92A,
	"\xE6\xB5\xAA"
};

static const nu_udb_t V0FA41 = {
	0x0FA41,
	"\xE6\x95\x8F"
};

static const nu_udb_t V0FA42 = {
	0x0FA42,
	"\xE6\x97\xA2"
};

static const nu_udb_t V0FA43 = {
	0x0FA43,
	"\xE6\x9A\x91"
};

static const nu_udb_t V0FABC = {
	0x0FABC,
	"\xE8\xAC\x81"
};

static const nu_udb_t V0FABD = {
	0x0FABD,
	"\xE8\xAB\xBE"
};

static const nu_udb_t V0F92C = {
	0x0F92C,
	"\xE9\x83\x8E"
};

static const nu_udb_t V0FABE = {
	0x0FABE,
	"\xE8\xAB\xAD"
};

static const nu_udb_t V0FABF = {
	0x0FABF,
	"\xE8\xAC\xB9"
};

static const nu_udb_t V0FAB8 = {
	0x0FAB8,
	"\xE8\xA6\x96"
};

static const nu_udb_t V00674 = {
	0x00674,
	"\xD8\xA1"
};

static const nu_udb_t V0FE66 = {
	0x0FE66,
	"\x3D"
};

static const nu_udb_t V0FABB = {
	0x0FABB,
	"\xE8\xAB\x8B"
};

static const nu_udb_t V0FAB4 = {
	0x0FAB4,
	"\xE8\x8F\xAF"
};

static const nu_udb_t V0FAB5 = {
	0x0FAB5,
	"\xE8\x9D\xB9"
};

static const nu_udb_t V0FAB6 = {
	0x0FAB6,
	"\xE8\xA5\x81"
};

static const nu_udb_t V0FAB7 = {
	0x0FAB7,
	"\xE8\xA6\x86"
};

static const nu_udb_t V0FAB0 = {
	0x0FAB0,
	"\xE7\xB7\xB4"
};

static const nu_udb_t V0FAB1 = {
	0x0FAB1,
	"\xE7\xBC\xBE"
};

static const nu_udb_t V0F939 = {
	0x0F939,
	"\xE9\xAD\xAF"
};

static const nu_udb_t V0FAB2 = {
	0x0FAB2,
	"\xE8\x80\x85"
};

static const nu_udb_t V0FAB3 = {
	0x0FAB3,
	"\xE8\x8D\x92"
};

static const nu_udb_t V0F93C = {
	0x0F93C,
	"\xE7\xA5\xBF"
};

static const nu_udb_t V0F93D = {
	0x0F93D,
	"\xE7\xB6\xA0"
};

static const nu_udb_t V0FAAC = {
	0x0FAAC,
	"\xE7\xAA\xB1"
};

static const nu_udb_t V0F975 = {
	0x0F975,
	"\xE6\x8E\xA0"
};

static const nu_udb_t V0F900 = {
	0x0F900,
	"\xE8\xB1\x88"
};

static const nu_udb_t V0219B = {
	0x0219B,
	"\xE2\x86\x92\xCC\xB8"
};

static const nu_udb_t V0F906 = {
	0x0F906,
	"\xE5\x8F\xA5"
};

static const nu_udb_t V01BD7 = {
	0x01BD7,
	"\xE1\xAF\x96"
};

static const nu_udb_t V0F904 = {
	0x0F904,
	"\xE6\xBB\x91"
};

static const nu_udb_t V0F905 = {
	0x0F905,
	"\xE4\xB8\xB2"
};

static const nu_udb_t V01036 = {
	0x01036,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0F90B = {
	0x0F90B,
	"\xE5\x96\x87"
};

static const nu_udb_t V01038 = {
	0x01038,
	"\xE0\xA4\x83"
};

static const nu_udb_t V0FAA9 = {
	0x0FAA9,
	"\xE7\x9D\x8A"
};

static const nu_udb_t V0FAAA = {
	0x0FAAA,
	"\xE7\x9D\x80"
};

static const nu_udb_t V0FAAB = {
	0x0FAAB,
	"\xE7\xA3\x8C"
};

static const nu_udb_t V00981 = {
	0x00981,
	"\xE0\xA4\x81"
};

static const nu_udb_t V0103F = {
	0x0103F,
	"\xE1\x80\x9E\xE1\x80\xB9\xE1\x80\x9E"
};

static const nu_udb_t V0F912 = {
	0x0F912,
	"\xE8\xA3\xB8"
};

static const nu_udb_t V0F913 = {
	0x0F913,
	"\xE9\x82\x8F"
};

static const nu_udb_t V0F910 = {
	0x0F910,
	"\xE8\x98\xBF"
};

static const nu_udb_t V0FAA4 = {
	0x0FAA4,
	"\xE7\x98\x9D"
};

static const nu_udb_t V0FAA5 = {
	0x0FAA5,
	"\xE7\x98\x9F"
};

static const nu_udb_t V0F917 = {
	0x0F917,
	"\xE7\x8F\x9E"
};

static const nu_udb_t V0FAA6 = {
	0x0FAA6,
	"\xE7\x9B\x8A"
};

static const nu_udb_t V0F915 = {
	0x0F915,
	"\xE6\xB4\x9B"
};

static const nu_udb_t V01026 = {
	0x01026,
	"\xE1\x80\xA5\xE1\x80\xAE"
};

static const nu_udb_t V0FAA7 = {
	0x0FAA7,
	"\xE7\x9B\x9B"
};

static const nu_udb_t V0FAA0 = {
	0x0FAA0,
	"\xE7\x8C\xAA"
};

static const nu_udb_t V0102B = {
	0x0102B,
	"\xE1\x80\xAC"
};

static const nu_udb_t V0FAA3 = {
	0x0FAA3,
	"\xE7\x94\xBB"
};

static const nu_udb_t V0FA9C = {
	0x0FA9C,
	"\xE7\x85\xAE"
};

static const nu_udb_t V0FA9F = {
	0x0FA9F,
	"\xE7\x8A\xAF"
};

static const nu_udb_t V11180 = {
	0x11180,
	"\xE0\xA4\x81"
};

static const nu_udb_t V0FA98 = {
	0x0FA98,
	"\xE6\xBB\x9B"
};

static const nu_udb_t V0FA89 = {
	0x0FA89,
	"\xE6\x86\x8E"
};

static const nu_udb_t V0FA8A = {
	0x0FA8A,
	"\xE6\x85\xA0"
};

static const nu_udb_t V0FA81 = {
	0x0FA81,
	"\xE5\xAC\xA8"
};

static const nu_udb_t V0FA82 = {
	0x0FA82,
	"\xE5\xBB\x92"
};

static const nu_udb_t V004DB = {
	0x004DB,
	"\xD3\x99\xCC\x88"
};

static const nu_udb_t V0F964 = {
	0x0F964,
	"\xE7\xA3\xBB"
};

static const nu_udb_t V004D6 = {
	0x004D6,
	"\xD0\x95\xCC\x86"
};

static const nu_udb_t V01FFB = {
	0x01FFB,
	"\xCE\xA9\xCC\x81"
};

static const nu_udb_t V004D0 = {
	0x004D0,
	"\xD0\x90\xCC\x86"
};

static const nu_udb_t V004D1 = {
	0x004D1,
	"\xD0\xB0\xCC\x86"
};

static const nu_udb_t V004D2 = {
	0x004D2,
	"\xD0\x90\xCC\x88"
};

static const nu_udb_t V004D3 = {
	0x004D3,
	"\xD0\xB0\xCC\x88"
};

static const nu_udb_t V004C1 = {
	0x004C1,
	"\xD0\x96\xCC\x86"
};

static const nu_udb_t V004C2 = {
	0x004C2,
	"\xD0\xB6\xCC\x86"
};

static const nu_udb_t V0FAD8 = {
	0x0FAD8,
	"\xE9\xBD\x83"
};

static const nu_udb_t V0F972 = {
	0x0F972,
	"\xE6\xB2\x88"
};

static const nu_udb_t V0040D = {
	0x0040D,
	"\xD0\x98\xCC\x80"
};

static const nu_udb_t V0081F = {
	0x0081F,
	"\xE0\xA0\xA0"
};

static const nu_udb_t V0F9F6 = {
	0x0F9F6,
	"\xE8\x87\xA8"
};

static const nu_udb_t V0FAD9 = {
	0x0FAD9,
	"\xE9\xBE\x8E"
};

static const nu_udb_t V0FAD4 = {
	0x0FAD4,
	"\xE4\x80\xB9"
};

static const nu_udb_t V0FAD5 = {
	0x0FAD5,
	"\xF0\xA5\x89\x89"
};

static const nu_udb_t V0FAD6 = {
	0x0FAD6,
	"\xF0\xA5\xB3\x90"
};

static const nu_udb_t V0F902 = {
	0x0F902,
	"\xE8\xBB\x8A"
};

static const nu_udb_t V0FAD7 = {
	0x0FAD7,
	"\xF0\xA7\xBB\x93"
};

static const nu_udb_t V0FAD0 = {
	0x0FAD0,
	"\xF0\xA2\xA1\x84"
};

static const nu_udb_t V017CB = {
	0x017CB,
	""
};

static const nu_udb_t V0FAD1 = {
	0x0FAD1,
	"\xF0\xA3\x8F\x95"
};

static const nu_udb_t V0FAD2 = {
	0x0FAD2,
	"\xE3\xAE\x9D"
};

static const nu_udb_t V0F97C = {
	0x0F97C,
	"\xE8\x89\xAF"
};

static const nu_udb_t V0F97D = {
	0x0F97D,
	"\xE8\xAB\x92"
};

static const nu_udb_t V0FAD3 = {
	0x0FAD3,
	"\xE4\x80\x98"
};

static const nu_udb_t V0FACC = {
	0x0FACC,
	"\xE9\xA0\xBB"
};

static const nu_udb_t V0FACD = {
	0x0FACD,
	"\xE9\xAC\x92"
};

static const nu_udb_t V0FACE = {
	0x0FACE,
	"\xE9\xBE\x9C"
};

static const nu_udb_t V0F946 = {
	0x0F946,
	"\xE7\x89\xA2"
};

static const nu_udb_t V0FACF = {
	0x0FACF,
	"\xF0\xA2\xA1\x8A"
};

static const nu_udb_t V0FAC8 = {
	0x0FAC8,
	"\xE9\x9D\x96"
};

static const nu_udb_t V0FAC9 = {
	0x0FAC9,
	"\xE9\x9F\x9B"
};

static const nu_udb_t V0FACA = {
	0x0FACA,
	"\xE9\x9F\xBF"
};

static const nu_udb_t V0F94B = {
	0x0F94B,
	"\xE5\xB1\xA2"
};

static const nu_udb_t V0FACB = {
	0x0FACB,
	"\xE9\xA0\x8B"
};

static const nu_udb_t V0FAC4 = {
	0x0FAC4,
	"\xE9\x86\x99"
};

static const nu_udb_t V0FAC5 = {
	0x0FAC5,
	"\xE9\x89\xB6"
};

static const nu_udb_t V0FAC6 = {
	0x0FAC6,
	"\xE9\x99\xBC"
};

static const nu_udb_t V0F94C = {
	0x0F94C,
	"\xE6\xA8\x93"
};

static const nu_udb_t V0FAC7 = {
	0x0FAC7,
	"\xE9\x9B\xA3"
};

static const nu_udb_t V0032F = {
	0x0032F,
	""
};

static const nu_udb_t V0FAC0 = {
	0x0FAC0,
	"\xE8\xAE\x8A"
};

static const nu_udb_t V0F950 = {
	0x0F950,
	"\xE7\xB8\xB7"
};

static const nu_udb_t V0FAC1 = {
	0x0FAC1,
	"\xE8\xB4\x88"
};

static const nu_udb_t V009CB = {
	0x009CB,
	"\xE0\xA7\x87\xE0\xA6\xBE"
};

static const nu_udb_t V0F957 = {
	0x0F957,
	"\xE7\xB6\xBE"
};

static const nu_udb_t V0071C = {
	0x0071C,
	"\xDC\x9B"
};

static const nu_udb_t V021CF = {
	0x021CF,
	"\xE2\x87\x92\xCC\xB8"
};

static const nu_udb_t V0FAC2 = {
	0x0FAC2,
	"\xE8\xBC\xB8"
};

static const nu_udb_t V009CC = {
	0x009CC,
	"\xE0\xA7\x87\xE0\xA7\x97"
};

static const nu_udb_t V0FAC3 = {
	0x0FAC3,
	"\xE9\x81\xB2"
};

static const nu_udb_t V00745 = {
	0x00745,
	""
};

static const nu_udb_t V00746 = {
	0x00746,
	""
};

static const nu_udb_t V0A7A2 = {
	0x0A7A2,
	"\x4B"
};

static const nu_udb_t V00741 = {
	0x00741,
	""
};

static const nu_udb_t V0F95D = {
	0x0F95D,
	"\xE8\xAB\xBE"
};

static const nu_udb_t V00742 = {
	0x00742,
	""
};

static const nu_udb_t V116B7 = {
	0x116B7,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V116AC = {
	0x116AC,
	"\xE0\xA4\x83"
};

static const nu_udb_t V116AB = {
	0x116AB,
	"\xE0\xA4\x82"
};

static const nu_udb_t V00A3C = {
	0x00A3C,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V00A36 = {
	0x00A36,
	"\xE0\xA8\xB8\xE0\xA4\xBC"
};

static const nu_udb_t V00A33 = {
	0x00A33,
	"\xE0\xA8\xB2\xE0\xA4\xBC"
};

static const nu_udb_t V007E8 = {
	0x007E8,
	"\xDF\x96"
};

static const nu_udb_t V007E9 = {
	0x007E9,
	"\xDF\x97"
};

static const nu_udb_t V007EA = {
	0x007EA,
	"\xDF\x99"
};

static const nu_udb_t V0F9A8 = {
	0x0F9A8,
	"\xE4\xBB\xA4"
};

static const nu_udb_t V2FA1C = {
	0x2FA1C,
	"\xE9\xBC\xBB"
};

static const nu_udb_t V2FA1D = {
	0x2FA1D,
	"\xF0\xAA\x98\x80"
};

static const nu_udb_t V0F9AF = {
	0x0F9AF,
	"\xE7\xBE\x9A"
};

static const nu_udb_t V2FA18 = {
	0x2FA18,
	"\xE9\xBB\xBE"
};

static const nu_udb_t V2FA19 = {
	0x2FA19,
	"\xE9\xBC\x85"
};

static const nu_udb_t V2FA1A = {
	0x2FA1A,
	"\xE9\xBC\x8F"
};

static const nu_udb_t V0F9B3 = {
	0x0F9B3,
	"\xE9\x9D\x88"
};

static const nu_udb_t V0F9B0 = {
	0x0F9B0,
	"\xE8\x81\x86"
};

static const nu_udb_t V2FA1B = {
	0x2FA1B,
	"\xE9\xBC\x96"
};

static const nu_udb_t V2FA14 = {
	0x2FA14,
	"\xF0\xAA\x8A\x91"
};

static const nu_udb_t V2FA15 = {
	0x2FA15,
	"\xE9\xBA\xBB"
};

static const nu_udb_t V2FA16 = {
	0x2FA16,
	"\xE4\xB5\x96"
};

static const nu_udb_t V2FA17 = {
	0x2FA17,
	"\xE9\xBB\xB9"
};

static const nu_udb_t V006FE = {
	0x006FE,
	"\xD9\x85"
};

static const nu_udb_t V2FA10 = {
	0x2FA10,
	"\xF0\xAA\x83\x8E"
};

static const nu_udb_t V2FA11 = {
	0x2FA11,
	"\xE4\xB3\xB8"
};

static const nu_udb_t V2FA12 = {
	0x2FA12,
	"\xF0\xAA\x84\x85"
};

static const nu_udb_t V2FA13 = {
	0x2FA13,
	"\xF0\xAA\x88\x8E"
};

static const nu_udb_t V2FA0C = {
	0x2FA0C,
	"\xE9\xB3\xBD"
};

static const nu_udb_t V0F9BB = {
	0x0F9BB,
	"\xE5\x83\x9A"
};

static const nu_udb_t V00727 = {
	0x00727,
	"\xDC\xA6"
};

static const nu_udb_t V2FA0D = {
	0x2FA0D,
	"\xE4\xB3\x8E"
};

static const nu_udb_t V0FA15 = {
	0x0FA15,
	"\xE5\x87\x9E"
};

static const nu_udb_t V0F980 = {
	0x0F980,
	"\xE5\x91\x82"
};

static const nu_udb_t V2FA0E = {
	0x2FA0E,
	"\xE4\xB3\xAD"
};

static const nu_udb_t V0FA16 = {
	0x0FA16,
	"\xE7\x8C\xAA"
};

static const nu_udb_t V0072D = {
	0x0072D,
	"\xDC\x92"
};

static const nu_udb_t V0FA18 = {
	0x0FA18,
	"\xE7\xA4\xBC"
};

static const nu_udb_t V0072F = {
	0x0072F,
	"\xDC\x95"
};

static const nu_udb_t V0072E = {
	0x0072E,
	"\xDC\x93"
};

static const nu_udb_t V0FA1D = {
	0x0FA1D,
	"\xE7\xB2\xBE"
};

static const nu_udb_t V0FA1C = {
	0x0FA1C,
	"\xE9\x9D\x96"
};

static const nu_udb_t V0F989 = {
	0x0F989,
	"\xE9\xBB\x8E"
};

static const nu_udb_t V0016C = {
	0x0016C,
	"\x55\xCC\x86"
};

static const nu_udb_t V00226 = {
	0x00226,
	"\x41\xCC\x87"
};

static const nu_udb_t V00227 = {
	0x00227,
	"\x61\xCC\x87"
};

static const nu_udb_t V0016F = {
	0x0016F,
	"\x75\xCC\x8A"
};

static const nu_udb_t V2F967 = {
	0x2F967,
	"\xE4\x8A\xA0"
};

static const nu_udb_t V0FA05 = {
	0x0FA05,
	"\xE6\xB4\x9E"
};

static const nu_udb_t V0016A = {
	0x0016A,
	"\x55\xCC\x84"
};

static const nu_udb_t V00228 = {
	0x00228,
	"\x45\xCC\xA7"
};

static const nu_udb_t V00229 = {
	0x00229,
	"\x65\xCC\xA7"
};

static const nu_udb_t V0022E = {
	0x0022E,
	"\x4F\xCC\x87"
};

static const nu_udb_t V0022F = {
	0x0022F,
	"\x6F\xCC\x87"
};

static const nu_udb_t V2FA0F = {
	0x2FA0F,
	"\xE9\xB5\xA7"
};

static const nu_udb_t V0022D = {
	0x0022D,
	"\x6F\xCC\x83\xCC\x84"
};

static const nu_udb_t V00232 = {
	0x00232,
	"\x59\xCC\x84"
};

static const nu_udb_t V00233 = {
	0x00233,
	"\x79\xCC\x84"
};

static const nu_udb_t V00173 = {
	0x00173,
	"\x75\xCC\xA8"
};

static const nu_udb_t V2FA08 = {
	0x2FA08,
	"\xE4\xAF\x8E"
};

static const nu_udb_t V2FA09 = {
	0x2FA09,
	"\xF0\xA9\xAC\xB0"
};

static const nu_udb_t V2FA0A = {
	0x2FA0A,
	"\xE9\xAC\x92"
};

static const nu_udb_t V2FA0B = {
	0x2FA0B,
	"\xE9\xB1\x80"
};

static const nu_udb_t V0FA32 = {
	0x0FA32,
	"\xE5\x85\x8D"
};

static const nu_udb_t V0FA35 = {
	0x0FA35,
	"\xE5\x8D\x91"
};

static const nu_udb_t V0FA34 = {
	0x0FA34,
	"\xE5\x8B\xA4"
};

static const nu_udb_t V00353 = {
	0x00353,
	""
};

static const nu_udb_t V00239 = {
	0x00239,
	"\x71\x70"
};

static const nu_udb_t V2FA04 = {
	0x2FA04,
	"\xE9\xA4\xA9"
};

static const nu_udb_t V0FA38 = {
	0x0FA38,
	"\xE5\x99\xA8"
};

static const nu_udb_t V0FA3B = {
	0x0FA3B,
	"\xE5\xB1\xA4"
};

static const nu_udb_t V0035E = {
	0x0035E,
	""
};

static const nu_udb_t V0FA3D = {
	0x0FA3D,
	"\xE6\x82\x94"
};

static const nu_udb_t V00203 = {
	0x00203,
	"\x61\xCC\x91"
};

static const nu_udb_t V00200 = {
	0x00200,
	"\x41\xCC\x8F"
};

static const nu_udb_t V0FA3E = {
	0x0FA3E,
	"\xE6\x85\xA8"
};

static const nu_udb_t V00206 = {
	0x00206,
	"\x45\xCC\x91"
};

static const nu_udb_t V00207 = {
	0x00207,
	"\x65\xCC\x91"
};

static const nu_udb_t V00204 = {
	0x00204,
	"\x45\xCC\x8F"
};

static const nu_udb_t V00205 = {
	0x00205,
	"\x65\xCC\x8F"
};

static const nu_udb_t V0020A = {
	0x0020A,
	"\x49\xCC\x91"
};

static const nu_udb_t V0020B = {
	0x0020B,
	"\x69\xCC\x91"
};

static const nu_udb_t V00208 = {
	0x00208,
	"\x49\xCC\x8F"
};

static const nu_udb_t V00209 = {
	0x00209,
	"\x69\xCC\x8F"
};

static const nu_udb_t V2FA05 = {
	0x2FA05,
	"\xE9\xA6\xA7"
};

static const nu_udb_t V2FA06 = {
	0x2FA06,
	"\xE9\xA7\x82"
};

static const nu_udb_t V0020C = {
	0x0020C,
	"\x4F\xCC\x8F"
};

static const nu_udb_t V01A64 = {
	0x01A64,
	"\xE1\xA9\xA3"
};

static const nu_udb_t V00212 = {
	0x00212,
	"\x52\xCC\x91"
};

static const nu_udb_t V0F9F8 = {
	0x0F9F8,
	"\xE7\xAC\xA0"
};

static const nu_udb_t V00210 = {
	0x00210,
	"\x52\xCC\x8F"
};

static const nu_udb_t V00211 = {
	0x00211,
	"\x72\xCC\x8F"
};

static const nu_udb_t V0FA51 = {
	0x0FA51,
	"\xE7\xA5\x9D"
};

static const nu_udb_t V00217 = {
	0x00217,
	"\x75\xCC\x91"
};

static const nu_udb_t V00214 = {
	0x00214,
	"\x55\xCC\x8F"
};

static const nu_udb_t V2FA07 = {
	0x2FA07,
	"\xE9\xA7\xBE"
};

static const nu_udb_t V2FA00 = {
	0x2FA00,
	"\xE9\xA0\xA9"
};

static const nu_udb_t V0021B = {
	0x0021B,
	"\x74\xCC\xA6"
};

static const nu_udb_t V0FA57 = {
	0x0FA57,
	"\xE7\xB7\xB4"
};

static const nu_udb_t V0FA56 = {
	0x0FA56,
	"\xE7\xAF\x80"
};

static const nu_udb_t V0021E = {
	0x0021E,
	"\x48\xCC\x8C"
};

static const nu_udb_t V0A734 = {
	0x0A734,
	"\x41\x4F"
};

static const nu_udb_t V2FA01 = {
	0x2FA01,
	"\xF0\xA9\x96\xB6"
};

static const nu_udb_t V0A73A = {
	0x0A73A,
	"\x41\x56"
};

static const nu_udb_t V2FA02 = {
	0x2FA02,
	"\xE9\xA3\xA2"
};

static const nu_udb_t V0A738 = {
	0x0A738,
	"\x41\x56"
};

static const nu_udb_t V2FA03 = {
	0x2FA03,
	"\xE4\xAC\xB3"
};

static const nu_udb_t V01A58 = {
	0x01A58,
	"\xE1\xA8\xA6"
};

static const nu_udb_t V00A01 = {
	0x00A01,
	"\xE0\xA4\x81"
};

static const nu_udb_t V00A02 = {
	0x00A02,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0012F = {
	0x0012F,
	"\x69\xCC\xA8"
};

static const nu_udb_t V00A03 = {
	0x00A03,
	"\xE0\xA4\x83"
};

static const nu_udb_t V1D164 = {
	0x1D164,
	"\xF0\x9D\x85\x98\xF0\x9D\x85\xA5\xF0\x9D\x85\xB2"
};

static const nu_udb_t V1D160 = {
	0x1D160,
	"\xF0\x9D\x85\x98\xF0\x9D\x85\xA5\xF0\x9D\x85\xAE"
};

static const nu_udb_t V1D162 = {
	0x1D162,
	"\xF0\x9D\x85\x98\xF0\x9D\x85\xA5\xF0\x9D\x85\xB0"
};

static const nu_udb_t V1D163 = {
	0x1D163,
	"\xF0\x9D\x85\x98\xF0\x9D\x85\xA5\xF0\x9D\x85\xB1"
};

static const nu_udb_t V00A5A = {
	0x00A5A,
	"\xE0\xA8\x97\xE0\xA4\xBC"
};

static const nu_udb_t V1D15F = {
	0x1D15F,
	"\xF0\x9D\x85\x98\xF0\x9D\x85\xA5"
};

static const nu_udb_t V01B3D = {
	0x01B3D,
	"\xE1\xAC\xBC\xE1\xAC\xB5"
};

static const nu_udb_t V02E9C = {
	0x02E9C,
	"\xE6\x97\xA5"
};

static const nu_udb_t V0FA4D = {
	0x0FA4D,
	"\xE7\xA5\x89"
};

static const nu_udb_t V0FA4C = {
	0x0FA4C,
	"\xE7\xA4\xBE"
};

static const nu_udb_t V00934 = {
	0x00934,
	"\xE0\xA4\xB3\xE0\xA4\xBC"
};

static const nu_udb_t V01B3B = {
	0x01B3B,
	"\xE1\xAC\xBA\xE1\xAC\xB5"
};

static const nu_udb_t V0FA71 = {
	0x0FA71,
	"\xE5\x86\xB5"
};

static const nu_udb_t V0FA70 = {
	0x0FA70,
	"\xE4\xB8\xA6"
};

static const nu_udb_t V0FA73 = {
	0x0FA73,
	"\xE4\xBE\x80"
};

static const nu_udb_t V0FA72 = {
	0x0FA72,
	"\xE5\x85\xA8"
};

static const nu_udb_t V01B34 = {
	0x01B34,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V0FA74 = {
	0x0FA74,
	"\xE5\x85\x85"
};

static const nu_udb_t V2F932 = {
	0x2F932,
	"\xE7\x93\x8A"
};

static const nu_udb_t V0FA76 = {
	0x0FA76,
	"\xE5\x8B\x87"
};

static const nu_udb_t V0FA79 = {
	0x0FA79,
	"\xE5\x95\x95"
};

static const nu_udb_t V00ABC = {
	0x00ABC,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V0FA7B = {
	0x0FA7B,
	"\xE5\x97\xA2"
};

static const nu_udb_t V0FA7A = {
	0x0FA7A,
	"\xE5\x96\x99"
};

static const nu_udb_t V1D1BC = {
	0x1D1BC,
	"\xF0\x9D\x86\xBA\xF0\x9D\x85\xA5"
};

static const nu_udb_t V1D1BD = {
	0x1D1BD,
	"\xF0\x9D\x86\xB9\xF0\x9D\x85\xA5\xF0\x9D\x85\xAE"
};

static const nu_udb_t V1D1BE = {
	0x1D1BE,
	"\xF0\x9D\x86\xBA\xF0\x9D\x85\xA5\xF0\x9D\x85\xAE"
};

static const nu_udb_t V01F44 = {
	0x01F44,
	"\xCE\xBF\xCC\x93\xCC\x81"
};

static const nu_udb_t V1D1BF = {
	0x1D1BF,
	"\xF0\x9D\x86\xB9\xF0\x9D\x85\xA5\xF0\x9D\x85\xAF"
};

static const nu_udb_t V1D1BB = {
	0x1D1BB,
	"\xF0\x9D\x86\xB9\xF0\x9D\x85\xA5"
};

static const nu_udb_t V01B12 = {
	0x01B12,
	"\xE1\xAC\x91\xE1\xAC\xB5"
};

static const nu_udb_t V2F907 = {
	0x2F907,
	"\xE6\xB4\xB4"
};

static const nu_udb_t V01F41 = {
	0x01F41,
	"\xCE\xBF\xCC\x94"
};

static const nu_udb_t V01B0C = {
	0x01B0C,
	"\xE1\xAC\x8B\xE1\xAC\xB5"
};

static const nu_udb_t V0A761 = {
	0x0A761,
	"\x76\x79"
};

static const nu_udb_t V0F94A = {
	0x0F94A,
	"\xE5\xA3\x98"
};

static const nu_udb_t V01B0E = {
	0x01B0E,
	"\xE1\xAC\x8D\xE1\xAC\xB5"
};

static const nu_udb_t V01B08 = {
	0x01B08,
	"\xE1\xAC\x87\xE1\xAC\xB5"
};

static const nu_udb_t V01B0A = {
	0x01B0A,
	"\xE1\xAC\x89\xE1\xAC\xB5"
};

static const nu_udb_t V2F90F = {
	0x2F90F,
	"\xE6\xBD\xAE"
};

static const nu_udb_t V0FA6D = {
	0x0FA6D,
	"\xE8\x88\x98"
};

static const nu_udb_t V03034 = {
	0x03034,
	"\xE3\x80\xB3\xE3\x82\x99"
};

static const nu_udb_t V2F90A = {
	0x2F90A,
	"\xE3\xB4\xB3"
};

static const nu_udb_t V2F90B = {
	0x2F90B,
	"\xE6\xBB\x8B"
};

static const nu_udb_t V0FA91 = {
	0x0FA91,
	"\xE6\x99\xB4"
};

static const nu_udb_t V0FA90 = {
	0x0FA90,
	"\xE6\x95\x96"
};

static const nu_udb_t V0FA93 = {
	0x0FA93,
	"\xE6\x9C\x9B"
};

static const nu_udb_t V0FA92 = {
	0x0FA92,
	"\xE6\x9C\x97"
};

static const nu_udb_t V0FA95 = {
	0x0FA95,
	"\xE6\xAD\xB9"
};

static const nu_udb_t V0FA94 = {
	0x0FA94,
	"\xE6\x9D\x96"
};

static const nu_udb_t V0FA97 = {
	0x0FA97,
	"\xE6\xB5\x81"
};

static const nu_udb_t V0FA96 = {
	0x0FA96,
	"\xE6\xAE\xBA"
};

static const nu_udb_t V01B04 = {
	0x01B04,
	"\xE0\xA4\x83"
};

static const nu_udb_t V01B06 = {
	0x01B06,
	"\xE1\xAC\x85\xE1\xAC\xB5"
};

static const nu_udb_t V0FA9B = {
	0x0FA9B,
	"\xE7\x80\x9E"
};

static const nu_udb_t V0FA9A = {
	0x0FA9A,
	"\xE6\xBC\xA2"
};

static const nu_udb_t V0FA9D = {
	0x0FA9D,
	"\xE7\x9E\xA7"
};

static const nu_udb_t V002A3 = {
	0x002A3,
	"\x64\x7A"
};

static const nu_udb_t V01B00 = {
	0x01B00,
	"\xE0\xA4\x81"
};

static const nu_udb_t V0FA9E = {
	0x0FA9E,
	"\xE7\x88\xB5"
};

static const nu_udb_t V01B01 = {
	0x01B01,
	"\xE0\xA4\x81"
};

static const nu_udb_t V0FA80 = {
	0x0FA80,
	"\xE5\xA9\xA2"
};

static const nu_udb_t V0A77D = {
	0x0A77D,
	"\x47"
};

static const nu_udb_t V2F9E7 = {
	0x2F9E7,
	"\xE9\x88\xB8"
};

static const nu_udb_t V01B02 = {
	0x01B02,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0FA84 = {
	0x0FA84,
	"\xE5\xBD\xA9"
};

static const nu_udb_t V00A81 = {
	0x00A81,
	"\xE0\xA4\x81"
};

static const nu_udb_t V0FA86 = {
	0x0FA86,
	"\xE6\x83\x98"
};

static const nu_udb_t V2F9E0 = {
	0x2F9E0,
	"\xF0\xA8\x97\x92"
};

static const nu_udb_t V0FA88 = {
	0x0FA88,
	"\xE6\x84\x88"
};

static const nu_udb_t V0FA8B = {
	0x0FA8B,
	"\xE6\x87\xB2"
};

static const nu_udb_t V00A82 = {
	0x00A82,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0FA8D = {
	0x0FA8D,
	"\xE6\x8F\x84"
};

static const nu_udb_t V0FA8C = {
	0x0FA8C,
	"\xE6\x88\xB4"
};

static const nu_udb_t V0FA8F = {
	0x0FA8F,
	"\xE6\x91\x92"
};

static const nu_udb_t V0FA8E = {
	0x0FA8E,
	"\xE6\x90\x9C"
};

static const nu_udb_t V0A74F = {
	0x0A74F,
	"\x6F\x6F"
};

static const nu_udb_t V00A83 = {
	0x00A83,
	"\xE0\xA4\x83"
};

static const nu_udb_t V01B40 = {
	0x01B40,
	"\xE1\xAC\xBE\xE1\xAC\xB5"
};

static const nu_udb_t V01B41 = {
	0x01B41,
	"\xE1\xAC\xBF\xE1\xAC\xB5"
};

static const nu_udb_t V01B43 = {
	0x01B43,
	"\xE1\xAD\x82\xE1\xAC\xB5"
};

static const nu_udb_t V01BBA = {
	0x01BBA,
	"\xE1\xAE\x83"
};

static const nu_udb_t V2F9F2 = {
	0x2F9F2,
	"\xE4\xA7\xA6"
};

static const nu_udb_t V00D03 = {
	0x00D03,
	"\xE0\xA4\x83"
};

static const nu_udb_t V0FAB9 = {
	0x0FAB9,
	"\xE8\xAA\xBF"
};

static const nu_udb_t V01F1B = {
	0x01F1B,
	"\xCE\x95\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F30 = {
	0x01F30,
	"\xCE\xB9\xCC\x93"
};

static const nu_udb_t V0FABA = {
	0x0FABA,
	"\xE8\xAB\xB8"
};

static const nu_udb_t V0040C = {
	0x0040C,
	"\xD0\x9A\xCD\x81"
};

static const nu_udb_t V2F9FD = {
	0x2F9FD,
	"\xF0\xA9\x92\x96"
};

static const nu_udb_t V03065 = {
	0x03065,
	"\xE3\x81\xA4\xE3\x82\x99"
};

static const nu_udb_t V00D7C = {
	0x00D7C,
	"\xE0\xB4\xB0\xE0\xB5\x8D"
};

static const nu_udb_t V00D7D = {
	0x00D7D,
	"\xE0\xB4\xB2\xE0\xB5\x8D"
};

static const nu_udb_t V00D7E = {
	0x00D7E,
	"\xE0\xB4\xB3\xE0\xB5\x8D"
};

static const nu_udb_t V003AA = {
	0x003AA,
	"\xCE\x99\xCC\x88"
};

static const nu_udb_t V0FAA2 = {
	0x0FAA2,
	"\xE7\x94\x86"
};

static const nu_udb_t V00D7F = {
	0x00D7F,
	"\xE0\xB4\x95\xE0\xB5\x8D"
};

static const nu_udb_t V00D7A = {
	0x00D7A,
	"\xE0\xB4\xA3\xE0\xB5\x8D"
};

static const nu_udb_t V00D7B = {
	0x00D7B,
	"\xE0\xB4\xA8\xE0\xB5\x8D"
};

static const nu_udb_t V16F3F = {
	0x16F3F,
	"\xF0\x96\xBC\xBD"
};

static const nu_udb_t V16F25 = {
	0x16F25,
	"\xF0\x96\xBC\xA3"
};

static const nu_udb_t V0FAA8 = {
	0x0FAA8,
	"\xE7\x9B\xB4"
};

static const nu_udb_t V03071 = {
	0x03071,
	"\xE3\x81\xAF\xE3\x82\x9A"
};

static const nu_udb_t V01B80 = {
	0x01B80,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0FAAD = {
	0x0FAAD,
	"\xE7\xAF\x80"
};

static const nu_udb_t V003CC = {
	0x003CC,
	"\xCE\xBF\xCC\x81"
};

static const nu_udb_t V0FAAF = {
	0x0FAAF,
	"\xE7\xB5\x9B"
};

static const nu_udb_t V0FAAE = {
	0x0FAAE,
	"\xE7\xB1\xBB"
};

static const nu_udb_t V01B82 = {
	0x01B82,
	"\xE0\xA4\x83"
};

static const nu_udb_t V01E3C = {
	0x01E3C,
	"\x4C\xCC\xAD"
};

static const nu_udb_t V01F28 = {
	0x01F28,
	"\xCE\x97\xCC\x93"
};

static const nu_udb_t V01F2F = {
	0x01F2F,
	"\xCE\x97\xCC\x94\xCD\x82"
};

static const nu_udb_t V01E3D = {
	0x01E3D,
	"\x6C\xCC\xAD"
};

static const nu_udb_t V01E3E = {
	0x01E3E,
	"\x4D\xCC\x81"
};

static const nu_udb_t V0307D = {
	0x0307D,
	"\xE3\x81\xBB\xE3\x82\x9A"
};

static const nu_udb_t V0FF15 = {
	0x0FF15,
	"\x35"
};

static const nu_udb_t V01E3F = {
	0x01E3F,
	"\x6D\xCC\x81"
};

static const nu_udb_t V00D4E = {
	0x00D4E,
	"\xE0\xB4\xB0\xE0\xB5\x8D"
};

static const nu_udb_t V0FF16 = {
	0x0FF16,
	"\x36"
};

static const nu_udb_t V00D4C = {
	0x00D4C,
	"\xE0\xB5\x86\xE0\xB5\x97"
};

static const nu_udb_t V2F9DC = {
	0x2F9DC,
	"\xE8\xB7\xB0"
};

static const nu_udb_t V2F9DD = {
	0x2F9DD,
	"\xF0\xA0\xA3\x9E"
};

static const nu_udb_t V0FF1A = {
	0x0FF1A,
	"\x3A"
};

static const nu_udb_t V00451 = {
	0x00451,
	"\xD0\xB5\xCC\x88"
};

static const nu_udb_t V00450 = {
	0x00450,
	"\xD0\xB5\xCC\x80"
};

static const nu_udb_t V00453 = {
	0x00453,
	"\xD0\xB3\xCD\x81"
};

static const nu_udb_t V01E38 = {
	0x01E38,
	"\x4C\xCC\xA3\xCC\x84"
};

static const nu_udb_t V0FF01 = {
	0x0FF01,
	"\x21"
};

static const nu_udb_t V01E39 = {
	0x01E39,
	"\x6C\xCC\xA3\xCC\x84"
};

static const nu_udb_t V0FF03 = {
	0x0FF03,
	"\x23"
};

static const nu_udb_t V0FF02 = {
	0x0FF02,
	"\x22"
};

static const nu_udb_t V01E3A = {
	0x01E3A,
	"\x4C\xCC\xB1"
};

static const nu_udb_t V0F92B = {
	0x0F92B,
	"\xE7\x8B\xBC"
};

static const nu_udb_t V0FF07 = {
	0x0FF07,
	"\x27"
};

static const nu_udb_t V0FF06 = {
	0x0FF06,
	"\x26"
};

static const nu_udb_t V0FF09 = {
	0x0FF09,
	"\x29"
};

static const nu_udb_t V0045C = {
	0x0045C,
	"\xD0\xBA\xCD\x81"
};

static const nu_udb_t V0012C = {
	0x0012C,
	"\x49\xCC\x86"
};

static const nu_udb_t V0FF0A = {
	0x0FF0A,
	"\x2A"
};

static const nu_udb_t V2F901 = {
	0x2F901,
	"\xE6\xB5\xB7"
};

static const nu_udb_t V2F9A8 = {
	0x2F9A8,
	"\xE8\x93\xB1"
};

static const nu_udb_t V03058 = {
	0x03058,
	"\xE3\x81\x97\xE3\x82\x99"
};

static const nu_udb_t V2F904 = {
	0x2F904,
	"\xE6\xB5\xB8"
};

static const nu_udb_t V0305E = {
	0x0305E,
	"\xE3\x81\x9D\xE3\x82\x99"
};

static const nu_udb_t V00137 = {
	0x00137,
	"\x6B\xCC\xA7"
};

static const nu_udb_t V0FF33 = {
	0x0FF33,
	"\x53"
};

static const nu_udb_t V0F945 = {
	0x0F945,
	"\xE8\x81\xBE"
};

static const nu_udb_t V01E3B = {
	0x01E3B,
	"\x6C\xCC\xB1"
};

static const nu_udb_t V0FF34 = {
	0x0FF34,
	"\x54"
};

static const nu_udb_t V2F9B1 = {
	0x2F9B1,
	"\xF0\xA7\x83\x92"
};

static const nu_udb_t V00139 = {
	0x00139,
	"\x4C\xCC\x81"
};

static const nu_udb_t V0FF39 = {
	0x0FF39,
	"\x59"
};

static const nu_udb_t V0FF38 = {
	0x0FF38,
	"\x58"
};

static const nu_udb_t V0FF3B = {
	0x0FF3B,
	"\x5B"
};

static const nu_udb_t V00158 = {
	0x00158,
	"\x52\xCC\x8C"
};

static const nu_udb_t V0FF3D = {
	0x0FF3D,
	"\x5D"
};

static const nu_udb_t V0FF3C = {
	0x0FF3C,
	"\x5C"
};

static const nu_udb_t V01E35 = {
	0x01E35,
	"\x6B\xCC\xB1"
};

static const nu_udb_t V0FF3E = {
	0x0FF3E,
	"\x5E"
};

static const nu_udb_t V030AE = {
	0x030AE,
	"\xE3\x82\xAD\xE3\x82\x99"
};

static const nu_udb_t V01E37 = {
	0x01E37,
	"\x6C\xCC\xA3"
};

static const nu_udb_t V00477 = {
	0x00477,
	"\xD1\xB5\xCC\x8F"
};

static const nu_udb_t V01E30 = {
	0x01E30,
	"\x4B\xCC\x81"
};

static const nu_udb_t V0010A = {
	0x0010A,
	"\x43\xCC\x87"
};

static const nu_udb_t V0FF24 = {
	0x0FF24,
	"\x44"
};

static const nu_udb_t V00108 = {
	0x00108,
	"\x43\xCC\x82"
};

static const nu_udb_t V00109 = {
	0x00109,
	"\x63\xCC\x82"
};

static const nu_udb_t V0FF29 = {
	0x0FF29,
	"\x49"
};

static const nu_udb_t V0FF28 = {
	0x0FF28,
	"\x48"
};

static const nu_udb_t V00D82 = {
	0x00D82,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0010D = {
	0x0010D,
	"\x63\xCC\x8C"
};

static const nu_udb_t V00112 = {
	0x00112,
	"\x45\xCC\x84"
};

static const nu_udb_t V2F966 = {
	0x2F966,
	"\xE7\xB3\x92"
};

static const nu_udb_t V00213 = {
	0x00213,
	"\x72\xCC\x91"
};

static const nu_udb_t V0FF2E = {
	0x0FF2E,
	"\x4E"
};

static const nu_udb_t V2F997 = {
	0x2F997,
	"\xF0\xA6\xAC\xBC"
};

static const nu_udb_t V00117 = {
	0x00117,
	"\x65\xCC\x87"
};

static const nu_udb_t V0FF53 = {
	0x0FF53,
	"\x73"
};

static const nu_udb_t V0FF52 = {
	0x0FF52,
	"\x72"
};

static const nu_udb_t V0011A = {
	0x0011A,
	"\x45\xCC\x8C"
};

static const nu_udb_t V0011B = {
	0x0011B,
	"\x65\xCC\x8C"
};

static const nu_udb_t V00118 = {
	0x00118,
	"\x45\xCC\xA8"
};

static const nu_udb_t V00119 = {
	0x00119,
	"\x65\xCC\xA8"
};

static const nu_udb_t V01F57 = {
	0x01F57,
	"\xCF\x85\xCC\x94\xCD\x82"
};

static const nu_udb_t V0FF58 = {
	0x0FF58,
	"\x78"
};

static const nu_udb_t V01E2E = {
	0x01E2E,
	"\x49\xCC\x88\xCC\x81"
};

static const nu_udb_t V2F970 = {
	0x2F970,
	"\xE7\xB9\x85"
};

static const nu_udb_t V00491 = {
	0x00491,
	"\xD0\xB3"
};

static const nu_udb_t V00490 = {
	0x00490,
	"\xD0\x93"
};

static const nu_udb_t V01E2F = {
	0x01E2F,
	"\x69\xCC\x88\xCC\x81"
};

static const nu_udb_t V2F974 = {
	0x2F974,
	"\xE4\x8D\x99"
};

static const nu_udb_t V0FF41 = {
	0x0FF41,
	"\x61"
};

static const nu_udb_t V0FF40 = {
	0x0FF40,
	"\x60"
};

static const nu_udb_t V2F97B = {
	0x2F97B,
	"\xF0\xA6\x93\x9A"
};

static const nu_udb_t V00165 = {
	0x00165,
	"\x74\xCC\x8C"
};

static const nu_udb_t V0FF45 = {
	0x0FF45,
	"\x65"
};

static const nu_udb_t V0FF44 = {
	0x0FF44,
	"\x64"
};

static const nu_udb_t V00168 = {
	0x00168,
	"\x55\xCC\x83"
};

static const nu_udb_t V0FF46 = {
	0x0FF46,
	"\x66"
};

static const nu_udb_t V10A0D = {
	0x10A0D,
	""
};

static const nu_udb_t V0FF48 = {
	0x0FF48,
	"\x68"
};

static const nu_udb_t V01E29 = {
	0x01E29,
	"\x68\xCC\xA7"
};

static const nu_udb_t V10A0E = {
	0x10A0E,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0FF4D = {
	0x0FF4D,
	"\x6D"
};

static const nu_udb_t V0FF4C = {
	0x0FF4C,
	"\x6C"
};

static const nu_udb_t V0FF4F = {
	0x0FF4F,
	"\x6F"
};

static const nu_udb_t V0FF4E = {
	0x0FF4E,
	"\x6E"
};

static const nu_udb_t V00485 = {
	0x00485,
	"\xCC\x94"
};

static const nu_udb_t V00484 = {
	0x00484,
	""
};

static const nu_udb_t V00487 = {
	0x00487,
	""
};

static const nu_udb_t V00486 = {
	0x00486,
	"\xCC\x93"
};

static const nu_udb_t V0FF75 = {
	0x0FF75,
	"\xE3\x82\xAA"
};

static const nu_udb_t V0FF74 = {
	0x0FF74,
	"\xE3\x82\xA8"
};

static const nu_udb_t V2F94F = {
	0x2F94F,
	"\xE7\xA2\x8C"
};

static const nu_udb_t V0FF76 = {
	0x0FF76,
	"\xE3\x82\xAB"
};

static const nu_udb_t V0FF79 = {
	0x0FF79,
	"\xE3\x82\xB1"
};

static const nu_udb_t V2F952 = {
	0x2F952,
	"\xF0\xA5\x98\xA6"
};

static const nu_udb_t V0FF7B = {
	0x0FF7B,
	"\xE3\x82\xB5"
};

static const nu_udb_t V0F981 = {
	0x0F981,
	"\xE5\xA5\xB3"
};

static const nu_udb_t V01A54 = {
	0x01A54,
	"\xE1\xA9\x86\xE1\xA9\xA0\xE1\xA9\x86"
};

static const nu_udb_t V0FF7C = {
	0x0FF7C,
	"\xE3\x82\xB7"
};

static const nu_udb_t V0FF7F = {
	0x0FF7F,
	"\xE3\x82\xBD"
};

static const nu_udb_t V0FF7E = {
	0x0FF7E,
	"\xE3\x82\xBB"
};

static const nu_udb_t V0FF61 = {
	0x0FF61,
	"\xE3\x80\x82"
};

static const nu_udb_t V01A5B = {
	0x01A5B,
	"\xE1\xA8\xBB"
};

static const nu_udb_t V01A5A = {
	0x01A5A,
	"\xE1\xA8\xBB"
};

static const nu_udb_t V0FF62 = {
	0x0FF62,
	"\xE3\x80\x8C"
};

static const nu_udb_t V0FF65 = {
	0x0FF65,
	"\xE3\x83\xBB"
};

static const nu_udb_t V01E2A = {
	0x01E2A,
	"\x48\xCC\xAE"
};

static const nu_udb_t V00DDE = {
	0x00DDE,
	"\xE0\xB7\x99\xE0\xB7\x9F"
};

static const nu_udb_t V00DDD = {
	0x00DDD,
	"\xE0\xB7\x9C\xE0\xB7\x8A"
};

static const nu_udb_t V2F95D = {
	0x2F95D,
	"\xF0\xA5\xAA\xA7"
};

static const nu_udb_t V01E25 = {
	0x01E25,
	"\x68\xCC\xA3"
};

static const nu_udb_t V01E24 = {
	0x01E24,
	"\x48\xCC\xA3"
};

static const nu_udb_t V2F9D4 = {
	0x2F9D4,
	"\xE8\xB2\xAB"
};

static const nu_udb_t V00152 = {
	0x00152,
	"\x4F\x45"
};

static const nu_udb_t V2F9A6 = {
	0x2F9A6,
	"\xF0\xA6\xB3\x95"
};

static const nu_udb_t V01E26 = {
	0x01E26,
	"\x48\xCC\x88"
};

static const nu_udb_t V2F9A4 = {
	0x2F9A4,
	"\xF0\xA6\xB0\xB6"
};

static const nu_udb_t V2F9A5 = {
	0x2F9A5,
	"\xF0\xA6\xB5\xAB"
};

static const nu_udb_t V00157 = {
	0x00157,
	"\x72\xCC\xA7"
};

static const nu_udb_t V2F9AB = {
	0x2F9AB,
	"\xF0\xA7\x8F\x8A"
};

static const nu_udb_t V00155 = {
	0x00155,
	"\x72\xCC\x81"
};

static const nu_udb_t V0FF95 = {
	0x0FF95,
	"\xE3\x83\xA6"
};

static const nu_udb_t V0FF94 = {
	0x0FF94,
	"\xE3\x83\xA4"
};

static const nu_udb_t V2F9AF = {
	0x2F9AF,
	"\xE4\x95\xA1"
};

static const nu_udb_t V2F9AC = {
	0x2F9AC,
	"\xE8\x95\xA4"
};

static const nu_udb_t V0015E = {
	0x0015E,
	"\x53\xCC\xA7"
};

static const nu_udb_t V0FF98 = {
	0x0FF98,
	"\xE3\x83\xAA"
};

static const nu_udb_t V0FF9B = {
	0x0FF9B,
	"\xE3\x83\xAD"
};

static const nu_udb_t V2F9B0 = {
	0x2F9B0,
	"\xF0\xA6\xBE\xB1"
};

static const nu_udb_t V01A74 = {
	0x01A74,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0FF9C = {
	0x0FF9C,
	"\xE3\x83\xAF"
};

static const nu_udb_t V0FF9F = {
	0x0FF9F,
	"\xE3\x82\x9A"
};

static const nu_udb_t V0FF9E = {
	0x0FF9E,
	"\xE3\x82\x99"
};

static const nu_udb_t V2F9B5 = {
	0x2F9B5,
	"\xE8\x99\xA7"
};

static const nu_udb_t V0FF80 = {
	0x0FF80,
	"\xE3\x82\xBF"
};

static const nu_udb_t V0FF83 = {
	0x0FF83,
	"\xE3\x83\x86"
};

static const nu_udb_t V01E27 = {
	0x01E27,
	"\x68\xCC\x88"
};

static const nu_udb_t V2F9B9 = {
	0x2F9B9,
	"\xE8\x9C\x8E"
};

static const nu_udb_t V030D3 = {
	0x030D3,
	"\xE3\x83\x92\xE3\x82\x99"
};

static const nu_udb_t V030D0 = {
	0x030D0,
	"\xE3\x83\x8F\xE3\x82\x99"
};

static const nu_udb_t V01F80 = {
	0x01F80,
	"\xCE\xB1\xCC\x93\xCD\x85"
};

static const nu_udb_t V004DD = {
	0x004DD,
	"\xD0\xB6\xCC\x88"
};

static const nu_udb_t V02EB8 = {
	0x02EB8,
	"\xE7\xBE\x8B"
};

static const nu_udb_t V004DF = {
	0x004DF,
	"\xD0\xB7\xCC\x88"
};

static const nu_udb_t V02EBE = {
	0x02EBE,
	"\xE8\x89\xB9"
};

static const nu_udb_t V02EBF = {
	0x02EBF,
	"\xE8\x89\xB9"
};

static const nu_udb_t V0FF8C = {
	0x0FF8C,
	"\xE3\x83\x95"
};

static const nu_udb_t V2F987 = {
	0x2F987,
	"\xF0\xA6\x9E\xA7"
};

static const nu_udb_t V030D9 = {
	0x030D9,
	"\xE3\x83\x98\xE3\x82\x99"
};

static const nu_udb_t V00900 = {
	0x00900,
	"\xE0\xA4\x81"
};

static const nu_udb_t V02E80 = {
	0x02E80,
	"\xE4\xB8\xB6"
};

static const nu_udb_t V030DC = {
	0x030DC,
	"\xE3\x83\x9B\xE3\x82\x99"
};

static const nu_udb_t V030DD = {
	0x030DD,
	"\xE3\x83\x9B\xE3\x82\x9A"
};

static const nu_udb_t V0FFB5 = {
	0x0FFB5,
	"\xE1\x84\x89"
};

static const nu_udb_t V0FA78 = {
	0x0FA78,
	"\xE5\x96\x9D"
};

static const nu_udb_t V02E85 = {
	0x02E85,
	"\xE4\xBA\xBB"
};

static const nu_udb_t V0FFB6 = {
	0x0FFB6,
	"\xE1\x84\x8A"
};

static const nu_udb_t V02E8B = {
	0x02E8B,
	"\xE5\x8D\xA9"
};

static const nu_udb_t V0FFB8 = {
	0x0FFB8,
	"\xE1\x84\x8C"
};

static const nu_udb_t V01E14 = {
	0x01E14,
	"\x45\xCC\x84\xCC\x80"
};

static const nu_udb_t V0FA06 = {
	0x0FA06,
	"\xE6\x9A\xB4"
};

static const nu_udb_t V004F1 = {
	0x004F1,
	"\xD1\x83\xCC\x88"
};

static const nu_udb_t V02E8C = {
	0x02E8C,
	"\xE5\xB0\x8F"
};

static const nu_udb_t V004F3 = {
	0x004F3,
	"\xD1\x83\xCC\x8B"
};

static const nu_udb_t V004F2 = {
	0x004F2,
	"\xD0\xA3\xCC\x8B"
};

static const nu_udb_t V004F5 = {
	0x004F5,
	"\xD1\x87\xCC\x88"
};

static const nu_udb_t V004F4 = {
	0x004F4,
	"\xD0\xA7\xCC\x88"
};

static const nu_udb_t V0FFA3 = {
	0x0FFA3,
	"\xE1\x86\xAA"
};

static const nu_udb_t V01FFC = {
	0x01FFC,
	"\xCE\xA9\xCD\x85"
};

static const nu_udb_t V004F9 = {
	0x004F9,
	"\xD1\x8B\xCC\x88"
};

static const nu_udb_t V0FFA4 = {
	0x0FFA4,
	"\xE1\x84\x82"
};

static const nu_udb_t V0FFA7 = {
	0x0FFA7,
	"\xE1\x84\x83"
};

static const nu_udb_t V0FFA6 = {
	0x0FFA6,
	"\xE1\x86\xAD"
};

static const nu_udb_t V02E9B = {
	0x02E9B,
	"\xE6\x97\xA1"
};

static const nu_udb_t V2F9E2 = {
	0x2F9E2,
	"\xE9\x82\x94"
};

static const nu_udb_t V0FFAB = {
	0x0FFAB,
	"\xE1\x86\xB1"
};

static const nu_udb_t V02E9E = {
	0x02E9E,
	"\xE6\xAD\xBA"
};

static const nu_udb_t V0FFAD = {
	0x0FFAD,
	"\xE1\x86\xB3"
};

static const nu_udb_t V2F9E6 = {
	0x2F9E6,
	"\xE9\x84\x9B"
};

static const nu_udb_t V004E3 = {
	0x004E3,
	"\xD0\xB8\xCC\x84"
};

static const nu_udb_t V004E2 = {
	0x004E2,
	"\xD0\x98\xCC\x84"
};

static const nu_udb_t V004E5 = {
	0x004E5,
	"\xD0\xB8\xCC\x88"
};

static const nu_udb_t V004E4 = {
	0x004E4,
	"\xD0\x98\xCC\x88"
};

static const nu_udb_t V004E7 = {
	0x004E7,
	"\xD0\xBE\xCC\x88"
};

static const nu_udb_t V004E6 = {
	0x004E6,
	"\xD0\x9E\xCC\x88"
};

static const nu_udb_t V01E20 = {
	0x01E20,
	"\x47\xCC\x84"
};

static const nu_udb_t V0F97B = {
	0x0F97B,
	"\xE7\xB3\xA7"
};

static const nu_udb_t V004EB = {
	0x004EB,
	"\xD3\xA9\xCC\x88"
};

static const nu_udb_t V004EA = {
	0x004EA,
	"\xD3\xA8\xCC\x88"
};

static const nu_udb_t V004ED = {
	0x004ED,
	"\xD1\x8D\xCC\x88"
};

static const nu_udb_t V004EC = {
	0x004EC,
	"\xD0\xAD\xCC\x88"
};

static const nu_udb_t V004EF = {
	0x004EF,
	"\xD1\x83\xCC\x84"
};

static const nu_udb_t V004EE = {
	0x004EE,
	"\xD0\xA3\xCC\x84"
};

static const nu_udb_t V01E22 = {
	0x01E22,
	"\x48\xCC\x87"
};

static const nu_udb_t V001E3 = {
	0x001E3,
	"\x61\x65\xCC\x84"
};

static const nu_udb_t V2F9F7 = {
	0x2F9F7,
	"\xF0\xA9\x88\x9A"
};

static const nu_udb_t V001E1 = {
	0x001E1,
	"\x61\xCC\x87\xCC\x84"
};

static const nu_udb_t V2F9F5 = {
	0x2F9F5,
	"\xE9\x9C\xA3"
};

static const nu_udb_t V00953 = {
	0x00953,
	"\xCC\x80"
};

static const nu_udb_t V01E23 = {
	0x01E23,
	"\x68\xCC\x87"
};

static const nu_udb_t V0FF1C = {
	0x0FF1C,
	"\x3C"
};

static const nu_udb_t V2F98F = {
	0x2F98F,
	"\xE8\x8A\x91"
};

static const nu_udb_t V2F9FE = {
	0x2F9FE,
	"\xE9\xA0\x8B"
};

static const nu_udb_t V2F9FF = {
	0x2F9FF,
	"\xE9\xA0\x8B"
};

static const nu_udb_t V00959 = {
	0x00959,
	"\xE0\xA4\x96\xE0\xA4\xBC"
};

static const nu_udb_t V00958 = {
	0x00958,
	"\xE0\xA4\x95\xE0\xA4\xBC"
};

static const nu_udb_t V0095B = {
	0x0095B,
	"\xE0\xA4\x9C\xE0\xA4\xBC"
};

static const nu_udb_t V0095A = {
	0x0095A,
	"\xE0\xA4\x97\xE0\xA4\xBC"
};

static const nu_udb_t V0095D = {
	0x0095D,
	"\xE0\xA4\xA2\xE0\xA4\xBC"
};

static const nu_udb_t V2F9C1 = {
	0x2F9C1,
	"\xE8\xA0\x81"
};

static const nu_udb_t V0095F = {
	0x0095F,
	"\xE0\xA4\xAF\xE0\xA4\xBC"
};

static const nu_udb_t V0095E = {
	0x0095E,
	"\xE0\xA4\xAB\xE0\xA4\xBC"
};

static const nu_udb_t V01E1D = {
	0x01E1D,
	"\x65\xCC\xA7\xCC\x86"
};

static const nu_udb_t V01E18 = {
	0x01E18,
	"\x45\xCC\xAD"
};

static const nu_udb_t V2F9CA = {
	0x2F9CA,
	"\xE3\x92\xBB"
};

static const nu_udb_t V001F4 = {
	0x001F4,
	"\x47\xCC\x81"
};

static const nu_udb_t V01E4D = {
	0x01E4D,
	"\x6F\xCC\x83\xCC\x81"
};

static const nu_udb_t V0FF0F = {
	0x0FF0F,
	"\x2F"
};

static const nu_udb_t V01E19 = {
	0x01E19,
	"\x65\xCC\xAD"
};

static const nu_udb_t V01E1B = {
	0x01E1B,
	"\x65\xCC\xB0"
};

static const nu_udb_t V01E15 = {
	0x01E15,
	"\x65\xCC\x84\xCC\x80"
};

static const nu_udb_t V01E16 = {
	0x01E16,
	"\x45\xCC\x84\xCC\x81"
};

static const nu_udb_t V01E17 = {
	0x01E17,
	"\x65\xCC\x84\xCC\x81"
};

static const nu_udb_t V01E13 = {
	0x01E13,
	"\x64\xCC\xAD"
};

static const nu_udb_t V02ECE = {
	0x02ECE,
	"\xE8\xBE\xB6"
};

static const nu_udb_t V01E0E = {
	0x01E0E,
	"\x44\xCC\xB1"
};

static const nu_udb_t V02ECC = {
	0x02ECC,
	"\xE8\xBE\xB6"
};

static const nu_udb_t V01E08 = {
	0x01E08,
	"\x43\xCC\xA7\xCC\x81"
};

static const nu_udb_t V02ED2 = {
	0x02ED2,
	"\xE9\x95\xB8"
};

static const nu_udb_t V01E0A = {
	0x01E0A,
	"\x44\xCC\x87"
};

static const nu_udb_t V01E04 = {
	0x01E04,
	"\x42\xCC\xA3"
};

static const nu_udb_t V02DE7 = {
	0x02DE7,
	"\xD0\xBB"
};

static const nu_udb_t V02DE0 = {
	0x02DE0,
	"\xD0\xB1"
};

static const nu_udb_t V0FF3F = {
	0x0FF3F,
	"\x5F"
};

static const nu_udb_t V01E05 = {
	0x01E05,
	"\x62\xCC\xA3"
};

static const nu_udb_t V02DE3 = {
	0x02DE3,
	"\xD0\xB4"
};

static const nu_udb_t V0FFE6 = {
	0x0FFE6,
	"\xE2\x82\xA9"
};

static const nu_udb_t V01E07 = {
	0x01E07,
	"\x62\xCC\xB1"
};

static const nu_udb_t V0FF87 = {
	0x0FF87,
	"\xE3\x83\x8C"
};

static const nu_udb_t V01E01 = {
	0x01E01,
	"\x61\xCC\xA5"
};

static const nu_udb_t V01E02 = {
	0x01E02,
	"\x42\xCC\x87"
};

static const nu_udb_t V01E03 = {
	0x01E03,
	"\x62\xCC\x87"
};

static const nu_udb_t V001D3 = {
	0x001D3,
	"\x55\xCC\x8C"
};

static const nu_udb_t V01E7C = {
	0x01E7C,
	"\x56\xCC\x83"
};

static const nu_udb_t V001D1 = {
	0x001D1,
	"\x4F\xCC\x8C"
};

static const nu_udb_t V001D6 = {
	0x001D6,
	"\x75\xCC\x88\xCC\x84"
};

static const nu_udb_t V2F946 = {
	0x2F946,
	"\xE7\x9C\x9F"
};

static const nu_udb_t V001D4 = {
	0x001D4,
	"\x75\xCC\x8C"
};

static const nu_udb_t V2F940 = {
	0x2F940,
	"\xE7\x9B\xB4"
};

static const nu_udb_t V0FF2F = {
	0x0FF2F,
	"\x4F"
};

static const nu_udb_t V01E7D = {
	0x01E7D,
	"\x76\xCC\x83"
};

static const nu_udb_t V01E7E = {
	0x01E7E,
	"\x56\xCC\xA3"
};

static const nu_udb_t V01E7F = {
	0x01E7F,
	"\x76\xCC\xA3"
};

static const nu_udb_t V2F94D = {
	0x2F94D,
	"\xF0\xA5\x90\x9D"
};

static const nu_udb_t V0FF22 = {
	0x0FF22,
	"\x42"
};

static const nu_udb_t V0FF25 = {
	0x0FF25,
	"\x45"
};

static const nu_udb_t V01E78 = {
	0x01E78,
	"\x55\xCC\x83\xCC\x81"
};

static const nu_udb_t V01F33 = {
	0x01F33,
	"\xCE\xB9\xCC\x94\xCC\x80"
};

static const nu_udb_t V01E79 = {
	0x01E79,
	"\x75\xCC\x83\xCC\x81"
};

static const nu_udb_t V01E7A = {
	0x01E7A,
	"\x55\xCC\x84\xCC\x88"
};

static const nu_udb_t V01E7B = {
	0x01E7B,
	"\x75\xCC\x84\xCC\x88"
};

static const nu_udb_t V01F37 = {
	0x01F37,
	"\xCE\xB9\xCC\x94\xCD\x82"
};

static const nu_udb_t V01F36 = {
	0x01F36,
	"\xCE\xB9\xCC\x93\xCD\x82"
};

static const nu_udb_t V01F2C = {
	0x01F2C,
	"\xCE\x97\xCC\x93\xCC\x81"
};

static const nu_udb_t V01E74 = {
	0x01E74,
	"\x55\xCC\xB0"
};

static const nu_udb_t V00336 = {
	0x00336,
	""
};

static const nu_udb_t V01E75 = {
	0x01E75,
	"\x75\xCC\xB0"
};

static const nu_udb_t V0FFBA = {
	0x0FFBA,
	"\xE1\x84\x8E"
};

static const nu_udb_t V01E76 = {
	0x01E76,
	"\x55\xCC\xAD"
};

static const nu_udb_t V0033A = {
	0x0033A,
	""
};

static const nu_udb_t V01E87 = {
	0x01E87,
	"\x77\xCC\x87"
};

static const nu_udb_t V01E77 = {
	0x01E77,
	"\x75\xCC\xAD"
};

static const nu_udb_t V2F958 = {
	0x2F958,
	"\xE4\x84\xAF"
};

static const nu_udb_t V01E70 = {
	0x01E70,
	"\x54\xCC\xAD"
};

static const nu_udb_t V01E71 = {
	0x01E71,
	"\x74\xCC\xAD"
};

static const nu_udb_t V01E72 = {
	0x01E72,
	"\x55\xCC\xA4"
};

static const nu_udb_t V2F964 = {
	0x2F964,
	"\xE4\x88\xA7"
};

static const nu_udb_t V01F32 = {
	0x01F32,
	"\xCE\xB9\xCC\x93\xCC\x80"
};

static const nu_udb_t V00983 = {
	0x00983,
	"\xE0\xA4\x83"
};

static const nu_udb_t V00982 = {
	0x00982,
	"\xE0\xA4\x82"
};

static const nu_udb_t V2F960 = {
	0x2F960,
	"\xE4\x88\x82"
};

static const nu_udb_t V01E73 = {
	0x01E73,
	"\x75\xCC\xA4"
};

static const nu_udb_t V01E6C = {
	0x01E6C,
	"\x54\xCC\xA3"
};

static const nu_udb_t V01E6D = {
	0x01E6D,
	"\x74\xCC\xA3"
};

static const nu_udb_t V01E6E = {
	0x01E6E,
	"\x54\xCC\xB1"
};

static const nu_udb_t V0FF43 = {
	0x0FF43,
	"\x63"
};

static const nu_udb_t V01E6F = {
	0x01E6F,
	"\x74\xCC\xB1"
};

static const nu_udb_t V01E68 = {
	0x01E68,
	"\x53\xCC\xA3\xCC\x87"
};

static const nu_udb_t V01F50 = {
	0x01F50,
	"\xCF\x85\xCC\x93"
};

static const nu_udb_t V01E69 = {
	0x01E69,
	"\x73\xCC\xA3\xCC\x87"
};

static const nu_udb_t V01E64 = {
	0x01E64,
	"\x53\xCC\x81\xCC\x87"
};

static const nu_udb_t V01F55 = {
	0x01F55,
	"\xCF\x85\xCC\x94\xCC\x81"
};

static const nu_udb_t V01F54 = {
	0x01F54,
	"\xCF\x85\xCC\x93\xCC\x81"
};

static const nu_udb_t V2F975 = {
	0x2F975,
	"\xF0\xA6\x8B\x99"
};

static const nu_udb_t V2F976 = {
	0x2F976,
	"\xE7\xBD\xBA"
};

static const nu_udb_t V01F59 = {
	0x01F59,
	"\xCE\xA5\xCC\x94"
};

static const nu_udb_t V01FBE = {
	0x01FBE,
	"\xCE\xB9"
};

static const nu_udb_t V01EE2 = {
	0x01EE2,
	"\x4F\xCC\x9B\xCC\xA3"
};

static const nu_udb_t V2F972 = {
	0x2F972,
	"\xF0\xA6\x88\xA8"
};

static const nu_udb_t V01FC8 = {
	0x01FC8,
	"\xCE\x95\xCC\x80"
};

static const nu_udb_t V01EE1 = {
	0x01EE1,
	"\x6F\xCC\x9B\xCC\x83"
};

static const nu_udb_t V01E65 = {
	0x01E65,
	"\x73\xCC\x81\xCC\x87"
};

static const nu_udb_t V0FF72 = {
	0x0FF72,
	"\xE3\x82\xA4"
};

static const nu_udb_t V01EE4 = {
	0x01EE4,
	"\x55\xCC\xA3"
};

static const nu_udb_t V2F978 = {
	0x2F978,
	"\xE7\xBE\x95"
};

static const nu_udb_t V009BC = {
	0x009BC,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V01F42 = {
	0x01F42,
	"\xCE\xBF\xCC\x93\xCC\x80"
};

static const nu_udb_t V01E66 = {
	0x01E66,
	"\x53\xCC\x8C\xCC\x87"
};

static const nu_udb_t V00929 = {
	0x00929,
	"\xE0\xA4\xA8\xE0\xA4\xBC"
};

static const nu_udb_t V2F905 = {
	0x2F905,
	"\xE6\xB6\x85"
};

static const nu_udb_t V01E67 = {
	0x01E67,
	"\x73\xCC\x8C\xCC\x87"
};

static const nu_udb_t V01EEC = {
	0x01EEC,
	"\x55\xCC\x9B\xCC\x89"
};

static const nu_udb_t V01EED = {
	0x01EED,
	"\x75\xCC\x9B\xCC\x89"
};

static const nu_udb_t V01F4B = {
	0x01F4B,
	"\xCE\x9F\xCC\x94\xCC\x80"
};

static const nu_udb_t V01F4A = {
	0x01F4A,
	"\xCE\x9F\xCC\x93\xCC\x80"
};

static const nu_udb_t V01E60 = {
	0x01E60,
	"\x53\xCC\x87"
};

static const nu_udb_t V000CA = {
	0x000CA,
	"\x45\xCC\x82"
};

static const nu_udb_t V01EF6 = {
	0x01EF6,
	"\x59\xCC\x89"
};

static const nu_udb_t V01EF7 = {
	0x01EF7,
	"\x79\xCC\x89"
};

static const nu_udb_t V01EF4 = {
	0x01EF4,
	"\x59\xCC\xA3"
};

static const nu_udb_t V01EF5 = {
	0x01EF5,
	"\x79\xCC\xA3"
};

static const nu_udb_t V0030E = {
	0x0030E,
	""
};

static const nu_udb_t V01EFB = {
	0x01EFB,
	"\x6C\x6C"
};

static const nu_udb_t V01EF8 = {
	0x01EF8,
	"\x59\xCC\x83"
};

static const nu_udb_t V01EF9 = {
	0x01EF9,
	"\x79\xCC\x83"
};

static const nu_udb_t V031AF = {
	0x031AF,
	"\xE3\x84\xA0"
};

static const nu_udb_t V01E61 = {
	0x01E61,
	"\x73\xCC\x87"
};

static const nu_udb_t V01E5C = {
	0x01E5C,
	"\x52\xCC\xA3\xCC\x84"
};

static const nu_udb_t V01F9E = {
	0x01F9E,
	"\xCE\x97\xCC\x93\xCD\x82\xCD\x85"
};

static const nu_udb_t V01E5D = {
	0x01E5D,
	"\x72\xCC\xA3\xCC\x84"
};

static const nu_udb_t V01FEF = {
	0x01FEF,
	"\x60"
};

static const nu_udb_t V01E5E = {
	0x01E5E,
	"\x52\xCC\xB1"
};

static const nu_udb_t V01FE9 = {
	0x01FE9,
	"\xCE\xA5\xCC\x84"
};

static const nu_udb_t V0F9BA = {
	0x0F9BA,
	"\xE4\xBA\x86"
};

static const nu_udb_t V01F98 = {
	0x01F98,
	"\xCE\x97\xCC\x93\xCD\x85"
};

static const nu_udb_t V01E5F = {
	0x01E5F,
	"\x72\xCC\xB1"
};

static const nu_udb_t V01E58 = {
	0x01E58,
	"\x52\xCC\x87"
};

static const nu_udb_t V01E5A = {
	0x01E5A,
	"\x52\xCC\xA3"
};

static const nu_udb_t V009DF = {
	0x009DF,
	"\xE0\xA6\xAF\xE0\xA4\xBC"
};

static const nu_udb_t V01E5B = {
	0x01E5B,
	"\x72\xCC\xA3"
};

static const nu_udb_t V01EC9 = {
	0x01EC9,
	"\x69\xCC\x89"
};

static const nu_udb_t V01ECE = {
	0x01ECE,
	"\x4F\xCC\x89"
};

static const nu_udb_t V01E54 = {
	0x01E54,
	"\x50\xCC\x81"
};

static const nu_udb_t V01ECC = {
	0x01ECC,
	"\x4F\xCC\xA3"
};

static const nu_udb_t V01ECD = {
	0x01ECD,
	"\x6F\xCC\xA3"
};

static const nu_udb_t V01ED2 = {
	0x01ED2,
	"\x4F\xCC\x82\xCC\x80"
};

static const nu_udb_t V01ED3 = {
	0x01ED3,
	"\x6F\xCC\x82\xCC\x80"
};

static const nu_udb_t V01ED0 = {
	0x01ED0,
	"\x4F\xCC\x82\xCC\x81"
};

static const nu_udb_t V01ED1 = {
	0x01ED1,
	"\x6F\xCC\x82\xCC\x81"
};

static const nu_udb_t V01ED6 = {
	0x01ED6,
	"\x4F\xCC\x82\xCC\x83"
};

static const nu_udb_t V01ED7 = {
	0x01ED7,
	"\x6F\xCC\x82\xCC\x83"
};

static const nu_udb_t V01F91 = {
	0x01F91,
	"\xCE\xB7\xCC\x94\xCD\x85"
};

static const nu_udb_t V01E55 = {
	0x01E55,
	"\x70\xCC\x81"
};

static const nu_udb_t V01EDA = {
	0x01EDA,
	"\x4F\xCC\x9B\xCC\x81"
};

static const nu_udb_t V000E0 = {
	0x000E0,
	"\x61\xCC\x80"
};

static const nu_udb_t V01ED8 = {
	0x01ED8,
	"\x4F\xCC\xA3\xCC\x82"
};

static const nu_udb_t V01E56 = {
	0x01E56,
	"\x50\xCC\x87"
};

static const nu_udb_t V01EDE = {
	0x01EDE,
	"\x4F\xCC\x9B\xCC\x89"
};

static const nu_udb_t V01EDF = {
	0x01EDF,
	"\x6F\xCC\x9B\xCC\x89"
};

static const nu_udb_t V01E57 = {
	0x01E57,
	"\x70\xCC\x87"
};

static const nu_udb_t V01EDD = {
	0x01EDD,
	"\x6F\xCC\x9B\xCC\x80"
};

static const nu_udb_t V00356 = {
	0x00356,
	""
};

static const nu_udb_t V01F9A = {
	0x01F9A,
	"\xCE\x97\xCC\x93\xCC\x80\xCD\x85"
};

static const nu_udb_t V01E50 = {
	0x01E50,
	"\x4F\xCC\x84\xCC\x80"
};

static const nu_udb_t V01E51 = {
	0x01E51,
	"\x6F\xCC\x84\xCC\x80"
};

static const nu_udb_t V0035A = {
	0x0035A,
	""
};

static const nu_udb_t V01E52 = {
	0x01E52,
	"\x4F\xCC\x84\xCC\x81"
};

static const nu_udb_t V01F81 = {
	0x01F81,
	"\xCE\xB1\xCC\x94\xCD\x85"
};

static const nu_udb_t V01E53 = {
	0x01E53,
	"\x6F\xCC\x84\xCC\x81"
};

static const nu_udb_t V0F9B2 = {
	0x0F9B2,
	"\xE9\x9B\xB6"
};

static const nu_udb_t V11002 = {
	0x11002,
	"\xE0\xA4\x83"
};

static const nu_udb_t V01F85 = {
	0x01F85,
	"\xCE\xB1\xCC\x94\xCC\x81\xCD\x85"
};

static const nu_udb_t V11000 = {
	0x11000,
	"\xE0\xA4\x81"
};

static const nu_udb_t V11001 = {
	0x11001,
	"\xE0\xA4\x82"
};

static const nu_udb_t V01F86 = {
	0x01F86,
	"\xCE\xB1\xCC\x93\xCD\x82\xCD\x85"
};

static const nu_udb_t V01E4C = {
	0x01E4C,
	"\x4F\xCC\x83\xCC\x81"
};

static const nu_udb_t V01F88 = {
	0x01F88,
	"\xCE\x91\xCC\x93\xCD\x85"
};

static const nu_udb_t V01F8B = {
	0x01F8B,
	"\xCE\x91\xCC\x94\xCC\x80\xCD\x85"
};

static const nu_udb_t V01F8A = {
	0x01F8A,
	"\xCE\x91\xCC\x93\xCC\x80\xCD\x85"
};

static const nu_udb_t V2F9C3 = {
	0x2F9C3,
	"\xE8\xA1\xA0"
};

static const nu_udb_t V01F8C = {
	0x01F8C,
	"\xCE\x91\xCC\x93\xCC\x81\xCD\x85"
};

static const nu_udb_t V01F8F = {
	0x01F8F,
	"\xCE\x91\xCC\x94\xCD\x82\xCD\x85"
};

static const nu_udb_t V01F8E = {
	0x01F8E,
	"\xCE\x91\xCC\x93\xCD\x82\xCD\x85"
};

static const nu_udb_t V01E4F = {
	0x01E4F,
	"\x6F\xCC\x83\xCC\x88"
};

static const nu_udb_t V01E48 = {
	0x01E48,
	"\x4E\xCC\xB1"
};

static const nu_udb_t V01FB3 = {
	0x01FB3,
	"\xCE\xB1\xCD\x85"
};

static const nu_udb_t V0034D = {
	0x0034D,
	""
};

static const nu_udb_t V0A733 = {
	0x0A733,
	"\x61\x61"
};

static const nu_udb_t V0A732 = {
	0x0A732,
	"\x41\x41"
};

static const nu_udb_t V0A735 = {
	0x0A735,
	"\x61\x6F"
};

static const nu_udb_t V2F9D6 = {
	0x2F9D6,
	"\xE8\xB4\x9B"
};

static const nu_udb_t V0A737 = {
	0x0A737,
	"\x61\x75"
};

static const nu_udb_t V0A736 = {
	0x0A736,
	"\x41\x55"
};

static const nu_udb_t V0A739 = {
	0x0A739,
	"\x61\x76"
};

static const nu_udb_t V0F98B = {
	0x0F98B,
	"\xE6\x9B\x86"
};

static const nu_udb_t V0A73B = {
	0x0A73B,
	"\x61\x76"
};

static const nu_udb_t V02DF7 = {
	0x02DF7,
	"\xD0\xB5"
};

static const nu_udb_t V0A73D = {
	0x0A73D,
	"\x61\x79"
};

static const nu_udb_t V0A73C = {
	0x0A73C,
	"\x41\x59"
};

static const nu_udb_t V2F9DF = {
	0x2F9DF,
	"\xE8\xBC\xB8"
};

static const nu_udb_t V01E4A = {
	0x01E4A,
	"\x4E\xCC\xAD"
};

static const nu_udb_t V01E4B = {
	0x01E4B,
	"\x6E\xCC\xAD"
};

static const nu_udb_t V02DF9 = {
	0x02DF9,
	"\xEA\x99\x8B"
};

static const nu_udb_t V02DFE = {
	0x02DFE,
	"\xD1\xAB"
};

static const nu_udb_t V01E47 = {
	0x01E47,
	"\x6E\xCC\xA3"
};

static const nu_udb_t V2F9E5 = {
	0x2F9E5,
	"\xF0\xA8\x9C\xAE"
};

static const nu_udb_t V01E40 = {
	0x01E40,
	"\x4D\xCC\x87"
};

static const nu_udb_t V01FBC = {
	0x01FBC,
	"\xCE\x91\xCD\x85"
};

static const nu_udb_t V01FBD = {
	0x01FBD,
	"\xE1\xBE\xBF"
};

static const nu_udb_t V0A729 = {
	0x0A729,
	"\x74\x7A"
};

static const nu_udb_t V01E43 = {
	0x01E43,
	"\x6D\xCC\xA3"
};

static const nu_udb_t V01FB8 = {
	0x01FB8,
	"\xCE\x91\xCC\x86"
};

static const nu_udb_t V01EBC = {
	0x01EBC,
	"\x45\xCC\x83"
};

static const nu_udb_t V01EBD = {
	0x01EBD,
	"\x65\xCC\x83"
};

static const nu_udb_t V01EBE = {
	0x01EBE,
	"\x45\xCC\x82\xCC\x81"
};

static const nu_udb_t V2F9EF = {
	0x2F9EF,
	"\xE4\xA6\x95"
};

static const nu_udb_t V01FD0 = {
	0x01FD0,
	"\xCE\xB9\xCC\x86"
};

static const nu_udb_t V01FD3 = {
	0x01FD3,
	"\xCE\xB9\xCC\x88\xCC\x81"
};

static const nu_udb_t V01FD2 = {
	0x01FD2,
	"\xCE\xB9\xCC\x88\xCC\x80"
};

static const nu_udb_t V003AC = {
	0x003AC,
	"\xCE\xB1\xCC\x81"
};

static const nu_udb_t V01EBF = {
	0x01EBF,
	"\x65\xCC\x82\xCC\x81"
};

static const nu_udb_t V01FD7 = {
	0x01FD7,
	"\xCE\xB9\xCC\x88\xCD\x82"
};

static const nu_udb_t V01FD6 = {
	0x01FD6,
	"\xCE\xB9\xCD\x82"
};

static const nu_udb_t V01FD9 = {
	0x01FD9,
	"\xCE\x99\xCC\x84"
};

static const nu_udb_t V01FD8 = {
	0x01FD8,
	"\xCE\x99\xCC\x86"
};

static const nu_udb_t V01FDB = {
	0x01FDB,
	"\xCE\x99\xCC\x81"
};

static const nu_udb_t V01FDA = {
	0x01FDA,
	"\xCE\x99\xCC\x80"
};

static const nu_udb_t V01FDD = {
	0x01FDD,
	"\xE1\xBF\xBE\xCC\x80"
};

static const nu_udb_t V01EB8 = {
	0x01EB8,
	"\x45\xCC\xA3"
};

static const nu_udb_t V01FDF = {
	0x01FDF,
	"\xE1\xBF\xBE\xCD\x82"
};

static const nu_udb_t V00D83 = {
	0x00D83,
	"\xE0\xA4\x83"
};

static const nu_udb_t V01FC1 = {
	0x01FC1,
	"\xC2\xA8\xCD\x82"
};

static const nu_udb_t V01EB9 = {
	0x01EB9,
	"\x65\xCC\xA3"
};

static const nu_udb_t V01FC3 = {
	0x01FC3,
	"\xCE\xB7\xCD\x85"
};

static const nu_udb_t V01FC2 = {
	0x01FC2,
	"\xCE\xB7\xCC\x80\xCD\x85"
};

static const nu_udb_t V01EBA = {
	0x01EBA,
	"\x45\xCC\x89"
};

static const nu_udb_t V01FC4 = {
	0x01FC4,
	"\xCE\xB7\xCC\x81\xCD\x85"
};

static const nu_udb_t V2F984 = {
	0x2F984,
	"\xE4\x90\x8B"
};

static const nu_udb_t V01EBB = {
	0x01EBB,
	"\x65\xCC\x89"
};

static const nu_udb_t V01FC9 = {
	0x01FC9,
	"\xCE\x95\xCC\x81"
};

static const nu_udb_t V030C0 = {
	0x030C0,
	"\xE3\x82\xBF\xE3\x82\x99"
};

static const nu_udb_t V01FCB = {
	0x01FCB,
	"\xCE\x97\xCC\x81"
};

static const nu_udb_t V01FCA = {
	0x01FCA,
	"\xCE\x97\xCC\x80"
};

static const nu_udb_t V01FCD = {
	0x01FCD,
	"\xE1\xBE\xBF\xCC\x80"
};

static const nu_udb_t V01FCC = {
	0x01FCC,
	"\xCE\x97\xCD\x85"
};

static const nu_udb_t V01EB4 = {
	0x01EB4,
	"\x41\xCC\x86\xCC\x83"
};

static const nu_udb_t V01FCE = {
	0x01FCE,
	"\xE1\xBE\xBF\xCC\x81"
};

static const nu_udb_t V00388 = {
	0x00388,
	"\xCE\x95\xCC\x81"
};

static const nu_udb_t V0A74E = {
	0x0A74E,
	"\x4F\x4F"
};

static const nu_udb_t V0038E = {
	0x0038E,
	"\xCE\xA5\xCC\x81"
};

static const nu_udb_t V01FF2 = {
	0x01FF2,
	"\xCF\x89\xCC\x80\xCD\x85"
};

static const nu_udb_t V10C1D = {
	0x10C1D,
	"\xF0\x90\xB0\x9C"
};

static const nu_udb_t V01FF4 = {
	0x01FF4,
	"\xCF\x89\xCC\x81\xCD\x85"
};

static const nu_udb_t V01EB5 = {
	0x01EB5,
	"\x61\xCC\x86\xCC\x83"
};

static const nu_udb_t V01EB6 = {
	0x01EB6,
	"\x41\xCC\xA3\xCC\x86"
};

static const nu_udb_t V01FF9 = {
	0x01FF9,
	"\xCE\x9F\xCC\x81"
};

static const nu_udb_t V01FF8 = {
	0x01FF8,
	"\xCE\x9F\xCC\x80"
};

static const nu_udb_t V2F991 = {
	0x2F991,
	"\xE8\x8A\x9D"
};

static const nu_udb_t V01FFA = {
	0x01FFA,
	"\xCE\xA9\xCC\x80"
};

static const nu_udb_t V0A77B = {
	0x0A77B,
	"\x46"
};

static const nu_udb_t V0A77A = {
	0x0A77A,
	"\x64"
};

static const nu_udb_t V02329 = {
	0x02329,
	"\xE3\x80\x88"
};

static const nu_udb_t V01EB7 = {
	0x01EB7,
	"\x61\xCC\xA3\xCC\x86"
};

static const nu_udb_t V2F99F = {
	0x2F99F,
	"\xE8\x91\x97"
};

static const nu_udb_t V0232A = {
	0x0232A,
	"\xE3\x80\x89"
};

static const nu_udb_t V01FE3 = {
	0x01FE3,
	"\xCF\x85\xCC\x88\xCC\x81"
};

static const nu_udb_t V0A760 = {
	0x0A760,
	"\x56\x59"
};

static const nu_udb_t V01FE5 = {
	0x01FE5,
	"\xCF\x81\xCC\x94"
};

static const nu_udb_t V01FE4 = {
	0x01FE4,
	"\xCF\x81\xCC\x93"
};

static const nu_udb_t V01FE7 = {
	0x01FE7,
	"\xCF\x85\xCC\x88\xCD\x82"
};

static const nu_udb_t V01FE6 = {
	0x01FE6,
	"\xCF\x85\xCD\x82"
};

static const nu_udb_t V01EB0 = {
	0x01EB0,
	"\x41\xCC\x86\xCC\x80"
};

static const nu_udb_t V01FE8 = {
	0x01FE8,
	"\xCE\xA5\xCC\x86"
};

static const nu_udb_t V01FEB = {
	0x01FEB,
	"\xCE\xA5\xCC\x81"
};

static const nu_udb_t V01FEA = {
	0x01FEA,
	"\xCE\xA5\xCC\x80"
};

static const nu_udb_t V01EB1 = {
	0x01EB1,
	"\x61\xCC\x86\xCC\x80"
};

static const nu_udb_t V01FEC = {
	0x01FEC,
	"\xCE\xA1\xCC\x94"
};

static const nu_udb_t V01EB2 = {
	0x01EB2,
	"\x41\xCC\x86\xCC\x89"
};

static const nu_udb_t V01FEE = {
	0x01FEE,
	"\xC2\xA8\xCC\x81"
};

static const nu_udb_t V01EB3 = {
	0x01EB3,
	"\x61\xCC\x86\xCC\x89"
};

static const nu_udb_t V02E9D = {
	0x02E9D,
	"\xE6\x9C\x88"
};

static const nu_udb_t V2F9A9 = {
	0x2F9A9,
	"\xE8\x93\xB3"
};

static const nu_udb_t V2F9AA = {
	0x2F9AA,
	"\xE8\x94\x96"
};

static const nu_udb_t V02E98 = {
	0x02E98,
	"\xE6\x89\x8C"
};

static const nu_udb_t V01EAC = {
	0x01EAC,
	"\x41\xCC\xA3\xCC\x82"
};

static const nu_udb_t V01EAD = {
	0x01EAD,
	"\x61\xCC\xA3\xCC\x82"
};

static const nu_udb_t V01EAE = {
	0x01EAE,
	"\x41\xCC\x86\xCC\x81"
};

static const nu_udb_t V01EAF = {
	0x01EAF,
	"\x61\xCC\x86\xCC\x81"
};

static const nu_udb_t V01EA8 = {
	0x01EA8,
	"\x41\xCC\x82\xCC\x89"
};

static const nu_udb_t V01EA9 = {
	0x01EA9,
	"\x61\xCC\x82\xCC\x89"
};

static const nu_udb_t V2F9B2 = {
	0x2F9B2,
	"\xE4\x95\xAB"
};

static const nu_udb_t V2F9B3 = {
	0x2F9B3,
	"\xE8\x99\x90"
};

static const nu_udb_t V02EA1 = {
	0x02EA1,
	"\xE6\xB0\xB5"
};

static const nu_udb_t V02EA2 = {
	0x02EA2,
	"\xE6\xB0\xBA"
};

static const nu_udb_t V01DE0 = {
	0x01DE0,
	"\x6E"
};

static const nu_udb_t V01DE1 = {
	0x01DE1,
	"\xC9\xB4"
};

static const nu_udb_t V01DE6 = {
	0x01DE6,
	"\x7A"
};

static const nu_udb_t V01EAA = {
	0x01EAA,
	"\x41\xCC\x82\xCC\x83"
};

static const nu_udb_t V01EAB = {
	0x01EAB,
	"\x61\xCC\x82\xCC\x83"
};

static const nu_udb_t V0A783 = {
	0x0A783,
	"\x72"
};

static const nu_udb_t V0A782 = {
	0x0A782,
	"\x52"
};

static const nu_udb_t V0A785 = {
	0x0A785,
	"\x73"
};

static const nu_udb_t V0A784 = {
	0x0A784,
	"\x53"
};

static const nu_udb_t V0A787 = {
	0x0A787,
	"\x74"
};

static const nu_udb_t V01EA4 = {
	0x01EA4,
	"\x41\xCC\x82\xCC\x81"
};

static const nu_udb_t V01EA5 = {
	0x01EA5,
	"\x61\xCC\x82\xCC\x81"
};

static const nu_udb_t V01EA6 = {
	0x01EA6,
	"\x41\xCC\x82\xCC\x80"
};

static const nu_udb_t V01EA7 = {
	0x01EA7,
	"\x61\xCC\x82\xCC\x80"
};

static const nu_udb_t V01EA0 = {
	0x01EA0,
	"\x41\xCC\xA3"
};

static const nu_udb_t V01EA1 = {
	0x01EA1,
	"\x61\xCC\xA3"
};

static const nu_udb_t V01EA2 = {
	0x01EA2,
	"\x41\xCC\x89"
};

static const nu_udb_t V0F968 = {
	0x0F968,
	"\xE6\xB3\x8C"
};

static const nu_udb_t V1D161 = {
	0x1D161,
	"\xF0\x9D\x85\x98\xF0\x9D\x85\xA5\xF0\x9D\x85\xAF"
};

static const nu_udb_t V01EA3 = {
	0x01EA3,
	"\x61\xCC\x89"
};

static const nu_udb_t V01E9E = {
	0x01E9E,
	"\x53\x53"
};

static const nu_udb_t V2F911 = {
	0x2F911,
	"\xF0\xA3\xBE\x8E"
};

static const nu_udb_t V0040E = {
	0x0040E,
	"\xD0\xA3\xCC\x86"
};

static const nu_udb_t V2F913 = {
	0x2F913,
	"\xE7\x80\xB9"
};

static const nu_udb_t V2F912 = {
	0x2F912,
	"\xE6\xBF\x86"
};

static const nu_udb_t V01E98 = {
	0x01E98,
	"\x77\xCC\x8A"
};

static const nu_udb_t V01E99 = {
	0x01E99,
	"\x79\xCC\x8A"
};

static const nu_udb_t V01E9B = {
	0x01E9B,
	"\x73\xCC\x87"
};

static const nu_udb_t V01E94 = {
	0x01E94,
	"\x5A\xCC\xB1"
};

static const nu_udb_t V01DFD = {
	0x01DFD,
	""
};

static const nu_udb_t V01E95 = {
	0x01E95,
	"\x7A\xCC\xB1"
};

static const nu_udb_t V01E96 = {
	0x01E96,
	"\x68\xCC\xB1"
};

static const nu_udb_t V01E97 = {
	0x01E97,
	"\x74\xCC\x88"
};

static const nu_udb_t V01E90 = {
	0x01E90,
	"\x5A\xCC\x82"
};

static const nu_udb_t V01E91 = {
	0x01E91,
	"\x7A\xCC\x82"
};

static const nu_udb_t V0A7A1 = {
	0x0A7A1,
	"\x67"
};

static const nu_udb_t V0A7A0 = {
	0x0A7A0,
	"\x47"
};

static const nu_udb_t V0A7A3 = {
	0x0A7A3,
	"\x6B"
};

static const nu_udb_t V2F900 = {
	0x2F900,
	"\xE6\xB4\xBE"
};

static const nu_udb_t V2F903 = {
	0x2F903,
	"\xE6\xB5\xA9"
};

static const nu_udb_t V0A7A4 = {
	0x0A7A4,
	"\x4E"
};

static const nu_udb_t V0A7A7 = {
	0x0A7A7,
	"\x72"
};

static const nu_udb_t V0A7A6 = {
	0x0A7A6,
	"\x52"
};

static const nu_udb_t V0A7A9 = {
	0x0A7A9,
	"\x73"
};

static const nu_udb_t V0A7A8 = {
	0x0A7A8,
	"\x53"
};

static const nu_udb_t V2F909 = {
	0x2F909,
	"\xE6\xB9\xAE"
};

static const nu_udb_t V2F908 = {
	0x2F908,
	"\xE6\xB8\xAF"
};

static const nu_udb_t V01E92 = {
	0x01E92,
	"\x5A\xCC\xA3"
};

static const nu_udb_t V01DD0 = {
	0x01DD0,
	""
};

static const nu_udb_t V2F90D = {
	0x2F90D,
	"\xF0\xA3\xBB\x91"
};

static const nu_udb_t V01DD6 = {
	0x01DD6,
	"\x61\x76"
};

static const nu_udb_t V01DD7 = {
	0x01DD7,
	"\x63\xCC\xA7"
};

static const nu_udb_t V2F90E = {
	0x2F90E,
	"\xE6\xB7\xB9"
};

static const nu_udb_t V02DF8 = {
	0x02DF8,
	"\xEA\x99\x89"
};

static const nu_udb_t V02DFB = {
	0x02DFB,
	"\xD1\x8E"
};

static const nu_udb_t V01DDB = {
	0x01DDB,
	"\xC9\xA2"
};

static const nu_udb_t V01DD8 = {
	0x01DD8,
	"\x64"
};

static const nu_udb_t V02DFC = {
	0x02DFC,
	"\xEA\x99\x97"
};

static const nu_udb_t V02DFF = {
	0x02DFF,
	"\xD1\xAD"
};

static const nu_udb_t V01E93 = {
	0x01E93,
	"\x7A\xCC\xA3"
};

static const nu_udb_t V01E8C = {
	0x01E8C,
	"\x58\xCC\x88"
};

static const nu_udb_t V01DDD = {
	0x01DDD,
	"\x6C"
};

static const nu_udb_t V2F938 = {
	0x2F938,
	"\xE7\x95\xB0"
};

static const nu_udb_t V01E8D = {
	0x01E8D,
	"\x78\xCC\x88"
};

static const nu_udb_t V02DE5 = {
	0x02DE5,
	"\xD0\xB7"
};

static const nu_udb_t V01E8E = {
	0x01E8E,
	"\x59\xCC\x87"
};

static const nu_udb_t V0F959 = {
	0x0F959,
	"\xE9\x99\xB5"
};

static const nu_udb_t V01E8F = {
	0x01E8F,
	"\x79\xCC\x87"
};

static const nu_udb_t V01E88 = {
	0x01E88,
	"\x57\xCC\xA3"
};

static const nu_udb_t V2F921 = {
	0x2F921,
	"\xE7\x88\xB5"
};

static const nu_udb_t V2F920 = {
	0x2F920,
	"\xE7\x88\xA8"
};

static const nu_udb_t V01E89 = {
	0x01E89,
	"\x77\xCC\xA3"
};

static const nu_udb_t V02DED = {
	0x02DED,
	"\xD1\x81"
};

static const nu_udb_t V01E8A = {
	0x01E8A,
	"\x58\xCC\x87"
};

static const nu_udb_t V01E8B = {
	0x01E8B,
	"\x78\xCC\x87"
};

static const nu_udb_t V02DEE = {
	0x02DEE,
	"\xD1\x82"
};

static const nu_udb_t V01E84 = {
	0x01E84,
	"\x57\xCC\x88"
};

static const nu_udb_t V01E85 = {
	0x01E85,
	"\x77\xCC\x88"
};

static const nu_udb_t V01E80 = {
	0x01E80,
	"\x57\xCC\x80"
};

static const nu_udb_t V01E81 = {
	0x01E81,
	"\x77\xCC\x80"
};

static const nu_udb_t V01E82 = {
	0x01E82,
	"\x57\xCC\x81"
};

static const nu_udb_t V01E83 = {
	0x01E83,
	"\x77\xCC\x81"
};

static const nu_udb_t V1112E = {
	0x1112E,
	"\xF0\x91\x84\xB1\xF0\x91\x84\xA7"
};

static const nu_udb_t V1112F = {
	0x1112F,
	"\xF0\x91\x84\xB2\xF0\x91\x84\xA7"
};

static const nu_udb_t V00230 = {
	0x00230,
	"\x4F\xCC\x87\xCC\x84"
};

static const nu_udb_t V2F951 = {
	0x2F951,
	"\xE4\x83\xA3"
};

static const nu_udb_t V2F950 = {
	0x2F950,
	"\xE7\xA3\x8C"
};

static const nu_udb_t V2F953 = {
	0x2F953,
	"\xE7\xA5\x96"
};

static const nu_udb_t V00231 = {
	0x00231,
	"\x6F\xCC\x87\xCC\x84"
};

static const nu_udb_t V2F955 = {
	0x2F955,
	"\xF0\xA5\x9B\x85"
};

static const nu_udb_t V2F954 = {
	0x2F954,
	"\xF0\xA5\x9A\x9A"
};

static const nu_udb_t V2F957 = {
	0x2F957,
	"\xE7\xA7\xAB"
};

static const nu_udb_t V2F956 = {
	0x2F956,
	"\xE7\xA6\x8F"
};

static const nu_udb_t V01EF2 = {
	0x01EF2,
	"\x59\xCC\x80"
};

static const nu_udb_t V01EF3 = {
	0x01EF3,
	"\x79\xCC\x80"
};

static const nu_udb_t V2F95B = {
	0x2F95B,
	"\xE7\xA9\x8F"
};

static const nu_udb_t V01EEE = {
	0x01EEE,
	"\x55\xCC\x9B\xCC\x83"
};

static const nu_udb_t V01EEF = {
	0x01EEF,
	"\x75\xCC\x9B\xCC\x83"
};

static const nu_udb_t V01EE8 = {
	0x01EE8,
	"\x55\xCC\x9B\xCC\x81"
};

static const nu_udb_t V2F95F = {
	0x2F95F,
	"\xE7\xAB\xAE"
};

static const nu_udb_t V2F95E = {
	0x2F95E,
	"\xF0\xA5\xAA\xA7"
};

static const nu_udb_t V01EE9 = {
	0x01EE9,
	"\x75\xCC\x9B\xCC\x81"
};

static const nu_udb_t V01EEA = {
	0x01EEA,
	"\x55\xCC\x9B\xCC\x80"
};

static const nu_udb_t V01EEB = {
	0x01EEB,
	"\x75\xCC\x9B\xCC\x80"
};

static const nu_udb_t V01ECA = {
	0x01ECA,
	"\x49\xCC\xA3"
};

static const nu_udb_t V01ECB = {
	0x01ECB,
	"\x69\xCC\xA3"
};

static const nu_udb_t V02011 = {
	0x02011,
	"\xE2\x80\x90"
};

static const nu_udb_t V01EC4 = {
	0x01EC4,
	"\x45\xCC\x82\xCC\x83"
};

static const nu_udb_t V01EC5 = {
	0x01EC5,
	"\x65\xCC\x82\xCC\x83"
};

static const nu_udb_t V2F949 = {
	0x2F949,
	"\xE4\x80\xB9"
};

static const nu_udb_t V2F948 = {
	0x2F948,
	"\xE7\x9D\x8A"
};

static const nu_udb_t V2F94B = {
	0x2F94B,
	"\xE4\x81\x86"
};

static const nu_udb_t V2F94A = {
	0x2F94A,
	"\xE7\x9E\x8B"
};

static const nu_udb_t V01EC6 = {
	0x01EC6,
	"\x45\xCC\xA3\xCC\x82"
};

static const nu_udb_t V2F94C = {
	0x2F94C,
	"\xE4\x82\x96"
};

static const nu_udb_t V0FB47 = {
	0x0FB47,
	"\xD7\xA7\xD6\xBC"
};

static const nu_udb_t V2F94E = {
	0x2F94E,
	"\xE7\xA1\x8E"
};

static const nu_udb_t V01EC7 = {
	0x01EC7,
	"\x65\xCC\xA3\xCC\x82"
};

static const nu_udb_t V01EC0 = {
	0x01EC0,
	"\x45\xCC\x82\xCC\x80"
};

static const nu_udb_t V00111 = {
	0x00111,
	"\x64\xCC\xB5"
};

static const nu_udb_t V00110 = {
	0x00110,
	"\x44\xCC\xB5"
};

static const nu_udb_t V00113 = {
	0x00113,
	"\x65\xCC\x84"
};

static const nu_udb_t V01EC1 = {
	0x01EC1,
	"\x65\xCC\x82\xCC\x80"
};

static const nu_udb_t V00115 = {
	0x00115,
	"\x65\xCC\x86"
};

static const nu_udb_t V00114 = {
	0x00114,
	"\x45\xCC\x86"
};

static const nu_udb_t V2F979 = {
	0x2F979,
	"\xE7\xBF\xBA"
};

static const nu_udb_t V00116 = {
	0x00116,
	"\x45\xCC\x87"
};

static const nu_udb_t V01EC2 = {
	0x01EC2,
	"\x45\xCC\x82\xCC\x89"
};

static const nu_udb_t V02007 = {
	0x02007,
	"\x20"
};

static const nu_udb_t V2F97D = {
	0x2F97D,
	"\xE8\x81\xA0"
};

static const nu_udb_t V01EC3 = {
	0x01EC3,
	"\x65\xCC\x82\xCC\x89"
};

static const nu_udb_t V0214D = {
	0x0214D,
	"\x41\x2F\x53"
};

static const nu_udb_t V2F97E = {
	0x2F97E,
	"\xF0\xA6\x96\xA8"
};

static const nu_udb_t V0011F = {
	0x0011F,
	"\x67\xCC\x86"
};

static const nu_udb_t V0011E = {
	0x0011E,
	"\x47\xCC\x86"
};

static const nu_udb_t V00101 = {
	0x00101,
	"\x61\xCC\x84"
};

static const nu_udb_t V00100 = {
	0x00100,
	"\x41\xCC\x84"
};

static const nu_udb_t V00103 = {
	0x00103,
	"\x61\xCC\x86"
};

static const nu_udb_t V00102 = {
	0x00102,
	"\x41\xCC\x86"
};

static const nu_udb_t V00105 = {
	0x00105,
	"\x61\xCC\xA8"
};

static const nu_udb_t V00104 = {
	0x00104,
	"\x41\xCC\xA8"
};

static const nu_udb_t V00107 = {
	0x00107,
	"\x63\xCC\x81"
};

static const nu_udb_t V00106 = {
	0x00106,
	"\x43\xCC\x81"
};

static const nu_udb_t V2F96B = {
	0x2F96B,
	"\xF0\xA5\xBE\x86"
};

static const nu_udb_t V2F96A = {
	0x2F96A,
	"\xE7\xB4\x80"
};

static const nu_udb_t V0010B = {
	0x0010B,
	"\x63\xCC\x87"
};

static const nu_udb_t V002A8 = {
	0x002A8,
	"\x74\xC9\x95"
};

static const nu_udb_t V2F96F = {
	0x2F96F,
	"\xE7\xB8\x82"
};

static const nu_udb_t V01CF1 = {
	0x01CF1,
	"\xE1\xB3\xA9"
};

static const nu_udb_t V0010F = {
	0x0010F,
	"\x64\xCC\x8C"
};

static const nu_udb_t V0010E = {
	0x0010E,
	"\x44\xCC\x8C"
};

static const nu_udb_t V01CF2 = {
	0x01CF2,
	"\xE0\xA4\x83"
};

static const nu_udb_t V00130 = {
	0x00130,
	"\x49\xCC\x87"
};

static const nu_udb_t V2F995 = {
	0x2F995,
	"\xE8\x8A\xBD"
};

static const nu_udb_t V002A9 = {
	0x002A9,
	"\x66\xC5\x8B"
};

static const nu_udb_t V002AA = {
	0x002AA,
	"\x6C\x73"
};

static const nu_udb_t V2F996 = {
	0x2F996,
	"\xE8\x8B\xA6"
};

static const nu_udb_t V2F999 = {
	0x2F999,
	"\xE8\x8C\x9D"
};

static const nu_udb_t V0045E = {
	0x0045E,
	"\xD1\x83\xCC\x86"
};

static const nu_udb_t V2F99B = {
	0x2F99B,
	"\xE8\x8E\xAD"
};

static const nu_udb_t V2F99A = {
	0x2F99A,
	"\xE8\x8D\xA3"
};

static const nu_udb_t V2F99D = {
	0x2F99D,
	"\xE8\x8E\xBD"
};

static const nu_udb_t V2F99C = {
	0x2F99C,
	"\xE8\x8C\xA3"
};

static const nu_udb_t V002AB = {
	0x002AB,
	"\x6C\x7A"
};

static const nu_udb_t V004F8 = {
	0x004F8,
	"\xD0\xAB\xCC\x88"
};

static const nu_udb_t V002A4 = {
	0x002A4,
	"\x64\xCA\x92"
};

static const nu_udb_t V002A5 = {
	0x002A5,
	"\x64\xCA\x91"
};

static const nu_udb_t V002A6 = {
	0x002A6,
	"\x74\x73"
};

static const nu_udb_t V2F982 = {
	0x2F982,
	"\xE8\x82\xB2"
};

static const nu_udb_t V002A7 = {
	0x002A7,
	"\x74\xCA\x83"
};

static const nu_udb_t V0219A = {
	0x0219A,
	"\xE2\x86\x90\xCC\xB8"
};

static const nu_udb_t V11181 = {
	0x11181,
	"\xE0\xA4\x82"
};

static const nu_udb_t V11182 = {
	0x11182,
	"\xE0\xA4\x83"
};

static const nu_udb_t V016C4 = {
	0x016C4,
	"\xE1\x9B\x83"
};

static const nu_udb_t V0A80B = {
	0x0A80B,
	"\xE0\xA4\x82"
};

static const nu_udb_t V2F98B = {
	0x2F98B,
	"\xE8\x88\x81"
};

static const nu_udb_t V2F98A = {
	0x2F98A,
	"\xF0\xA3\x8E\x9C"
};

static const nu_udb_t V2F98D = {
	0x2F98D,
	"\xE8\xBE\x9E"
};

static const nu_udb_t V0012A = {
	0x0012A,
	"\x49\xCC\x84"
};

static const nu_udb_t V01CEE = {
	0x01CEE,
	"\xE1\xB3\xA9"
};

static const nu_udb_t V031A3 = {
	0x031A3,
	"\xE3\x84\x8D"
};

static const nu_udb_t V031A2 = {
	0x031A2,
	"\xE3\x84\x90"
};

static const nu_udb_t V031A5 = {
	0x031A5,
	"\xE3\x86\xA4"
};

static const nu_udb_t V00151 = {
	0x00151,
	"\x6F\xCC\x8B"
};

static const nu_udb_t V00150 = {
	0x00150,
	"\x4F\xCC\x8B"
};

static const nu_udb_t V0FB3C = {
	0x0FB3C,
	"\xD7\x9C\xD6\xBC"
};

static const nu_udb_t V031A9 = {
	0x031A9,
	"\xE3\x84\x9A"
};

static const nu_udb_t V2F9B7 = {
	0x2F9B7,
	"\xE8\x9A\xA9"
};

static const nu_udb_t V2F9B6 = {
	0x2F9B6,
	"\xE8\x99\xA9"
};

static const nu_udb_t V031AA = {
	0x031AA,
	"\xE3\x84\xA7"
};

static const nu_udb_t V00156 = {
	0x00156,
	"\x52\xCC\xA7"
};

static const nu_udb_t V00159 = {
	0x00159,
	"\x72\xCC\x8C"
};

static const nu_udb_t V2F9BA = {
	0x2F9BA,
	"\xE8\x9B\xA2"
};

static const nu_udb_t V0015B = {
	0x0015B,
	"\x73\xCC\x81"
};

static const nu_udb_t V004DA = {
	0x004DA,
	"\xD3\x98\xCC\x88"
};

static const nu_udb_t V016BC = {
	0x016BC,
	"\xE1\x9A\xBA"
};

static const nu_udb_t V0015C = {
	0x0015C,
	"\x53\xCC\x82"
};

static const nu_udb_t V2F9A1 = {
	0x2F9A1,
	"\xE8\x8F\x8A"
};

static const nu_udb_t V2F9A0 = {
	0x2F9A0,
	"\xE8\x8D\x93"
};

static const nu_udb_t V2F9A3 = {
	0x2F9A3,
	"\xE8\x8F\x9C"
};

static const nu_udb_t V2F9A2 = {
	0x2F9A2,
	"\xE8\x8F\x8C"
};

static const nu_udb_t V0FB3E = {
	0x0FB3E,
	"\xD7\x9E\xD6\xBC"
};

static const nu_udb_t V00142 = {
	0x00142,
	"\x6C\xCC\xB5"
};

static const nu_udb_t V2F9A7 = {
	0x2F9A7,
	"\xE4\x94\xAB"
};

static const nu_udb_t V0FB38 = {
	0x0FB38,
	"\xD7\x98\xD6\xBC"
};

static const nu_udb_t V0FB39 = {
	0x0FB39,
	"\xD7\x99\xD6\xBC"
};

static const nu_udb_t V016A9 = {
	0x016A9,
	"\xE1\x9A\xA8"
};

static const nu_udb_t V0FB3B = {
	0x0FB3B,
	"\xD7\x9B\xD6\xBC"
};

static const nu_udb_t V0FB34 = {
	0x0FB34,
	"\xD7\x94\xD6\xBC"
};

static const nu_udb_t V2F9AD = {
	0x2F9AD,
	"\xF0\xA6\xBC\xAC"
};

static const nu_udb_t V00439 = {
	0x00439,
	"\xD0\xB8\xCC\x86"
};

static const nu_udb_t V0014D = {
	0x0014D,
	"\x6F\xCC\x84"
};

static const nu_udb_t V0014C = {
	0x0014C,
	"\x4F\xCC\x84"
};

static const nu_udb_t V0FB35 = {
	0x0FB35,
	"\xD7\x95\xD6\xBC"
};

static const nu_udb_t V2F9D0 = {
	0x2F9D0,
	"\xE8\xAB\xAD"
};

static const nu_udb_t V00171 = {
	0x00171,
	"\x75\xCC\x8B"
};

static const nu_udb_t V016E9 = {
	0x016E9,
	"\xE1\x9A\xB9"
};

static const nu_udb_t V2F9D5 = {
	0x2F9D5,
	"\xE8\xB3\x81"
};

static const nu_udb_t V00401 = {
	0x00401,
	"\xD0\x95\xCC\x88"
};

static const nu_udb_t V00175 = {
	0x00175,
	"\x77\xCC\x82"
};

static const nu_udb_t V00174 = {
	0x00174,
	"\x57\xCC\x82"
};

static const nu_udb_t V00177 = {
	0x00177,
	"\x79\xCC\x82"
};

static const nu_udb_t V01F43 = {
	0x01F43,
	"\xCE\xBF\xCC\x94\xCC\x80"
};

static const nu_udb_t V00179 = {
	0x00179,
	"\x5A\xCC\x81"
};

static const nu_udb_t V00178 = {
	0x00178,
	"\x59\xCC\x88"
};

static const nu_udb_t V0017B = {
	0x0017B,
	"\x5A\xCC\x87"
};

static const nu_udb_t V0017A = {
	0x0017A,
	"\x7A\xCC\x81"
};

static const nu_udb_t V0017D = {
	0x0017D,
	"\x5A\xCC\x8C"
};

static const nu_udb_t V0017C = {
	0x0017C,
	"\x7A\xCC\x87"
};

static const nu_udb_t V0017F = {
	0x0017F,
	"\x73"
};

static const nu_udb_t V0017E = {
	0x0017E,
	"\x7A\xCC\x8C"
};

static const nu_udb_t V01680 = {
	0x01680,
	"\x20"
};

static const nu_udb_t V016AE = {
	0x016AE,
	"\xE1\x9A\xA8"
};

static const nu_udb_t V00163 = {
	0x00163,
	"\x74\xCC\xA7"
};

static const nu_udb_t V016AC = {
	0x016AC,
	"\xE1\x9A\xA8"
};

static const nu_udb_t V016AD = {
	0x016AD,
	"\xE1\x9A\xA8"
};

static const nu_udb_t V0FB36 = {
	0x0FB36,
	"\xD7\x96\xD6\xBC"
};

static const nu_udb_t V016B3 = {
	0x016B3,
	"\xE1\x9A\xB2"
};

static const nu_udb_t V02DF5 = {
	0x02DF5,
	"\xD1\x81\xD1\x82"
};

static const nu_udb_t V0FB30 = {
	0x0FB30,
	"\xD7\x90\xD6\xBC"
};

static const nu_udb_t V0FB31 = {
	0x0FB31,
	"\xD7\x91\xD6\xBC"
};

static const nu_udb_t V0016B = {
	0x0016B,
	"\x75\xCC\x84"
};

static const nu_udb_t V00419 = {
	0x00419,
	"\xD0\x98\xCC\x86"
};

static const nu_udb_t V016B5 = {
	0x016B5,
	"\xE1\x9A\xB2"
};

static const nu_udb_t V0FA77 = {
	0x0FA77,
	"\xE5\x8B\xBA"
};

static const nu_udb_t V2F9F1 = {
	0x2F9F1,
	"\xF0\xA8\xB5\xB7"
};

static const nu_udb_t V2F9F0 = {
	0x2F9F0,
	"\xE9\x96\xB7"
};

static const nu_udb_t V2F9F3 = {
	0x2F9F3,
	"\xE9\x9B\x83"
};

static const nu_udb_t V0FB32 = {
	0x0FB32,
	"\xD7\x92\xD6\xBC"
};

static const nu_udb_t V0FB33 = {
	0x0FB33,
	"\xD7\x93\xD6\xBC"
};

static const nu_udb_t V2F9F4 = {
	0x2F9F4,
	"\xE5\xB6\xB2"
};

static const nu_udb_t V0FB2C = {
	0x0FB2C,
	"\xD7\xA9\xD6\xBC\xD7\x81"
};

static const nu_udb_t V0FB2D = {
	0x0FB2D,
	"\xD7\xA9\xD6\xBC\xD7\x82"
};

static const nu_udb_t V2F9F9 = {
	0x2F9F9,
	"\xE4\xA9\xB6"
};

static const nu_udb_t V2F9F8 = {
	0x2F9F8,
	"\xE4\xA9\xAE"
};

static const nu_udb_t V2F9FB = {
	0x2F9FB,
	"\xF0\xA9\x90\x8A"
};

static const nu_udb_t V0FB2E = {
	0x0FB2E,
	"\xD7\x90\xD6\xB7"
};

static const nu_udb_t V0FB2F = {
	0x0FB2F,
	"\xD7\x90\xD6\xB8"
};

static const nu_udb_t V021CD = {
	0x021CD,
	"\xE2\x87\x90\xCC\xB8"
};

static const nu_udb_t V021CE = {
	0x021CE,
	"\xE2\x87\x94\xCC\xB8"
};

static const nu_udb_t V0FB2B = {
	0x0FB2B,
	"\xD7\xA9\xD7\x82"
};

static const nu_udb_t V2F9E1 = {
	0x2F9E1,
	"\xF0\xA8\x97\xAD"
};

static const nu_udb_t V00B3C = {
	0x00B3C,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V0FB1D = {
	0x0FB1D,
	"\xD7\x99\xD6\xB4"
};

static const nu_udb_t V0FB1F = {
	0x0FB1F,
	"\xD7\x99\xD7\x99\xD6\xB7"
};

static const nu_udb_t V005BA = {
	0x005BA,
	"\xD6\xB9"
};

static const nu_udb_t V1109A = {
	0x1109A,
	"\xF0\x91\x82\x99\xE0\xA4\xBC"
};

static const nu_udb_t V0A880 = {
	0x0A880,
	"\xE0\xA4\x82"
};

static const nu_udb_t V1109C = {
	0x1109C,
	"\xF0\x91\x82\x9B\xE0\xA4\xBC"
};

static const nu_udb_t V2F9E9 = {
	0x2F9E9,
	"\xE9\x8B\x98"
};

static const nu_udb_t V2F9E8 = {
	0x2F9E8,
	"\xE9\x8B\x97"
};

static const nu_udb_t V016E8 = {
	0x016E8,
	"\xE1\x9B\xA6"
};

static const nu_udb_t V2F9EA = {
	0x2F9EA,
	"\xE9\x89\xBC"
};

static const nu_udb_t V2F9ED = {
	0x2F9ED,
	"\xF0\xA8\xAF\xBA"
};

static const nu_udb_t V2F9EC = {
	0x2F9EC,
	"\xE9\x90\x95"
};

static const nu_udb_t V0018D = {
	0x0018D,
	"\x7A\x77"
};

static const nu_udb_t V0A881 = {
	0x0A881,
	"\xE0\xA4\x83"
};

static const nu_udb_t V0FB4C = {
	0x0FB4C,
	"\xD7\x91\xD6\xBF"
};

static const nu_udb_t V0FB4D = {
	0x0FB4D,
	"\xD7\x9B\xD6\xBF"
};

static const nu_udb_t V0FB4E = {
	0x0FB4E,
	"\xD7\xA4\xD6\xBF"
};

static const nu_udb_t V001B0 = {
	0x001B0,
	"\x75\xCC\x9B"
};

static const nu_udb_t V0FB48 = {
	0x0FB48,
	"\xD7\xA8\xD6\xBC"
};

static const nu_udb_t V0FB49 = {
	0x0FB49,
	"\xD7\xA9\xD6\xBC"
};

static const nu_udb_t V0FB4A = {
	0x0FB4A,
	"\xD7\xAA\xD6\xBC"
};

static const nu_udb_t V0FB4B = {
	0x0FB4B,
	"\xD7\x95\xD6\xB9"
};

static const nu_udb_t V0FB44 = {
	0x0FB44,
	"\xD7\xA4\xD6\xBC"
};

static const nu_udb_t V0A8F3 = {
	0x0A8F3,
	"\xEA\xA3\xB2"
};

static const nu_udb_t V2F83C = {
	0x2F83C,
	"\xE5\x92\x9E"
};

static const nu_udb_t V2F83D = {
	0x2F83D,
	"\xE5\x90\xB8"
};

static const nu_udb_t V2F939 = {
	0x2F939,
	"\xF0\xA2\x86\x9F"
};

static const nu_udb_t V0FF4A = {
	0x0FF4A,
	"\x6A"
};

static const nu_udb_t V2F83E = {
	0x2F83E,
	"\xE5\x91\x88"
};

static const nu_udb_t V0FF54 = {
	0x0FF54,
	"\x74"
};

static const nu_udb_t V0FF55 = {
	0x0FF55,
	"\x75"
};

static const nu_udb_t V2F83F = {
	0x2F83F,
	"\xE5\x91\xA8"
};

static const nu_udb_t V001A1 = {
	0x001A1,
	"\x6F\xCC\x9B"
};

static const nu_udb_t V001A0 = {
	0x001A0,
	"\x4F\xCC\x9B"
};

static const nu_udb_t V016EF = {
	0x016EF,
	"\xE1\x9B\x97\xE1\x9B\x97"
};

static const nu_udb_t V110BA = {
	0x110BA,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V2F838 = {
	0x2F838,
	"\xF0\xA0\xAD\xA3"
};

static const nu_udb_t V016CB = {
	0x016CB,
	"\xE1\x9B\x8A"
};

static const nu_udb_t V0FF5D = {
	0x0FF5D,
	"\x7D"
};

static const nu_udb_t V0FF5E = {
	0x0FF5E,
	"\x7E"
};

static const nu_udb_t V2F839 = {
	0x2F839,
	"\xE5\x8F\xAB"
};

static const nu_udb_t V2F83A = {
	0x2F83A,
	"\xE5\x8F\xB1"
};

static const nu_udb_t V2F83B = {
	0x2F83B,
	"\xE5\x90\x86"
};

static const nu_udb_t V020D9 = {
	0x020D9,
	""
};

static const nu_udb_t V020D8 = {
	0x020D8,
	""
};

static const nu_udb_t V2F834 = {
	0x2F834,
	"\xF0\xA0\xA8\xAC"
};

static const nu_udb_t V020DA = {
	0x020DA,
	""
};

static const nu_udb_t V020DD = {
	0x020DD,
	""
};

static const nu_udb_t V2F835 = {
	0x2F835,
	"\xE7\x81\xB0"
};

static const nu_udb_t V001D0 = {
	0x001D0,
	"\x69\xCC\x8C"
};

static const nu_udb_t V110AB = {
	0x110AB,
	"\xF0\x91\x82\xA5\xE0\xA4\xBC"
};

static const nu_udb_t V001D2 = {
	0x001D2,
	"\x6F\xCC\x8C"
};

static const nu_udb_t V001D5 = {
	0x001D5,
	"\x55\xCC\x88\xCC\x84"
};

static const nu_udb_t V2F836 = {
	0x2F836,
	"\xE5\x8F\x8A"
};

static const nu_udb_t V001D7 = {
	0x001D7,
	"\x55\xCC\x88\xCC\x81"
};

static const nu_udb_t V2F837 = {
	0x2F837,
	"\xE5\x8F\x9F"
};

static const nu_udb_t V001D9 = {
	0x001D9,
	"\x55\xCC\x88\xCC\x8C"
};

static const nu_udb_t V001D8 = {
	0x001D8,
	"\x75\xCC\x88\xCC\x81"
};

static const nu_udb_t V2F830 = {
	0x2F830,
	"\xE5\x8D\xBD"
};

static const nu_udb_t V001DA = {
	0x001DA,
	"\x75\xCC\x88\xCC\x8C"
};

static const nu_udb_t V2F831 = {
	0x2F831,
	"\xE5\x8D\xBF"
};

static const nu_udb_t V001DC = {
	0x001DC,
	"\x75\xCC\x88\xCC\x80"
};

static const nu_udb_t V001DF = {
	0x001DF,
	"\x61\xCC\x88\xCC\x84"
};

static const nu_udb_t V001DE = {
	0x001DE,
	"\x41\xCC\x88\xCC\x84"
};

static const nu_udb_t V2F832 = {
	0x2F832,
	"\xE5\x8D\xBF"
};

static const nu_udb_t V2F902 = {
	0x2F902,
	"\xE6\xB5\x81"
};

static const nu_udb_t V0FF71 = {
	0x0FF71,
	"\xE3\x82\xA2"
};

static const nu_udb_t V016CC = {
	0x016CC,
	"\xE1\x9B\x8A"
};

static const nu_udb_t V0FF73 = {
	0x0FF73,
	"\xE3\x82\xA6"
};

static const nu_udb_t V2F906 = {
	0x2F906,
	"\xF0\xA3\xB4\x9E"
};

static const nu_udb_t V0FA2E = {
	0x0FA2E,
	"\xE9\x83\x9E"
};

static const nu_udb_t V2F82E = {
	0x2F82E,
	"\xE5\x8D\x9A"
};

static const nu_udb_t V2F82F = {
	0x2F82F,
	"\xE5\x8D\xB3"
};

static const nu_udb_t V0FF78 = {
	0x0FF78,
	"\xE3\x82\xAF"
};

static const nu_udb_t V2F828 = {
	0x2F828,
	"\xE5\x8B\xBA"
};

static const nu_udb_t V2F829 = {
	0x2F829,
	"\xE5\x8C\x85"
};

static const nu_udb_t V001CD = {
	0x001CD,
	"\x41\xCC\x8C"
};

static const nu_udb_t V2F82A = {
	0x2F82A,
	"\xE5\x8C\x86"
};

static const nu_udb_t V001CF = {
	0x001CF,
	"\x49\xCC\x8C"
};

static const nu_udb_t V001CE = {
	0x001CE,
	"\x61\xCC\x8C"
};

static const nu_udb_t V2F973 = {
	0x2F973,
	"\xF0\xA6\x89\x87"
};

static const nu_udb_t V2F82B = {
	0x2F82B,
	"\xE5\x8C\x97"
};

static const nu_udb_t V0FF96 = {
	0x0FF96,
	"\xE3\x83\xA8"
};

static const nu_udb_t V2F824 = {
	0x2F824,
	"\xE3\x94\x95"
};

static const nu_udb_t V020E0 = {
	0x020E0,
	""
};

static const nu_udb_t V020E3 = {
	0x020E3,
	""
};

static const nu_udb_t V020E2 = {
	0x020E2,
	""
};

static const nu_udb_t V020E5 = {
	0x020E5,
	""
};

static const nu_udb_t V020E4 = {
	0x020E4,
	""
};

static const nu_udb_t V2F825 = {
	0x2F825,
	"\xE5\x8B\x87"
};

static const nu_udb_t V2F820 = {
	0x2F820,
	"\xE5\x88\xBB"
};

static const nu_udb_t V0FFAF = {
	0x0FFAF,
	"\xE1\x86\xB5"
};

static const nu_udb_t V0FF0B = {
	0x0FF0B,
	"\x2B"
};

static const nu_udb_t V020EB = {
	0x020EB,
	""
};

static const nu_udb_t V020EA = {
	0x020EA,
	""
};

static const nu_udb_t V020ED = {
	0x020ED,
	""
};

static const nu_udb_t V0FF17 = {
	0x0FF17,
	"\x37"
};

static const nu_udb_t V020EF = {
	0x020EF,
	""
};

static const nu_udb_t V2F821 = {
	0x2F821,
	"\xE5\x89\x86"
};

static const nu_udb_t V001E2 = {
	0x001E2,
	"\x41\x45\xCC\x84"
};

static const nu_udb_t V0FF13 = {
	0x0FF13,
	"\x33"
};

static const nu_udb_t V0FFB9 = {
	0x0FFB9,
	"\xE1\x84\x8D"
};

static const nu_udb_t V0FF1D = {
	0x0FF1D,
	"\x3D"
};

static const nu_udb_t V0F911 = {
	0x0F911,
	"\xE8\x9E\xBA"
};

static const nu_udb_t V2F96D = {
	0x2F96D,
	"\xE4\x8C\x81"
};

static const nu_udb_t V2F962 = {
	0x2F962,
	"\xE7\xAF\x86"
};

static const nu_udb_t V00626 = {
	0x00626,
	"\xD9\x8A\xD9\x94"
};

static const nu_udb_t V2F968 = {
	0x2F968,
	"\xE7\xB3\xA8"
};

static const nu_udb_t V0FFB0 = {
	0x0FFB0,
	"\xE1\x84\x9A"
};

static const nu_udb_t V2F96E = {
	0x2F96E,
	"\xE7\xB7\x87"
};

static const nu_udb_t V0F916 = {
	0x0F916,
	"\xE7\x83\x99"
};

static const nu_udb_t V2F823 = {
	0x2F823,
	"\xE5\x89\xB7"
};

static const nu_udb_t V2F81D = {
	0x2F81D,
	"\xE5\x87\xB5"
};

static const nu_udb_t V0FF20 = {
	0x0FF20,
	"\x40"
};

static const nu_udb_t V0FF21 = {
	0x0FF21,
	"\x41"
};

static const nu_udb_t V0F91D = {
	0x0F91D,
	"\xE6\xAC\x84"
};

static const nu_udb_t V0F91C = {
	0x0F91C,
	"\xE5\x8D\xB5"
};

static const nu_udb_t V0FF0D = {
	0x0FF0D,
	"\x2D"
};

static const nu_udb_t V0F91E = {
	0x0F91E,
	"\xE7\x88\x9B"
};

static const nu_udb_t V2F81E = {
	0x2F81E,
	"\xE5\x88\x83"
};

static const nu_udb_t V2F819 = {
	0x2F819,
	"\xE4\xBB\x8C"
};

static const nu_udb_t V2F95A = {
	0x2F95A,
	"\xE7\xA9\x8A"
};

static const nu_udb_t V2F959 = {
	0x2F959,
	"\xE7\xA9\x80"
};

static const nu_udb_t V0032A = {
	0x0032A,
	""
};

static const nu_udb_t V0FF2B = {
	0x0FF2B,
	"\x4B"
};

static const nu_udb_t V2F81B = {
	0x2F81B,
	"\xE5\x86\xB5"
};

static const nu_udb_t V2F816 = {
	0x2F816,
	"\xF0\xA0\x95\x8B"
};

static const nu_udb_t V2F811 = {
	0x2F811,
	"\xE5\x85\xB7"
};

static const nu_udb_t V0FF18 = {
	0x0FF18,
	"\x38"
};

static const nu_udb_t V0FF30 = {
	0x0FF30,
	"\x50"
};

static const nu_udb_t V004F0 = {
	0x004F0,
	"\xD0\xA3\xCC\x88"
};

static const nu_udb_t V0F90D = {
	0x0F90D,
	"\xE6\x87\xB6"
};

static const nu_udb_t V0F90C = {
	0x0F90C,
	"\xE5\xA5\x88"
};

static const nu_udb_t V0F90F = {
	0x0F90F,
	"\xE7\xBE\x85"
};

static const nu_udb_t V0F90E = {
	0x0F90E,
	"\xE7\x99\xA9"
};

static const nu_udb_t V0F931 = {
	0x0F931,
	"\xE6\xAB\x93"
};

static const nu_udb_t V00337 = {
	0x00337,
	""
};

static const nu_udb_t V0F933 = {
	0x0F933,
	"\xE7\x9B\xA7"
};

static const nu_udb_t V0F932 = {
	0x0F932,
	"\xE7\x88\x90"
};

static const nu_udb_t V0F935 = {
	0x0F935,
	"\xE8\x98\x86"
};

static const nu_udb_t V0F934 = {
	0x0F934,
	"\xE8\x80\x81"
};

static const nu_udb_t V2F813 = {
	0x2F813,
	"\xE3\x92\xB9"
};

static const nu_udb_t V0F936 = {
	0x0F936,
	"\xE8\x99\x9C"
};

static const nu_udb_t V0033E = {
	0x0033E,
	""
};

static const nu_udb_t V0F938 = {
	0x0F938,
	"\xE9\x9C\xB2"
};

static const nu_udb_t V0F93B = {
	0x0F93B,
	"\xE7\xA2\x8C"
};

static const nu_udb_t V0F93A = {
	0x0F93A,
	"\xE9\xB7\xBA"
};

static const nu_udb_t V2F80C = {
	0x2F80C,
	"\xE3\x92\x9E"
};

static const nu_udb_t V2F80D = {
	0x2F80D,
	"\xF0\xA0\x98\xBA"
};

static const nu_udb_t V0F93F = {
	0x0F93F,
	"\xE9\x8C\x84"
};

static const nu_udb_t V0F93E = {
	0x0F93E,
	"\xE8\x8F\x89"
};

static const nu_udb_t V2F80A = {
	0x2F80A,
	"\xE5\x83\xA7"
};

static const nu_udb_t V2F9BB = {
	0x2F9BB,
	"\xE8\x9D\xB9"
};

static const nu_udb_t V0F923 = {
	0x0F923,
	"\xE8\x97\x8D"
};

static const nu_udb_t V022AF = {
	0x022AF,
	"\xE2\x8A\xAB\xCC\xB8"
};

static const nu_udb_t V0F925 = {
	0x0F925,
	"\xE6\x8B\x89"
};

static const nu_udb_t V0F924 = {
	0x0F924,
	"\xE8\xA5\xA4"
};

static const nu_udb_t V0F927 = {
	0x0F927,
	"\xE8\xA0\x9F"
};

static const nu_udb_t V0F926 = {
	0x0F926,
	"\xE8\x87\x98"
};

static const nu_udb_t V0F929 = {
	0x0F929,
	"\xE6\x9C\x97"
};

static const nu_udb_t V0F928 = {
	0x0F928,
	"\xE5\xBB\x8A"
};

static const nu_udb_t V017C7 = {
	0x017C7,
	"\xE0\xA4\x83"
};

static const nu_udb_t V017C6 = {
	0x017C6,
	"\xE0\xA4\x82"
};

static const nu_udb_t V0F92D = {
	0x0F92D,
	"\xE4\xBE\x86"
};

static const nu_udb_t V2F80B = {
	0x2F80B,
	"\xE5\x83\x8F"
};

static const nu_udb_t V0F92F = {
	0x0F92F,
	"\xE5\x8B\x9E"
};

static const nu_udb_t V0F92E = {
	0x0F92E,
	"\xE5\x86\xB7"
};

static const nu_udb_t V017CD = {
	0x017CD,
	""
};

static const nu_udb_t V017CC = {
	0x017CC,
	""
};

static const nu_udb_t V017CF = {
	0x017CF,
	""
};

static const nu_udb_t V017CE = {
	0x017CE,
	""
};

static const nu_udb_t V0031A = {
	0x0031A,
	""
};

static const nu_udb_t V004DE = {
	0x004DE,
	"\xD0\x97\xCC\x88"
};

static const nu_udb_t V2F9AE = {
	0x2F9AE,
	"\xE4\x95\x9D"
};

static const nu_udb_t V004DC = {
	0x004DC,
	"\xD0\x96\xCC\x88"
};

static const nu_udb_t V2F804 = {
	0x2F804,
	"\xE4\xBD\xA0"
};

static const nu_udb_t V2F993 = {
	0x2F993,
	"\xE8\x8A\xB1"
};

static const nu_udb_t V2F992 = {
	0x2F992,
	"\xE5\x8A\xB3"
};

static const nu_udb_t V2F805 = {
	0x2F805,
	"\xE4\xBE\xAE"
};

static const nu_udb_t V00362 = {
	0x00362,
	""
};

static const nu_udb_t V00363 = {
	0x00363,
	"\x61"
};

static const nu_udb_t V2F803 = {
	0x2F803,
	"\xF0\xA0\x84\xA2"
};

static const nu_udb_t V2F87D = {
	0x2F87D,
	"\xF0\xA1\xB7\xA6"
};

static const nu_udb_t V0FFEE = {
	0x0FFEE,
	"\xE2\x97\x8B"
};

static const nu_udb_t V2F87E = {
	0x2F87E,
	"\xE5\xB5\xAE"
};

static const nu_udb_t V2F879 = {
	0x2F879,
	"\xE5\xB3\x80"
};

static const nu_udb_t V0FF0E = {
	0x0FF0E,
	"\x2E"
};

static const nu_udb_t V0036A = {
	0x0036A,
	"\x68"
};

static const nu_udb_t V0F944 = {
	0x0F944,
	"\xE7\xB1\xA0"
};

static const nu_udb_t V2F99E = {
	0x2F99E,
	"\xE8\x8F\xA7"
};

static const nu_udb_t V00369 = {
	0x00369,
	"\x64"
};

static const nu_udb_t V0036E = {
	0x0036E,
	"\x76"
};

static const nu_udb_t V0036F = {
	0x0036F,
	"\x78"
};

static const nu_udb_t V0036C = {
	0x0036C,
	"\x72"
};

static const nu_udb_t V2F981 = {
	0x2F981,
	"\xE4\x8F\x95"
};

static const nu_udb_t V2F980 = {
	0x2F980,
	"\xF0\xA3\x8D\x9F"
};

static const nu_udb_t V2F87B = {
	0x2F87B,
	"\xF0\xA1\xB7\xA4"
};

static const nu_udb_t V2F986 = {
	0x2F986,
	"\xE5\xAA\xB5"
};

static const nu_udb_t V2F876 = {
	0x2F876,
	"\xE3\x9E\x81"
};

static const nu_udb_t V0F971 = {
	0x0F971,
	"\xE8\xBE\xB0"
};

static const nu_udb_t V2F870 = {
	0x2F870,
	"\xE5\xAF\xB3"
};

static const nu_udb_t V0F973 = {
	0x0F973,
	"\xE6\x8B\xBE"
};

static const nu_udb_t V2F989 = {
	0x2F989,
	"\xF0\xA3\x8E\x93"
};

static const nu_udb_t V2F988 = {
	0x2F988,
	"\xF0\xA6\x9E\xB5"
};

static const nu_udb_t V2F871 = {
	0x2F871,
	"\xF0\xA1\xAC\x98"
};

static const nu_udb_t V0F977 = {
	0x0F977,
	"\xE4\xBA\xAE"
};

static const nu_udb_t V2F872 = {
	0x2F872,
	"\xE5\xAF\xBF"
};

static const nu_udb_t V0F979 = {
	0x0F979,
	"\xE5\x87\x89"
};

static const nu_udb_t V0F978 = {
	0x0F978,
	"\xE5\x85\xA9"
};

static const nu_udb_t V2F873 = {
	0x2F873,
	"\xE5\xB0\x86"
};

static const nu_udb_t V0FF81 = {
	0x0FF81,
	"\xE3\x83\x81"
};

static const nu_udb_t V016A4 = {
	0x016A4,
	"\xE1\x9A\xA2"
};

static const nu_udb_t V00343 = {
	0x00343,
	"\xCC\x93"
};

static const nu_udb_t V2F9F6 = {
	0x2F9F6,
	"\xF0\xA9\x85\x85"
};

static const nu_udb_t V0F97E = {
	0x0F97E,
	"\xE9\x87\x8F"
};

static const nu_udb_t V2F86C = {
	0x2F86C,
	"\xF0\xA1\xA7\x88"
};

static const nu_udb_t V016A1 = {
	0x016A1,
	"\xE1\x9A\xA0"
};

static const nu_udb_t V2F9FA = {
	0x2F9FA,
	"\xE9\x9F\xA0"
};

static const nu_udb_t V2F86D = {
	0x2F86D,
	"\xE5\xAF\x83"
};

static const nu_udb_t V0FF8A = {
	0x0FF8A,
	"\xE3\x83\x8F"
};

static const nu_udb_t V2F86E = {
	0x2F86E,
	"\xE5\xAF\x98"
};

static const nu_udb_t V0F967 = {
	0x0F967,
	"\xE4\xB8\x8D"
};

static const nu_udb_t V00349 = {
	0x00349,
	""
};

static const nu_udb_t V0F969 = {
	0x0F969,
	"\xE6\x95\xB8"
};

static const nu_udb_t V2F9E3 = {
	0x2F9E3,
	"\xE9\x83\xB1"
};

static const nu_udb_t V0FF90 = {
	0x0FF90,
	"\xE3\x83\x9F"
};

static const nu_udb_t V0F96A = {
	0x0F96A,
	"\xE7\xB4\xA2"
};

static const nu_udb_t V0F96D = {
	0x0F96D,
	"\xE7\x9C\x81"
};

static const nu_udb_t V0F96C = {
	0x0F96C,
	"\xE5\xA1\x9E"
};

static const nu_udb_t V0F96F = {
	0x0F96F,
	"\xE8\xAA\xAA"
};

static const nu_udb_t V000DC = {
	0x000DC,
	"\x55\xCC\x88"
};

static const nu_udb_t V2F9E4 = {
	0x2F9E4,
	"\xE9\x84\x91"
};

static const nu_udb_t V2F809 = {
	0x2F809,
	"\xE5\x82\x99"
};

static const nu_udb_t V00354 = {
	0x00354,
	""
};

static const nu_udb_t V2F86F = {
	0x2F86F,
	"\xE5\xAF\xA7"
};

static const nu_udb_t V0FF9A = {
	0x0FF9A,
	"\xE3\x83\xAC"
};

static const nu_udb_t V0035B = {
	0x0035B,
	""
};

static const nu_udb_t V2F9EE = {
	0x2F9EE,
	"\xE9\x96\x8B"
};

static const nu_udb_t V016BF = {
	0x016BF,
	"\xE1\x9A\xBE"
};

static const nu_udb_t V2F868 = {
	0x2F868,
	"\xE3\x9B\xBC"
};

static const nu_udb_t V0035F = {
	0x0035F,
	""
};

static const nu_udb_t V0035C = {
	0x0035C,
	""
};

static const nu_udb_t V0035D = {
	0x0035D,
	""
};

static const nu_udb_t V2F869 = {
	0x2F869,
	"\xE5\xAC\x88"
};

static const nu_udb_t V2F9D7 = {
	0x2F9D7,
	"\xE8\xB5\xB7"
};

static const nu_udb_t V006D3 = {
	0x006D3,
	"\xDB\x92\xD9\x94"
};

static const nu_udb_t V0F99E = {
	0x0F99E,
	"\xE5\x92\xBD"
};

static const nu_udb_t V0FF4B = {
	0x0FF4B,
	"\x6B"
};

static const nu_udb_t V2F9DB = {
	0x2F9DB,
	"\xE8\xB6\xBC"
};

static const nu_udb_t V2F9DA = {
	0x2F9DA,
	"\xE8\xB7\x8B"
};

static const nu_udb_t V2F9D9 = {
	0x2F9D9,
	"\xF0\xA0\xA0\x84"
};

static const nu_udb_t V2F9D8 = {
	0x2F9D8,
	"\xF0\xA7\xBC\xAF"
};

static const nu_udb_t V003AB = {
	0x003AB,
	"\xCE\xA5\xCC\x88"
};

static const nu_udb_t V2F9DE = {
	0x2F9DE,
	"\xE8\xBB\x94"
};

static const nu_udb_t V2F86A = {
	0x2F86A,
	"\xE5\xAC\xBE"
};

static const nu_udb_t V003AE = {
	0x003AE,
	"\xCE\xB7\xCC\x81"
};

static const nu_udb_t V003AF = {
	0x003AF,
	"\xCE\xB9\xCC\x81"
};

static const nu_udb_t V2F9C2 = {
	0x2F9C2,
	"\xE4\x97\xB9"
};

static const nu_udb_t V0F98A = {
	0x0F98A,
	"\xE5\x8A\x9B"
};

static const nu_udb_t V2F86B = {
	0x2F86B,
	"\xE5\xAC\xBE"
};

static const nu_udb_t V006C0 = {
	0x006C0,
	"\xDB\x95\xD9\x94"
};

static const nu_udb_t V0FFBC = {
	0x0FFBC,
	"\xE1\x84\x90"
};

static const nu_udb_t V006C2 = {
	0x006C2,
	"\xDB\x81\xD9\x94"
};

static const nu_udb_t V2F9C4 = {
	0x2F9C4,
	"\xE8\xA1\xA3"
};

static const nu_udb_t V00B03 = {
	0x00B03,
	"\xE0\xA4\x83"
};

static const nu_udb_t V00B02 = {
	0x00B02,
	"\xE0\xA4\x82"
};

static const nu_udb_t V2F864 = {
	0x2F864,
	"\xE5\xA8\xA7"
};

static const nu_udb_t V0F9B5 = {
	0x0F9B5,
	"\xE4\xBE\x8B"
};

static const nu_udb_t V2F865 = {
	0x2F865,
	"\xE5\xA7\x98"
};

static const nu_udb_t V2F866 = {
	0x2F866,
	"\xE5\xA9\xA6"
};

static const nu_udb_t V2F867 = {
	0x2F867,
	"\xE3\x9B\xAE"
};

static const nu_udb_t V0F9B9 = {
	0x0F9B9,
	"\xE6\x83\xA1"
};

static const nu_udb_t V0F9B8 = {
	0x0F9B8,
	"\xE9\x9A\xB8"
};

static const nu_udb_t V2F860 = {
	0x2F860,
	"\xF0\xA1\x9A\xA8"
};

static const nu_udb_t V2F861 = {
	0x2F861,
	"\xF0\xA1\x9B\xAA"
};

static const nu_udb_t V01E36 = {
	0x01E36,
	"\x4C\xCC\xA3"
};

static const nu_udb_t V0F9BC = {
	0x0F9BC,
	"\xE5\xAF\xAE"
};

static const nu_udb_t V01E34 = {
	0x01E34,
	"\x4B\xCC\xB1"
};

static const nu_udb_t V2F862 = {
	0x2F862,
	"\xE5\xA7\xAC"
};

static const nu_udb_t V00386 = {
	0x00386,
	"\xCE\x91\xCC\x81"
};

static const nu_udb_t V00387 = {
	0x00387,
	"\xC2\xB7"
};

static const nu_udb_t V0F9A3 = {
	0x0F9A3,
	"\xE5\xBF\xB5"
};

static const nu_udb_t V01DFC = {
	0x01DFC,
	""
};

static const nu_udb_t V0038A = {
	0x0038A,
	"\xCE\x99\xCC\x81"
};

static const nu_udb_t V2F863 = {
	0x2F863,
	"\xE5\xA8\x9B"
};

static const nu_udb_t V0F9A7 = {
	0x0F9A7,
	"\xE7\x8D\xB5"
};

static const nu_udb_t V0F9A6 = {
	0x0F9A6,
	"\xE7\xB0\xBE"
};

static const nu_udb_t V006FD = {
	0x006FD,
	"\xD8\xA1"
};

static const nu_udb_t V0038F = {
	0x0038F,
	"\xCE\xA9\xCC\x81"
};

static const nu_udb_t V2F85C = {
	0x2F85C,
	"\xE5\xA4\x86"
};

static const nu_udb_t V2F85D = {
	0x2F85D,
	"\xE5\xA4\x9A"
};

static const nu_udb_t V2F85E = {
	0x2F85E,
	"\xE5\xA4\xA2"
};

static const nu_udb_t V2F85F = {
	0x2F85F,
	"\xE5\xA5\xA2"
};

static const nu_udb_t V2F858 = {
	0x2F858,
	"\xE5\xA2\xAC"
};

static const nu_udb_t V2F859 = {
	0x2F859,
	"\xF0\xA1\x93\xA4"
};

static const nu_udb_t V006E5 = {
	0x006E5,
	"\xD9\x88"
};

static const nu_udb_t V2F85A = {
	0x2F85A,
	"\xE5\xA3\xB2"
};

static const nu_udb_t V2F854 = {
	0x2F854,
	"\xE5\xA0\x8D"
};

static const nu_udb_t V006E6 = {
	0x006E6,
	"\xD9\x8A"
};

static const nu_udb_t V2F855 = {
	0x2F855,
	"\xE5\x9E\x8B"
};

static const nu_udb_t V2F856 = {
	0x2F856,
	"\xE5\xA0\xB2"
};

static const nu_udb_t V2F852 = {
	0x2F852,
	"\xE5\x9F\x8E"
};

static const nu_udb_t V2F853 = {
	0x2F853,
	"\xE5\x9F\xB4"
};

static const nu_udb_t V01E12 = {
	0x01E12,
	"\x44\xCC\xAD"
};

static const nu_udb_t V00384 = {
	0x00384,
	"\xC2\xB4"
};

static const nu_udb_t V2F84C = {
	0x2F84C,
	"\xE5\x98\x86"
};

static const nu_udb_t V020EE = {
	0x020EE,
	""
};

static const nu_udb_t V2F84D = {
	0x2F84D,
	"\xE5\x9C\x97"
};

static const nu_udb_t V020EC = {
	0x020EC,
	""
};

static const nu_udb_t V03006 = {
	0x03006,
	"\xE3\x81\x97\xE3\x82\x81"
};

static const nu_udb_t V2F84E = {
	0x2F84E,
	"\xE5\x99\x91"
};

static const nu_udb_t V2F84F = {
	0x2F84F,
	"\xE5\x99\xB4"
};

static const nu_udb_t V2F848 = {
	0x2F848,
	"\xE5\x96\xAB"
};

static const nu_udb_t V2F849 = {
	0x2F849,
	"\xE5\x96\xB3"
};

static const nu_udb_t V01E1F = {
	0x01E1F,
	"\x66\xCC\x87"
};

static const nu_udb_t V03000 = {
	0x03000,
	"\x20"
};

static const nu_udb_t V2F84A = {
	0x2F84A,
	"\xE5\x97\x82"
};

static const nu_udb_t V2F844 = {
	0x2F844,
	"\xE5\x95\xA3"
};

static const nu_udb_t V2F845 = {
	0x2F845,
	"\xE5\x96\x84"
};

static const nu_udb_t V2F846 = {
	0x2F846,
	"\xE5\x96\x84"
};

static const nu_udb_t V01CF0 = {
	0x01CF0,
	"\xE1\xB3\xA9"
};

static const nu_udb_t V2F847 = {
	0x2F847,
	"\xE5\x96\x99"
};

static const nu_udb_t V2F840 = {
	0x2F840,
	"\xE5\x92\xA2"
};

static const nu_udb_t V2F8B4 = {
	0x2F8B4,
	"\xE6\x89\x9D"
};

static const nu_udb_t V2F8A2 = {
	0x2F8A2,
	"\xE3\xA4\x9C"
};

static const nu_udb_t V2F8A3 = {
	0x2F8A3,
	"\xE6\x82\x94"
};

static const nu_udb_t V2F89C = {
	0x2F89C,
	"\xE5\xBE\x9A"
};

static const nu_udb_t V2F89D = {
	0x2F89D,
	"\xE5\xBF\x8D"
};

static const nu_udb_t V0F9F0 = {
	0x0F9F0,
	"\xE8\x97\xBA"
};

static const nu_udb_t V0F9F3 = {
	0x0F9F3,
	"\xE9\xBA\x9F"
};

static const nu_udb_t V2F898 = {
	0x2F898,
	"\xF0\xA6\x87\x9A"
};

static const nu_udb_t V2F89A = {
	0x2F89A,
	"\xE5\xBD\xAB"
};

static const nu_udb_t V2F894 = {
	0x2F894,
	"\xE5\xBC\xA2"
};

static const nu_udb_t V0F9F7 = {
	0x0F9F7,
	"\xE7\xAB\x8B"
};

static const nu_udb_t V0A786 = {
	0x0A786,
	"\x54"
};

static const nu_udb_t V00B48 = {
	0x00B48,
	"\xE0\xAD\x87\xE0\xAD\x96"
};

static const nu_udb_t V031A0 = {
	0x031A0,
	"\xE3\x84\x85"
};

static const nu_udb_t V2F896 = {
	0x2F896,
	"\xE3\xA3\x87"
};

static const nu_udb_t V2F897 = {
	0x2F897,
	"\xF0\xA3\x8A\xB8"
};

static const nu_udb_t V031A7 = {
	0x031A7,
	"\xE3\x84\x9B"
};

static const nu_udb_t V01CEC = {
	0x01CEC,
	"\xE1\xB3\xA9"
};

static const nu_udb_t V0F9FF = {
	0x0F9FF,
	"\xE5\x88\xBA"
};

static const nu_udb_t V030D7 = {
	0x030D7,
	"\xE3\x83\x95\xE3\x82\x9A"
};

static const nu_udb_t V031AB = {
	0x031AB,
	"\xE3\x84\xA8"
};

static const nu_udb_t V10991 = {
	0x10991,
	"\xF0\x90\xA6\xAD"
};

static const nu_udb_t V2F890 = {
	0x2F890,
	"\xE5\xBB\xBE"
};

static const nu_udb_t V2F891 = {
	0x2F891,
	"\xF0\xA2\x8C\xB1"
};

static const nu_udb_t V0FE20 = {
	0x0FE20,
	"\xCD\xA1"
};

static const nu_udb_t V2F892 = {
	0x2F892,
	"\xF0\xA2\x8C\xB1"
};

static const nu_udb_t V0FE22 = {
	0x0FE22,
	"\xCD\xA0"
};

static const nu_udb_t V2F893 = {
	0x2F893,
	"\xE8\x88\x81"
};

static const nu_udb_t V2F88C = {
	0x2F88C,
	"\xE5\xBA\xB3"
};

static const nu_udb_t V2F88D = {
	0x2F88D,
	"\xE5\xBA\xB6"
};

static const nu_udb_t V2F88E = {
	0x2F88E,
	"\xE5\xBB\x8A"
};

static const nu_udb_t V020DE = {
	0x020DE,
	""
};

static const nu_udb_t V020DF = {
	0x020DF,
	""
};

static const nu_udb_t V0F9EC = {
	0x0F9EC,
	"\xE6\xBA\xBA"
};

static const nu_udb_t V2F88F = {
	0x2F88F,
	"\xF0\xAA\x8E\x92"
};

static const nu_udb_t V2F888 = {
	0x2F888,
	"\xE3\xA1\xA2"
};

static const nu_udb_t V01E6A = {
	0x01E6A,
	"\x54\xCC\x87"
};

static const nu_udb_t V003D7 = {
	0x003D7,
	"\xCE\xBA\xCE\xB1\xCE\xB9"
};

static const nu_udb_t V2F889 = {
	0x2F889,
	"\xF0\xA2\x86\x83"
};

static const nu_udb_t V0FE51 = {
	0x0FE51,
	"\xE3\x80\x81"
};

static const nu_udb_t V0FE50 = {
	0x0FE50,
	"\x2C"
};

static const nu_udb_t V2F88A = {
	0x2F88A,
	"\xE3\xA1\xBC"
};

static const nu_udb_t V0F937 = {
	0x0F937,
	"\xE8\xB7\xAF"
};

static const nu_udb_t V01F45 = {
	0x01F45,
	"\xCE\xBF\xCC\x94\xCC\x81"
};

static const nu_udb_t V0FE54 = {
	0x0FE54,
	"\x3B"
};

static const nu_udb_t V0FE57 = {
	0x0FE57,
	"\x21"
};

static const nu_udb_t V0FE56 = {
	0x0FE56,
	"\x3F"
};

static const nu_udb_t V0FE59 = {
	0x0FE59,
	"\x28"
};

static const nu_udb_t V0FE58 = {
	0x0FE58,
	"\xE2\x80\x94"
};

static const nu_udb_t V0FE5B = {
	0x0FE5B,
	"\x7B"
};

static const nu_udb_t V0FE5A = {
	0x0FE5A,
	"\x29"
};

static const nu_udb_t V0FE5D = {
	0x0FE5D,
	"\xE3\x80\x94"
};

static const nu_udb_t V0FE5C = {
	0x0FE5C,
	"\x7D"
};

static const nu_udb_t V0FE5F = {
	0x0FE5F,
	"\x23"
};

static const nu_udb_t V0FE5E = {
	0x0FE5E,
	"\xE3\x80\x95"
};

static const nu_udb_t V01F49 = {
	0x01F49,
	"\xCE\x9F\xCC\x94"
};

static const nu_udb_t V00136 = {
	0x00136,
	"\x4B\xCC\xA7"
};

static const nu_udb_t V2F88B = {
	0x2F88B,
	"\xE5\xBA\xB0"
};

static const nu_udb_t V2F884 = {
	0x2F884,
	"\xE5\xB7\xBD"
};

static const nu_udb_t V2F885 = {
	0x2F885,
	"\xE5\xB8\xA8"
};

static const nu_udb_t V2F886 = {
	0x2F886,
	"\xE5\xB8\xBD"
};

static const nu_udb_t V2F887 = {
	0x2F887,
	"\xE5\xB9\xA9"
};

static const nu_udb_t V2F880 = {
	0x2F880,
	"\xE5\xB5\xBC"
};

static const nu_udb_t V00F52 = {
	0x00F52,
	"\xE0\xBD\x91\xE0\xBE\xB7"
};

static const nu_udb_t V01E46 = {
	0x01E46,
	"\x4E\xCC\xA3"
};

static const nu_udb_t V01E45 = {
	0x01E45,
	"\x6E\xCC\x87"
};

static const nu_udb_t V2F881 = {
	0x2F881,
	"\xE5\xB7\xA1"
};

static const nu_udb_t V2F882 = {
	0x2F882,
	"\xE5\xB7\xA2"
};

static const nu_udb_t V2F883 = {
	0x2F883,
	"\xE3\xA0\xAF"
};

static const nu_udb_t V2F8FC = {
	0x2F8FC,
	"\xE6\xB2\xBF"
};

static const nu_udb_t V02DFA = {
	0x02DFA,
	"\xD1\xA3"
};

static const nu_udb_t V2F8FD = {
	0x2F8FD,
	"\xE6\xB3\x8D"
};

static const nu_udb_t V2F8FE = {
	0x2F8FE,
	"\xE6\xB1\xA7"
};

static const nu_udb_t V2F8FF = {
	0x2F8FF,
	"\xE6\xB4\x96"
};

static const nu_udb_t V2F8F8 = {
	0x2F8F8,
	"\xF0\xA1\xB4\x8B"
};

static const nu_udb_t V2F8F9 = {
	0x2F8F9,
	"\xF0\xA3\xAB\xBA"
};

static const nu_udb_t V2F8FA = {
	0x2F8FA,
	"\xE6\xB1\x8E"
};

static const nu_udb_t V2F8FB = {
	0x2F8FB,
	"\xF0\xA3\xB2\xBC"
};

static const nu_udb_t V2F8F4 = {
	0x2F8F4,
	"\xE6\xAE\x9F"
};

static const nu_udb_t V2F8F6 = {
	0x2F8F6,
	"\xE6\xAE\xBB"
};

static const nu_udb_t V2F8F7 = {
	0x2F8F7,
	"\xF0\xA3\xAA\x8D"
};

static const nu_udb_t V2F8F0 = {
	0x2F8F0,
	"\xF0\xA3\xA2\xA7"
};

static const nu_udb_t V2F8F1 = {
	0x2F8F1,
	"\xE6\xAD\x94"
};

static const nu_udb_t V02DF0 = {
	0x02DF0,
	"\xD1\x86"
};

static const nu_udb_t V2F8F2 = {
	0x2F8F2,
	"\xE3\xB1\x8E"
};

static const nu_udb_t V2F8F3 = {
	0x2F8F3,
	"\xE6\xAD\xB2"
};

static const nu_udb_t V0F903 = {
	0x0F903,
	"\xE8\xB3\x88"
};

static const nu_udb_t V0FE61 = {
	0x0FE61,
	"\x2A"
};

static const nu_udb_t V0FE60 = {
	0x0FE60,
	"\x26"
};

static const nu_udb_t V0FE63 = {
	0x0FE63,
	"\x2D"
};

static const nu_udb_t V0FE62 = {
	0x0FE62,
	"\x2B"
};

static const nu_udb_t V0FE65 = {
	0x0FE65,
	"\x3E"
};

static const nu_udb_t V0FE64 = {
	0x0FE64,
	"\x3C"
};

static const nu_udb_t V2F8EC = {
	0x2F8EC,
	"\xF0\xA3\x9A\xA3"
};

static const nu_udb_t V2F8ED = {
	0x2F8ED,
	"\xE6\xAB\x9B"
};

static const nu_udb_t V0FE69 = {
	0x0FE69,
	"\x24"
};

static const nu_udb_t V0FE68 = {
	0x0FE68,
	"\x5C"
};

static const nu_udb_t V0FE6B = {
	0x0FE6B,
	"\x40"
};

static const nu_udb_t V0FE6A = {
	0x0FE6A,
	"\x25"
};

static const nu_udb_t V2F8EE = {
	0x2F8EE,
	"\xE3\xB0\x98"
};

static const nu_udb_t V2F8EF = {
	0x2F8EF,
	"\xE6\xAC\xA1"
};

static const nu_udb_t V2F8E8 = {
	0x2F8E8,
	"\xE6\xA5\x82"
};

static const nu_udb_t V2F8E9 = {
	0x2F8E9,
	"\xE6\xA6\xA3"
};

static const nu_udb_t V2F8EA = {
	0x2F8EA,
	"\xE6\xA7\xAA"
};

static const nu_udb_t V2F8EB = {
	0x2F8EB,
	"\xE6\xAA\xA8"
};

static const nu_udb_t V2F8E4 = {
	0x2F8E4,
	"\xE6\xA2\x8E"
};

static const nu_udb_t V2F8E5 = {
	0x2F8E5,
	"\xE6\xA0\x9F"
};

static const nu_udb_t V0F976 = {
	0x0F976,
	"\xE7\x95\xA5"
};

static const nu_udb_t V2F8E6 = {
	0x2F8E6,
	"\xE6\xA4\x94"
};

static const nu_udb_t V01E6B = {
	0x01E6B,
	"\x74\xCC\x87"
};

static const nu_udb_t V2F8E7 = {
	0x2F8E7,
	"\xE3\xAE\x9D"
};

static const nu_udb_t V2F8E0 = {
	0x2F8E0,
	"\xE6\x9E\x85"
};

static const nu_udb_t V2F8E1 = {
	0x2F8E1,
	"\xE6\xA1\x92"
};

static const nu_udb_t V2F8E2 = {
	0x2F8E2,
	"\xE6\xA2\x85"
};

static const nu_udb_t V0F97F = {
	0x0F97F,
	"\xE5\x8B\xB5"
};

static const nu_udb_t V2F8E3 = {
	0x2F8E3,
	"\xF0\xA3\x91\xAD"
};

static const nu_udb_t V030B0 = {
	0x030B0,
	"\xE3\x82\xAF\xE3\x82\x99"
};

static const nu_udb_t V2F8DC = {
	0x2F8DC,
	"\xE6\x9D\x93"
};

static const nu_udb_t V00170 = {
	0x00170,
	"\x55\xCC\x8B"
};

static const nu_udb_t V02EEC = {
	0x02EEC,
	"\xE9\xBD\x90"
};

static const nu_udb_t V00176 = {
	0x00176,
	"\x59\xCC\x82"
};

static const nu_udb_t V02DEC = {
	0x02DEC,
	"\xD1\x80"
};

static const nu_udb_t V2F8DD = {
	0x2F8DD,
	"\xF0\xA3\x8F\x83"
};

static const nu_udb_t V01F35 = {
	0x01F35,
	"\xCE\xB9\xCC\x94\xCC\x81"
};

static const nu_udb_t V2F8DE = {
	0x2F8DE,
	"\xE3\xAD\x89"
};

static const nu_udb_t V02DE8 = {
	0x02DE8,
	"\xD0\xBC"
};

static const nu_udb_t V2F8DF = {
	0x2F8DF,
	"\xE6\x9F\xBA"
};

static const nu_udb_t V01F31 = {
	0x01F31,
	"\xCE\xB9\xCC\x94"
};

static const nu_udb_t V00624 = {
	0x00624,
	"\xD9\x88\xD9\x94"
};

static const nu_udb_t V0A62A = {
	0x0A62A,
	"\xEA\x95\xAE"
};

static const nu_udb_t V00352 = {
	0x00352,
	""
};

static const nu_udb_t V0081C = {
	0x0081C,
	"\xE0\xA0\x9D"
};

static const nu_udb_t V00162 = {
	0x00162,
	"\x54\xCC\xA7"
};

static const nu_udb_t V00161 = {
	0x00161,
	"\x73\xCC\x8C"
};

static const nu_udb_t V00160 = {
	0x00160,
	"\x53\xCC\x8C"
};

static const nu_udb_t V2F8D8 = {
	0x2F8D8,
	"\xE6\x9C\x97"
};

static const nu_udb_t V2F8DA = {
	0x2F8DA,
	"\xE6\x9C\xA1"
};

static const nu_udb_t V2F8DB = {
	0x2F8DB,
	"\xE6\x9D\x9E"
};

static const nu_udb_t V022EB = {
	0x022EB,
	"\xE2\x8A\xB3\xCC\xB8"
};

static const nu_udb_t V2F8D4 = {
	0x2F8D4,
	"\xE6\x9C\x80"
};

static const nu_udb_t V0F955 = {
	0x0F955,
	"\xE5\x87\x8C"
};

static const nu_udb_t V2F8D5 = {
	0x2F8D5,
	"\xE6\x9A\x9C"
};

static const nu_udb_t V2F8D6 = {
	0x2F8D6,
	"\xE8\x82\xAD"
};

static const nu_udb_t V2F8D7 = {
	0x2F8D7,
	"\xE4\x8F\x99"
};

static const nu_udb_t V2F8D0 = {
	0x2F8D0,
	"\xE3\xAC\x88"
};

static const nu_udb_t V02EC2 = {
	0x02EC2,
	"\xE8\xA1\xA4"
};

static const nu_udb_t V0F95F = {
	0x0F95F,
	"\xE5\xAF\xA7"
};

static const nu_udb_t V00153 = {
	0x00153,
	"\x6F\x65"
};

static const nu_udb_t V01EFA = {
	0x01EFA,
	"\x4C\x4C"
};

static const nu_udb_t V2F8D1 = {
	0x2F8D1,
	"\xE3\xAB\xA4"
};

static const nu_udb_t V01E41 = {
	0x01E41,
	"\x6D\xCC\x87"
};

static const nu_udb_t V2F8D2 = {
	0x2F8D2,
	"\xE5\x86\x92"
};

static const nu_udb_t V2F8D3 = {
	0x2F8D3,
	"\xE5\x86\x95"
};

static const nu_udb_t V02DEB = {
	0x02DEB,
	"\xD0\xBF"
};

static const nu_udb_t V00154 = {
	0x00154,
	"\x52\xCC\x81"
};

static const nu_udb_t V0032B = {
	0x0032B,
	""
};

static const nu_udb_t V0015A = {
	0x0015A,
	"\x53\xCC\x81"
};

static const nu_udb_t V2F8CC = {
	0x2F8CC,
	"\xE6\x9B\xB8"
};

static const nu_udb_t V01EE0 = {
	0x01EE0,
	"\x4F\xCC\x9B\xCC\x83"
};

static const nu_udb_t V0015F = {
	0x0015F,
	"\x73\xCC\xA7"
};

static const nu_udb_t V0F949 = {
	0x0F949,
	"\xE9\x9B\xB7"
};

static const nu_udb_t V01EE5 = {
	0x01EE5,
	"\x75\xCC\xA3"
};

static const nu_udb_t V0F94F = {
	0x0F94F,
	"\xE7\xB4\xAF"
};

static const nu_udb_t V00143 = {
	0x00143,
	"\x4E\xCC\x81"
};

static const nu_udb_t V0F94D = {
	0x0F94D,
	"\xE6\xB7\x9A"
};

static const nu_udb_t V10993 = {
	0x10993,
	"\xF0\x90\xA6\xAF"
};

static const nu_udb_t V10992 = {
	0x10992,
	"\xF0\x90\xA6\xAE"
};

static const nu_udb_t V2F8CD = {
	0x2F8CD,
	"\xE6\x99\x89"
};

static const nu_udb_t V0F9B1 = {
	0x0F9B1,
	"\xE9\x88\xB4"
};

static const nu_udb_t V00822 = {
	0x00822,
	"\xE0\xA0\xA3"
};

static const nu_udb_t V0F9B7 = {
	0x0F9B7,
	"\xE9\x86\xB4"
};

static const nu_udb_t V00824 = {
	0x00824,
	"\xE0\xA0\xA5"
};

static const nu_udb_t V10998 = {
	0x10998,
	"\xF0\x90\xA6\xB4"
};

static const nu_udb_t V00826 = {
	0x00826,
	"\xE0\xA0\xA7"
};

static const nu_udb_t V00829 = {
	0x00829,
	"\xE0\xA0\xAA"
};

static const nu_udb_t V1099D = {
	0x1099D,
	"\xF0\x90\xA6\xB7"
};

static const nu_udb_t V1099C = {
	0x1099C,
	"\xF0\x90\xA6\xB6"
};

static const nu_udb_t V02DF3 = {
	0x02DF3,
	"\xD1\x89"
};

static const nu_udb_t V02DF4 = {
	0x02DF4,
	"\xD1\xB3"
};

static const nu_udb_t V01EDB = {
	0x01EDB,
	"\x6F\xCC\x9B\xCC\x81"
};

static const nu_udb_t V02DF6 = {
	0x02DF6,
	"\xD0\xB0"
};

static const nu_udb_t V2F8CE = {
	0x2F8CE,
	"\xE3\xAC\x99"
};

static const nu_udb_t V2F8CF = {
	0x2F8CF,
	"\xE6\x9A\x91"
};

static const nu_udb_t V0F9A2 = {
	0x0F9A2,
	"\xE5\xBB\x89"
};

static const nu_udb_t V2F8C8 = {
	0x2F8C8,
	"\xE6\x95\x8F"
};

static const nu_udb_t V01F99 = {
	0x01F99,
	"\xCE\x97\xCC\x94\xCD\x85"
};

static const nu_udb_t V2F8C9 = {
	0x2F8C9,
	"\xE6\x95\xAC"
};

static const nu_udb_t V2F8CA = {
	0x2F8CA,
	"\xF0\xA3\x80\x8A"
};

static const nu_udb_t V2F8CB = {
	0x2F8CB,
	"\xE6\x97\xA3"
};

static const nu_udb_t V01FF7 = {
	0x01FF7,
	"\xCF\x89\xCD\x82\xCD\x85"
};

static const nu_udb_t V00859 = {
	0x00859,
	""
};

static const nu_udb_t V000E4 = {
	0x000E4,
	"\x61\xCC\x88"
};

static const nu_udb_t V0085B = {
	0x0085B,
	""
};

static const nu_udb_t V0085A = {
	0x0085A,
	""
};

static const nu_udb_t V2F8C4 = {
	0x2F8C4,
	"\xE6\x91\xBE"
};

static const nu_udb_t V022AC = {
	0x022AC,
	"\xE2\x8A\xA2\xCC\xB8"
};

static const nu_udb_t V109B0 = {
	0x109B0,
	"\xF0\x90\xA6\xAF"
};

static const nu_udb_t V000E2 = {
	0x000E2,
	"\x61\xCC\x82"
};

static const nu_udb_t V01EC8 = {
	0x01EC8,
	"\x49\xCC\x89"
};

static const nu_udb_t V01ECF = {
	0x01ECF,
	"\x6F\xCC\x89"
};

static const nu_udb_t V2F8C7 = {
	0x2F8C7,
	"\xE3\xA9\xAC"
};

static const nu_udb_t V01F4C = {
	0x01F4C,
	"\xCE\x9F\xCC\x93\xCC\x81"
};

static const nu_udb_t V2F8C0 = {
	0x2F8C0,
	"\xE6\x8F\x85"
};

static const nu_udb_t V1099B = {
	0x1099B,
	"\xF0\x90\xA6\xB5"
};

static const nu_udb_t V022ED = {
	0x022ED,
	"\xE2\x8A\xB5\xCC\xB8"
};

static const nu_udb_t V10994 = {
	0x10994,
	"\xF0\x90\xA6\xAF"
};

static const nu_udb_t V10995 = {
	0x10995,
	"\xF0\x90\xA6\xB1"
};

static const nu_udb_t V01F56 = {
	0x01F56,
	"\xCF\x85\xCC\x93\xCD\x82"
};

static const nu_udb_t V10996 = {
	0x10996,
	"\xF0\x90\xA6\xB2"
};

static const nu_udb_t V01E11 = {
	0x01E11,
	"\x64\xCC\xA7"
};

static const nu_udb_t V01E10 = {
	0x01E10,
	"\x44\xCC\xA7"
};

static const nu_udb_t V01FED = {
	0x01FED,
	"\xC2\xA8\xCC\x80"
};

static const nu_udb_t V01F5B = {
	0x01F5B,
	"\xCE\xA5\xCC\x94\xCC\x80"
};

static const nu_udb_t V02EA6 = {
	0x02EA6,
	"\xE4\xB8\xAC"
};

static const nu_udb_t V02CE4 = {
	0x02CE4,
	"\xE2\xB2\x95\xE2\xB2\x81\xE2\xB2\x93"
};

static const nu_udb_t V02EA4 = {
	0x02EA4,
	"\xE7\x88\xAB"
};

static const nu_udb_t V0FE52 = {
	0x0FE52,
	"\x2E"
};

static const nu_udb_t V16F06 = {
	0x16F06,
	"\xF0\x96\xBC\x84"
};

static const nu_udb_t V01E0D = {
	0x01E0D,
	"\x64\xCC\xA3"
};

static const nu_udb_t V0F986 = {
	0x0F986,
	"\xE9\x96\xAD"
};

static const nu_udb_t V01E1A = {
	0x01E1A,
	"\x45\xCC\xB0"
};

static const nu_udb_t V00359 = {
	0x00359,
	""
};

static const nu_udb_t V01E1C = {
	0x01E1C,
	"\x45\xCC\xA7\xCC\x86"
};

static const nu_udb_t V0FE55 = {
	0x0FE55,
	"\x3A"
};

static const nu_udb_t V01E1E = {
	0x01E1E,
	"\x46\xCC\x87"
};

static const nu_udb_t V10997 = {
	0x10997,
	"\xF0\x90\xA6\xB3"
};

static const nu_udb_t V01E00 = {
	0x01E00,
	"\x41\xCC\xA5"
};

static const nu_udb_t V02E90 = {
	0x02E90,
	"\xE5\xB0\xA2"
};

static const nu_udb_t V02E97 = {
	0x02E97,
	"\xE5\xBF\x83"
};

static const nu_udb_t V02E96 = {
	0x02E96,
	"\xE5\xBF\x84"
};

static const nu_udb_t V10990 = {
	0x10990,
	"\xF0\x90\xA6\xAC"
};

static const nu_udb_t V1098C = {
	0x1098C,
	"\xF0\x90\xA6\xAA"
};

static const nu_udb_t V01E06 = {
	0x01E06,
	"\x42\xCC\xB1"
};

static const nu_udb_t V01E09 = {
	0x01E09,
	"\x63\xCC\xA7\xCC\x81"
};

static const nu_udb_t V0034C = {
	0x0034C,
	""
};

static const nu_udb_t V01E0B = {
	0x01E0B,
	"\x64\xCC\x87"
};

static const nu_udb_t V1098D = {
	0x1098D,
	"\xF0\x90\xA6\xAA"
};

static const nu_udb_t V0FA37 = {
	0x0FA37,
	"\xE5\x98\x86"
};

static const nu_udb_t V01E0C = {
	0x01E0C,
	"\x44\xCC\xA3"
};

static const nu_udb_t V01E0F = {
	0x01E0F,
	"\x64\xCC\xB1"
};

static const nu_udb_t V0F9F9 = {
	0x0F9F9,
	"\xE7\xB2\x92"
};

static const nu_udb_t V01E31 = {
	0x01E31,
	"\x6B\xCC\x81"
};

static const nu_udb_t V02E81 = {
	0x02E81,
	"\xE5\x8E\x82"
};

static const nu_udb_t V01E33 = {
	0x01E33,
	"\x6B\xCC\xA3"
};

static const nu_udb_t V01E32 = {
	0x01E32,
	"\x4B\xCC\xA3"
};

static const nu_udb_t V16F13 = {
	0x16F13,
	"\xF0\x96\xBC\x90"
};

static const nu_udb_t V01E21 = {
	0x01E21,
	"\x67\xCC\x84"
};

static const nu_udb_t V1098E = {
	0x1098E,
	"\xF0\x90\xA6\xAB"
};

static const nu_udb_t V1098F = {
	0x1098F,
	"\xF0\x90\xA6\xAB"
};

static const nu_udb_t V02E8A = {
	0x02E8A,
	"\xE5\x8D\x9C"
};

static const nu_udb_t V0FA22 = {
	0x0FA22,
	"\xE8\xAB\xB8"
};

static const nu_udb_t V02E88 = {
	0x02E88,
	"\xE5\x88\x80"
};

static const nu_udb_t V10988 = {
	0x10988,
	"\xF0\x90\xA6\xA7"
};

static const nu_udb_t V10989 = {
	0x10989,
	"\xF0\x90\xA6\xA8"
};

static const nu_udb_t V02E8D = {
	0x02E8D,
	"\xE5\xB0\x8F"
};

static const nu_udb_t V0F99F = {
	0x0F99F,
	"\xE7\x83\x88"
};

static const nu_udb_t V01F87 = {
	0x01F87,
	"\xCE\xB1\xCC\x94\xCD\x82\xCD\x85"
};

static const nu_udb_t V01F84 = {
	0x01F84,
	"\xCE\xB1\xCC\x93\xCC\x81\xCD\x85"
};

static const nu_udb_t V02EF1 = {
	0x02EF1,
	"\xE9\xBE\x9C"
};

static const nu_udb_t V1098A = {
	0x1098A,
	"\xF0\x90\xA6\xA9"
};

static const nu_udb_t V1098B = {
	0x1098B,
	"\xF0\x90\xA6\xA9"
};

static const nu_udb_t V2F98E = {
	0x2F98E,
	"\xE4\x91\xAB"
};

static const nu_udb_t V01F89 = {
	0x01F89,
	"\xCE\x91\xCC\x94\xCD\x85"
};

static const nu_udb_t V10984 = {
	0x10984,
	"\xF0\x90\xA6\xA4"
};

static const nu_udb_t V10985 = {
	0x10985,
	"\xF0\x90\xA6\xA5"
};

static const nu_udb_t V10986 = {
	0x10986,
	"\xF0\x90\xA6\xA6"
};

static const nu_udb_t V01E28 = {
	0x01E28,
	"\x48\xCC\xA7"
};

static const nu_udb_t V01E2B = {
	0x01E2B,
	"\x68\xCC\xAE"
};

static const nu_udb_t V2F985 = {
	0x2F985,
	"\xE8\x84\xBE"
};

static const nu_udb_t V01E2D = {
	0x01E2D,
	"\x69\xCC\xB0"
};

static const nu_udb_t V01E2C = {
	0x01E2C,
	"\x49\xCC\xB0"
};

static const nu_udb_t V2F998 = {
	0x2F998,
	"\xE8\x8B\xA5"
};

static const nu_udb_t V10987 = {
	0x10987,
	"\xF0\x90\xA6\xA6"
};

static const nu_udb_t V0F9D8 = {
	0x0F9D8,
	"\xE5\xBE\x8B"
};

static const nu_udb_t V01F95 = {
	0x01F95,
	"\xCE\xB7\xCC\x94\xCC\x81\xCD\x85"
};

static const nu_udb_t V10980 = {
	0x10980,
	"\xF0\x90\xA6\xA0"
};

static const nu_udb_t V10981 = {
	0x10981,
	"\xF0\x90\xA6\xA1"
};

static const nu_udb_t V0022C = {
	0x0022C,
	"\x4F\xCC\x83\xCC\x84"
};

static const nu_udb_t V2F874 = {
	0x2F874,
	"\xE5\xBD\x93"
};

static const nu_udb_t V10982 = {
	0x10982,
	"\xF0\x90\xA6\xA2"
};

static const nu_udb_t V10983 = {
	0x10983,
	"\xF0\x90\xA6\xA3"
};

static const nu_udb_t V01E59 = {
	0x01E59,
	"\x72\xCC\x87"
};

static const nu_udb_t V10C39 = {
	0x10C39,
	"\xF0\x90\xB0\xB8"
};

static const nu_udb_t V01FE2 = {
	0x01FE2,
	"\xCF\x85\xCC\x88\xCC\x80"
};

static const nu_udb_t V10C3B = {
	0x10C3B,
	"\xF0\x90\xB0\xBA"
};

static const nu_udb_t V01FE0 = {
	0x01FE0,
	"\xCF\x85\xCC\x86"
};

static const nu_udb_t V01FE1 = {
	0x01FE1,
	"\xCF\x85\xCC\x84"
};

static const nu_udb_t V0021A = {
	0x0021A,
	"\x54\xCC\xA6"
};

static const nu_udb_t V10C35 = {
	0x10C35,
	"\xF0\x90\xB0\xB4"
};

static const nu_udb_t V2F87F = {
	0x2F87F,
	"\xE5\xB5\xAB"
};

static const nu_udb_t V0021F = {
	0x0021F,
	"\x68\xCC\x8C"
};

static const nu_udb_t V10C37 = {
	0x10C37,
	"\xF0\x90\xB0\xB6"
};

static const nu_udb_t V01E42 = {
	0x01E42,
	"\x4D\xCC\xA3"
};

static const nu_udb_t V00B5C = {
	0x00B5C,
	"\xE0\xAC\xA1\xE0\xA4\xBC"
};

static const nu_udb_t V01E44 = {
	0x01E44,
	"\x4E\xCC\x87"
};

static const nu_udb_t V00202 = {
	0x00202,
	"\x41\xCC\x91"
};

static const nu_udb_t V00201 = {
	0x00201,
	"\x61\xCC\x8F"
};

static const nu_udb_t V01E49 = {
	0x01E49,
	"\x6E\xCC\xB1"
};

static const nu_udb_t V030BC = {
	0x030BC,
	"\xE3\x82\xBB\xE3\x82\x99"
};

static const nu_udb_t V00B5D = {
	0x00B5D,
	"\xE0\xAC\xA2\xE0\xA4\xBC"
};

static const nu_udb_t V2F802 = {
	0x2F802,
	"\xE4\xB9\x81"
};

static const nu_udb_t V10C33 = {
	0x10C33,
	"\xF0\x90\xB0\xB2"
};

static const nu_udb_t V01ED9 = {
	0x01ED9,
	"\x6F\xCC\xA3\xCC\x82"
};

static const nu_udb_t V01FF6 = {
	0x01FF6,
	"\xCF\x89\xCD\x82"
};

static const nu_udb_t V01E4E = {
	0x01E4E,
	"\x4F\xCC\x83\xCC\x88"
};

static const nu_udb_t V10C2E = {
	0x10C2E,
	"\xF0\x90\xB0\xAD"
};

static const nu_udb_t V10C29 = {
	0x10C29,
	"\xF0\x90\xB0\xA8"
};

static const nu_udb_t V0FF1F = {
	0x0FF1F,
	"\x3F"
};

static const nu_udb_t V0020D = {
	0x0020D,
	"\x6F\xCC\x8F"
};

static const nu_udb_t V10C2B = {
	0x10C2B,
	"\xF0\x90\xB0\xAA"
};

static const nu_udb_t V10C25 = {
	0x10C25,
	"\xF0\x90\xB0\xA4"
};

static const nu_udb_t V10C27 = {
	0x10C27,
	"\xF0\x90\xB0\xA6"
};

static const nu_udb_t V00B4C = {
	0x00B4C,
	"\xE0\xAD\x87\xE0\xAD\x97"
};

static const nu_udb_t V01C37 = {
	0x01C37,
	"\xE0\xA4\xBC"
};

static const nu_udb_t V01FFD = {
	0x01FFD,
	"\xC2\xB4"
};

static const nu_udb_t V10C1F = {
	0x10C1F,
	"\xF0\x90\xB0\x9E"
};

static const nu_udb_t V2F812 = {
	0x2F812,
	"\xF0\xA0\x94\x9C"
};

static const nu_udb_t V00389 = {
	0x00389,
	"\xCE\x97\xCC\x81"
};

static const nu_udb_t V00B4B = {
	0x00B4B,
	"\xE0\xAD\x87\xE0\xAC\xBE"
};

static const nu_udb_t V01FC6 = {
	0x01FC6,
	"\xCE\xB7\xCD\x82"
};

static const nu_udb_t V01FC7 = {
	0x01FC7,
	"\xCE\xB7\xCD\x82\xCD\x85"
};

static const nu_udb_t V10C19 = {
	0x10C19,
	"\xF0\x90\xB0\x98"
};

static const nu_udb_t V10C1B = {
	0x10C1B,
	"\xF0\x90\xB0\x9A"
};

static const nu_udb_t V01E63 = {
	0x01E63,
	"\x73\xCC\xA3"
};

static const nu_udb_t V01E62 = {
	0x01E62,
	"\x53\xCC\xA3"
};

static const nu_udb_t V10C15 = {
	0x10C15,
	"\xF0\x90\xB0\x94"
};

static const nu_udb_t V10C17 = {
	0x10C17,
	"\xF0\x90\xB0\x96"
};

static const nu_udb_t V10C10 = {
	0x10C10,
	"\xF0\x90\xB0\x8F"
};

static const nu_udb_t V01FCF = {
	0x01FCF,
	"\xE1\xBE\xBF\xCD\x82"
};

static const nu_udb_t V10C12 = {
	0x10C12,
	"\xF0\x90\xB0\x91"
};

static const nu_udb_t V10C0C = {
	0x10C0C,
	"\xF0\x90\xB0\x8B"
};

static const nu_udb_t V0F953 = {
	0x0F953,
	"\xE8\x82\x8B"
};

static const nu_udb_t V0FA50 = {
	0x0FA50,
	"\xE7\xA5\x96"
};

static const nu_udb_t V00329 = {
	0x00329,
	""
};

static const nu_udb_t V01FD1 = {
	0x01FD1,
	"\xCE\xB9\xCC\x84"
};

static const nu_udb_t V10C0E = {
	0x10C0E,
	"\xF0\x90\xB0\x8D"
};

static const nu_udb_t V019DF = {
	0x019DF,
	"\xE1\xA6\x9C\xE1\xA6\xB6\xE1\xA7\x81"
};

static const nu_udb_t V10C0A = {
	0x10C0A,
	"\xF0\x90\xB0\x89"
};

static const nu_udb_t V10C04 = {
	0x10C04,
	"\xF0\x90\xB0\x83"
};

static const nu_udb_t V10C01 = {
	0x10C01,
	"\xF0\x90\xB0\x80"
};


static const nu_udb_t* VALUES[] = {
	&V00B94, &V00B82, &V0A612, &V01FDE, &V0A614, &V0A617, 
	&V0A616, &V0A619, &V0A618, &V0A61B, &V2F969, &V0A61D, 
	&V10C44, &V0A61F, &V2F9EB, &V10C46, &V11102, &V10C40, 
	&V11100, &V11101, &V01E86, &V10C42, &V00E33, &V02ADC, 
	&V00BCC, &V00BCA, &V00BCB, &V01F3C, &V01F3D, &V01F3E, 
	&V01F3F, &V2F9FC, &V01F38, &V01F39, &V01F3A, &V01F3B, 
	&V01F34, &V01F2D, &V01F2E, &V0FAA1, &V00821, &V01F29, 
	&V01F2A, &V01F2B, &V030D6, &V01F24, &V030D4, &V00828, 
	&V030DA, &V01F25, &V01F26, &V01F27, &V01F20, &V01F21, 
	&V01F22, &V01F23, &V01F1C, &V0A62B, &V02244, &V01F1D, 
	&V01F18, &V000E6, &V01F19, &V00D4B, &V00D4A, &V01ED5, 
	&V01ED4, &V00312, &V00315, &V0FA83, &V00317, &V00316, 
	&V00319, &V00318, &V01EDC, &V02209, &V0031D, &V0031C, 
	&V0031F, &V0031E, &V01F1A, &V01F14, &V2F92F, &V01F15, 
	&V01F10, &V01F11, &V01F12, &V01F13, &V01F0C, &V01F0D, 
	&V0FF31, &V01F0E, &V0030D, &V01EF1, &V01EF0, &V01F0F, 
	&V01F08, &V0081E, &V00333, &V0A675, &V0A674, &V0A677, 
	&V0A676, &V0A679, &V02224, &V0A67B, &V0033B, &V0A67D, 
	&V0033D, &V0033C, &V0033F, &V01EE3, &V0A678, &V00320, 
	&V0A67A, &V01EE7, &V01EE6, &V003AD, &V0FF2D, &V0A669, 
	&V0A668, &V0A66B, &V0A66A, &V0A66D, &V0A66C, &V0032C, 
	&V0A66E, &V01F09, &V0FF1B, &V00350, &V0FF19, &V0FF77, 
	&V00355, &V0FF1E, &V00357, &V00625, &V0FA07, &V01F0A, 
	&V0FF70, &V02249, &V01BC8, &V0A69F, &V0FF05, &V0FF04, 
	&V00341, &V00340, &V00623, &V02271, &V02270, &V00344, 
	&V2F963, &V00346, &V01BDC, &V00348, &V0034B, &V0034A, 
	&V02278, &V01F0B, &V01F04, &V0034E, &V01F05, &V01F06, 
	&V2F810, &V01F07, &V02260, &V00374, &V02262, &V01F00, 
	&V01F01, &V01F02, &V2F818, &V0037A, &V2F81A, &V0FF66, 
	&V2F81C, &V0037E, &V00DDA, &V03032, &V00DDC, &V0FF47, 
	&V00365, &V00364, &V0FFB7, &V00366, &V02CF1, &V00368, 
	&V0036B, &V0303C, &V0036D, &V01F03, &V01F7C, &V2F80F, 
	&V2F80E, &V00390, &V0FF59, &V2F833, &V02280, &V01F7D, 
	&V01F78, &V02285, &V01F79, &V01F7A, &V01F7B, &V02289, 
	&V02288, &V01F74, &V003CD, &V03050, &V01F75, &V03052, 
	&V0FF49, &V03054, &V2F822, &V03056, &V02CEF, &V2F827, 
	&V0FFB3, &V0305A, &V0FFB1, &V0305C, &V01F76, &V0038C, 
	&V005C7, &V0FFB4, &V0FFBB, &V2F851, &V2F850, &V01F77, 
	&V01F70, &V0FFBE, &V0FFBD, &V2F857, &V016B6, &V01F71, 
	&V0FFA1, &V0304C, &V01F72, &V0304E, &V0FFA5, &V03070, 
	&V03073, &V2F841, &V022AE, &V03074, &V03077, &V03076, 
	&V03079, &V0FFAC, &V01F73, &V01F6C, &V01F6D, &V2F84B, 
	&V0FF97, &V01F6E, &V0FF0C, &V03060, &V01F6F, &V03062, 
	&V0FF99, &V01F68, &V03067, &V2F875, &V03069, &V2F877, 
	&V01F69, &V0FF82, &V2F878, &V1D15E, &V2F87A, &V0FF86, 
	&V0FF85, &V0FF84, &V0FF8B, &V01F6A, &V0FF89, &V03094, 
	&V01F6B, &V0FF8E, &V01F64, &V01F65, &V01F66, &V01F67, 
	&V003CB, &V003CA, &V01F60, &V0309E, &V003CF, &V003CE, 
	&V2F983, &V01F61, &V0FFAE, &V022E1, &V2F97F, &V2F895, 
	&V01F62, &V01F63, &V01F5D, &V2F899, &V0F9AE, &V2F89B, 
	&V01F5F, &V02DFD, &V02DF1, &V0095C, &V022EC, &V030B2, 
	&V02DF2, &V030B4, &V02DE9, &V030B6, &V0FFED, &V030B8, 
	&V02DEA, &V030BA, &V02226, &V10A0F, &V02DE2, &V030BE, 
	&V2F965, &V01FB9, &V01FBA, &V2F8B1, &V2F8B0, &V2F8B3, 
	&V2F8B2, &V2F8B5, &V01FBB, &V2F8B7, &V2F8B6, &V2F8B9, 
	&V2F8B8, &V030AC, &V2F8BA, &V2F8BD, &V030D1, &V2F8BF, 
	&V2F8BE, &V2F8A1, &V2F8A0, &V01FB4, &V01FB6, &V2F8A5, 
	&V2F8A4, &V01FB7, &V2F8A6, &V2F8A9, &V2F8A8, &V2F8AB, 
	&V02204, &V2F8AD, &V2F8AC, &V2F8AF, &V2F8AE, &V030C2, 
	&V030C5, &V00351, &V0220C, &V01FB0, &V030C9, &V01FB1, 
	&V01FB2, &V2F8D9, &V01FAC, &V01FAD, &V01FAE, &V01FAF, 
	&V01FA8, &V01FA9, &V01FAA, &V2F8C1, &V0FB2A, &V030F4, 
	&V030F7, &V2F8C5, &V030F9, &V030F8, &V2F8C6, &V030FA, 
	&V0F9FE, &V01FAB, &V01FA4, &V030FE, &V01FA5, &V01FA6, 
	&V01FA7, &V01FA0, &V0226E, &V0226F, &V01FA1, &V0226D, 
	&V01FA2, &V0FB41, &V0FB40, &V019DE, &V01FA3, &V01F9C, 
	&V02274, &V02275, &V0FB46, &V02DEF, &V01F9D, &V02279, 
	&V01F9F, &V01F9B, &V02DE4, &V01F96, &V01F97, &V01F90, 
	&V000F3, &V00367, &V0307A, &V02247, &V0A610, &V0F920, 
	&V2F96C, &V0F91F, &V0F918, &V0A615, &V0A61A, &V0F919, 
	&V0F91A, &V0F91B, &V0FF2A, &V0F9AD, &V0F914, &V0F909, 
	&V0F90A, &V000E8, &V0F901, &V0F970, &V009DD, &V009DC, 
	&V0F96E, &V0F96B, &V0F965, &V0F966, &V000A0, &V0F960, 
	&V0F961, &V0F963, &V0F95C, &V0F95E, &V0F958, &V2F990, 
	&V0F930, &V009CE, &V0F95A, &V0F95B, &V0FF10, &V2F82D, 
	&V2F82C, &V000D1, &V000D0, &V022AD, &V000D2, &V2F817, 
	&V000D4, &V2F815, &V0F954, &V000D9, &V000D8, &V000DB, 
	&V000DA, &V000DD, &V01F92, &V000DF, &V0F951, &V000C1, 
	&V000C0, &V000C3, &V000C2, &V000C5, &V000C4, &V000C7, 
	&V017D0, &V017D1, &V000C8, &V000CB, &V01F82, &V000CD, 
	&V000CC, &V000CF, &V000CE, &V00EB3, &V0F952, &V0F94E, 
	&V0A8F5, &V017DD, &V0F948, &V0F947, &V000F6, &V00A5B, 
	&V000F8, &V000FB, &V000FA, &V000FD, &V000FC, &V000FF, 
	&V2F87C, &V000E1, &V0F940, &V000E3, &V022E2, &V2F826, 
	&V0F941, &V000E7, &V0F942, &V000E9, &V0F943, &V02126, 
	&V022EA, &V000ED, &V000EC, &V000EF, &V000EE, &V016B4, 
	&V01BDA, &V0F9BD, &V0F9BE, &V0F9BF, &V016BB, &V0F9B4, 
	&V016BD, &V2F85B, &V0F974, &V0F9B6, &V0F9AC, &V0F9A9, 
	&V0F9AA, &V0F9AB, &V016A5, &V2F843, &V016A7, &V2F800, 
	&V2F801, &V2F806, &V2F807, &V01BCD, &V0F9A4, &V0F9A5, 
	&V0F9A0, &V2F808, &V016D1, &V016D0, &V016D3, &V0F9A1, 
	&V016D5, &V016D4, &V0F99C, &V0F99D, &V016D9, &V016D8, 
	&V016DB, &V2F814, &V016DD, &V2F8BB, &V0F998, &V0F999, 
	&V0F99A, &V016C0, &V2F81F, &V016C2, &V00931, &V0F99B, 
	&V0F994, &V016C6, &V0F995, &V0F996, &V0F997, &V0F990, 
	&V016CD, &V0F991, &V0F992, &V016CE, &V0F993, &V016F0, 
	&V0F98C, &V0F98D, &V0F98E, &V0F98F, &V01F4D, &V0F984, 
	&V0F985, &V2F90C, &V0F982, &V0F983, &V0F9FC, &V0F9FD, 
	&V0F9FA, &V0F9FB, &V0A611, &V01FF3, &V2F89E, &V0F9F4, 
	&V0F9F1, &V2F842, &V016E7, &V0F9F2, &V0F9ED, &V0F9EE, 
	&V0F9EF, &V016EA, &V0F9E8, &V0F9E9, &V0F9EA, &V016EE, 
	&V0F9EB, &V0F9E4, &V0F9E5, &V0F9E6, &V0F9E7, &V0F9E0, 
	&V0F9E1, &V0F9E2, &V0F9E3, &V0F9DC, &V0F9DD, &V2F8F5, 
	&V0A8F4, &V0A8F7, &V0A8F6, &V0F9DE, &V0F9DF, &V0F9D9, 
	&V0F9DA, &V0F9DB, &V0F9D4, &V0F9D5, &V0F9D6, &V10B2E, 
	&V0F9D7, &V2F95C, &V2F8A7, &V0F907, &V0F9D0, &V2F8AA, 
	&V0F9D1, &V01F52, &V0F9D2, &V0F9D3, &V0F9CC, &V0F9CD, 
	&V00D02, &V0F9CE, &V0F9CF, &V021AE, &V0F9C8, &V0F9C9, 
	&V0F9CA, &V1099A, &V0F9CB, &V0F9F5, &V10999, &V0F9C4, 
	&V0F9C5, &V0F9C6, &V2F947, &V0F9C7, &V0F9C0, &V0F9C1, 
	&V01F48, &V2F97A, &V0F9C2, &V2F97C, &V0F9C3, &V0A9B3, 
	&V2F971, &V0A9AC, &V01F40, &V0A980, &V01CF3, &V0A981, 
	&V2F977, &V0A983, &V2F93C, &V2F93D, &V2F93E, &V2F93F, 
	&V2F93A, &V005F0, &V2F93B, &V2F934, &V2F935, &V2F936, 
	&V2F937, &V01F51, &V2F930, &V01F53, &V2F931, &V0A61E, 
	&V2F933, &V0A61C, &V1D1C0, &V2F92C, &V01CEB, &V01CEA, 
	&V2F92D, &V2F92E, &V2F928, &V2F929, &V2F92A, &V01DDA, 
	&V2F89F, &V2F92B, &V2F924, &V2F925, &V2F926, &V2F922, 
	&V2F923, &V001BE, &V2F91C, &V2F91D, &V2F91E, &V2F91F, 
	&V2F918, &V2F919, &V2F91A, &V000E5, &V2F91B, &V000EB, 
	&V2F914, &V00A59, &V2F915, &V2F8C2, &V2F8C3, &V2F916, 
	&V000F2, &V2F917, &V00A5E, &V2F910, &V2F941, &V2F942, 
	&V000F4, &V2F8BC, &V2F943, &V2F9BC, &V2F9BD, &V000F9, 
	&V02281, &V01BD3, &V2F9BE, &V01BD5, &V2F9BF, &V2F9B8, 
	&V2F9B4, &V01BD9, &V000C6, &V2F98C, &V0015D, &V2F9D1, 
	&V2F9D2, &V01BDF, &V2F9D3, &V01BC1, &V0FA36, &V01BC3, 
	&V2F9CC, &V2F9CD, &V01BC4, &V000D3, &V01BC6, &V2F9CE, 
	&V000D6, &V2F9CF, &V01BCA, &V000D5, &V01BCC, &V01BCF, 
	&V2F9C8, &V2F9C9, &V2F9CB, &V2F9C5, &V2F9C6, &V2F9C7, 
	&V2F9C0, &V0FFE8, &V0FFE9, &V0FFEA, &V0FFEB, &V00172, 
	&V00385, &V0FFE4, &V01F8D, &V00C03, &V01F83, &V02E8E, 
	&V0FFE0, &V0FFE1, &V0FFE2, &V0FFE3, &V0FFDC, &V0FFDA, 
	&V01BE6, &V0FFDB, &V01BE8, &V01BEB, &V0016D, &V01BED, 
	&V02EDD, &V01BEF, &V01F93, &V0FFD4, &V0FFD5, &V0FFD6, 
	&V0FFD7, &V01F94, &V0FFD2, &V0FFD3, &V0FFCC, &V0F987, 
	&V00F43, &V0FFCD, &V0FFCE, &V0011C, &V0FFCF, &V0212A, 
	&V00C01, &V0FFCA, &V0FFCB, &V0FFC4, &V000F0, &V0FFC5, 
	&V0FFC6, &V0FFC7, &V0A728, &V0FFC2, &V0FFC3, &V00C48, 
	&V00CBC, &V0010C, &V00F57, &V0FF23, &V01D79, &V01D7A, 
	&V0FF26, &V0FF27, &V00C82, &V00C83, &V00F30, &V00F5C, 
	&V02DE1, &V00F31, &V00F32, &V00F33, &V0FF2C, &V01CED, 
	&V00F2C, &V01CEF, &V00F2D, &V00F2E, &V00F2F, &V0FF37, 
	&V00F2A, &V00F2B, &V00F0C, &V00FAC, &V00CC8, &V00CCA, 
	&V00CCB, &V00CC7, &V02E93, &V00CC0, &V00F00, &V00F7E, 
	&V00F7F, &V00FBA, &V00F78, &V00F75, &V00F76, &V00F73, 
	&V00F69, &V00FBC, &V0FF08, &V00F6A, &V0013C, &V0202F, 
	&V00F81, &V0013D, &V0013E, &V0013A, &V0013B, &V0FF11, 
	&V00134, &V0A613, &V022E0, &V00135, &V01DFF, &V020D3, 
	&V2F961, &V0012D, &V00F93, &V0012E, &V00128, &V00129, 
	&V0012B, &V0FF63, &V0FF60, &V00124, &V00125, &V00126, 
	&V0FF64, &V00127, &V00120, &V00121, &V00122, &V0FF42, 
	&V00123, &V02EA0, &V02EA3, &V0011D, &V02CF0, &V00169, 
	&V00164, &V02E94, &V02E95, &V0014E, &V2F945, &V2F944, 
	&V0FF7A, &V0014F, &V00148, &V001E0, &V00144, &V00145, 
	&V0F908, &V0FF7D, &V00146, &V0FF5C, &V00147, &V00141, 
	&V0FF5B, &V02EF2, &V02EED, &V02EEE, &V02EEF, &V02EE8, 
	&V00F4D, &V0A77C, &V02EE9, &V02EEA, &V02EEB, &V02EE4, 
	&V02EE5, &V02EE7, &V0FF50, &V0FF51, &V0FF56, &V0FF57, 
	&V02EE0, &V0FF36, &V0FF5A, &V003B0, &V0FF35, &V0FF32, 
	&V02EE2, &V0FF5F, &V030C7, &V02EE3, &V0FFA2, &V02E91, 
	&V0FFA0, &V0FF3A, &V02E92, &V02EDC, &V02EDE, &V02EDF, 
	&V0FFAA, &V02E99, &V02ED8, &V0FFA9, &V02ED9, &V000F1, 
	&V0A67C, &V02EDB, &V0FFB2, &V000F5, &V02ED4, &V02E83, 
	&V02E82, &V02ED5, &V02E84, &V02E87, &V02E86, &V02E89, 
	&V00F9D, &V0FF12, &V02ED1, &V02ECA, &V02ECB, &V02E8F, 
	&V001AF, &V02EB1, &V02EB0, &V02EB3, &V02EB2, &V02EB5, 
	&V02EB4, &V02EB7, &V02EB6, &V02EB9, &V0FFE5, &V02EBB, 
	&V02EBA, &V02EBD, &V02EBC, &V0FF8D, &V0F97A, &V02EC6, 
	&V02EC7, &V0FF91, &V02EC0, &V02EA5, &V00FB9, &V02EA7, 
	&V00FBB, &V02EA9, &V02EA8, &V02EAB, &V02EAA, &V02EAD, 
	&V02EAC, &V02EAF, &V02EAE, &V00FA2, &V02ED0, &V02ED3, 
	&V00FA7, &V000C9, &V02EC1, &V02ED7, &V02ED6, &V00B01, 
	&V11080, &V0FA2A, &V02EDA, &V11081, &V0FFEC, &V11082, 
	&V001FC, &V001FD, &V001FE, &V02EC3, &V0FA33, &V02EC5, 
	&V02EC4, &V001FF, &V001F8, &V02EC9, &V02EC8, &V0FA3A, 
	&V001F9, &V02ECD, &V0FA39, &V02ECF, &V0FA3F, &V0FA3C, 
	&V02EF0, &V001FA, &V00C02, &V001FB, &V001F5, &V0307C, 
	&V001F0, &V001EC, &V001ED, &V004D7, &V001EE, &V001EF, 
	&V001E8, &V001E9, &V000EA, &V02EE1, &V001EA, &V001EB, 
	&V020F0, &V0FFA8, &V001E6, &V001E7, &V02EE6, &V0A779, 
	&V001DB, &V0FA1A, &V0FA1B, &V0FA30, &V0FA19, &V0FA1E, 
	&V0FA31, &V0FA2C, &V0FA2D, &V0FA2F, &V00407, &V00400, 
	&V0FA2B, &V2F994, &V00403, &V01A59, &V0FA25, &V0F988, 
	&V0FA26, &V02241, &V0FA20, &V031AE, &V0FF8F, &V031A8, 
	&V00476, &V031A1, &V0FA17, &V0FF88, &V0FA10, &V0FF14, 
	&V0FA12, &V0FA0C, &V0FA0D, &V0FF92, &V0FF93, &V0FA08, 
	&V0FA09, &V0FA0A, &V0FA0B, &V0FA04, &V0FF9D, &V0FA00, 
	&V0FA01, &V0FA02, &V0FA03, &V0FA7C, &V0FA7D, &V01DD1, 
	&V0FA7E, &V01DD3, &V01DD2, &V01DD5, &V01DD4, &V0FA7F, 
	&V00215, &V01DD9, &V0A7A5, &V00216, &V00219, &V00218, 
	&V01DDC, &V01DDF, &V01DDE, &V01DC1, &V01DC0, &V01DC3, 
	&V01DC2, &V01DC5, &V01DC4, &V01DC7, &V01DC6, &V01DC9, 
	&V01DC8, &V01DCB, &V01DCA, &V01DCD, &V01DCC, &V01DCF, 
	&V01DCE, &V0FA75, &V0020F, &V0020E, &V00347, &V0F962, 
	&V0FA68, &V005F2, &V005F1, &V0FA69, &V02284, &V0FA6A, 
	&V0FA6B, &V00238, &V0FA64, &V0FA65, &V01DFE, &V0212B, 
	&V00457, &V01DE3, &V01DE2, &V01DE5, &V01DE4, &V0FA66, 
	&V0045D, &V10C08, &V00622, &V0FA67, &V0016E, &V0FA60, 
	&V0022B, &V0022A, &V0FA87, &V0FA61, &V0FA85, &V022E3, 
	&V0FA62, &V00714, &V0FA63, &V2F927, &V0FA5C, &V0FA5D, 
	&V0FA5E, &V0FA5F, &V0FA58, &V0FA59, &V0FA5A, &V0FA5B, 
	&V0FA54, &V0FA55, &V0FA52, &V0FA53, &V0FA4E, &V0FA4F, 
	&V0FA99, &V0FA48, &V0FA49, &V0FA4A, &V0FA4B, &V0FA44, 
	&V0FA45, &V0FA6C, &V0F922, &V00954, &V02DE6, &V0F921, 
	&V0F956, &V0FA46, &V0FA47, &V0FA40, &V0F92A, &V0FA41, 
	&V0FA42, &V0FA43, &V0FABC, &V0FABD, &V0F92C, &V0FABE, 
	&V0FABF, &V0FAB8, &V00674, &V0FE66, &V0FABB, &V0FAB4, 
	&V0FAB5, &V0FAB6, &V0FAB7, &V0FAB0, &V0FAB1, &V0F939, 
	&V0FAB2, &V0FAB3, &V0F93C, &V0F93D, &V0FAAC, &V0F975, 
	&V0F900, &V0219B, &V0F906, &V01BD7, &V0F904, &V0F905, 
	&V01036, &V0F90B, &V01038, &V0FAA9, &V0FAAA, &V0FAAB, 
	&V00981, &V0103F, &V0F912, &V0F913, &V0F910, &V0FAA4, 
	&V0FAA5, &V0F917, &V0FAA6, &V0F915, &V01026, &V0FAA7, 
	&V0FAA0, &V0102B, &V0FAA3, &V0FA9C, &V0FA9F, &V11180, 
	&V0FA98, &V0FA89, &V0FA8A, &V0FA81, &V0FA82, &V004DB, 
	&V0F964, &V004D6, &V01FFB, &V004D0, &V004D1, &V004D2, 
	&V004D3, &V004C1, &V004C2, &V0FAD8, &V0F972, &V0040D, 
	&V0081F, &V0F9F6, &V0FAD9, &V0FAD4, &V0FAD5, &V0FAD6, 
	&V0F902, &V0FAD7, &V0FAD0, &V017CB, &V0FAD1, &V0FAD2, 
	&V0F97C, &V0F97D, &V0FAD3, &V0FACC, &V0FACD, &V0FACE, 
	&V0F946, &V0FACF, &V0FAC8, &V0FAC9, &V0FACA, &V0F94B, 
	&V0FACB, &V0FAC4, &V0FAC5, &V0FAC6, &V0F94C, &V0FAC7, 
	&V0032F, &V0FAC0, &V0F950, &V0FAC1, &V009CB, &V0F957, 
	&V0071C, &V021CF, &V0FAC2, &V009CC, &V0FAC3, &V00745, 
	&V00746, &V0A7A2, &V00741, &V0F95D, &V00742, &V116B7, 
	&V116AC, &V116AB, &V00A3C, &V00A36, &V00A33, &V007E8, 
	&V007E9, &V007EA, &V0F9A8, &V2FA1C, &V2FA1D, &V0F9AF, 
	&V2FA18, &V2FA19, &V2FA1A, &V0F9B3, &V0F9B0, &V2FA1B, 
	&V2FA14, &V2FA15, &V2FA16, &V2FA17, &V006FE, &V2FA10, 
	&V2FA11, &V2FA12, &V2FA13, &V2FA0C, &V0F9BB, &V00727, 
	&V2FA0D, &V0FA15, &V0F980, &V2FA0E, &V0FA16, &V0072D, 
	&V0FA18, &V0072F, &V0072E, &V0FA1D, &V0FA1C, &V0F989, 
	&V0016C, &V00226, &V00227, &V0016F, &V2F967, &V0FA05, 
	&V0016A, &V00228, &V00229, &V0022E, &V0022F, &V2FA0F, 
	&V0022D, &V00232, &V00233, &V00173, &V2FA08, &V2FA09, 
	&V2FA0A, &V2FA0B, &V0FA32, &V0FA35, &V0FA34, &V00353, 
	&V00239, &V2FA04, &V0FA38, &V0FA3B, &V0035E, &V0FA3D, 
	&V00203, &V00200, &V0FA3E, &V00206, &V00207, &V00204, 
	&V00205, &V0020A, &V0020B, &V00208, &V00209, &V2FA05, 
	&V2FA06, &V0020C, &V01A64, &V00212, &V0F9F8, &V00210, 
	&V00211, &V0FA51, &V00217, &V00214, &V2FA07, &V2FA00, 
	&V0021B, &V0FA57, &V0FA56, &V0021E, &V0A734, &V2FA01, 
	&V0A73A, &V2FA02, &V0A738, &V2FA03, &V01A58, &V00A01, 
	&V00A02, &V0012F, &V00A03, &V1D164, &V1D160, &V1D162, 
	&V1D163, &V00A5A, &V1D15F, &V01B3D, &V02E9C, &V0FA4D, 
	&V0FA4C, &V00934, &V01B3B, &V0FA71, &V0FA70, &V0FA73, 
	&V0FA72, &V01B34, &V0FA74, &V2F932, &V0FA76, &V0FA79, 
	&V00ABC, &V0FA7B, &V0FA7A, &V1D1BC, &V1D1BD, &V1D1BE, 
	&V01F44, &V1D1BF, &V1D1BB, &V01B12, &V2F907, &V01F41, 
	&V01B0C, &V0A761, &V0F94A, &V01B0E, &V01B08, &V01B0A, 
	&V2F90F, &V0FA6D, &V03034, &V2F90A, &V2F90B, &V0FA91, 
	&V0FA90, &V0FA93, &V0FA92, &V0FA95, &V0FA94, &V0FA97, 
	&V0FA96, &V01B04, &V01B06, &V0FA9B, &V0FA9A, &V0FA9D, 
	&V002A3, &V01B00, &V0FA9E, &V01B01, &V0FA80, &V0A77D, 
	&V2F9E7, &V01B02, &V0FA84, &V00A81, &V0FA86, &V2F9E0, 
	&V0FA88, &V0FA8B, &V00A82, &V0FA8D, &V0FA8C, &V0FA8F, 
	&V0FA8E, &V0A74F, &V00A83, &V01B40, &V01B41, &V01B43, 
	&V01BBA, &V2F9F2, &V00D03, &V0FAB9, &V01F1B, &V01F30, 
	&V0FABA, &V0040C, &V2F9FD, &V03065, &V00D7C, &V00D7D, 
	&V00D7E, &V003AA, &V0FAA2, &V00D7F, &V00D7A, &V00D7B, 
	&V16F3F, &V16F25, &V0FAA8, &V03071, &V01B80, &V0FAAD, 
	&V003CC, &V0FAAF, &V0FAAE, &V01B82, &V01E3C, &V01F28, 
	&V01F2F, &V01E3D, &V01E3E, &V0307D, &V0FF15, &V01E3F, 
	&V00D4E, &V0FF16, &V00D4C, &V2F9DC, &V2F9DD, &V0FF1A, 
	&V00451, &V00450, &V00453, &V01E38, &V0FF01, &V01E39, 
	&V0FF03, &V0FF02, &V01E3A, &V0F92B, &V0FF07, &V0FF06, 
	&V0FF09, &V0045C, &V0012C, &V0FF0A, &V2F901, &V2F9A8, 
	&V03058, &V2F904, &V0305E, &V00137, &V0FF33, &V0F945, 
	&V01E3B, &V0FF34, &V2F9B1, &V00139, &V0FF39, &V0FF38, 
	&V0FF3B, &V00158, &V0FF3D, &V0FF3C, &V01E35, &V0FF3E, 
	&V030AE, &V01E37, &V00477, &V01E30, &V0010A, &V0FF24, 
	&V00108, &V00109, &V0FF29, &V0FF28, &V00D82, &V0010D, 
	&V00112, &V2F966, &V00213, &V0FF2E, &V2F997, &V00117, 
	&V0FF53, &V0FF52, &V0011A, &V0011B, &V00118, &V00119, 
	&V01F57, &V0FF58, &V01E2E, &V2F970, &V00491, &V00490, 
	&V01E2F, &V2F974, &V0FF41, &V0FF40, &V2F97B, &V00165, 
	&V0FF45, &V0FF44, &V00168, &V0FF46, &V10A0D, &V0FF48, 
	&V01E29, &V10A0E, &V0FF4D, &V0FF4C, &V0FF4F, &V0FF4E, 
	&V00485, &V00484, &V00487, &V00486, &V0FF75, &V0FF74, 
	&V2F94F, &V0FF76, &V0FF79, &V2F952, &V0FF7B, &V0F981, 
	&V01A54, &V0FF7C, &V0FF7F, &V0FF7E, &V0FF61, &V01A5B, 
	&V01A5A, &V0FF62, &V0FF65, &V01E2A, &V00DDE, &V00DDD, 
	&V2F95D, &V01E25, &V01E24, &V2F9D4, &V00152, &V2F9A6, 
	&V01E26, &V2F9A4, &V2F9A5, &V00157, &V2F9AB, &V00155, 
	&V0FF95, &V0FF94, &V2F9AF, &V2F9AC, &V0015E, &V0FF98, 
	&V0FF9B, &V2F9B0, &V01A74, &V0FF9C, &V0FF9F, &V0FF9E, 
	&V2F9B5, &V0FF80, &V0FF83, &V01E27, &V2F9B9, &V030D3, 
	&V030D0, &V01F80, &V004DD, &V02EB8, &V004DF, &V02EBE, 
	&V02EBF, &V0FF8C, &V2F987, &V030D9, &V00900, &V02E80, 
	&V030DC, &V030DD, &V0FFB5, &V0FA78, &V02E85, &V0FFB6, 
	&V02E8B, &V0FFB8, &V01E14, &V0FA06, &V004F1, &V02E8C, 
	&V004F3, &V004F2, &V004F5, &V004F4, &V0FFA3, &V01FFC, 
	&V004F9, &V0FFA4, &V0FFA7, &V0FFA6, &V02E9B, &V2F9E2, 
	&V0FFAB, &V02E9E, &V0FFAD, &V2F9E6, &V004E3, &V004E2, 
	&V004E5, &V004E4, &V004E7, &V004E6, &V01E20, &V0F97B, 
	&V004EB, &V004EA, &V004ED, &V004EC, &V004EF, &V004EE, 
	&V01E22, &V001E3, &V2F9F7, &V001E1, &V2F9F5, &V00953, 
	&V01E23, &V0FF1C, &V2F98F, &V2F9FE, &V2F9FF, &V00959, 
	&V00958, &V0095B, &V0095A, &V0095D, &V2F9C1, &V0095F, 
	&V0095E, &V01E1D, &V01E18, &V2F9CA, &V001F4, &V01E4D, 
	&V0FF0F, &V01E19, &V01E1B, &V01E15, &V01E16, &V01E17, 
	&V01E13, &V02ECE, &V01E0E, &V02ECC, &V01E08, &V02ED2, 
	&V01E0A, &V01E04, &V02DE7, &V02DE0, &V0FF3F, &V01E05, 
	&V02DE3, &V0FFE6, &V01E07, &V0FF87, &V01E01, &V01E02, 
	&V01E03, &V001D3, &V01E7C, &V001D1, &V001D6, &V2F946, 
	&V001D4, &V2F940, &V0FF2F, &V01E7D, &V01E7E, &V01E7F, 
	&V2F94D, &V0FF22, &V0FF25, &V01E78, &V01F33, &V01E79, 
	&V01E7A, &V01E7B, &V01F37, &V01F36, &V01F2C, &V01E74, 
	&V00336, &V01E75, &V0FFBA, &V01E76, &V0033A, &V01E87, 
	&V01E77, &V2F958, &V01E70, &V01E71, &V01E72, &V2F964, 
	&V01F32, &V00983, &V00982, &V2F960, &V01E73, &V01E6C, 
	&V01E6D, &V01E6E, &V0FF43, &V01E6F, &V01E68, &V01F50, 
	&V01E69, &V01E64, &V01F55, &V01F54, &V2F975, &V2F976, 
	&V01F59, &V01FBE, &V01EE2, &V2F972, &V01FC8, &V01EE1, 
	&V01E65, &V0FF72, &V01EE4, &V2F978, &V009BC, &V01F42, 
	&V01E66, &V00929, &V2F905, &V01E67, &V01EEC, &V01EED, 
	&V01F4B, &V01F4A, &V01E60, &V000CA, &V01EF6, &V01EF7, 
	&V01EF4, &V01EF5, &V0030E, &V01EFB, &V01EF8, &V01EF9, 
	&V031AF, &V01E61, &V01E5C, &V01F9E, &V01E5D, &V01FEF, 
	&V01E5E, &V01FE9, &V0F9BA, &V01F98, &V01E5F, &V01E58, 
	&V01E5A, &V009DF, &V01E5B, &V01EC9, &V01ECE, &V01E54, 
	&V01ECC, &V01ECD, &V01ED2, &V01ED3, &V01ED0, &V01ED1, 
	&V01ED6, &V01ED7, &V01F91, &V01E55, &V01EDA, &V000E0, 
	&V01ED8, &V01E56, &V01EDE, &V01EDF, &V01E57, &V01EDD, 
	&V00356, &V01F9A, &V01E50, &V01E51, &V0035A, &V01E52, 
	&V01F81, &V01E53, &V0F9B2, &V11002, &V01F85, &V11000, 
	&V11001, &V01F86, &V01E4C, &V01F88, &V01F8B, &V01F8A, 
	&V2F9C3, &V01F8C, &V01F8F, &V01F8E, &V01E4F, &V01E48, 
	&V01FB3, &V0034D, &V0A733, &V0A732, &V0A735, &V2F9D6, 
	&V0A737, &V0A736, &V0A739, &V0F98B, &V0A73B, &V02DF7, 
	&V0A73D, &V0A73C, &V2F9DF, &V01E4A, &V01E4B, &V02DF9, 
	&V02DFE, &V01E47, &V2F9E5, &V01E40, &V01FBC, &V01FBD, 
	&V0A729, &V01E43, &V01FB8, &V01EBC, &V01EBD, &V01EBE, 
	&V2F9EF, &V01FD0, &V01FD3, &V01FD2, &V003AC, &V01EBF, 
	&V01FD7, &V01FD6, &V01FD9, &V01FD8, &V01FDB, &V01FDA, 
	&V01FDD, &V01EB8, &V01FDF, &V00D83, &V01FC1, &V01EB9, 
	&V01FC3, &V01FC2, &V01EBA, &V01FC4, &V2F984, &V01EBB, 
	&V01FC9, &V030C0, &V01FCB, &V01FCA, &V01FCD, &V01FCC, 
	&V01EB4, &V01FCE, &V00388, &V0A74E, &V0038E, &V01FF2, 
	&V10C1D, &V01FF4, &V01EB5, &V01EB6, &V01FF9, &V01FF8, 
	&V2F991, &V01FFA, &V0A77B, &V0A77A, &V02329, &V01EB7, 
	&V2F99F, &V0232A, &V01FE3, &V0A760, &V01FE5, &V01FE4, 
	&V01FE7, &V01FE6, &V01EB0, &V01FE8, &V01FEB, &V01FEA, 
	&V01EB1, &V01FEC, &V01EB2, &V01FEE, &V01EB3, &V02E9D, 
	&V2F9A9, &V2F9AA, &V02E98, &V01EAC, &V01EAD, &V01EAE, 
	&V01EAF, &V01EA8, &V01EA9, &V2F9B2, &V2F9B3, &V02EA1, 
	&V02EA2, &V01DE0, &V01DE1, &V01DE6, &V01EAA, &V01EAB, 
	&V0A783, &V0A782, &V0A785, &V0A784, &V0A787, &V01EA4, 
	&V01EA5, &V01EA6, &V01EA7, &V01EA0, &V01EA1, &V01EA2, 
	&V0F968, &V1D161, &V01EA3, &V01E9E, &V2F911, &V0040E, 
	&V2F913, &V2F912, &V01E98, &V01E99, &V01E9B, &V01E94, 
	&V01DFD, &V01E95, &V01E96, &V01E97, &V01E90, &V01E91, 
	&V0A7A1, &V0A7A0, &V0A7A3, &V2F900, &V2F903, &V0A7A4, 
	&V0A7A7, &V0A7A6, &V0A7A9, &V0A7A8, &V2F909, &V2F908, 
	&V01E92, &V01DD0, &V2F90D, &V01DD6, &V01DD7, &V2F90E, 
	&V02DF8, &V02DFB, &V01DDB, &V01DD8, &V02DFC, &V02DFF, 
	&V01E93, &V01E8C, &V01DDD, &V2F938, &V01E8D, &V02DE5, 
	&V01E8E, &V0F959, &V01E8F, &V01E88, &V2F921, &V2F920, 
	&V01E89, &V02DED, &V01E8A, &V01E8B, &V02DEE, &V01E84, 
	&V01E85, &V01E80, &V01E81, &V01E82, &V01E83, &V1112E, 
	&V1112F, &V00230, &V2F951, &V2F950, &V2F953, &V00231, 
	&V2F955, &V2F954, &V2F957, &V2F956, &V01EF2, &V01EF3, 
	&V2F95B, &V01EEE, &V01EEF, &V01EE8, &V2F95F, &V2F95E, 
	&V01EE9, &V01EEA, &V01EEB, &V01ECA, &V01ECB, &V02011, 
	&V01EC4, &V01EC5, &V2F949, &V2F948, &V2F94B, &V2F94A, 
	&V01EC6, &V2F94C, &V0FB47, &V2F94E, &V01EC7, &V01EC0, 
	&V00111, &V00110, &V00113, &V01EC1, &V00115, &V00114, 
	&V2F979, &V00116, &V01EC2, &V02007, &V2F97D, &V01EC3, 
	&V0214D, &V2F97E, &V0011F, &V0011E, &V00101, &V00100, 
	&V00103, &V00102, &V00105, &V00104, &V00107, &V00106, 
	&V2F96B, &V2F96A, &V0010B, &V002A8, &V2F96F, &V01CF1, 
	&V0010F, &V0010E, &V01CF2, &V00130, &V2F995, &V002A9, 
	&V002AA, &V2F996, &V2F999, &V0045E, &V2F99B, &V2F99A, 
	&V2F99D, &V2F99C, &V002AB, &V004F8, &V002A4, &V002A5, 
	&V002A6, &V2F982, &V002A7, &V0219A, &V11181, &V11182, 
	&V016C4, &V0A80B, &V2F98B, &V2F98A, &V2F98D, &V0012A, 
	&V01CEE, &V031A3, &V031A2, &V031A5, &V00151, &V00150, 
	&V0FB3C, &V031A9, &V2F9B7, &V2F9B6, &V031AA, &V00156, 
	&V00159, &V2F9BA, &V0015B, &V004DA, &V016BC, &V0015C, 
	&V2F9A1, &V2F9A0, &V2F9A3, &V2F9A2, &V0FB3E, &V00142, 
	&V2F9A7, &V0FB38, &V0FB39, &V016A9, &V0FB3B, &V0FB34, 
	&V2F9AD, &V00439, &V0014D, &V0014C, &V0FB35, &V2F9D0, 
	&V00171, &V016E9, &V2F9D5, &V00401, &V00175, &V00174, 
	&V00177, &V01F43, &V00179, &V00178, &V0017B, &V0017A, 
	&V0017D, &V0017C, &V0017F, &V0017E, &V01680, &V016AE, 
	&V00163, &V016AC, &V016AD, &V0FB36, &V016B3, &V02DF5, 
	&V0FB30, &V0FB31, &V0016B, &V00419, &V016B5, &V0FA77, 
	&V2F9F1, &V2F9F0, &V2F9F3, &V0FB32, &V0FB33, &V2F9F4, 
	&V0FB2C, &V0FB2D, &V2F9F9, &V2F9F8, &V2F9FB, &V0FB2E, 
	&V0FB2F, &V021CD, &V021CE, &V0FB2B, &V2F9E1, &V00B3C, 
	&V0FB1D, &V0FB1F, &V005BA, &V1109A, &V0A880, &V1109C, 
	&V2F9E9, &V2F9E8, &V016E8, &V2F9EA, &V2F9ED, &V2F9EC, 
	&V0018D, &V0A881, &V0FB4C, &V0FB4D, &V0FB4E, &V001B0, 
	&V0FB48, &V0FB49, &V0FB4A, &V0FB4B, &V0FB44, &V0A8F3, 
	&V2F83C, &V2F83D, &V2F939, &V0FF4A, &V2F83E, &V0FF54, 
	&V0FF55, &V2F83F, &V001A1, &V001A0, &V016EF, &V110BA, 
	&V2F838, &V016CB, &V0FF5D, &V0FF5E, &V2F839, &V2F83A, 
	&V2F83B, &V020D9, &V020D8, &V2F834, &V020DA, &V020DD, 
	&V2F835, &V001D0, &V110AB, &V001D2, &V001D5, &V2F836, 
	&V001D7, &V2F837, &V001D9, &V001D8, &V2F830, &V001DA, 
	&V2F831, &V001DC, &V001DF, &V001DE, &V2F832, &V2F902, 
	&V0FF71, &V016CC, &V0FF73, &V2F906, &V0FA2E, &V2F82E, 
	&V2F82F, &V0FF78, &V2F828, &V2F829, &V001CD, &V2F82A, 
	&V001CF, &V001CE, &V2F973, &V2F82B, &V0FF96, &V2F824, 
	&V020E0, &V020E3, &V020E2, &V020E5, &V020E4, &V2F825, 
	&V2F820, &V0FFAF, &V0FF0B, &V020EB, &V020EA, &V020ED, 
	&V0FF17, &V020EF, &V2F821, &V001E2, &V0FF13, &V0FFB9, 
	&V0FF1D, &V0F911, &V2F96D, &V2F962, &V00626, &V2F968, 
	&V0FFB0, &V2F96E, &V0F916, &V2F823, &V2F81D, &V0FF20, 
	&V0FF21, &V0F91D, &V0F91C, &V0FF0D, &V0F91E, &V2F81E, 
	&V2F819, &V2F95A, &V2F959, &V0032A, &V0FF2B, &V2F81B, 
	&V2F816, &V2F811, &V0FF18, &V0FF30, &V004F0, &V0F90D, 
	&V0F90C, &V0F90F, &V0F90E, &V0F931, &V00337, &V0F933, 
	&V0F932, &V0F935, &V0F934, &V2F813, &V0F936, &V0033E, 
	&V0F938, &V0F93B, &V0F93A, &V2F80C, &V2F80D, &V0F93F, 
	&V0F93E, &V2F80A, &V2F9BB, &V0F923, &V022AF, &V0F925, 
	&V0F924, &V0F927, &V0F926, &V0F929, &V0F928, &V017C7, 
	&V017C6, &V0F92D, &V2F80B, &V0F92F, &V0F92E, &V017CD, 
	&V017CC, &V017CF, &V017CE, &V0031A, &V004DE, &V2F9AE, 
	&V004DC, &V2F804, &V2F993, &V2F992, &V2F805, &V00362, 
	&V00363, &V2F803, &V2F87D, &V0FFEE, &V2F87E, &V2F879, 
	&V0FF0E, &V0036A, &V0F944, &V2F99E, &V00369, &V0036E, 
	&V0036F, &V0036C, &V2F981, &V2F980, &V2F87B, &V2F986, 
	&V2F876, &V0F971, &V2F870, &V0F973, &V2F989, &V2F988, 
	&V2F871, &V0F977, &V2F872, &V0F979, &V0F978, &V2F873, 
	&V0FF81, &V016A4, &V00343, &V2F9F6, &V0F97E, &V2F86C, 
	&V016A1, &V2F9FA, &V2F86D, &V0FF8A, &V2F86E, &V0F967, 
	&V00349, &V0F969, &V2F9E3, &V0FF90, &V0F96A, &V0F96D, 
	&V0F96C, &V0F96F, &V000DC, &V2F9E4, &V2F809, &V00354, 
	&V2F86F, &V0FF9A, &V0035B, &V2F9EE, &V016BF, &V2F868, 
	&V0035F, &V0035C, &V0035D, &V2F869, &V2F9D7, &V006D3, 
	&V0F99E, &V0FF4B, &V2F9DB, &V2F9DA, &V2F9D9, &V2F9D8, 
	&V003AB, &V2F9DE, &V2F86A, &V003AE, &V003AF, &V2F9C2, 
	&V0F98A, &V2F86B, &V006C0, &V0FFBC, &V006C2, &V2F9C4, 
	&V00B03, &V00B02, &V2F864, &V0F9B5, &V2F865, &V2F866, 
	&V2F867, &V0F9B9, &V0F9B8, &V2F860, &V2F861, &V01E36, 
	&V0F9BC, &V01E34, &V2F862, &V00386, &V00387, &V0F9A3, 
	&V01DFC, &V0038A, &V2F863, &V0F9A7, &V0F9A6, &V006FD, 
	&V0038F, &V2F85C, &V2F85D, &V2F85E, &V2F85F, &V2F858, 
	&V2F859, &V006E5, &V2F85A, &V2F854, &V006E6, &V2F855, 
	&V2F856, &V2F852, &V2F853, &V01E12, &V00384, &V2F84C, 
	&V020EE, &V2F84D, &V020EC, &V03006, &V2F84E, &V2F84F, 
	&V2F848, &V2F849, &V01E1F, &V03000, &V2F84A, &V2F844, 
	&V2F845, &V2F846, &V01CF0, &V2F847, &V2F840, &V2F8B4, 
	&V2F8A2, &V2F8A3, &V2F89C, &V2F89D, &V0F9F0, &V0F9F3, 
	&V2F898, &V2F89A, &V2F894, &V0F9F7, &V0A786, &V00B48, 
	&V031A0, &V2F896, &V2F897, &V031A7, &V01CEC, &V0F9FF, 
	&V030D7, &V031AB, &V10991, &V2F890, &V2F891, &V0FE20, 
	&V2F892, &V0FE22, &V2F893, &V2F88C, &V2F88D, &V2F88E, 
	&V020DE, &V020DF, &V0F9EC, &V2F88F, &V2F888, &V01E6A, 
	&V003D7, &V2F889, &V0FE51, &V0FE50, &V2F88A, &V0F937, 
	&V01F45, &V0FE54, &V0FE57, &V0FE56, &V0FE59, &V0FE58, 
	&V0FE5B, &V0FE5A, &V0FE5D, &V0FE5C, &V0FE5F, &V0FE5E, 
	&V01F49, &V00136, &V2F88B, &V2F884, &V2F885, &V2F886, 
	&V2F887, &V2F880, &V00F52, &V01E46, &V01E45, &V2F881, 
	&V2F882, &V2F883, &V2F8FC, &V02DFA, &V2F8FD, &V2F8FE, 
	&V2F8FF, &V2F8F8, &V2F8F9, &V2F8FA, &V2F8FB, &V2F8F4, 
	&V2F8F6, &V2F8F7, &V2F8F0, &V2F8F1, &V02DF0, &V2F8F2, 
	&V2F8F3, &V0F903, &V0FE61, &V0FE60, &V0FE63, &V0FE62, 
	&V0FE65, &V0FE64, &V2F8EC, &V2F8ED, &V0FE69, &V0FE68, 
	&V0FE6B, &V0FE6A, &V2F8EE, &V2F8EF, &V2F8E8, &V2F8E9, 
	&V2F8EA, &V2F8EB, &V2F8E4, &V2F8E5, &V0F976, &V2F8E6, 
	&V01E6B, &V2F8E7, &V2F8E0, &V2F8E1, &V2F8E2, &V0F97F, 
	&V2F8E3, &V030B0, &V2F8DC, &V00170, &V02EEC, &V00176, 
	&V02DEC, &V2F8DD, &V01F35, &V2F8DE, &V02DE8, &V2F8DF, 
	&V01F31, &V00624, &V0A62A, &V00352, &V0081C, &V00162, 
	&V00161, &V00160, &V2F8D8, &V2F8DA, &V2F8DB, &V022EB, 
	&V2F8D4, &V0F955, &V2F8D5, &V2F8D6, &V2F8D7, &V2F8D0, 
	&V02EC2, &V0F95F, &V00153, &V01EFA, &V2F8D1, &V01E41, 
	&V2F8D2, &V2F8D3, &V02DEB, &V00154, &V0032B, &V0015A, 
	&V2F8CC, &V01EE0, &V0015F, &V0F949, &V01EE5, &V0F94F, 
	&V00143, &V0F94D, &V10993, &V10992, &V2F8CD, &V0F9B1, 
	&V00822, &V0F9B7, &V00824, &V10998, &V00826, &V00829, 
	&V1099D, &V1099C, &V02DF3, &V02DF4, &V01EDB, &V02DF6, 
	&V2F8CE, &V2F8CF, &V0F9A2, &V2F8C8, &V01F99, &V2F8C9, 
	&V2F8CA, &V2F8CB, &V01FF7, &V00859, &V000E4, &V0085B, 
	&V0085A, &V2F8C4, &V022AC, &V109B0, &V000E2, &V01EC8, 
	&V01ECF, &V2F8C7, &V01F4C, &V2F8C0, &V1099B, &V022ED, 
	&V10994, &V10995, &V01F56, &V10996, &V01E11, &V01E10, 
	&V01FED, &V01F5B, &V02EA6, &V02CE4, &V02EA4, &V0FE52, 
	&V16F06, &V01E0D, &V0F986, &V01E1A, &V00359, &V01E1C, 
	&V0FE55, &V01E1E, &V10997, &V01E00, &V02E90, &V02E97, 
	&V02E96, &V10990, &V1098C, &V01E06, &V01E09, &V0034C, 
	&V01E0B, &V1098D, &V0FA37, &V01E0C, &V01E0F, &V0F9F9, 
	&V01E31, &V02E81, &V01E33, &V01E32, &V16F13, &V01E21, 
	&V1098E, &V1098F, &V02E8A, &V0FA22, &V02E88, &V10988, 
	&V10989, &V02E8D, &V0F99F, &V01F87, &V01F84, &V02EF1, 
	&V1098A, &V1098B, &V2F98E, &V01F89, &V10984, &V10985, 
	&V10986, &V01E28, &V01E2B, &V2F985, &V01E2D, &V01E2C, 
	&V2F998, &V10987, &V0F9D8, &V01F95, &V10980, &V10981, 
	&V0022C, &V2F874, &V10982, &V10983, &V01E59, &V10C39, 
	&V01FE2, &V10C3B, &V01FE0, &V01FE1, &V0021A, &V10C35, 
	&V2F87F, &V0021F, &V10C37, &V01E42, &V00B5C, &V01E44, 
	&V00202, &V00201, &V01E49, &V030BC, &V00B5D, &V2F802, 
	&V10C33, &V01ED9, &V01FF6, &V01E4E, &V10C2E, &V10C29, 
	&V0FF1F, &V0020D, &V10C2B, &V10C25, &V10C27, &V00B4C, 
	&V01C37, &V01FFD, &V10C1F, &V2F812, &V00389, &V00B4B, 
	&V01FC6, &V01FC7, &V10C19, &V10C1B, &V01E63, &V01E62, 
	&V10C15, &V10C17, &V10C10, &V01FCF, &V10C12, &V10C0C, 
	&V0F953, &V0FA50, &V00329, &V01FD1, &V10C0E, &V019DF, 
	&V10C0A, &V10C04, &V10C01, 
};

