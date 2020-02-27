package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

// UnidataMapping : indices of various columns in UnicodeData.txt (delimited by ";")
type UnidataMapping int

// Actual mapping to columns
const (
	UnidataCodepoint UnidataMapping = 0
	UnidataCategory  UnidataMapping = 2
	UnidataDecomps   UnidataMapping = 4
	UnidataToUpper   UnidataMapping = 12
	UnidataToLower   UnidataMapping = 13
)

// IsComment : checks if line in UnicodeData.txt is a comment
func IsComment(line string) bool {
	return (len(line) > 0 && line[0] == '#')
}

// RemoveInlineComment : removes inline comment from a like like this:
// "0041 0300 # LATIN CAPITAL LETTER A WITH GRAVE => LATIN CAPITAL LETTER A + COMBINING GRAVE ACCENT"
// Output is going to be: "0041 0300"
func RemoveInlineComment(str string) string {
	index := strings.Index(str, "#")
	if index <= 0 {
		return str
	}

	return str[:index-1]
}

// SplitUnidata : splits lines in UnicodeData.txt into parts
// and does trimming where appropriate.
func SplitUnidata(reader io.Reader) <-chan []string {
	channel := make(chan []string)

	go func() {
		scanner := bufio.NewScanner(reader)
		for scanner.Scan() {
			line := strings.TrimSpace(scanner.Text())
			if len(line) < 1 || IsComment(line) {
				continue
			}

			parts := strings.Split(line, ";")
			for i, part := range parts {
				parts[i] = strings.TrimSpace(RemoveInlineComment(part))
			}

			channel <- parts
		}

		close(channel)
	}()

	return channel
}

// MapUnidataCasing : builds mapping from codepoint to uppercase or lowercase.
// Does trimming where appropriate.
func MapUnidataCasing(reader io.Reader, partsIndex UnidataMapping) <-chan string {
	channel := make(chan string)

	go func() {
		for parts := range SplitUnidata(bufio.NewReader(os.Stdin)) {
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
