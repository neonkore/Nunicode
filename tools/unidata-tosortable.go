package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// AllowedCategories : http://unicode.org/reports/tr44/#GC_Values_Table
var AllowedCategories = []string{
	"Ll", "Lu", "Lt", "Lo", // Letters
	"Nl", "Nd", "No", //  Numbers
	"Pc", "Pd", "Ps", "Pe", "Pi", "Pf", "Po", // Punctuation
	"Sc", "Sm", // Symbols
}

// Filter codepoints by their category.
// Not all codepoints are considered in sorting, only letters, numbers
// and other stuff that makes sense to compare.
func passCodepoint(codepoint int, category string, decompsStr string) bool {
	// Exclude <control>, <compat>, etc
	if strings.Index(decompsStr, "<") >= 0 {
		return false
	}

	for _, allowedCategory := range AllowedCategories {
		if category == allowedCategory {
			return true
		}
	}

	return false
}

func main() {
	splitUnidata(bufio.NewReader(os.Stdin), func(parts []string) error {
		codepoint, err := strconv.ParseInt(parts[UnidataCodepoint], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			return err
		}

		category := parts[UnidataCategory]
		decompsStr := parts[UnidataDecomps]

		if passCodepoint(int(codepoint), category, decompsStr) {
			// fmt.Printf("%06X\n", codepoint) // FIXME: huh? for some reason this doesn't work
			fmt.Println(parts[UnidataCodepoint])
		}

		return nil
	})
}
