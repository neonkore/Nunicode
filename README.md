[TOC]

## WHATS THIS

This is Unicode encoding/decoding library.

What it can do:

* Decode UTF-8 strings into Unicode characters
* Encode Unicode characters into UTF-8 string

What it CAN'T do:

* Unicode normal forms
* Strings collation
* Encoding verification (maybe later)

It's just coding library.

## WHY YOU DO ANOTHER UNICODE LIBRARY

I needed one for [Community Compass][].

* I don't like [utf8proc][] (400Kb)
* I don't like [UTF8-CPP][] (C++)
* I don't like [micro-utf8][] (design)
* I don't like [iconv][] (license)
* I don't like [apr-iconv][] (dependencies, etc)

(I'm sorry)

[Community Compass]: https://bitbucket.org/alekseyt/compass
[utf8proc]: http://www.public-software-group.org/utf8proc
[UTF8-CPP]: http://utfcpp.sourceforge.net/
[micro-utf8]: http://puszcza.gnu.org.ua/software/microutf8/
[iconv]: http://www.gnu.org/software/libiconv/
[apr-iconv]: http://apr.apache.org/

So i decided to roll out my own implementation. See also "WHY ITS GOOD".

## WHY ITS GOOD

* Small size: 1.5Kb UTF-8 decoding, 2Kb UTF-8 decoding/encoding, 3Kb UTF-8 encoding/decoding + utility funcitons
* Zero memory footprint
* Small CPU footprint
* C99 compliant, -pedantic -Wall -Werror
* MIT license

## EXAMPLES

### decoding UTF-8 (stream-like)

    :::c
    const char input[] = "привет мир!";
    uint32_t u[sizeof(test)] = { 0 }; /* should be enough */

    const char *cp = test;
    ssize_t input_len = nu_utf8_strlen(test, strlen(test)); /* character length */

    for (int i = 0; i < input_len; ++i) {
        cp = nu_utf8_read(cp, u + i);
    }

### decoding UTF-8 to memory buffer

    :::c
    const char input[] = "привет ромашки";
    uint32_t u[sizeof(test)] = { 0 }; /* should be enough */

    nu_read_str(input, u, nu_utf8_read);

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

You probably don't need this:

* ``make test`` - units
* ``make samples`` - examples

### libraries build options

* ``-DNU_WITH_UTF8_READER`` - enable UTF-8 decoding
* ``-DNU_WITH_UTF8_WRITER`` - enable UTF-8 encoding
* ``-DNU_WITH_UTF8`` - implies ``-DNU_WITH_UTF8_READER`` and ``-DNU_WITH_UTF8_WRITER``
* ``-DNU_WITH_ITERATORS`` - enable utility functions (for 0-terminated strings)
* ``-DNU_WITH_EVERYTHING`` - implies everything above

## QUESTIONS?

[aleksey.tulinov@gmail.com][]

[aleksey.tulinov@gmail.com]: mailto:aleksey.tulinov@gmail.com
