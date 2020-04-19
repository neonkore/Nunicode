package main

import (
	"fmt"
	"sort"
	"strconv"
	"strings"
)

type stateType []uint32
type statesType []stateType

// Transform state tuple like ("0001", "0002") into string "state_0001_0002"
func stateToID(state stateType) string {
	var parts []string

	for _, codepoint := range state {
		parts = append(parts, fmt.Sprintf("%06X", codepoint))
	}

	return "state_" + strings.Join(parts, "_")
}

// Transform state id (e.g. "state_0001_0002") back into state tuple (e.g. "0001", "0002")
func stateFromID(id string) (stateType, error) {
	var state stateType

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

func findParentState(childState stateType, states statesType) stateType {
	if len(childState) == 1 {
		return nil
	}

	expectedParent := childState[:len(childState)-1]
	for _, state := range states {
		if stateToID(state) == stateToID(expectedParent) {
			return expectedParent
		}
	}

	return nil
}

func findChildrenStates(parentState stateType, states statesType) statesType {
	var children statesType

	for _, state := range states {
		if len(state) != len(parentState)+1 {
			continue
		}

		parent := state[:len(state)-1]
		if stateToID(parent) == stateToID(parentState) {
			children = append(children, state)
		}
	}

	return children
}

func isFinalState(state stateType, states statesType) bool {
	return findChildrenStates(state, states) == nil
}

func isRootState(state stateType, states statesType) bool {
	return findParentState(state, states) == nil
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
			tmpStates = append(tmpStates, codepoints[:i+1])
		}
	}

	// Remove duplicates
	pseudoSet := make(map[string]bool)
	for _, state := range tmpStates {
		pseudoSet[stateToID(state)] = true
	}

	states := make(statesType, 0)
	for key := range pseudoSet {
		id, err := stateFromID(key)
		if err != nil {
			return nil, err
		}
		states = append(states, id)
	}

	sort.SliceStable(states, func(i, j int) bool {
		lhs, rhs := states[i], states[j]
		return stateToID(lhs) < stateToID(rhs)
	})

	return states, nil
}
