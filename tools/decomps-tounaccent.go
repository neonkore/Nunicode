package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// Tests if decomp (codepoint) is an accent (diacritic)
func isAccent(decomp string) bool {
	// When blocks changes, tounaccent.c is also need to be modified
	var diacriticBlocks = []struct {
		begin int
		end   int
	}{
		{0x0300, 0x036F}, // Combining Diacritical Marks
		{0x1AB0, 0x1AFF}, // Combining Diacritical Marks Extended
		{0x20D0, 0x20FF}, // Combining Diacritical Marks for Symbols
		{0x1DC0, 0x1DFF}, // Combining Diacritical Marks Supplement
	}

	codepoint, err := strconv.ParseInt(decomp, 16, 64)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		return false
	}

	for _, block := range diacriticBlocks {
		if int(codepoint) >= block.begin && int(codepoint) <= block.end {
			return true
		}
	}

	return false
}

// Remove accents from decomps
func unaccent(decomps []string) []string {
	unaccented := []string{}

	for _, decomp := range decomps {
		if !isAccent(decomp) {
			unaccented = append(unaccented, decomp)
		}
	}

	return unaccented
}

// Entry in list of codepoints that need to be unaccented
type unaccentEntry struct {
	codepoint int
	decomps   []string
}

func main() {
	tounaccent := []unaccentEntry{}

	for parts := range splitUnidata(bufio.NewReader(os.Stdin)) {
		codepoint, err := strconv.ParseInt(parts[DecompsCodepoint], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			continue
		}

		tag := parts[DecompsTag]
		if len(tag) > 0 { // Allow only empty tags, no <sort>, <compat>, etc
			continue
		}

		decomps := strings.Split(parts[DecompsTransform], " ")
		for i, decomp := range decomps {
			decomps[i] = strings.TrimSpace(decomp) // TODO: makes sense to ParseInt to avoid double parsing in IsAccent() and Unaccent()
		}

		for _, decomp := range decomps {
			if isAccent(decomp) {
				tounaccent = append(tounaccent, unaccentEntry{codepoint: int(codepoint), decomps: decomps})
				break
			}
		}
	}

	for _, entry := range tounaccent {
		unaccented := unaccent(entry.decomps)

		// Some accents decomps into another accents (empty unaccented)
		if len(unaccented) < 1 {
			continue
		}

		fmt.Printf("%06X %s\n", entry.codepoint, strings.Join(unaccented, ","))
	}
}
