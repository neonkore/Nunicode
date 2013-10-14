[TOC]

## WHATS THIS

This is Unicode encoding/decoding library.

What it can do:

* Decode UTF strings into Unicode characters
* Encode Unicode characters into UTF string

Encodings supported ATM:

* UTF-8
* CESU-8/Modified UTF-8
* UTF-16 (BOM/LE/BE)

String functions supported for all encodings (works on encoded strings):

* strlen (nu\_strlen)
* strnlen (nu\_strnlen)
* strchr (nu\_strchr)
* strnchr (nu\_strnchr)
* strrchr (nu\_strrchr)
* strrnchr (nu\_strrnchr)

What it *CAN'T* do:

* Unicode normal forms
* Strings collation
* Encoding verification (maybe later)

## WHY YOU DO ANOTHER UNICODE LIBRARY

I needed one for [Community Compass][].

* I don't like [utf8proc][] (400Kb)
* I don't like [UTF8-CPP][] (C++)
* I don't like [micro-utf8][] (design)
* I don't like [iconv][] (license)
* I don't like [apr-iconv][] (dependencies, etc)
* I don't like [ICU][] (obvious reasons)

(I'm sorry)

See also "WHY ITS GOOD".

[Community Compass]: https://bitbucket.org/alekseyt/compass
[utf8proc]: http://www.public-software-group.org/utf8proc
[UTF8-CPP]: http://utfcpp.sourceforge.net/
[micro-utf8]: http://puszcza.gnu.org.ua/software/microutf8/
[iconv]: http://www.gnu.org/software/libiconv/
[apr-iconv]: http://apr.apache.org/
[ICU]: http://site.icu-project.org/

## WHY ITS GOOD

* Small size: UTF-8 encoding/decoding - 1.5Kb, UTF-8 encoding/decoding + 0-terminated string functions - 3Kb
* Zero memory footprint
* Small CPU footprint
* Endianess-agnostic
* Rich build options: you can strip every part you don't need
* C99 compliant, -pedantic -Wall -Wextra -Werror
* No dependencies
* MIT license

## EXAMPLES

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

## DOCUMENTATION

``doxygen``

It will produce ``doc/html`` with Doxygen documentation in browesable HTML.

## NOTES ON UTF-8

According to Unicode specification UTF-8 might contain byte order mark (BOM),
however it doesn't make any sense to have BOM in UTF-8. Therefore nunicode has no
embedded means to deal with UTF-8 BOM, neither detect, read or write.

If you are facing this crap, just +3 char pointer to skip BOM. (Note that UTF-8
BOM is 3 bytes long: EF BB BF). You can also safely nu\_utf8\_read() BOM, it will
produce normal U+FEFF codepoint.

Reference: [UTF BOM FAQ][]

[UTF BOM FAQ]: http://www.unicode.org/faq/utf_bom.html#bom5

## NOTES ON UTF-16

Unicode defines 3 types of UTF-16 *each* affected by endianess.

1. UTF-16
2. UTF-16LE (little endian)
3. UTF-16BE (big endian)

LE and BE are obviusly little-endian and big-endian, generic one's endianess is
defined by the byte order mark (BOM) at the beginning of the string. Thus generic
UTF-16 is always BOM + either UTF-16LE or UTF-16BE.

nunicode provide only nu\_utf16le and nu\_utf16be for the encoding and decoding,
BOM is handled by nu\_utf16 functions. It's up to you to decide if you need BOM or
just UTF-16LE/BE. Either you choose, you'll get valid UTF-16 variant.

Note that nunicode will never report string endianess explicitely but will provide
read, write and BOM write functions instead. See ``samples/utf16.c``.

## NOTES ON UTF-32

Everything said above about UTF-16 also applies to UTF-32.

## NOTES ON REVERSE READING

nunicode do not provide str\[i\] (access by index) equivalent since it will 
always be slow. Instead you can do nu\_utf8\_revread(&u, encoded) and other
encodings variants to read character in backward direction.

It is always a bad idea to pass arbitrary pointer to revread(). UTF-8 and CESU-8
can possibly recover from programming error (pointer poiting to the middle of 
multibyte UTF-8 sequence), but UTF-16 and UTF-32 revread will fail badly. In fact,
UTF-32 revread is just "const char \*p - 4".

Pointer passed to revread() is supposed to always come from call to nu\_utf8\_read(). 
Otherwise prepare to unforeseen consequences.

As a side note, if you pass 0 as a pointer to decoded character, revread(), as you
would expect, won't do any redundant decoding, but will just iterate over the string.

    :::c
    /* skip 5 characters backwards */
    for (int i = 0; i < 5; ++i) {
    	p = nu_utf8_revread(0, p);
    }

## DOWNLOADS

See [downloads][] section. Take versioned file from "Tags" tab.

[downloads]: https://bitbucket.org/alekseyt/nunicode/downloads

## WHATS INSIDE

* ``src`` - library sources
* ``samples`` - usage examples
* ``tests`` - units
* ``Makefile`` - makefile
* ``Doxyfile`` - Doxygen configuration file

## BUILD

``make``

It will build static and shared libraries.

### build variants

* ``make libnu.a`` - static library
* ``make libnu.so`` - shared library

You probably don't need those:

* ``make tests`` - units
* ``make samples`` - examples

### library build options

UTF-8

* ``-DNU_WITH_UTF8_READER`` - UTF-8 decoding
* ``-DNU_WITH_UTF8_WRITER`` - UTF-8 encoding
* ``-DNU_WITH_UTF8`` - implies ``-DNU_WITH_UTF8_READER`` and ``-DNU_WITH_UTF8_WRITER``

CESU-8

* ``-DNU_WITH_CESU8_READER`` - CESU-8 decoding
* ``-DNU_WITH_CESU8_WRITER`` - CESU-8 encoding
* ``-DNU_WITH_CESU8`` - implies ``-DNU_WITH_CESU8_READER`` and ``-DNU_WITH_CESU8_WRITER``

UTF-16

* ``-DNU_WITH_UTF16LE_READER`` - UTF-16LE decoding
* ``-DNU_WITH_UTF16LE_WRITER`` - UTF-16LE encoding
* ``-DNU_WITH_UTF16LE`` - implies ``-DNU_WITH_UTF16LE_READER`` and ``-DNU_WITH_UTF16LE_WRITER``
* ``-DNU_WITH_UTF16BE_READER`` - UTF-16BE decoding
* ``-DNU_WITH_UTF16BE_WRITER`` - UTF-16BE encoding
* ``-DNU_WITH_UTF16BE`` - implies ``-DNU_WITH_UTF16BE_READER`` and ``-DNU_WITH_UTF16BE_WRITER``
* ``-DNU_WITH_UTF16_READER`` - UTF-16 decoding, also implies ``-DNU_WITH_UTF16LE_READER`` 
  and ``-DNU_WITH_UTF16BE_READER``
* ``-DNU_WITH_UTF16_WRITER`` - UTF-16 encoding, also implies ``-DNU_WITH_UTF16LE_WRITER``
  and ``-DNU_WITH_UTF16BE_WRITER``
* ``-DNU_WITH_UTF16`` - implies ``-DNU_WITH_UTF16_READER`` and ``-DNU_WITH_UTF16_WRITER``

UTF-32

* Very same options as for UTF-16, just replace 16 with 32

Misc

* ``-DNU_WITH_REVERSE_READ`` - read encoded string in reverse order functions
* ``-DNU_WITH_Z_STRINGS`` - supported functions for 0-terminated strings
* ``-DNU_WITH_N_STRINGS`` - supported functions fo unterminated strings
* ``-DNU_WITH_STRINGS`` - implies ``-DNU_WITH_Z_STRINGS`` and ``-DNU_WITH_N_STRINGS``
* ``-DNU_WITH_Z_EXTRA`` - extra functions for 0-terminated strings
* ``-DNU_WITH_N_EXTRA`` - extra functions fo unterminated strings
* ``-DNU_WITH_EXTRA`` - implies ``-DNU_WITH_Z_EXTRA`` and ``-DNU_WITH_N_EXTRA``

Everything

* ``-DNU_WITH_EVERYTHING`` - implies everything above

## ROADMAP

* 0.8: UTF-32, RC1
* 0.9: RC2

## QUESTIONS?

[aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
