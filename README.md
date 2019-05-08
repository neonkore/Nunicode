[TOC]

This is i18n library implementing Unicode 12.1.

nunicode is trying to carefully follow the Unicode specification with
reasonable trade-offs. It doesn't implement the entire standard, but
it does provide most common operations on Unicode strings.

What it can do:

* UTF encoding and decoding
* Strings collation using default Unicode collation table
* Unicode casemapping: "Maße" -> "MASSE" (German)
* Unaccenting (nunicode's extension)
* Collation tailoring is supported, but not implemented in nunicode,
  see [notes][]

What it doesn't do:

* Unicode Collation Algorithm (see [notes][])
* Unicode [normalization forms][]: NFD, NFC, NFKD, NFKC

[notes]: #markdown-header-strings-collation
[normalization forms]: http://unicode.org/reports/tr15/#Norm_Forms

Conformance:

Specification         | Notes
----------------------|----------------
Unicode 12.1          | Conformant on character set and Unicode transformation forms (UTF)
ISO/IEC 10646         | ISO/IEC 10646:2017, fifth edition, plus Amendments 1 and 2 to the fifth edition, plus yadayadayada (as [defined by Unicode 12.0][])
ISO/IEC 14651         | ISO/IEC 14651:2011, [notes][]

[defined by Unicode 12.0]: http://www.unicode.org/versions/Unicode12.0.0/

Encodings supported:

* UTF-8
* UTF-16/UTF-16LE/UTF-16BE
* UTF-32/UTF-32LE/UTF-32BE
* CESU-8
* UTF-16HE/UTF-32HE (see notes at [host-endianess][])

[host-endianess]: #markdown-header-host-endianess-of-utf-encodings

All string functions provided by nunicode work on encoded strings: there is
no need to decode anything explicitely and there is no intermediate
representation under the hood of nunicode. Collation functions are
complemented by case-insensitive variants.

## Properties of the library

* Small size: UTF-8 encoding/decoding - 3Kb, UTF-8 encoding/decoding +
  0-terminated string functions - 5Kb; case mapping - 60Kb, default Unicode
  collation - 180Kb (less in BMP-only variant)
* Small memory footprint, zero allocations
* Small CPU footprint, O(1) complexity under the hood
* Endianess- and platform-agnostic
* Rich build options: you can strip every part you don't need
* C99 compliant, compiled with -pedantic -Wall -Wextra -Werror
* No dependencies
* Permissive license

## Different versions of Unicode

Previously implemented versions of Unicode are available in Git
repository:

Unicode | nunicode    | Git branch
--------|-------------|------------
6.3.0   | 0.8-1.2.1   | unicode.630
7.0.0   | 1.3-1.5.3   | unicode.700
8.0.0   | 1.6.1       | unicode.800
9.0.0   | 1.7.1       | unicode.900
10.0.0  | 1.8.1       | unicode.1000
11.0.0  | 1.9.1       | unicode.1100
12.1.0  | 1.10        | master

## Tests coverage

* 100% lines
* ~95% branches, it is not covering some things like branching inside
  conditional expressions.

If you wish to inspect the coverage, proceed as following:

    cmake .. -DCMAKE_BUILD_TYPE=GCOV
    make coverage

This build configuration assumes that you use GCC. It will produce
``tests/coverage`` directory with coverage info in browesable HTML.

## Performance considerations

Collations and case mappings are O(1). Internally both use [minimal
perfect hash][] table for lookup. Hash is a quite fast couple of XOR+MOD.

[minimal perfect hash]: http://iswsa.acm.org/mphf/index.html

Numbers below are to give a general idea on nunicode performance. Each
number is linked to corresponding test program and  measured with standard
``time`` utility, all numbers in seconds.

Function     | nunicode (1.5.1)  | ICU (52.1)
-------------|-------------------|-------------------
iteration    |     0.070 ([1][]) | 0.080 ([2][])
strcoll      |     0.200 ([3][]) | 1.560 ([4][])
strcasecoll  |     1.170 ([5][]) | 1.520 ([6][])

Compiler used is GCC 4.8.2, optimization level is -O2. To re-measure
those numbers proceed as following:

    cmake .. -DCMAKE_BUILD_TYPE=PROF
    make

Test details:

* Number of iterations on strings: 100000
* libnu build options: -DNU\_DISABLE\_CONRACTIONS (disabling contractions
  allows nunicode to enable specific optimization)
* Strings encoding: UTF-8

[1]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/prof/iter_nu.c
[2]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/prof/iter_icu.c
[3]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/prof/strcoll_nu.c
[4]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/prof/strcoll_icu.c
[5]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/prof/strcasecoll_nu.c
[6]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/prof/strcasecoll_icu.c

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
provide read/write functions instead. See [samples/utf16.c][].

[samples/utf16.c]: https://bitbucket.org/alekseyt/nunicode/src/master/samples/utf16.c

### host-endianess of UTF encodings

Sometimes you can see UTF-16 defined as "host-endian" or "native-endian".
For the purpose to be compatible with such implementations, nunicode
implements two extensions: UTF-16HE and UTF-32HE encodings - these
works on host-endian encoded strings.

Note that, as standard demands, ``nu_utf16_read_bom()`` will default
encoding to UTF-16BE if BOM is not present in string. Therefore HE
variants are need to be used explicitely when required.

## Reverse reading

nunicode does not provide str\[i\] (access by index) equivalent. Instead
you could do ``nu_utf*_revread(&u, encoded)`` to read codepoint
in backward direction.

It is a bad idea to pass arbitrary pointer to revread(). UTF-8 and
CESU-8 can possibly recover from programming error (pointer poiting to
the middle of multibyte UTF-8 sequence), but UTF-16 and UTF-32 revread
behavior is unpredictabled in that case.

Pointer passed to revread() is supposed to always come from call to
``nu_*_read()``.

## Encoding validation

All decoding functions has no error checking for performance reasons.
nunicode expects valid UTF strings at input. It does provide
``nu_validate()`` to check string encoding before processing.

If this check fails on some string then none of the nunicode functions
are applicable to it. Calling any function on such string might lead to
undefined behavior.

## Case mapping and case folding

Case mapping is full Unicode casemapping when string might grow in size,
e.g. "Maße" (German) uppercases to "MASSE".

nunicode implements unconditional casemapping when any codepoint might be
casemapped in a sigle way only (e.g. 'Σ' always casemaps into 'σ').

## Strings collation

nunicode implements ISO 14651 collation where strings are sorted according
to the weights of their codepoints. Weight used by nunicode are derived
from DUCET (default Unicode collation table). Character set is reduced
to contain only letters and number to reduce library size. The rest
of the codepoints are sorted at the end of the list in codepoint order.

Works best on precomposed characters (NFC).

Below are examples of such ordering in different laguages (Unicode 7.0):

Language    | Alphabet
------------|---------
Russian     | аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОпПрРсСтТуУфФхХцЦчЧшШщЩъЪыЫьЬэЭюЮяЯ
English     | aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ
German      | aAäÄbBcCdDeEfFgGhHiIjJkKlLmMnNoOöÖpPqQrRsSßtTuUüÜvVwWxXyYzZ
Spanish     | aAáÁbBcCdDeEéÉfFgGhHiIíÍjJkKlLỻỺmMnNñÑoOóÓpPqQrRsStTuUúÚüÜvVwWxXyYzZ
French      | aAàÀâÂbBcCçÇdDeEéÉèÈëËfFgGhHiIjJkKlLmMnNoOòÒôÔöÖpPqQrRsStTuUùÙvVwWxXyYzZ
Greek       | αΑἀἄἂἆἁἅἃἇβΒγΓδΔεΕἐἔἒἑἕἓζΖηΗθΘιΙκΚλΛμΜνΝξΞοΟπΠρΡσΣςτΤυΥφΦχΧψΨωΩ

There is no option to switch uppercase/lowercase preference because
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
Tailoring delta     | -               | Equal to the delta with reduced DUCET. DUCET is reduced to character categories Ll, Lu, Lt, Lo, Nl, Nd, No, Pc, Pd, Ps, Pe, Pi, Pf, Po, Sc, Sm.
Preparation process | None            |

Note that contractions support (U+013F equals U+004C U+00B7) is
implemented but not enabled by default in release build. Please see
library build options for details.

Contractions included follow the same rule of DUCET reduction as
codepoints, i.e. only contractions with first codepoint of mentioned
above character categories are included into collation.

### localization (collation tailoring)

nunicode supports both custom collations and conractions. Custom collation
is a function returning weights different from defaults. Contraction is a
sequence of Unicode codepoints with assigned weight.

Example is Hungarian letter "Dz". Simply put, collation is defined
as "D" < "Dz" < "E". If such collation is used and nunicode encounters
"D", it will look-ahead to test if it's "D" or "Dz". Weight will be
determined by the result of this test. This also implies
"BDE" < "BDzE" < "BEE".

### custom collations

If you need to implement your own collation, then you need to provide
your own weighting function to ``_nu_strcoll()``. It is described in
``nu_codepoint_weight_t`` documentation. [strcoll_internal_test.c][]
and ``_test_weight()`` implementation are also the references.

Note though that everything in nunicode starting from underscore
(as in ``_nu_strcoll``) is internal API and might change when it need to
follow ongoing changes in Unicode and CLDR.

[strcoll_internal_test.c]: https://bitbucket.org/alekseyt/nunicode/src/master/tests/strcoll_internal_test.c

## Unaccenting

This is non-comformant nunicode's extension (since nunicode 1.8). What
it does:

    Φραπέ -> Φραπε

And so on. Works for European languages. What it does under the hood:
nunicode has a hash table of all codepoints that could be decomposed
into a letter + combining mark. When ``nu_tounaccent()`` encounters such
codepoint it returns decomposition sequence with combining marks removed.
In other regards it works a lot like ``nu_toupper()``, including
complexity of operation (O(1)), but instead of putting codepoints into
uppercase, it unaccents them.

Additionally if encountered codepoint is combined mark itself, it is
ignored, e.g.:

    Café (Cafe + U+0301 COMBINING ACUTE ACCENT) -> Cafe

Example on unaccenting a string with nunicode: [unaccent.c][]

[unaccent.c]: https://bitbucket.org/alekseyt/nunicode/src/master/samples/unaccent.c

## Compact library variant (BMP-only)

If `NU_WITH_BMP_ONLY` is set in build flags or in CMake options
(disabled by default), then all nunicode transformations, including
SQLite extention, collations, case transformations and unaccenting,
will be built with codepoints from Unicode's Basic Multilingual Plane
only.

Unicode standard describes (2.8 Unicode Allocation) BMP as:

> The Basic Multilingual Plane (BMP, or Plane 0) contains the common-use
> characters for all the modern scripts of the world as well as many
> historical and rare characters. By far the majority of all Unicode
> characters for almost all textual data can be found in the BMP.

This roughly halves library size, but all transformations will account
only for codepoints from range U+0000..U+FFFF. Please see
[Roadmap to the BMP][] for further details on what codepoints are included.

[Roadmap to the BMP]: http://unicode.org/roadmaps/bmp/

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
* unaccent(X)
* X LIKE Y ESCAPE Z
* COLLATE NU1200 - case-sensitive Unicode collation
  (or as defined by NU_SQLITE_COLLATION_NAME build option)
* COLLATE NU1200\_NOCASE - case-insensitive Unicode collation
  (or as defined by NU_SQLITE_NOCASE_COLLATION_NAME)

Supported encodings: UTF-8, UTF-16, UTF-16LE, UTF-16BE. Please note that
collations are specific to Unicode revision, e.g. `NU1100` - 11.0.0. Indices
built with older collation (e.g. `NU1000`) will not be compatible with
newer collation. Therefore the recommended way of using collations is to
include collation in select, e.g. `SELECT ... COLLATE NU_1100`.

Extension is about 300Kb in size (nunicode 1.10), or about 180Kb in
compact (BMP-only) variant.

It can be compiled into shared library and loaded with
``sqlite3_load_extension()`` ([doc][]) (see [samples/loadextension.c][])
or it can be linked statically into your application or library and enabled
for every new SQLite3 connection.

Latter is recommended way of using it, all you need to enable this
extension is the following call:

    :::c
    nunicode_sqlite3_static_init(0);

After this point, every new connection will have nunicode extension
enabled. See [samples/autoextension.c][] for the reference.

[doc]: http://www.sqlite.org/c3ref/load_extension.html
[samples/loadextension.c]: https://bitbucket.org/alekseyt/nunicode/src/master/sqlite3/samples/loadextension.c
[samples/autoextension.c]: https://bitbucket.org/alekseyt/nunicode/src/master/sqlite3/samples/autoextension.c

### extension performance

This section is only to give a general idea on nunicode SQLite extension
performance. Numbers are measured by SQLite3 shell's ``.timer on``, all numbers in
seconds.

Function | w/o extension | ICU (52.1) | nunicode (1.5.1)
---------|---------------|------------|-----------------
upper()  |         0.290 | 0.700      | 0.540
COLLATE  |         0.570 | 0.980      | 0.580
LIKE     |         0.150 | 0.260      | 0.290

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
might grow in size during case transformation. On demand this extension
may be modified to be compatible with ICU extension.

Test details:

* SQLite version: 3.8.2
* Test tables size: 100000 entries
* ICU collation for ORDER BY: ``SELECT icu_load_collation('ru_RU', 'RUSSIAN')``
  with sequential COLLATE RUSSIAN
* nunicode collation for ORDER BY: embedded NU700 and sequential
  COLLATE NU700
* ICU and nunicode extensions compilation flags: -O3
* Encoding of database: UTF-8
* upper() test query: ``SELECT count(upper(x)) FROM test_casing``
* COLLATE test query: ``SELECT * FROM test_ordering ORDER BY x COLLATE <collation> LIMIT 1``
* LIKE test query: ``SELECT count(*) FROM test_casing WHERE x LIKE <string>``

Test script is available in repository: [test_db.sh][]

[test_db.sh]: https://bitbucket.org/alekseyt/nunicode/src/master/sqlite3/test_db.sh

## Downloads

See [downloads][] section, or take versioned file from "Tags" tab.

[downloads]: https://bitbucket.org/alekseyt/nunicode/downloads

## Build

nunicode uses [CMake][] for building.

    mkdir build
    cd build
    cmake .. -DCMAKE_BUILD_TYPE=Release
    make nu

It will build static library.

The install target installs the ``nunicode-config.cmake`` config-module which
creates the import library ``nunicode::nu``. Usage:

    find_package(nunicode REQUIRED)
    target_link_libraries(*<some-target>* nunicode::nu)

Normally nunicode is compiled with -O3 (gcc).

[CMake]: http://www.cmake.org/

### SQLite3 extension

``make nusqlite3``

It will build shared library libnusqlite3 with nu linked into it
statically. See [BUILD][] for details.

[BUILD]: https://bitbucket.org/alekseyt/nunicode/src/master/BUILD

### library build options

Please refer to documentation in [config.h][].

[config.h]: https://bitbucket.org/alekseyt/nunicode/src/master/libnu/config.h

## Questions?

* [aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
