package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// FoldingClassPriority : prefer folding in this order.
// Priorities are inverted, 0 is highest.
//
// Folding classes (or statis) are described in CaseFolding.txt, e.g.
// "The status field is:
//  C: common case folding, common mappings shared by both simple and full mappings.
//  F: full case folding, mappings that cause strings to grow in length. Multiple characters are separated by spaces.
//  S: simple case folding, mappings to single characters where different from F.
//  T: special case for uppercase I and dotted uppercase I
//   - For non-Turkic languages, this mapping is normally not used.
//   - For Turkic languages (tr, az), this mapping can be used instead of the normal mapping for these characters.
//     Note that the Turkic mappings do not maintain canonical equivalence without additional processing.
//     See the discussions of case mapping in the Unicode Standard for more information."
var FoldingClassPriority = []string{"F", "C", "S"}

// FoldingEntry : entry in codepoint <-> folding mapping
type FoldingEntry struct {
	foldingPriority int
	transform       []string
}

func main() {
	mapping := make(map[int]FoldingEntry)

	channel := make(chan []string)
	go SplitUnidata(bufio.NewReader(os.Stdin), channel)

	for parts := range channel {
		foldingClass := parts[CaseFoldingClass]
		foldingPriority := -1
		for i, val := range FoldingClassPriority {
			if val == foldingClass {
				foldingPriority = i
				break
			}
		}

		// Ignore foldings without expected folding class
		if foldingPriority < 0 || foldingPriority >= len(FoldingClassPriority) {
			continue
		}

		codepoint, err := strconv.ParseInt(parts[UnidataCodepoint], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			continue
		}

		// Prefer entries with higher priority
		entry, exists := mapping[int(codepoint)]
		if exists && entry.foldingPriority < foldingPriority {
			continue
		}

		transform := parts[CaseFoldingTransform]
		if len(transform) < 1 {
			continue
		}

		replacement := strings.Split(transform, " ")
		for i, part := range replacement {
			replacement[i] = strings.TrimSpace(part)
		}

		mapping[int(codepoint)] = FoldingEntry{foldingPriority, replacement}
	}

	for codepoint, entry := range mapping {
		fmt.Printf("%06X %s\n", codepoint, strings.Join(entry.transform, ","))
	}
}
