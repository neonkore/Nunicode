package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	for str := range mapSpecialCasing(bufio.NewReader(os.Stdin), SpecialCasingToLower) {
		fmt.Println(str)
	}
}
