package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	mapUnidataCasing(bufio.NewReader(os.Stdin), UnidataToLower,
		func(codepoint int64, replacement []string) error {
			fmt.Printf("%06X %s\n", codepoint, strings.Join(replacement, " "))
			return nil
		})
}
