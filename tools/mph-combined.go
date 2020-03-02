package main

import (
	"bufio"
	"bytes"
	"fmt"
	"os"
	"path"
	"strconv"
	"strings"
	"time"
	"unicode/utf8"
)

func formatReplacement(replacement []string) string {
	parts := make([]int32, len(replacement))
	for i, token := range replacement {
		codepoint, err := strconv.ParseInt(token, 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			return ""
		}

		parts[i] = int32(codepoint)
	}

	// Transform individual codepoints to UTF-8 encoded string
	writer := bytes.Buffer{}
	for _, codepoint := range parts {
		// TODO: filter out non-characters?
		p := make([]byte, 16)
		bytes := utf8.EncodeRune(p, int32(codepoint))
		writer.Write(p[:bytes])
	}

	return writer.String()
}

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

	combined := []uint8{}
	mapping := MPHMapping{}

	// Offset 0 is normally impossible, it is used for signaling collision
	combined = append(combined, uint8(0))

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

		replacement := formatReplacement(strings.Split(parts[1], ","))
		if len(replacement) < 1 {
			continue
		}

		offset := len(combined)
		combined = append(combined, []uint8(replacement)...)
		combined = append(combined, uint8(0))

		// fmt.Printf("%06X %d\n", codepoint, offset)

		mapping[uint32(codepoint)] = MPHV{codepoint: uint32(codepoint), replacement: uint16(offset)}
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
		CombinedLength: uint(len(combined)),
	}))
	check(genMPHIncludes(sink, MPHIncludesTags{}))
	check(genMPHG(sink, MPHGTags{
		Tag:       tag,
		G:         G,
		Linebreak: makeLinebreakFunc(12),
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
	check(genMPHCombined(sink, MPHCombinedTags{
		Tag:       tag,
		Combined:  combined,
		Linebreak: makeLinebreakFunc(12),
	}))
}
