package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// DisactiticBlock : diacritic block description
type DisactiticBlock struct {
	begin int
	end   int
}

// DiacriticBlocks : actual diacritic blocks
// When blocks changes, tounaccent.c is also need to be modified
var DiacriticBlocks = []DisactiticBlock{
	DisactiticBlock{0x0300, 0x036F}, // Combining Diacritical Marks
	DisactiticBlock{0x1AB0, 0x1AFF}, // Combining Diacritical Marks Extended
	DisactiticBlock{0x20D0, 0x20FF}, // Combining Diacritical Marks for Symbols
	DisactiticBlock{0x1DC0, 0x1DFF}, // Combining Diacritical Marks Supplement
}

// UnaccentEntry : entry in list of codepoints that need to be unaccented
type UnaccentEntry struct {
	codepoint int
	decomps   []string
}

// IsAccent : Test if decomp (codepoints) is an accent (diacritic)
func IsAccent(decomp string) bool {
	codepoint, err := strconv.ParseInt(decomp, 16, 64)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		return false
	}

	for _, block := range DiacriticBlocks {
		if int(codepoint) >= block.begin && int(codepoint) <= block.end {
			return true
		}
	}

	return false
}

// Unaccent : remove accents from decomps
func Unaccent(decomps []string) []string {
	unaccented := make([]string, 0)

	for _, decomp := range decomps {
		if !IsAccent(decomp) {
			unaccented = append(unaccented, decomp)
		}
	}

	return unaccented
}

func main() {
	unaccent := make([]UnaccentEntry, 0)

	channel := make(chan []string)
	go SplitUnidata(bufio.NewReader(os.Stdin), channel)

	for parts := range channel {
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
			if IsAccent(decomp) {
				unaccent = append(unaccent, UnaccentEntry{int(codepoint), decomps})
				break
			}
		}
	}

	for _, entry := range unaccent {
		unaccented := Unaccent(entry.decomps)

		// Some accents decomps into another accents (empty unaccented)
		if len(unaccented) < 1 {
			continue
		}

		fmt.Printf("%06X %s\n", entry.codepoint, strings.Join(unaccented, ","))
	}
}
