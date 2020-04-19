package main

import (
	"fmt"
	"os"
	"path"
	"strconv"
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

func getRootStates(states statesType) statesType {
	roots := make(statesType, 0)

	for _, state := range states {
		if isRootState(state.codepoints, states) {
			roots = append(roots, state)
		}
	}

	return roots
}

func main() {
	if len(os.Args) < 5 {
		usage()
		os.Exit(1)
	}

	files := os.Args[1:3] // codepoints file, contractions file
	tag, compact := os.Args[3], false

	compactOpt, err := strconv.ParseBool(os.Args[4])
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}
	compact = compactOpt

	codepoints, contractions, err := collectContractions(files)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}

	states, err := collectStates(contractions)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}

	roots := getRootStates(states)
	rootsMapping := MPHMapping{}

	for _, state := range roots {
		var codepoint uint32 = state.codepoints[0]
		rootsMapping[codepoint] = MPHV{
			codepoint:   codepoint,
			replacement: uint16(state.flatWeight), // FIXME: narrowing cast uint32 -> uint16
		}
	}

	rootsG, rootsV := createMPH(rootsMapping)
	rootsC, rootsI := splitCodepointsAndIndices(rootsV)

	contractionsRoots := make([]ContractionsRootType, 0)
	for _, state := range roots {
		contractionsRoots = append(contractionsRoots, ContractionsRootType{
			Name:   stateToString(state.codepoints),
			Weight: -int(state.flatWeight),
		})
	}

	sink, check := os.Stdout, func(err error) {
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			os.Exit(1)
		}
	}

	TAG, rootsTAG := strings.ToUpper(tag), strings.ToUpper(tag+"_roots")

	check(genContractionsHeader(sink, ContractionsHeaderTags{
		Tool:         path.Base(os.Args[0]),
		Unixtime:     time.Now().Unix(),
		Tag:          tag,
		Contractions: uint(len(contractions)),
	}))
	check(genContractionsIncludes(sink, ContractionsIncludesTags{}))
	check(genContractionsConsts(sink, ContractionsConstsTags{
		TAG:          TAG,
		Codepoints:   uint(len(codepoints)),
		Contractions: uint(len(contractions)),
	}))
	check(genContractionsRoots(sink, ContractionsRootsTags{
		TAG:   strings.ToUpper(tag),
		Roots: contractionsRoots,
	}))
	check(genMPHG(sink, MPHGTags{
		Tag:       rootsTAG,
		G:         rootsG,
		Linebreak: makeLinebreakFunc(10),
	}))
	check(genMPHC(sink, MPHCTags{
		Compact:   compact,
		Tag:       rootsTAG,
		C:         rootsC,
		Linebreak: makeLinebreakFunc(8),
	}))
	check(genMPHI(sink, MPHITags{
		Tag:       rootsTAG,
		I:         rootsI,
		Linebreak: makeLinebreakFunc(10),
	}))
}
