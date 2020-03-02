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

func splitColdata(reader io.Reader) <-chan []string {
	channel := make(chan []string)

	go func() {
		scanner := bufio.NewScanner(reader)
		for scanner.Scan() {
			line := strings.TrimSpace(scanner.Text())
			// This data is coming from other tools like filter-sortable,
			// so there are no comments whatsoever, just data.

			parts := strings.Split(line, " ")
			for i, part := range parts {
				parts[i] = strings.TrimSpace(part)
			}

			channel <- parts
		}

		close(channel)
	}()

	return channel
}
