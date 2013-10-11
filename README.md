[TOC]

## WHATS THIS

This is Unicode encoding/decoding library.

What it can do:

* Decode UTF strings into Unicode characters
* Encode Unicode characters into UTF string

Encodings supported ATM:

* UTF-8
* CESU-8/Modified UTF-8

What it *CAN'T* do:

* Unicode normal forms
* Strings collation
* Encoding verification (maybe later)

At the moment this is just coding library.

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

* Small size: UTF-8 decoding - 1.5Kb, UTF-8 decoding/encoding - 2Kb, UTF-8 encoding/decoding + utility funcitons - 3Kb
* Zero memory footprint
* Small CPU footprint
* Rich build options: you can strip every part you don't need
* C99 compliant, -pedantic -Wall -Werror
* MIT license

## EXAMPLES

### decoding UTF-8 (stream-like)

    :::c
    const char input[] = "привет мир!";
    uint32_t u = 0;

    const char *p = input;
    for (int i = 0; i < sizeof(input) / sizeof(*input); ++i) {
        p = nu_utf8_read(p, &u);
        printf("0x%04X\n", u);
    }

### decoding UTF-8 to memory buffer

    :::c
    const char input[] = "привет мир!";
    uint32_t u[sizeof(test)] = { 0 }; /* should be enough */

    nu_read_str(input, u, nu_utf8_read);

### recoding string from CESU-8 into UTF-8 with memory buffers

    :::c
    /* 𐐀 + \0 in CESU-8 */
    const unsigned char input[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80, 0 };
    char output[sizeof(input)] = { 0 };
    
    nu_transform_str((const char *)input, output, nu_cesu8_read, nu_utf8_write);

## DOCUMENTATION

``doxygen``

It will produce ``doc/html`` with Doxygen documentation in browesable HTML.

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

* ``make test`` - units
* ``make samples`` - examples

### libraries build options

* ``-DNU_WITH_UTF8_READER`` - enable UTF-8 decoding
* ``-DNU_WITH_UTF8_WRITER`` - enable UTF-8 encoding
* ``-DNU_WITH_UTF8`` - implies ``-DNU_WITH_UTF8_READER`` and ``-DNU_WITH_UTF8_WRITER``
* ``-DNU_WITH_CESU8_READER`` - enable CESU-8 decoding
* ``-DNU_WITH_CESU8_WRITER`` - enable CESU-8 encoding
* ``-DNU_WITH_CESU8`` - implies ``-DNU_WITH_CESU8_READER`` and ``-DNU_WITH_CESU8_WRITER``
* ``-DNU_WITH_ITERATORS`` - enable utility functions (for 0-terminated strings)
* ``-DNU_WITH_STRINGS`` - enable supported string functions (for 0-terminated strings)
* ``-DNU_WITH_EVERYTHING`` - implies everything above

## QUESTIONS?

[aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
