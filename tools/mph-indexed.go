package main

import (
	"bufio"
	"fmt"
	"os"
	"path"
	"strconv"
	"strings"
	"time"
)

func usage() {
	fmt.Printf("usage: %s [TAG] [COMPACT]\n\n", os.Args[0])
	fmt.Printf("  [TAG]      - tag to use to prefix hashtables\n")
	fmt.Printf("  [COMPACT]  - flag to indicate if set is BMP-only, true or false\n")
}

func main() {
	if len(os.Args) < 2 {
		usage()
		os.Exit(1)
	}

	tag, compact := os.Args[1], false

	if len(os.Args) > 2 {
		compactOpt, err := strconv.ParseBool(os.Args[2])
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(1)
		}

		compact = compactOpt
	}

	mapping := MPHMapping{}

	// I is holding final values (weights), C is holding original
	// Unicode codepoints for collision detection, no COMBINED

	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()
		parts := strings.Split(line, " ")

		for i, part := range parts {
			parts[i] = strings.TrimSpace(part)
		}

		codepoint, err := strconv.ParseInt(parts[0], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(1)
		}

		replacement, err := strconv.ParseInt(parts[1], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(1)
		}

		mapping[uint32(codepoint)] = MPHV{codepoint: uint32(codepoint), replacement: uint16(replacement)}
	}

	G, V := createMPH(mapping)
	C, I := splitCodepointsAndIndices(V)

	sink, check := os.Stdout, func(err error) {
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(1)
		}
	}

	check(genMPHHeader(sink, MPHHeaderTags{
		Tool:           path.Base(os.Args[0]),
		Unixtime:       time.Now().Unix(),
		Tag:            tag,
		Prime:          MPHPrime,
		Encoding:       MPHInternalEncoding,
		GSize:          uint(len(G)),
		CombinedLength: 0,
	}))
	check(genMPHIncludes(sink, MPHIncludesTags{}))
	check(genMPHG(sink, MPHGTags{
		Tag:       tag,
		G:         G,
		Linebreak: makeLinebreakFunc(10),
	}))
	check(genMPHC(sink, MPHCTags{
		Compact:   compact,
		Tag:       tag,
		C:         C,
		Linebreak: makeLinebreakFunc(8),
	}))
	check(genMPHI(sink, MPHITags{
		Tag:       tag,
		I:         I,
		Linebreak: makeLinebreakFunc(10),
	}))
}
