package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

// TODO: it depends on loading sortable codepoints as-is, reformatting
// will break comparison in passCodepoint(). Ideally codepoints would
// be parsed to ints and compared as ints, i guess.
func loadAcceptable(filename string) []string {
	file, err := os.Open(filename)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		return make([]string, 0)
	}

	ret := make([]string, 0)

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		line := scanner.Text()
		ret = append(ret, strings.TrimSpace(line))
	}

	return ret
}

// Test if codepoint is in list of asseptable codepoints
func passCodepoint(codepoint string, acceptable []string) bool {
	for _, acc := range acceptable {
		if codepoint == acc {
			return true
		}
	}

	return false
}

// Transformation:
// 1. "[*027E.0020.0004][*027E.0020.0004][*027E.0020.0004]" -> [ "*027E.0020.0004", "*027E.0020.0004", "*027E.0020.0004" ]
// 2. [ "*027E.0020.0004", "*027E.0020.0004", "*027E.0020.0004" ] -> [ "027E.0020.0004", "027E.0020.0004", "027E.0020.0004" ]
// 3. [ "027E.0020.0004", "027E.0020.0004", "027E.0020.0004" ] -> "027E.0020.0004.027E.0020.0004.027E.0020.0004"
func reformatWeight(weightStr string) string {
	weights := strings.Split(weightStr, "][") // 1
	for i, weight := range weights {
		weights[i] = strings.Trim(weight, "[]*.") // 2
	}

	return strings.Join(weights, ".") // 3
}

func usage() {
	fmt.Printf("%s [SORTABLE]\n\n", os.Args[0])
	fmt.Printf("[SORTABLE] - file with a list of acceptable codepoints")
}

func main() {
	if len(os.Args) < 2 {
		usage()
		os.Exit(1)
	}

	sortable := os.Args[1]
	acceptable := loadAcceptable(sortable)

	for parts := range splitUnidata(bufio.NewReader(os.Stdin)) {
		// fmt.Println(parts)

		codepoints := strings.Split(parts[AllkeysCodepoint], " ")
		weight := parts[AllkeysWeight]
		codepoint := codepoints[0]

		if !passCodepoint(codepoint, acceptable) {
			continue
		}

		contraction := (len(codepoints) > 1)
		sink := os.Stdout // Single codepoints goes to stdout
		if contraction {
			sink = os.Stderr // Contractions goes to stderr
		}

		fmt.Fprintf(sink, "%s %s\n", strings.Join(codepoints, " "), reformatWeight(weight))
	}
}
