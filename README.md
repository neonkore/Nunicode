[TOC]

This is i18n library implementing Unicode 7.0.0 (and 6.3.0).

nunicode is trying to carefully follow the Unicode specification with
reasonable trade-offs. It doesn't implement the entire standard, but
it does provide most of the operations on Unicode strings.

What it can do:

* UTF encoding and decoding
* Strings collation using default Unicode collation table
* Unicode casemapping: "Maße" -> "MASSE" (German)
* Collation tailoring is supported, but implementation is a part
  of another library (nul10n, see [notes][])
  
What it doesn't do:

* Unicode Collation Algorithm (see [notes][])
* Unicode [normalization forms][]: NFD, NFC, NFKD, NFKC

[notes]: #markdown-header-strings-collation-and-case-mapping
[normalization forms]: http://unicode.org/reports/tr15/#Norm_Forms

Encodings supported:

* UTF-8
* UTF-16/UCS-2
* UTF-32/UCS-4
* CESU-8
* UTF-16HE/UTF-32HE (see notes at [host-endianess][])

[host-endianess]: #markdown-header-host-endianess-of-utf-encodings

All string functions provided by nunicode work on encoded strings: there is 
no need to decode anything explicitely and there is no intermediate
representation under the hood of nunicode. Collation functions are 
complemented by case-insensitive variants.

## Properties of the library

* Small size: UTF-8 encoding/decoding - 3Kb, UTF-8 encoding/decoding +
  0-terminated string functions - 5Kb; case mapping - 30Kb, default Unicode
  collation - 145Kb (less in compact flavor)
* Small memory footprint, zero allocations
* Small CPU footprint, O(1) complexity under the hood
* Endianess- and platform-agnostic
* Rich build options: you can strip every part you don't need
* C99 compliant, compiled with -pedantic -Wall -Wextra -Werror
* No dependencies
* Permissive license

## Tests coverage

* 100% lines
* ~90% branches, it is not covering some things like branching inside 
  conditional expressions.

If you wish to inspect the coverage, proceed as following:

	cmake .. -DCMAKE_BUILD_TYPE=GCOV
	make coverage

It will produce ``tests/coverage`` directory with coverage info in
browesable HTML.

## UTF-8, UTF-16 and UTF-32 notes

According to Unicode specification UTF-8 might contain byte order mark
(BOM), however it is unlikely to encouter BOM in endianess-independent
UTF-8. Therefore nunicode has no embedded means to deal with UTF-8 BOM,
neither detect, read or write.

You can safely call ``nu_utf8_read()`` on string with BOM - it will
produce normal U+FEFF codepoint as expected.

Unicode defines 3 types of UTF-16 each affected by endianess.

1. UTF-16
2. UTF-16LE (little endian)
3. UTF-16BE (big endian)

There's no dedicated encoding/decoding functions for each UTF-16 variant
in nunicode, instead API provides only ``nu_utf16le_*`` and ``nu_utf16be_*`` 
functions for the encoding and decoding, BOM and endianess detection are
handled by ``nu_utf16_*`` functions.

Note that nunicode will never report string endianess explicitely but will
provide read/write functions instead. See ``samples/utf16.c``.

### host-endianess of UTF encodings

Sometimes you can see UTF-16 defined as "host-endian" or "native-endian". 
For the purpose to be compatible with such implementations, nunicode 
implements two extensions: UTF-16HE and UTF-32HE encodings - these
works on host-endian encoded strings.

Note that, as standard demands, ``nu_utf16_read_bom()`` will default
encoding to UTF-16BE if BOM is not present in string. Therefore HE
variants are need to be used explicitely when required.

## Reverse reading

nunicode do not provide str\[i\] (access by index) equivalent. Instead
you could do ``nu_utf*_revread(&u, encoded)`` to read character
in backward direction.

It is a bad idea to pass arbitrary pointer to revread(). UTF-8 and
CESU-8 can possibly recover from programming error (pointer poiting to
the middle of multibyte UTF-8 sequence), but UTF-16 and UTF-32 revread
behavior is unpredictabled in that case.

Pointer passed to revread() is supposed to always come from call to
``nu_*_read()``.

## Encoding validation

All decoding functions has very limited-to-no error checking for
performance reasons. nunicode expects valid UTF strings at input. It
does provide ``nu_validate()`` to check string encoding before
processing.

This function perform UTF encoding validation, not the validation of
encoded string. E.g. U+D801 will pass UTF-8 check: it's malformed for
UTF-32 because range of U+D801 is reserved for UTF-16, it's ivalid
Unicode string, but it's correctly encoded UTF-8. 

