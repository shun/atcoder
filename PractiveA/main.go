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
    prm1 := sc.Text()
    sc.Scan()
    prm2 := strings.Split(sc.Text(), " ")
    sc.Scan()
    prm3 := sc.Text()

    v1, _ := strconv.Atoi(prm1)
    v2, _ := strconv.Atoi(prm2[0])
    v3, _ := strconv.Atoi(prm2[1])
    fmt.Printf("%d %s\n", v1 + v2 + v3, prm3)
}
