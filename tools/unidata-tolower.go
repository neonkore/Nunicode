package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	channel := make(chan string)
	go MapUnidataCasing(bufio.NewReader(os.Stdin), UnidataToLower, channel)

	for str := range channel {
		fmt.Println(str)
	}
}
