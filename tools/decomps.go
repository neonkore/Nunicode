package main

// DecompsMapping : indices of various columns in UnicodeData.txt (delimited by ";")
type DecompsMapping int

// Actual mapping to columns
const (
	DecompsCodepoint DecompsMapping = 0
	DecompsTag       DecompsMapping = 1
	DecompsTransform DecompsMapping = 2
)
