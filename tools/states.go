package main

import (
	"fmt"
	"sort"
	"strconv"
	"strings"
)

type stateID []uint32
type stateType struct {
	codepoints stateID
	flatWeight uint32
}
type statesType []stateType

// Transform state tuple like ("0001", "0002") into string "state_0001_0002"
func stateToString(state stateID) string {
	var parts []string

	for _, codepoint := range state {
		parts = append(parts, fmt.Sprintf("%06X", codepoint))
	}

	return "state_" + strings.Join(parts, "_")
}

// Transform state id (e.g. "state_0001_0002") back into state tuple (e.g. "0001", "0002")
func stateFromString(id string) (stateID, error) {
	var state stateID

	parts := strings.Split(id, "_")
	for _, part := range parts[1:] {
		codepoint, err := strconv.ParseUint(part, 16, 64)
		if err != nil {
			return nil, err
		}
		state = append(state, uint32(codepoint))
	}

	return state, nil
}

func findParentState(childState stateID, states statesType) stateID {
	if len(childState) == 1 {
		return nil
	}

	expectedParent := childState[:len(childState)-1]
	for _, state := range states {
		if stateToString(state.codepoints) == stateToString(expectedParent) {
			return expectedParent
		}
	}

	return nil
}

func findChildrenStates(parentState stateID, states statesType) statesType {
	var children statesType

	for _, state := range states {
		if len(state.codepoints) != len(parentState)+1 {
			continue
		}

		parentID := state.codepoints[:len(state.codepoints)-1]
		if stateToString(parentID) == stateToString(parentState) {
			children = append(children, state)
		}
	}

	return children
}

func isFinalState(state stateID, states statesType) bool {
	return findChildrenStates(state, states) == nil
}

func isRootState(state stateID, states statesType) bool {
	return findParentState(state, states) == nil
}

func reweightStates(states statesType) statesType {
	// Sort by original flat weight
	sort.SliceStable(states, func(i, j int) bool {
		lhs, rhs := states[i], states[j]
		return lhs.flatWeight < rhs.flatWeight
	})

	return states
}

// Collect entire list of states: root, intermediate and final
func collectStates(contractions contractionsType) (statesType, error) {
	tmpStates := make(statesType, 0)
	for _, entry := range contractions {
		var codepoints []uint32 = entry.codepoints
		if len(codepoints) < 2 {
			continue
		}

		// "Unfold" state into all substates
		// e.g. ("0001", "0002", "0003") unfolds into
		// ("0001")
		// ("0001", "0002")
		// ("0001", "0002", "0003")
		for i := 0; i < len(codepoints); i++ {
			tmpStates = append(tmpStates, stateType{
				codepoints: codepoints[:i+1],
				flatWeight: entry.flatWeight,
			})
		}
	}

	// Remove duplicates
	pseudoSet := make(map[string]uint32)
	for _, state := range tmpStates {
		pseudoSet[stateToString(state.codepoints)] = state.flatWeight
	}

	states := make(statesType, 0)
	for key := range pseudoSet {
		id, err := stateFromString(key)
		if err != nil {
			return nil, err
		}
		states = append(states, stateType{
			codepoints: id,
			flatWeight: pseudoSet[key],
		})
	}

	return reweightStates(states), nil
}
