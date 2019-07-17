package main

import (
    "bufio"
    "os"
    "fmt"
    "strconv"
    "strings"
)

func main() {
    sc := bufio.NewScanner(os.Stdin)
    sc.Scan()
    prm1, _ := strconv.Atoi(sc.Text())

    sc.Scan()
    prm2 := strings.Split(sc.Text(), " ")
    vals := []int{}

    for _, p := range prm2 {
        v, _ := strconv.Atoi(p)
        vals = append(vals, v)

    }

    ret := 0
    total := 0
WHILE_LABEL:
    for true {
        total = 0
        for i := 0; i < prm1; i++ {
            if (vals[i] & 0x01) == 1 {
                break WHILE_LABEL
            }
            total += vals[i]
            vals[i] = vals[i] / 2

        }

        if total == 0 {
            break WHILE_LABEL

        }
        ret++

    }

    fmt.Println(ret)
}
