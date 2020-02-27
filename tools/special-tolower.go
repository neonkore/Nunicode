package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	channel := make(chan string)
	go MapSpecialCasing(bufio.NewReader(os.Stdin), SpecialCasingToLower, channel)

	for str := range channel {
		fmt.Println(str)
	}
}
