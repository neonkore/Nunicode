package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	for str := range MapUnidataCasing(bufio.NewReader(os.Stdin), UnidataToLower) {
		fmt.Println(str)
	}
}
