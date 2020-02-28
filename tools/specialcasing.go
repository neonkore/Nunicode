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

// Builds mapping from codepoint to special cases of upper/lowercase.
// Does trimming where appropriate.
func mapSpecialCasing(reader io.Reader, partsIndex SpecialCasingMapping) <-chan string {
	channel := make(chan string)

	go func() {
		for parts := range splitUnidata(bufio.NewReader(os.Stdin)) {
			codepoint, err := strconv.ParseInt(parts[SpecialCasingCodepoint], 16, 64)
			if err != nil {
				fmt.Fprintln(os.Stderr, err)
				continue
			}

			condition := parts[SpecialCasingCondition]
			if len(condition) > 0 && !isComment(condition) { // Unconditional only
				continue
			}

			replacement := strings.Split(parts[partsIndex], " ")
			if len(replacement) < 1 || len(replacement[0]) < 1 {
				continue
			}

			// Don't map to self
			if len(replacement) == 1 && replacement[0] == parts[SpecialCasingCodepoint] {
				continue
			}

			channel <- fmt.Sprintf("%06X %s", codepoint, strings.Join(replacement, ","))
		}

		close(channel)
	}()

	return channel
}
