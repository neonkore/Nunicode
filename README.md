[TOC]

## WHATS THIS

This is i18n library implementing Unicode 7.0.0 (and 6.3.0).

nunicode is trying to carefully follow the Unicode specification with
reasonable trade-offs to produce small, fast and portable Unicode
implementation.

What it can do:

* UTF encoding and decoding
* Correct strings collation on encoded UTF strings using default Unicode
  collation (DUCET)
* Correct Unicode casemapping: "Maße" -> "MASSE" (German)
* Collation tailoring in nul10n, supporting all contractions: "ｫー" sorts before
  "ぉゝ" (Japanese); backward accent ordering for French, et cetera

What it *DOESN'T* do:

* Unicode Collation Algorithm (not entirely, please see [notes][]
* Unicode [normalization forms][]: NFD, NFC, NFKD, NFKC (but nothing is impossible)

[notes]: #markdown-header-strings-collation-and-case-mapping
[normalization forms]: http://unicode.org/reports/tr15/#Norm_Forms

What you could do with this library

* UTF encodings provide support for all scripts, DUCET embedded into nunicode
  will provide "generic" way of strings ordering
* nunicode supply Unicode-enabled stdlib-like functions (i.e. ``nu_strchr()``)
  for Unicode-aware operations on encoded strings

[localization]: #markdown-header-localization

Encodings supported:

* UTF-8
* UTF-16/UCS-2
* UTF-32/UCS-4
* CESU-8 (for JNI)
* UTF-16HE/UTF-32HE (please see notes at [host-endianess][])

[host-endianess]: #markdown-header-host-endianess

All string functions provided by nunicode work on encoded strings: there is no
need to decode anything explicitely and there is no intermediate representation
under the hood of nunicode. Collation functions are complemented by
case-insensitive variants.

## WHY ITS GOOD

* Well, firstly it is beautiful
* Small size: UTF-8 encoding/decoding - 3Kb, UTF-8 encoding/decoding +
  0-terminated string functions - 5Kb; case mapping - 30Kb, default Unicode
  collation - 145Kb (less in compact flavor)
* Small memory footprint, zero allocations
* Small CPU footprint, O(1) complexity under the hood
* Endianess- and platform-agnostic
* Rich build options: you can strip every part you don't need
* C99 compliant, -pedantic -Wall -Wextra -Werror
* No dependencies
* Permissive license

## DIFFERENT REVISIONS OF UNICODE

Git master contains implementation of the latest published Unicode revision
(7.0.0). Implementations of previous Unicode revisions are stored in branches.
Branch naming is the following: "unicode.XYZ", where "XYZ" is Unicode version.
E.g. "unicode.630".

nunicode version - Unicode revision relationship:

* since 1.3: 7.0.0
* until 1.2 (inclusive): 6.3.0

You can always check NU\_UNICODE\_VERSION value for a Unicode revision
implemented.

## IMPLEMENTATION QUALITY

nunicode most likely is free of the following errors:

* Memory leaks: there are no allocations in library
* Memory overruns and underruns: this and below are tested with [Valgrind][]
* Access to invalid memory region

nunicode unittest are covering 100% lines of the library, before each release
tests are checked by Valgrind for a visible memory issues.

Branches coverage of tests is slightly above 90%, it is not covering some
things like branching inside conditional expressions. nunicode also has a
requirement to pass only valid UTF strings, thus it might skip redundant error
checking. Nonetheless, each release brings this number higher.

If you wish to inspect the coverage, please proceed as following:

	cmake .. -DCMAKE_BUILD_TYPE=GCOV
	make coverage

It will produce ``tests/coverage`` directory with coverage info in
browesable HTML.

There are some errors still possible, there is no such thing as bug-free
software, right? But it is rather unlikely that you would encounter
programming error in nunicode.

[Valgrind]: http://valgrind.org/

## UTF-8, UTF-16 AND UTF-32 NOTES

According to Unicode specification UTF-8 might contain byte order mark
(BOM), however it doesn't make any sense to have BOM in UTF-8. Therefore
nunicode has no embedded means to deal with UTF-8 BOM, neither detect,
read or write.

If you are facing this, you can safely call ``nu_utf8_read()`` - it
will produce normal U+FEFF codepoint as expected.

Reference: [UTF BOM FAQ][]

Unicode defines 3 types of UTF-16 *each* affected by endianess.

1. UTF-16
2. UTF-16LE (little endian)
3. UTF-16BE (big endian)

LE and BE are obviously little-endian and big-endian, generic one's
endianess is defined by the byte order mark (BOM) at the beginning of the
string or defaults to BE if BOM is absent. Thus generic UTF-16 is always
BOM + either UTF-16LE or UTF-16BE.

There's no dedicated encoding/decoding functions for each UTF-16 variant
in nunicode, instead API provides only ``nu_utf16le_*`` and ``nu_utf16be_*`` 
functions for the encoding and decoding, BOM is handled by ``nu_utf16_*``
functions.

It's up to you to decide if you need BOM support or just UTF-16LE/BE in your
application, but either way you'll get complete support in the set
of nunicode API functions.

Note that nunicode will never report string endianess explicitely but will
provide read, reverse read, write and BOM write functions instead. See
``samples/utf16.c``.

Everything said above about UTF-16 support also applies to UTF-32 support.

[UTF BOM FAQ]: http://www.unicode.org/faq/utf_bom.html#bom5

### host-endianess of UTF encodings

[ISO/IEC 10646][] (PDF) clearly says that if BOM is not present, encoding
should be considered BE, however sometimes you can see UTF-16 defined
simply as "host-endian" or "native-endian". For the purpose to be compatible
with such implementations, nunicode implements extension: UTF-16HE and
UTF-32HE encodings. HE obviously stands for "Host-Endian".

Note that ``nu_utf16_read_bom()`` will default encoding to UTF-16BE if
BOM is not present in string, as standard demands. Therefore HE variants
are need to be used explicitely when required.

[ISO/IEC 10646]: http://www.itscj.ipsj.or.jp/sc2/open/02n4125/FCD10646-Main.pdf

## UCS-2 and UCS-4

UCS-4 is in fact the same as UTF-32.

UCS-2 decoding is a part of UTF-16 decoding, if you need to write UCS-2
encoded strings, just override ``nu_utf16*_write()`` and don't write characters
outside of [BMP][] (U+0000..U+FFFF). There is no embedded support of this in
nunicode since UCS-2 was superseded by UTF-16 more than 15 years ago.

[BMP]: http://en.wikipedia.org/wiki/Plane_(Unicode)#Basic_Multilingual_Plane

## REVERSE READING

nunicode do not provide str\[i\] (access by index) equivalent since it
will always be slow. Instead you can do ``nu_utf*_revread(&u, encoded)``
and other encodings variants to read character in backward direction.

It is always a bad idea to pass arbitrary pointer to revread(). UTF-8 and
CESU-8 can possibly recover from programming error (pointer poiting to
the middle of multibyte UTF-8 sequence), but UTF-16 and UTF-32 revread
will fail badly. In fact, UTF-32 revread is just ``const char *p - 4``.

Pointer passed to revread() is supposed to always come from call to
``nu_*_read()``. Otherwise prepare to unforeseen consequences.

As a side note, if you pass 0 as a pointer to decoded character,
``revread()``, as you would expect, won't do any redundant decoding,
but will just iterate over the string.

	:::c
	/* skip 5 characters backwards */
	for (int i = 0; i < 5; ++i) {
		p = nu_utf8_revread(0, p);
	}

## ENCODING VALIDATION

All decoding functions has very limited error checking for performance
reasons. nunicode expect valid UTF strings at input. It though provide
``nu_validate()`` to check string before processing.

This function perform UTF encoding validation, do not expect it to
validate decoded Unicode string, or even decode UTF string completely.
E.g. U+D801 will pass UTF-32 check: it's malformed for UTF-32 because
this range is reserved for UTF-16, but it's still correctly **encoded**
UTF-32.

Normally you might not need to completely validate Unicode strings if
display or processing software is permissive or fault-tolerant. Either
way nunicode might be extended with complete verification functions
on request.

## STRINGS COLLATION AND CASE MAPPING

Case mapping is full Unicode casemapping when string might grow in size,
e.g. "Maße" uppercase is "MASSE".

Case-insensitive collation is using ``nu_to_upper()`` internally, as
opposed to case-folding described by Unicode standard, but i consider
it to be an excellent compromise in regard to library size.

If you want to sacrifize library size, strict case-folding variant might
also be provided in nul10n.

While nunicode does not implement [Unicode Collation Algorithm][] entirely,
it does sort strings using weights from DUCET (Default Unicode Collation
Element Table). It only does that for characters having a meaning to the
collation: letters and numbers; which is again a good compromise on
library size.

[Unicode Collation Algorithm]: http://www.unicode.org/reports/tr10/

### localization (collation tailoring)

DUCET tailoring is required for the most of the languages, but DUCET alone
(embedded into nunicode) provides reasonable defaults for multi-lingual
application.

Section below explains nul10n library not available publicitly, but which
implements localization (tailoring) support if nunicode is not covering all
your needs.

nul10n provides string collations (ordering) according to [CLDR][] version 25
as published by Unicode Consortium. Please email me to get complete feature set,
documentation, examples and possibly demo.

nul10n include support for the following languages

Major europian languages (18Kb)

* English: implemented in DUCET, i.e. also available in nunicode
* French: single-pass backward accent ordering
* Italian: implemented in DUCET
* German: standard collation
* Spanish: standard collation
* Russian: standard collation

Major asian languages (270Kb)

* Chinese (Traditional): natively supported by Unicode
* Chinese (Simplified): GB2312 variant, full variant available
  on demand
* Japanese: standard collation, with all Unicode contractions supported:
  "ｫー" sorts before "ぉゝ"
* Korean: standard collation
* Vietnamese: standard collation

Together with Portuguese (included into DUCET), this set will provide
coverage for both Americas, Europe, Asia and Australia.

If you need more languages they are available on demand, in case of some
languages it is possible to also reduce library size requirements.

Library is covered with tests, has O(1) to O(log) complexity under the 
hood, and well documented. Base nul10n library will add only 14Kb,
plus language-specific collations on top of it. Library comes in two
flavors: standard (as described above) and compact which includes support
for [BMP][]characters only to further reduce size. Latter will allow to
save another 80Kb on the underlying nunicode library.

[CLDR]: http://cldr.unicode.org/
[BMP]: http://en.wikipedia.org/wiki/Plane_(Unicode)#Basic_Multilingual_Plane

### custom collations

If you need to implement your own collation, then you need to provide
your own weighting function to ``_nu_strcoll()``. Take a look into
``nu_codepoint_weight_t`` documentation, formal contract is described
there and it's reasonably simple. Basically you need to implement a
state-machine to weight Unicode codepoint or several of them.
[strcoll_internal_test.c][] and ``_test_weight()`` implementation is a
good reference.

Note though that everything in nunicode starting from underscore 
(as in ``_nu_strcoll``) is quite an internal stuff, thus please expect
internal API to change from time to time when it need to follow ongoing
changes in Unicode standard and CLDR.

[strcoll_internal_test.c]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/strcoll_internal_test.c?at=master

### performance considerations

Collation and case mapping are O(1). Internally both use [minimal
perfect hash][] table for lookup. Hash is a quite fast couple of XOR+MOD.

[minimal perfect hash]: http://iswsa.acm.org/mphf/index.html

## EXAMPLES

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

## DOCUMENTATION

Documentation is maintained in header files in Doxygen format.

Please have a look into [downloads][] section, there should be latest doc
available for download. You can also build documentation from sources by
executing

``doxygen``

It will produce ``doc/html`` with Doxygen documentation in browesable HTML.

## SQLITE3 EXTENSION

Provides functions for following SQL statements:

* upper(X)
* lower(X)
* X LIKE Y ESCAPE Z
* COLLATE NU700 - case-sensitive Unicode collation
* COLLATE NU700\_NOCASE - case-insensitive Unicode collation

Supported encodings: UTF-8, UTF-16, UTF-16LE, UTF-16BE (i.e. all encodings
supported by SQLite).

It gives you ability to uppercase/lowercase strings in SQLite3,
case-insensitive Unicode-aware LIKE operator and DUCET ordering with
ORDER BY ... COLLATE NU700.

Extension is only 200Kb in size approximately.

It can be compiled into shared library and loaded with
``sqlite3_load_extension()`` ([doc][]) (see
*sqlite3/samples/loadextension.c*) or it can be linked statically into
your application or library and enabled for every new SQLite3 connection.

Latter is recommended way of using it, all you need to enable this
extension is the following call:

	:::c
	nunicode_sqlite3_init(0);

After this point, every connection you open with ``sqlite3_open()`` will
have nunicode extension enabled. See *sqlite3/samples/autoextension.c*
for the reference.

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

## DOWNLOADS

See [downloads][] section, or take versioned file from "Tags" tab.

[downloads]: https://bitbucket.org/alekseyt/nunicode/downloads

## BUILD

By default nunicode use [CMake][] for building, but you can simply
compile all required ``*.c`` with needed build options - see below.

    mkdir build
    cd build
    cmake .. -DCMAKE_BUILD_TYPE=RELEASE
    make nu

It will build static library.

Normally nunicode is compiled with -O3 (gcc), you can change it to -Os
to save 4-8Kb.

[CMake]: http://www.cmake.org/

### SQLite3 extension

``make nunicode``

It will build shared library libnunicode with nu linked into it
statically. See BUILD for details.

### library build options

Please refer to documentation in [config.h][].

[config.h]: https://bitbucket.org/alekseyt/nunicode/src/master/libnu/config.h?at=master

## QUESTIONS?

[aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
