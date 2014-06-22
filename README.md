[TOC]

## WHATS THIS

This is i18n library implementing Unicode 7.0.0 (and 6.3.0).

nunicode is trying to carefully follow the Unicode specification with
reasonable constraints to produce small, fast and portable Unicode
implementation.

What it can do:

* Enable internatiolization in your application
* Provide Unicode-enabled stdlib-like functions for strings
* UTF encoding and decoding
* Correct strings collation on encoded UTF strings using default Unicode
  collation (DUCET)
* Correct Unicode casemapping: "Maße" -> "MASSE" (German)
* Collation tailoring in nul10n, supporting all contractions: "ｫー" sorts before
  "ぉゝ" (Japanese); backward accent ordering for French, et cetera

What it *DOESN'T* do:

* Unicode Collation Algorithm (not entirely, please see notes
at [STRINGS COLLATION AND CASE MAPPING][])
* Unicode [normalization forms][]: NFD, NFC, NFKD, NFKC (but nothing is impossible)

[STRINGS COLLATION AND CASE MAPPING]: #markdown-header-strings-collation-and-case-mapping
[normalization forms]: http://unicode.org/reports/tr15/#Norm_Forms

Encodings supported:

* UTF-8
* UTF-16/UCS-2 (BOM/LE/BE)
* UTF-32/UCS-4 (BOM/LE/BE)
* CESU-8 (for Android's JNI)
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
* Small CPU footprint
* Endianess- and platform-agnostic
* Rich build options: you can strip every part you don't need
* C99 compliant, -pedantic -Wall -Wextra -Werror
* No dependencies
* MIT license
* It does the job

## DIFFERENT REVISIONS OF UNICODE

Git master contains implementation of the latest published Unicode revision
(7.0.0). Implementations of previous Unicode revisions are stored in branches.
Branch naming is the following: "unicode.XYZ", where "XYZ" is Unicode version.
E.g. "unicode.630".

nunicode version - Unicode revision relationship:

* since 1.3: 7.0.0
* until 1.2 (inclusive): 6.3.0

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
a bug in nunicode.

[Valgrind]: http://valgrind.org/

## UTF-8, UTF-16 AND UTF-32 NOTES

According to Unicode specification UTF-8 might contain byte order mark
(BOM), however it doesn't make any sense to have BOM in UTF-8. Therefore
nunicode has no embedded means to deal with UTF-8 BOM, neither detect,
read or write.

If you are facing this, just +3 char pointer to skip BOM. (Note
that UTF-8 BOM is 3 bytes long: EF BB BF). You can also safely
``nu_utf8_read()`` BOM, it will produce normal U+FEFF codepoint as expected.

Reference: [UTF BOM FAQ][]

Unicode defines 3 types of UTF-16 *each* affected by endianess.

1. UTF-16
2. UTF-16LE (little endian)
3. UTF-16BE (big endian)

LE and BE are obviously little-endian and big-endian, generic one's
endianess is defined by the byte order mark (BOM) at the beginning of the
string or defaults to BE if BOM is absent. Thus generic UTF-16 is always
BOM + either UTF-16LE or UTF-16BE.

nunicode provide only ``nu_utf16le_*`` and ``nu_utf16be_*`` functions for the
encoding and decoding, BOM is handled by ``nu_utf16_*`` functions. It's
up to you to decide if you need BOM or just UTF-16LE/BE. Either you
choose, you'll get valid UTF-16 variant.

Note that nunicode will never report string endianess explicitely but will
provide read, reverse read, write and BOM write functions instead. See
``samples/utf16.c``.

Everything said above about UTF-16 also applies to UTF-32.

[UTF BOM FAQ]: http://www.unicode.org/faq/utf_bom.html#bom5

### host-endianess

[ISO/IEC 10646][] (PDF) clearly says that if BOM is not present, encoding
should be considered BE, however sometimes you can see UTF-16 defined
simply as "host-endian". I believe this is misinterpretation of UTF-16
definition, but for the purpose to be compatible with such implementations,
nunicode implement non-standard extension: UTF-16HE and UTF-32HE encodings.

Note that ``nu_utf16_read_bom()`` will default encoding to UTF-16BE if
BOM is not present in string, as standard demands. Therefore HE variants
are need to be used explicitely when required.

[ISO/IEC 10646]: http://www.itscj.ipsj.or.jp/sc2/open/02n4125/FCD10646-Main.pdf

## UCS-2 and UCS-4

UCS-4 is in fact the same as UTF-32.

UCS-2 decoding is a part of UTF-16 decoding, if you need to write UCS-2,
just override ``nu_utf16*_write()`` and don't write characters outside
of [BMP][] (U+0000..U+FFFF). There is no embedded support of this in
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

Normally you need validation at I/O boundaries only, actually at I
boundary only, because if ``nu_validate()`` is failing on product of
``nu_*_write()``, then this is bug in nunicode (unlikely) and it need
to be fixed.

## STRINGS COLLATION AND CASE MAPPING

Case mapping is full Unicode casemapping when string might grow in size,
e.g. "Maße" uppercase is "MASSE".

While nunicode does not implement [Unicode Collation Algorithm][] entirely,
it does sort strings using weights from DUCET (Default Unicode Collation
Element Table). It only does that for characters having a meaning to the
collation: letters and numbers, this allows nunicode to remain compact.

The rest of Unicode characters are sorted below in the random order. You can
change this behavior by providing your own weighting function.

[Unicode Collation Algorithm]: http://www.unicode.org/reports/tr10/

### localization (collation tailoring)

Tailoring is required for the most of the languages, but DUCET embedded into
nunicode provide reasonable defaults for multi-lingual application.

Localization (l10n) is performed by nul10n library which is not
publicitly available, please email me to get complete feature set,
documentation, examples and possibly demo.

nul10n include support for the following languages

Major europian languages (17Kb)

* English: implemented in DUCET, i.e. also available in nunicode
* French: single-pass backward accent ordering
* Italian: implemented in DUCET
* German: standard collation
* Spanish: standard collation
* Russian: standard collation

Major asian languages (182Kb)

* Chinese (Traditional): natively supported by Unicode
* Chinese (Simplified): GB2312 variant, full variant available
  on demand
* Japanese: standard collation, with all Unicode contractions supported:
  "ｫー" sorts before "ぉゝ"
* Korean: standard collation
* Vietnamese: standard collation

Together with Portuguese (included into DUCET), this set will provide
coverage for both Americas, Europe, Asia and Australia.

If you need more languages they are available on demand.

All collations correspond to [CLDR][] version 24 as published by
Unicode Consortium.

Library is 100% covered with tests (100% lines, 100% branches), has O(1)
complexity under the hood, and well documented. Base nul10n library will add
only 12Kb to language-specific collations and comes in two flavors: standard
and compact (for [BMP][]-only characters), latter will allow to save another
80Kb on the underlying nunicode library.

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

[strcoll_internal_test.c]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/strcoll_internal_test.c?at=master

### performance considerations

Collation and case mapping are O(1). Internally both use [minimal
perfect hash][] table for lookup. Hash is a couple of XOR+MODs.

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

Please have a look into [downloads][] section, there should be latest doc
available for download. You can also build documentation from sources by
executing

``doxygen``

It will produce ``doc/html`` with Doxygen documentation in browesable HTML.

## SQLITE3 EXTENSION

It can be compiled into shared library and loaded with
``sqlite3_load_extension()`` ([doc][]) (see
*sqlite3/samples/loadextension.c*) or it can be linked statically into
your application or library and enabled for every new sqlite3 connection.

Latter is recommended way of using it, all you need to enable this
extension is the following call:

	:::c
	nunicode_sqlite3_init(0);

After this point, every connection you open with ``sqlite3_open()`` will
have nunicode extension enabled. See *sqlite3/samples/autoextension.c*
for the reference.

To load SQLite3 extension dynamically:

	:::c
	sqlite3_load_extension(db, "libnusqlite3.so", "sqlite3_nunicode_init", 0);

[doc]: http://www.sqlite.org/c3ref/load_extension.html

## DOWNLOADS

See [downloads][] section, or take versioned file from "Tags" tab.

[downloads]: https://bitbucket.org/alekseyt/nunicode/downloads

## BUILD

By default nunicode use [CMake][] for building, but you can simply
compile all required ``*.c`` with needed build options - see below.

``mkdir build && cd build && cmake .. -DCMAKE_BUILD_TYPE=RELEASE && make nu``

It will build static library.

Normally nunicode is compiled with -O3 (gcc), you can change it to -Os
to save 4-8Kb.

[CMake]: http://www.cmake.org/

### SQLite3 extension

``make nusqlite3``

It will build shared library libnusqlite3 with nu linked into it
statically. See BUILD for details.

### library build options

Please refer to documentation in [config.h][].

[config.h]: https://bitbucket.org/alekseyt/nunicode/src/master/libnu/config.h?at=master

## QUESTIONS?

[aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