## Case mapping and case folding

Case mapping is full Unicode casemapping when string might grow in size,
e.g. "Maße" (German) uppercases to "MASSE".

Case-insensitive collation is using ``nu_to_upper()`` internally, as
opposed to case-folding described by Unicode standard, to reduce library
size.

## Strings collation

nunicode implements ISO 14651 collation where strings are sorted according
to the weights of their characters. Weight used by nunicode are defined
by DUCET (default Unicode collation table). Character set is reduced
to contain only letters and number to reduce library size. The rest
of the characters are sorted at the end of the list.

Below are examples of such ordering in different laguages:

Language    | Alphabet
------------|---------
Russian     | аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОпПрРсСтТуУфФхХцЦчЧшШщЩъЪыЫьЬэЭюЮяЯ
English     | aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ
German      | aAäÄbBcCdDeEfFgGhHiIjJkKlLmMnNoOöÖpPqQrRsSßtTuUüÜvVwWxXyYzZ
Spanish     | aAáÁbBcCdDeEéÉfFgGhHiIíÍjJkKlLỻỺmMnNñÑoOóÓpPqQrRsStTuUúÚüÜvVwWxXyYzZ
French      | aAàÀâÂbBcCçÇdDeEéÉèÈëËfFgGhHiIjJkKlLmMnNoOòÒôÔöÖpPqQrRsStTuUùÙvVwWxXyYzZ
Greek       | αΑἀἄἂἆἁἅἃἇβΒγΓδΔεΕἐἔἒἑἕἓζΖηΗθΘιΙκΚλΛμΜνΝξΞοΟπΠρΡσΣςτΤυΥφΦχΧψΨωΩ

There is no option to switch titlecase/lowercase preference because
the same result is achievable with sorting on lowercase and native
case at the same time, e.g.:

	:::sql
	SELECT name FROM t_table ORDER BY lower(name), name

Example of such sorting:

Language    | Alphabet
------------|---------
English     | AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz
Russian     | АаБбВвГгДдЕеЁёЖжЗзИиЙйКкЛлМмНнОоПпРрСсТтУуФфХхЦцЧчШшЩщЪъЫыЬьЭэЮюЯя

Formal conformance to ISO/IEC 14651:

Reference           |                 | Comment
--------------------|-----------------|--------
Collation levels    | Any             | nunicode supports any number of collation levels. Actual number of levels implemented is maximum level defined by Unicode specification
forward,position    | No              |
backward            | No              |
Tailoring delta     | -               | Equal to the delta with reduced DUCET
Preparation process | None            |

### localization (collation tailoring)

Section below explains nul10n library not available publicitly, which
implements localization (collation tailoring) support. 

nul10n provides string collations (ordering) according to [CLDR][] version
25 as published by Unicode Consortium.

nul10n include support for the following languages

European languages (18Kb)

* English: implemented in DUCET (avaiable in nunicode)
* French: single-pass backward accent ordering
* Italian: implemented in DUCET
* German: standard collation
* Spanish: standard collation
* Russian: standard collation

Asian languages (270Kb)

* Chinese (Traditional): natively supported by Unicode
* Chinese (Simplified): GB2312 variant, full variant available
  on demand
* Japanese: standard collation, all Unicode contractions supported:
  "ｫー" sorts before "ぉゝ"
* Korean: standard collation
* Vietnamese: standard collation

More languages are available on demand. It is possible to reduce library
size by including only characters from base unicode character set
([BMP][]).

[CLDR]: http://cldr.unicode.org/
[BMP]: http://en.wikipedia.org/wiki/Plane_(Unicode)#Basic_Multilingual_Plane

### custom collations

If you need to implement your own collation, then you need to provide
your own weighting function to ``_nu_strcoll()``. It is described in
``nu_codepoint_weight_t`` documentation. [strcoll_internal_test.c][] 
and ``_test_weight()`` implementation is also a reference.

Note though that everything in nunicode starting from underscore 
(as in ``_nu_strcoll``) is internal API and might change when it need to
follow ongoing changes in Unicode and CLDR.

[strcoll_internal_test.c]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/strcoll_internal_test.c?at=master

### performance considerations

Collation and case mapping are O(1). Internally both use [minimal
perfect hash][] table for lookup. Hash is a quite fast couple of XOR+MOD.

[minimal perfect hash]: http://iswsa.acm.org/mphf/index.html

## Examples

See `samples/` directory for complete examples of nunicode usage.

