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

// SplitUnicodeDataCallback : callback for splitting
type SplitUnicodeDataCallback func(parts []string) error

// MapUnicodeDataCallback : callback for mapping
type MapUnicodeDataCallback func(codepoint int64, replacement []string) error

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
func splitUnidata(reader io.Reader, callback SplitUnicodeDataCallback) error {
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

		err := callback(parts)
		if err != nil {
			return err
		}
	}

	return nil
}

// Builds mapping from codepoint to uppercase or lowercase.
// Does trimming where appropriate.
func mapUnidataCasing(reader io.Reader, partsIndex UnicodeDataMapping, callback MapUnicodeDataCallback) error {
	return splitUnidata(bufio.NewReader(os.Stdin), func(parts []string) error {
		transform := parts[partsIndex]
		if len(transform) < 1 {
			return nil
		}

		codepoint, err := strconv.ParseInt(parts[UnidataCodepoint], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			return err
		}

		replacement := strings.Split(transform, " ")
		for i, part := range replacement {
			replacement[i] = strings.TrimSpace(part)
		}

		err = callback(codepoint, replacement)
		if err != nil {
			return err
		}

		return nil
	})
}
