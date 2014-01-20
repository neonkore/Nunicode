[TOC]

## WHATS THIS

This is i18n library implementing Unicode 6.3.0.

What it can do:

* Decode UTF strings into Unicode characters
* Encode Unicode characters into UTF string
* Collate encoded UTF strings (full unicode collation backed by DUCET)
* Correctly casemap Unicode characters ("Maße" -> "MASSE")
* Collation tailoring (all contractions, "ｫー" < "ぉゝ",
  backward accent ordering, etc)

Unicode is not only character set, but also specification of different
script rules. nunicode is trying to follow the spec with reasonable
constraints to produce small and fast Unicode implementation.

What it *DOESN'T* do:

* UCA (see notes)
* Unicode normal forms

Encodings supported ATM:

* UTF-8
* UTF-16/UCS-2 (BOM/LE/BE)
* UTF-32/UCS-4 (BOM/LE/BE)
* CESU-8/Modified UTF-8
* UTF-16HE/UTF-32HE (see notes)

All string functions provided by nunicode work on encoded strings: no 
need to decode anything explicitely and there is no any internal
representation in nunicode. Collation functions are complemented by
case-insensitive variant.

## WHY YOU DO ANOTHER UNICODE LIBRARY

I needed one for [Community compass][].

* I don't like [utf8proc][] (400Kb)
* I don't like [UTF8-CPP][] (C++)
* I don't like [micro-utf8][] (design)
* I don't like [iconv][] (license)
* I don't like [apr-iconv][] (dependencies, etc)
* I don't like [ICU][] (obvious reasons)

