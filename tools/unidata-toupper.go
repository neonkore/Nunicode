package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	channel := make(chan string)
	go MapCodepoint(bufio.NewReader(os.Stdin), UnidataToUpper, channel)

	for str := range channel {
		fmt.Println(str)
	}
}
