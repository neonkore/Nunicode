package main

import (
	"fmt"
	"os"
)

func usage() {
	fmt.Printf("usage: %s [CODEPOINTS] [CONTRACTIONS]\n\n", os.Args[0])
	fmt.Printf("  [CODEPOINTS]   - filename with list of codepoints\n")
	fmt.Printf("  [CONTRACTIONS] - filename with list of contractions from the same collation\n")
}

func main() {
	if len(os.Args) < 3 {
		usage()
		os.Exit(1)
	}

	files := os.Args[1:3]
	codepoints, _, err := collectContractions(files)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}

	for _, entry := range codepoints {
		fmt.Printf("%06X %06X\n", entry.codepoints[0], entry.flatWeight)
	}
}
