package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(bufio.NewReader(os.Stdin))
	for scanner.Scan() {
		line := strings.TrimSpace(scanner.Text())
		if len(line) < 1 {
			continue
		}

		parts := strings.Split(line, " ")

		// Expects codepoint to be the first part
		codepoint, err := strconv.ParseInt(parts[0], 16, 64)
		if err != nil {
			fmt.Fprintln(os.Stderr, err)
			continue
		}

		// This acts like a filter of codepoints that belong to BMP.
		// All BMP codepoints by definition are in range U+0000..U+FFFF.
		bmp := (codepoint >= 0x0000 && codepoint <= 0xFFFF)
		if !bmp {
			continue
		}

		fmt.Println(line)
	}
}
