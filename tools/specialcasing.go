package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

// SpecialCasingMapping : indices of various columns in SpecialCasing.txt (delimited by ";")
type SpecialCasingMapping int

// Actual mapping to columns
const (
	SpecialCasingCodepoint SpecialCasingMapping = 0
	SpecialCasingToLower   SpecialCasingMapping = 1
	SpecialCasingToUpper   SpecialCasingMapping = 3
	SpecialCasingCondition SpecialCasingMapping = 4
)

// MapSpecialCasingCallback : callback for mapping
type MapSpecialCasingCallback func(codepoint int64, replacement []string) error

// Builds mapping from codepoint to special cases of upper/lowercase.
// Does trimming where appropriate.
func mapSpecialCasing(reader io.Reader, partsIndex SpecialCasingMapping, callback MapSpecialCasingCallback) error {
	return splitUnidata(bufio.NewReader(os.Stdin), func(parts []string) error {
		codepoint, err := strconv.ParseInt(parts[SpecialCasingCodepoint], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			return err
		}

		condition := parts[SpecialCasingCondition]
		if len(condition) > 0 && !isComment(condition) { // Unconditional only
			return nil
		}

		replacement := strings.Split(parts[partsIndex], " ")
		if len(replacement) < 1 || len(replacement[0]) < 1 {
			return nil
		}

		// Don't map to self
		if len(replacement) == 1 && replacement[0] == parts[SpecialCasingCodepoint] {
			return nil
		}

		err = callback(codepoint, replacement)
		if err != nil {
			return err
		}

		return nil
	})
}
