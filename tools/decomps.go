package main

import "strings"

// DecompsMapping : indices of various columns in UnicodeData.txt (delimited by ";")
type DecompsMapping int

// Actual mapping to columns
const (
	DecompsCodepoint DecompsMapping = 0
	DecompsTag       DecompsMapping = 1
	DecompsTransform DecompsMapping = 2
)

// DecompsRemoveComment : removes inline comment from a like like this:
// "0041 0300 # LATIN CAPITAL LETTER A WITH GRAVE => LATIN CAPITAL LETTER A + COMBINING GRAVE ACCENT"
// Output is going to be: "0041 0300"
func DecompsRemoveComment(str string) string {
	index := strings.Index(str, "#")
	if index <= 0 {
		return str
	}

	return str[:index-1]
}
