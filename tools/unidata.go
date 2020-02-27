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
	UnidataToUpper   UnidataMapping = 12
	UnidataToLower   UnidataMapping = 13
)

// IsComment : checks if line in UnicodeData.txt is a comment
func IsComment(line string) bool {
	return (len(line) > 0 && line[0] == '#')
}

// SplitUnidata : splits lines in UnicodeData.txt into parts
// and does trimming where appropriate. Will close channel when finished.
func SplitUnidata(reader io.Reader, channel chan<- []string) {
	scanner := bufio.NewScanner(reader)
	for scanner.Scan() {
		line := strings.TrimSpace(scanner.Text())
		if len(line) < 1 || IsComment(line) {
			continue
		}

		parts := strings.Split(line, ";")
		for i, part := range parts {
			parts[i] = strings.TrimSpace(part)
		}

		channel <- parts
	}

	close(channel)
}

// MapUnidataCasing : builds mapping from codepoint to uppercase or lowercase.
// Does trimming where appropriate. Will close channel when finished.
func MapUnidataCasing(reader io.Reader, partsIndex UnidataMapping, channel chan<- string) {
	splitChannel := make(chan []string)

	go SplitUnidata(bufio.NewReader(os.Stdin), splitChannel)

	for parts := range splitChannel {
		tolower := strings.TrimSpace(parts[partsIndex])
		if len(tolower) < 1 {
			continue
		}

		codepoint, err := strconv.ParseInt(parts[UnidataCodepoint], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			continue
		}

		replacement := strings.Split(tolower, " ")
		for i, part := range replacement {
			replacement[i] = strings.TrimSpace(part)
		}

		channel <- fmt.Sprintf("%06X %s", codepoint, strings.Join(replacement, " "))
	}

	close(channel)
}
