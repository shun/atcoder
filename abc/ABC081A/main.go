package main

import (
    "bufio"
    "os"
    "fmt"
)

func main() {
    sc := bufio.NewScanner(os.Stdin)
    sc.Scan()
    prm1 := sc.Text()

    ret := 0
    for _, c := range prm1 {
        if (c - '0') > 0 {
            ret++
        }
    }
    fmt.Println(ret)
}
