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

// MapSpecialCasing : builds mapping from codepoint to special cases of upper/lowercase.
// Does trimming where appropriate. Will close channel when finished.
func MapSpecialCasing(reader io.Reader, partsIndex SpecialCasingMapping, channel chan<- string) {
	splitChannel := make(chan []string)
	go SplitUnidata(bufio.NewReader(os.Stdin), splitChannel)

	for parts := range splitChannel {
		codepoint, err := strconv.ParseInt(parts[SpecialCasingCodepoint], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			continue
		}

		condition := parts[SpecialCasingCondition]
		if len(condition) > 0 && !IsComment(condition) { // Unconditional only
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
}
