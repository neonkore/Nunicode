package main

import (
	"fmt"
	"os"
)

func usage() {
	fmt.Printf("usage: %s [CODEPOINTS] [CONTRACTIONS] [TAG] [BMP_ONLY]\n\n", os.Args[0])
	fmt.Printf("  [CODEPOINTS]   - filename with list of codepoints\n")
	fmt.Printf("  [CONTRACTIONS] - filename with list of contractions from the same collation\n")
	fmt.Printf("  [TAG]          - prefix to weighting switch\n")
	fmt.Printf("  [BMP_ONLY]     - flag to indicate if set is BMP-only, 0 or 1 (false or true)\n")
}

func main() {
	if len(os.Args) < 5 {
		usage()
		os.Exit(1)
	}

	files := os.Args[1:3] // codepoints file, contractions file
	// tag, bmpOnly := os.Args[3], false

	// bmpOnlyOpt, err := strconv.ParseBool(os.Args[4])
	// if err != nil {
	// 	fmt.Fprintln(os.Stderr, err)
	// 	os.Exit(1)
	// }
	// bmpOnly = bmpOnlyOpt

	_, contractions, err := collectContractions(files)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}

	states, err := collectStates(contractions)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}

	for _, state := range states {
		fmt.Println(stateToID(state))
	}
}