(I'm sorry). See also "WHY ITS GOOD".

* I like [libutf][] thought

[Community compass]: https://bitbucket.org/alekseyt/compass
[utf8proc]: http://www.public-software-group.org/utf8proc
[UTF8-CPP]: http://utfcpp.sourceforge.net/
[micro-utf8]: http://puszcza.gnu.org.ua/software/microutf8/
[iconv]: http://www.gnu.org/software/libiconv/
[apr-iconv]: http://apr.apache.org/
[ICU]: http://site.icu-project.org/
[libutf]: http://swtch.com/plan9port/unix/

## WHY ITS GOOD

* Small size: UTF-8 encoding/decoding - 1.5Kb, UTF-8 encoding/decoding +
  0-terminated string functions - 3Kb; case mapping - 30Kb, full Unicode
  collation - 140Kb (less in compact flavor)
* Zero memory footprint
* Small CPU footprint
* Endianess- and platform-agnostic
* Rich build options: you can strip every part you don't need
* C99 compliant, -pedantic -Wall -Wextra -Werror
* No dependencies
* MIT license
* 100% awesome

## EXAMPLES

See samples/ directory for complete examples of nunicode usage.

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
    uint32_t u[sizeof(test)] = { 0 }; /* should be enough */

    nu_readstr(input, u, nu_utf8_read);

### recoding string from CESU-8 into UTF-8 with memory buffers

    :::c
    /* 𐐀 in CESU-8 */
    const unsigned char input[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80 };
    char output[sizeof(input)] = { 0 };
    
    nu_transformnstr((const char *)input, sizeof(input), output, 
        nu_cesu8_read, nu_utf8_write);

## UTF-8, UTF-16 AND UTF-32

According to Unicode specification UTF-8 might contain byte order mark
(BOM), however it doesn't make any sense to have BOM in UTF-8. Therefore
nunicode has no embedded means to deal with UTF-8 BOM, neither detect,
read or write.

If you are facing this crap, just +3 char pointer to skip BOM. (Note
that UTF-8 BOM is 3 bytes long: EF BB BF). You can also safely
``nu_utf8_read()`` BOM, it will produce normal U+FEFF codepoint.

Reference: [UTF BOM FAQ][]

Unicode defines 3 types of UTF-16 *each* affected by endianess.

1. UTF-16
2. UTF-16LE (little endian)
3. UTF-16BE (big endian)

LE and BE are obviusly little-endian and big-endian, generic one's
endianess is defined by the byte order mark (BOM) at the beginning of the
string or defaults to BE if BOM is absent. Thus generic UTF-16 is always
BOM + either UTF-16LE or UTF-16BE.

nunicode provide only ``nu_utf16le_*`` and ``nu_utf16be_*`` for the
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
simply as "host-endian". This is misinterpretation of UTF-16 definition,
but for the purpose of decoding and encoding strings in host endianess,
nunicode implements UTF-16HE and UTF-32HE encodings.

Note that ``nu_utf16_read_bom()`` will default encoding to UTF-16BE if
BOM is not present in string, therefore HE variants are need to be used
explicitely when required.

[ISO/IEC 10646]: http://www.itscj.ipsj.or.jp/sc2/open/02n4125/FCD10646-Main.pdf

## UCS-2 and UCS-4

UCS-4 is the same as UTF-32.

UCS-2 reading is a part of UTF-16 reading, if you need to write UCS-2,
just override ``nu_utf16*_write()`` and don't write characters outside
of [BMP][] (U+0000..U+FFFF). There is no embedded support of this in
nunicode since UCS-2 was superseded by UTF-16 more than 15 years ago.

[BMP]: http://en.wikipedia.org/wiki/Plane_(Unicode)#Basic_Multilingual_Plane

## REVERSE READING

nunicode do not provide str\[i\] (access by index) equivalent since it
will always be slow. Instead you can do ``nu_utf8_revread(&u, encoded)``
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

## STRINGS COLLATION AND CASE MAPPING

Case mapping uses complete mapping set extracted from [UCD][] +
untailored [special casing][].

Note that nunicode **DO NOT** implement [UCA][]. Instead it use limited
set of the Default Unicode Collation Element Table (DUCET) weights
extracted from UCA. Set is limited to codepoints having meaning to
collation: letters and numbers (all variants).

Both collation and case mapping use full decomposition of characters
(as opposed to simple decomposition) and take into account that each
Unicode character might grow in size during casemapping.

For instance, "ß" transforms into "SS" inside of ``nu_toupper()`` and
``nu_strcasecoll("Maße", "MASSE")`` will report equivalence of these
strings.

[UCD]: http://www.unicode.org/ucd/
[special casing]: http://unicode.org/Public/6.3.0/ucd/SpecialCasing.txt
[UCA]: http://www.unicode.org/reports/tr10/

### localization (collation tailoring)

Note that for the most languages tailoring is still required, but 
DUCET provide reasonable defaults for all languages.

Localization (l10n) is performed by nul10n library which is not
publicitly available, please email me to get complete feature set, 
documentation, examples and possibly demo.

nul10n include support for the following languages

Major europian languages (17Kb)

* English: backed by embedded Default Unicode Collation Element
  Table (DUCET)
* French: single-pass backward accent ordering
* Italian: included into DUCET
* German: standard collation
* Spanish: standard collation
* Russian: standard collation

Major asian languages (182Kb)

* Chinese (Traditional): natively supported by Unicode
* Chinese (Simplified): GB2312 variant, full variant available
  on demand
* Japanese: standard collation, with contractions supported 
  ("ｫー" < "ぉゝ")
* Korean: standard collation
* Vietnamese: standard collation

Together with Portuguese (included into DUCET), this set will provide
coverage for both Americas, Europe, Asia and Australia.

More languages? Available on demand.

All collations correspond to [CLDR][] version 24 as published by 
Unicode Consortium.

Library is traditionally 100% covered with tests, has O(1) complexity
under the hood and well documented. Base library will add only 12Kb to
collations and comes in two flavors: standard and compact, latter will 
allow to save another 64Kb on underlying nunicode lib.

[CLDR]: http://cldr.unicode.org/

### performance considerations

Decomposition and case mapping are O(1). Internally both use [minimal
perfect hash][] table for lookup. Hash is a couple of XORs.

[minimal perfect hash]: http://iswsa.acm.org/mphf/index.html

## ENCODING VALIDATION

All decoding functions has very limited error checking for performance
reasons. nunicode expect valid UTF strings at input. It though provide
``nu_validate()`` to check complete string before processing.

This function perform UTF encoding validation, do not expect it to
validate decoded Unicode string, or even decode UTF string completely.
E.g. U+D801 will pass UTF-32 check: it's malformed for UTF-32 because
this range is reserved for UTF-16, but it's still correctly **encoded**
UTF-32.

Normally you need validation at I/O boundaries only, actually at I
boundary only, because if ``nu_validate()`` is failing on product of 
``nu_*_write()``, then this is bug in nunicode (unlikely) and it need
to be fixed.

## SQLITE3 EXTENSION

It can be compiled into shared library and loaded with 
``sqlite3_load_extension()`` ([doc][]) (see
*sqlite3/samples/loadextension.c*) or it can be linked statically into
your application or library and enabled for every new sqlite3 connection.

Latter is recommended way of using it, all you need to do to enable this
extenstion is the following call:

    :::c
    nunicode_sqlite3_init(0);

After this point, every connection you open with ``sqlite3_open()`` will
have nunicode extension enabled. See *sqlite3/samples/autoextension.c*
for the reference.

To load SQLite3 extension dynamically:

    :::c
    sqlite3_load_extension(db, "libnusqlite3.so", "sqlite3_nunicode_init", 0);

[doc]: http://www.sqlite.org/c3ref/load_extension.html

## DOCUMENTATION

Take a look into [downloads][] section, there should be latest doc available
for download. You can also build documentation from sources by executing

``doxygen``

It will produce ``doc/html`` with Doxygen documentation in browesable HTML.

## DOWNLOADS

See [downloads][] section. Take versioned file from "Tags" tab.

[downloads]: https://bitbucket.org/alekseyt/nunicode/downloads

## WHATS INSIDE

* ``libnu`` - library sources
* ``samples`` - usage examples
* ``tests`` - unittests
* ``sqlite3``, ``sqlite3/samples`` - SQLite3 extension and examples
* ``Doxyfile`` - Doxygen configuration file

## BUILD

By default nunicode use [CMake][] for building, but you can simply
compile all required ``*.c`` with needed build options - see below.

``mkdir build && cd build && cmake .. && make nu``

It will build static library.

Normally nunicode is compiled with -O3 (gcc), you can change it to -Os
to save 4-8Kb. See BUILD for details.

[CMake]: http://www.cmake.org/

### SQLite3 extension

``make nusqlite3``

It will build shared library libnusqlite3 with nu linked into it
statically. See BUILD for details.

### library build options

UTF-8

* ``-DNU_WITH_UTF8_READER`` - UTF-8 decoding
* ``-DNU_WITH_UTF8_WRITER`` - UTF-8 encoding
* ``-DNU_WITH_UTF8`` - implies ``-DNU_WITH_UTF8_READER``
  and ``-DNU_WITH_UTF8_WRITER``

CESU-8

* ``-DNU_WITH_CESU8_READER`` - CESU-8 decoding
* ``-DNU_WITH_CESU8_WRITER`` - CESU-8 encoding
* ``-DNU_WITH_CESU8`` - implies ``-DNU_WITH_CESU8_READER``
  and ``-DNU_WITH_CESU8_WRITER``

UTF-16

* ``-DNU_WITH_UTF16LE_READER`` - UTF-16LE decoding
* ``-DNU_WITH_UTF16LE_WRITER`` - UTF-16LE encoding
* ``-DNU_WITH_UTF16LE`` - implies ``-DNU_WITH_UTF16LE_READER``
  and ``-DNU_WITH_UTF16LE_WRITER``
* Same options for ``NU_WITH_UTF16BE_*``
* Same options for ``NU_WITH_UTF16HE_*``
* ``-DNU_WITH_UTF16_READER`` - complete UTF-16 decoding 
* ``-DNU_WITH_UTF16_WRITER`` - complete UTF-16 encoding 
* ``-DNU_WITH_UTF16`` - implies ``-DNU_WITH_UTF16_READER``
  and ``-DNU_WITH_UTF16_WRITER``

UTF-32

* Very same options as for UTF-16, just replace 16 with 32

Strings collation and casemapping

    All collation and casemapping functions options imply -DNU_WITH_UTF8_READER

    Collation functions also imply -DNU_WITH_UDB, -DNU_WITH_TOUPPER,
    -DNU_WITH_DUCET and corresponding string functions

* ``-DNU_WITH_TOUPPER`` - enable upper case mapping
* ``-DNU_WITH_TOLOWER`` - enable lower case mapping
* ``-DNU_WITH_CASEMAP`` - enable case insensitive string functions,
  implies ``-DNU_WITH_TOUPPER`` and ``-DNU_WITH_TOLOWER``
* ``-DNU_WITH_Z_COLLATION`` - enable strings collation functions for
  0-terminated strings
* ``-DNU_WITH_N_COLLATION`` - enable strings collation functions for
  unterminated strings
* ``-DNU_WITH_COLLATION`` - implies ``-DNU_WITH_Z_COLLATION``
  and ``-DNU_WITH_N_COLLATION``
* ``-DNU_WITH_DUCET`` - enable DUCET functions

Misc

* ``-DNU_WITH_REVERSE_READ`` - read encoded string in reverse order
  functions
* ``-DNU_WITH_VALIDATION`` - string encoding validation functions
* ``-DNU_WITH_Z_STRINGS`` - supported functions for 0-terminated strings
* ``-DNU_WITH_N_STRINGS`` - supported functions fo unterminated strings
* ``-DNU_WITH_STRINGS`` - implies ``-DNU_WITH_Z_STRINGS``
  and ``-DNU_WITH_N_STRINGS``
* ``-DNU_WITH_Z_EXTRA`` - extra functions for 0-terminated strings
* ``-DNU_WITH_N_EXTRA`` - extra functions fo unterminated strings
* ``-DNU_WITH_EXTRA`` - implies ``-DNU_WITH_Z_EXTRA``
  and ``-DNU_WITH_N_EXTRA``

Everything

* ``-DNU_WITH_EVERYTHING`` - implies everything above

## QUESTIONS?

[aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
