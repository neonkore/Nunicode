package main

// CaseFoldingMapping : indices of columns in CaseFolding.txt
type CaseFoldingMapping int

// Actual mapping to columns
const (
	CaseFoldingCodepoint CaseFoldingMapping = 0
	CaseFoldingClass     CaseFoldingMapping = 1
	CaseFoldingTransform CaseFoldingMapping = 2
)
