package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// Diacritic block description
type disactiticBlock struct {
	begin int
	end   int
}

// DiacriticBlocks : actual diacritic blocks
// When blocks changes, tounaccent.c is also need to be modified
var diacriticBlocks = []disactiticBlock{
	disactiticBlock{begin: 0x0300, end: 0x036F}, // Combining Diacritical Marks
	disactiticBlock{begin: 0x1AB0, end: 0x1AFF}, // Combining Diacritical Marks Extended
	disactiticBlock{begin: 0x20D0, end: 0x20FF}, // Combining Diacritical Marks for Symbols
	disactiticBlock{begin: 0x1DC0, end: 0x1DFF}, // Combining Diacritical Marks Supplement
}

// Tests if decomp (codepoint) is an accent (diacritic)
func isAccent(decomp string) bool {
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
	unaccented := make([]string, 0)

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
	tounaccent := make([]unaccentEntry, 0)

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
