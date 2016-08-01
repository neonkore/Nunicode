SELECT 'A' LIKE 'A' == 1 /* basic tests */
SELECT 'A' LIKE 'B' == 0
SELECT 'AB' LIKE 'A%' == 1
SELECT 'AB' LIKE '%B' == 1
SELECT 'AB' LIKE 'A%B' == 1
SELECT 'AB' LIKE '%A%B' == 1
SELECT 'AB' LIKE 'A%B%' == 1
SELECT 'AB' LIKE '%A%B%' == 1
SELECT 'AB' LIKE '%C' == 0
SELECT 'AB' LIKE 'C%' == 0
SELECT 'AB' LIKE 'A%C' == 0
SELECT 'AB' LIKE 'A%C%' == 0
SELECT 'AB' LIKE '%A%C' == 0
SELECT 'AB' LIKE '%A%C%' == 0

SELECT 'MASSE' LIKE 'MASSE' == 1 /* casemap expanding tests */
SELECT 'MASSE' LIKE 'MASE' == 0
SELECT 'MASSE' LIKE 'MADE' == 0
SELECT 'Maße' LIKE 'Maße' == 1
SELECT 'Maße' LIKE '%_%' == 1
SELECT 'Maße' LIKE '%a%' == 1
SELECT 'Maße' LIKE '%b%' == 0

SELECT 'MASSE' LIKE 'Maße' == 1
SELECT 'Maße' LIKE '%SS%' == 1
SELECT 'æ' LIKE 'Æ' == 1
SELECT 'ß' LIKE 'SS' == 1

SELECT 'MASSE' LIKE '%ß%' == 1
SELECT 'MASSE' LIKE '%ßß%' == 0

SELECT 'EN MASSE' LIKE '' == 0
SELECT 'EN MASSE' LIKE 'Mass' == 0
SELECT 'EN MASSE' LIKE '%Mass' == 0
SELECT 'EN MASSE' LIKE 'Mass%' == 0
SELECT 'EN MASSE' LIKE '%Mass%' == 1

SELECT 'EN MASSE' LIKE '%Masse' == 1
SELECT 'EN MASSE' LIKE 'Masse%' == 0
SELECT 'EN MASSE' LIKE '%Masse%' == 1

SELECT 'EN MASSE' LIKE 'En' == 0
SELECT 'EN MASSE' LIKE 'En%' == 1
SELECT 'EN MASSE' LIKE '%En' == 0
SELECT 'EN MASSE' LIKE '%En%' == 1

SELECT 'MASSE' LIKE 'Ma_e' == 0 /* any char tests */
SELECT 'MASSE' LIKE 'Ma__e' == 1
SELECT 'MASSE' LIKE 'Ma%_e' == 1
SELECT 'MASSE' LIKE 'Ma_%e' == 1
SELECT 'MASSE' LIKE 'Ma_%s' == 0
SELECT 'MASSE' LIKE 'Ma_%s%' == 1
SELECT 'MASSE' LIKE 'Ma_%s_' == 1
SELECT 'MASSE' LIKE 'Ma_%s__' == 0
SELECT 'MASSE' LIKE 'Ma__%e' == 1
SELECT 'MASSE' LIKE 'Ma___e' == 0
SELECT 'MASSE' LIKE 'Ma___%e' == 0

SELECT 'MA_SE' LIKE 'ma\\_se' ESCAPE '\' == 1 /* escaping in like */
SELECT 'MASSE' LIKE 'ma\\_se' ESCAPE '\' == 0
SELECT 'MA%SE' LIKE 'ma\\%se' ESCAPE '\' == 1
SELECT 'MASSE' LIKE 'ma\\%se' ESCAPE '\' == 0

SELECT 'MA_SE' LIKE 'maя_se' ESCAPE 'я' == 1 /* escaping with unicode character */

SELECT 'ё' < 'я' == 0 /* collation */
SELECT 'Ё' < 'Я' == 1
SELECT 'ё' < 'я' COLLATE NU700 == 1
SELECT 'Ё' < 'Я' COLLATE NU700 == 1
SELECT 'ß' == 'ss' == 0
SELECT 'æ' == 'Æ' == 0
SELECT 'æ' == 'Æ' COLLATE NU700 == 0
SELECT 'æ' == 'Æ' COLLATE NU700_NOCASE == 1
SELECT 'ß' == 'SS' COLLATE NU700 == 0
SELECT 'ß' == 'SS' COLLATE NU700_NOCASE == 1
SELECT 'ß' == 'ss' COLLATE NU700_NOCASE == 1
SELECT 'ß' == 'ss' COLLATE NU700 == 0

SELECT upper('Maße') == 'MASSE' /* casemapping */
SELECT lower('Maße') == 'maße'
SELECT upper('æ') == 'Æ'
SELECT lower('Æ') == 'æ'
SELECT upper('a') == 'A'
SELECT lower('A') == 'a'
SELECT upper('ё') == 'Ё'
SELECT lower('Ё') == 'ё'
SELECT upper('i') == 'I'
SELECT lower('I') == 'i'

SELECT 'РОССИЯ РУБЛЬ' LIKE '%' || 'РУ' || '%' COLLATE NU900_NOCASE == 1 /* additional LIKE checks */
SELECT 'РОССИЯ РУБЛЬ' LIKE '%' || 'РУ' || '%' == 1
SELECT 'РОССИЯ РУБЛЬ' LIKE '%РУ%' == 1
SELECT 'РОССИЯ РБЛЬ' LIKE '%РУ%' == 0
SELECT 'РРУ' LIKE '%РУ%' == 1 
SELECT 'РРУ' LIKE '%РР%' == 1
SELECT 'РУР' LIKE '%РУ%' == 1
SELECT 'РРРУ' LIKE '%РУ%' == 1
SELECT 'РРРУ' LIKE '%РР%' == 1
SELECT 'РР' LIKE '%РУ%' == 0
