package main

import (
    "bufio"
    "os"
    "fmt"
    "strings"
    "strconv"
)

func main() {
    sc := bufio.NewScanner(os.Stdin)
    sc.Scan()
    prm1 := strings.Split(sc.Text(), " ")

    v1, _ := strconv.Atoi(prm1[0])
    v2, _ := strconv.Atoi(prm1[1])
    if ((v1 * v2) & 0x01) == 1 {
      fmt.Print("Odd")

    } else {
      fmt.Print("Even")

    }
}
