package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

// UnicodeDataMapping : indices of various columns in UnicodeData.txt (delimited by ";")
type UnicodeDataMapping int

// Actual mapping to columns
const (
	UnidataCodepoint UnicodeDataMapping = 0
	UnidataCategory  UnicodeDataMapping = 2
	UnidataDecomps   UnicodeDataMapping = 4
	UnidataToUpper   UnicodeDataMapping = 12
	UnidataToLower   UnicodeDataMapping = 13
)

// Checks if line in UnicodeData.txt is a comment
func isComment(line string) bool {
	// Strictly speaking comments are starting with #
	// but some annotations are starting with @ e.g. in allkeys.txt
	return (len(line) > 0 && (line[0] == '#' || line[0] == '@'))
}

// Removes inline comment from a like like this:
// "0041 0300 # LATIN CAPITAL LETTER A WITH GRAVE => LATIN CAPITAL LETTER A + COMBINING GRAVE ACCENT"
// Output is going to be: "0041 0300"
func removeInlineComment(str string) string {
	index := strings.Index(str, "#")
	if index <= 0 {
		return str
	}

	return str[:index-1]
}

// Splits lines in UnicodeData.txt into parts
// and does trimming where appropriate.
func splitUnidata(reader io.Reader) <-chan []string {
	channel := make(chan []string)

	go func() {
		scanner := bufio.NewScanner(reader)
		for scanner.Scan() {
			line := strings.TrimSpace(scanner.Text())
			if len(line) < 1 || isComment(line) {
				continue
			}

			parts := strings.Split(line, ";")
			for i, part := range parts {
				parts[i] = strings.TrimSpace(removeInlineComment(part))
			}

			channel <- parts
		}

		close(channel)
	}()

	return channel
}

// Builds mapping from codepoint to uppercase or lowercase.
// Does trimming where appropriate.
func mapUnidataCasing(reader io.Reader, partsIndex UnicodeDataMapping) <-chan string {
	channel := make(chan string)

	go func() {
		for parts := range splitUnidata(bufio.NewReader(os.Stdin)) {
			transform := parts[partsIndex]
			if len(transform) < 1 {
				continue
			}

			codepoint, err := strconv.ParseInt(parts[UnidataCodepoint], 16, 64)
			if err != nil {
				fmt.Fprintln(os.Stderr, err)
				continue
			}

			replacement := strings.Split(transform, " ")
			for i, part := range replacement {
				replacement[i] = strings.TrimSpace(part)
			}

			channel <- fmt.Sprintf("%06X %s", codepoint, strings.Join(replacement, " "))
		}

		close(channel)
	}()

	return channel
}
