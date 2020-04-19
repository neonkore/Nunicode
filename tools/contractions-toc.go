package main

import (
	"fmt"
	"os"
	"path"
	"strings"
	"time"
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
	tag := os.Args[3]
	// tag, bmpOnly := os.Args[3], false

	// bmpOnlyOpt, err := strconv.ParseBool(os.Args[4])
	// if err != nil {
	// 	fmt.Fprintln(os.Stderr, err)
	// 	os.Exit(1)
	// }
	// bmpOnly = bmpOnlyOpt

	codepoints, contractions, err := collectContractions(files)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}

	// states, err := collectStates(contractions)
	// if err != nil {
	// 	fmt.Fprintln(os.Stderr, err)
	// 	os.Exit(1)
	// }

	// for _, state := range states {
	// 	root, final, children := isRootState(state, states), isFinalState(state, states), findChildrenStates(state, states)
	// 	fmt.Println(stateToID(state), root, final, children)
	// }

	sink, check := os.Stdout, func(err error) {
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(1)
		}
	}

	check(genContractionsHeader(sink, ContractionsHeaderTags{
		Tool:         path.Base(os.Args[0]),
		Unixtime:     time.Now().Unix(),
		Tag:          tag,
		Contractions: uint(len(contractions)),
	}))
	check(genContractionsIncludes(sink, ContractionsIncludesTags{}))
	check(genContractionsConsts(sink, ContractionsConstsTags{
		TAG:          strings.ToUpper(tag),
		Codepoints:   uint(len(codepoints)),
		Contractions: uint(len(contractions)),
	}))
}