### decoding UTF-8 (stream-like)

	:::c
	const char input[] = "привет мир!";

	const char *p = input;
	while (*p != 0) {
		uint32_t u = 0;
		p = nu_utf8_read(p, &u);
		printf("0x%04X\n", u);
	}

### decoding UTF-8 to memory buffer

	:::c
	const char input[] = "привет мир!";
	uint32_t u[sizeof(input)] = { 0 }; /* should be enough */

	nu_readstr(input, u, nu_utf8_read);

### recoding string from CESU-8 into UTF-8 with memory buffers

	:::c
	/* 𐐀 in CESU-8 */
	const unsigned char input[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80 };
	char output[sizeof(input)] = { 0 };

	nu_transformnstr((const char *)input, sizeof(input), output,
		nu_cesu8_read, nu_utf8_write);

## Documentation

Documentation is maintained in header files in Doxygen format.

Please have a look into [downloads][] section, there should be latest doc
available for download. You can also build documentation from sources by
executing

``doxygen``

It will produce ``doc/html`` with Doxygen documentation in browesable HTML.

## SQLite3 extension

Provides functions for following SQL statements:

* upper(X)
* lower(X)
* X LIKE Y ESCAPE Z
* COLLATE NU700 - case-sensitive Unicode collation
* COLLATE NU700\_NOCASE - case-insensitive Unicode collation

Supported encodings: UTF-8, UTF-16, UTF-16LE, UTF-16BE.

Extension is only 200Kb in size approximately.

It can be compiled into shared library and loaded with
``sqlite3_load_extension()`` ([doc][]) (see
*sqlite3/samples/loadextension.c*) or it can be linked statically into
your application or library and enabled for every new SQLite3 connection.

Latter is recommended way of using it, all you need to enable this
extension is the following call:

	:::c
	nunicode_sqlite3_init(0);

After this point, every new connection will have nunicode extension
enabled. See *sqlite3/samples/autoextension.c* for the reference.

[doc]: http://www.sqlite.org/c3ref/load_extension.html

### extension performance

This section is only to give a general idea on nunicode SQLite extension
performance. In the table below the following SQL queries and tables
were used:

* Table ('test\_casing') for upper() and LIKE test size: 100000 entries
* Table ('test\_ordering') for ORDER BY test size: 100000 entries
* ICU collation for ORDER BY: ``SELECT icu_load_collation('ru_RU', 'RUSSIAN')``
  with sequential COLLATE RUSSIAN
* nunicode collation for ORDER BY: embedded NU700 and sequential
  COLLATE NU700
* upper() test query: ``SELECT count(upper(x)) FROM test_casing``
* COLLATE test query: ``SELECT * FROM test_ordering ORDER BY x COLLATE <collation> LIMIT 1``
* LIKE test query: ``SELECT count(*) FROM test_casing WHERE x LIKE <string>``
* ICU and nunicode extensions compilation flags: -O3
* Encoding of database: UTF-8

Numbers are measured by SQLite3 shell's ``.timer on``.

Function | w/o extension | ICU      | nunicode
---------|---------------|----------|---------
upper()  |         0.275 | 0.690    | 0.670
COLLATE  |         0.530 | 0.920    | 0.615
LIKE     |         0.145 | 0.255    | 0.485

As you can see, upper() and COLLATE are somewhat faster, but LIKE is
slower. The explanation to the latter i have to offer is that nunicode
extension is doing a slightly different thing in LIKE.

ICU extension:

    :::sql
    .load ./libicu.so
    SELECT 'MASSE' LIKE 'Maße';
    0

nunicode extension:

    :::sql
    .load ./libnunicode.so
    SELECT 'MASSE' LIKE 'Maße';
    1

The LIKE operation in nunicode extension support cases when strings
might grow in size during case transformation.

## Downloads

See [downloads][] section, or take versioned file from "Tags" tab.

[downloads]: https://bitbucket.org/alekseyt/nunicode/downloads

## Build

nunicode uses [CMake][] for building.

    mkdir build
    cd build
    cmake .. -DCMAKE_BUILD_TYPE=RELEASE
    make nu

It will build static library.

Normally nunicode is compiled with -O3 (gcc).

[CMake]: http://www.cmake.org/

### SQLite3 extension

``make nunicode``

It will build shared library libnunicode with nu linked into it
statically. See BUILD for details.

### library build options

Please refer to documentation in [config.h][].

[config.h]: https://bitbucket.org/alekseyt/nunicode/src/master/libnu/config.h?at=master

## Questions?

[aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
