package main

// AllkeysMapping : indices of columns in allkeys.txt
type AllkeysMapping int

// Actual mapping to columns in allkeys.txt
const (
	AllkeysCodepoint AllkeysMapping = 0
	AllkeysWeight    AllkeysMapping = 1
)
