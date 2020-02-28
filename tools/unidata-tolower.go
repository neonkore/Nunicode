package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	for str := range mapUnidataCasing(bufio.NewReader(os.Stdin), UnidataToLower) {
		fmt.Println(str)
	}
}
