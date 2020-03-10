package main

import (
	"bufio"
	"io"
	"strings"
)

// AllkeysMapping : indices of columns in allkeys.txt
type AllkeysMapping int

// Actual mapping to columns in allkeys.txt
const (
	AllkeysCodepoint AllkeysMapping = 0
	AllkeysWeight    AllkeysMapping = 1
)

// SplitAllkeysCallback : callback for splitting
type SplitAllkeysCallback func(parts []string) error

func splitColdata(reader io.Reader, callback SplitAllkeysCallback) error {
	scanner := bufio.NewScanner(reader)
	for scanner.Scan() {
		line := strings.TrimSpace(scanner.Text())
		// This data is coming from other tools like filter-sortable,
		// so there are no comments whatsoever, just data.

		parts := strings.Split(line, " ")
		for i, part := range parts {
			parts[i] = strings.TrimSpace(part)
		}

		err := callback(parts)
		if err != nil {
			return err
		}
	}

	return nil
}
