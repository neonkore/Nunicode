package main

import (
	"os"
	"sort"
	"strconv"
	"strings"
)

type contractionsEntry struct {
	codepoints []uint32 // When it's not a contraction, this slice will contain only one codepoint
	weights    []uint32 // Original weights
	flatWeight uint32   // Reweighted
}

type contractionsType []contractionsEntry
type codepointsType contractionsType

func splitCollection(collection contractionsType) (codepointsType, contractionsType) {
	codepoints := codepointsType{}
	contractions := contractionsType{}

	for _, entry := range collection {
		if len(entry.codepoints) > 1 {
			contractions = append(contractions, entry)
		} else {
			codepoints = append(codepoints, entry)
		}
	}

	return codepoints, contractions
}

func reweightCollection(collection contractionsType) contractionsType {
	sort.SliceStable(collection, func(i, j int) bool {
		lhs, rhs := collection[i], collection[j]
		lhsLength, rhsLength := len(lhs.weights), len(rhs.weights)

		// min(len(lhs.weights), len(rhs.weights))
		checkLength := lhsLength
		if rhsLength < checkLength {
			checkLength = rhsLength
		}

		for k := 0; k < checkLength; k++ {
			if lhs.weights[k] < rhs.weights[k] {
				return true
			} else if lhs.weights[k] > rhs.weights[k] {
				return false
			}
		}

		if lhsLength < rhsLength {
			return true
		} else if rhsLength > lhsLength {
			return false
		}

		return false
	})

	weightsMatch := func(lhs, rhs []uint32) bool {
		if len(lhs) != len(rhs) {
			return false
		}

		for i := 0; i < len(lhs); i++ {
			if lhs[i] != rhs[i] {
				return false
			}
		}

		return true
	}

	// Assign sequential weights when weight changes
	// If weight doesn't change - assign same weight, so codepoints with
	// the same weight are assigned same flat weight
	var prevWeights []uint32 = nil
	var count uint32 = 0 // Weights actually start from 1, weight 0 is a special case for U+0000
	for i := range collection {
		if prevWeights == nil || !weightsMatch(prevWeights, collection[i].weights) {
			count++
		}

		prevWeights = collection[i].weights
		collection[i].flatWeight = count
	}

	return collection
}

func collectContractions(files []string) (codepointsType, contractionsType, error) {
	combined := contractionsType{}

	for _, filename := range files {
		file, err := os.Open(filename)
		if err != nil {
			return nil, nil, err
		}

		for parts := range splitColdata(file) {
			strCodepoints, strWeights := parts[:len(parts)-1], parts[len(parts)-1]

			codepoints := make([]uint32, len(strCodepoints))
			for i, strCodepoint := range strCodepoints {
				codepoint, err := strconv.ParseInt(strCodepoint, 16, 64)
				if err != nil {
					return nil, nil, err
				}

				codepoints[i] = uint32(codepoint)
			}

			weights := make([]uint32, strings.Count(strWeights, ".")+1)
			for i, strWeight := range strings.Split(strWeights, ".") {
				weight, err := strconv.ParseInt(strWeight, 16, 64)
				if err != nil {
					return nil, nil, err
				}

				weights[i] = uint32(weight)
			}

			combined = append(combined, contractionsEntry{
				codepoints: codepoints,
				weights:    weights,
				flatWeight: 0,
			})
		}
	}

	combined = reweightCollection(combined)               // Reweight and sort
	codepoints, contractions := splitCollection(combined) // combined should be already sorted here

	return codepoints, contractions, nil
}
