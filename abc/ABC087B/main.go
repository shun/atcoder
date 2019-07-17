package main

import (
    "bufio"
    "os"
    "fmt"
    "strconv"
)

func main() {
    sc := bufio.NewScanner(os.Stdin)

    sc.Scan()
    n500yen, _ := strconv.Atoi(sc.Text())

    sc.Scan()
    n100yen, _ := strconv.Atoi(sc.Text())

    sc.Scan()
    n50yen, _ := strconv.Atoi(sc.Text())

    sc.Scan()
    nInput, _ := strconv.Atoi(sc.Text())

    ret := 0

    for i := 0; i <= n500yen; i++ {
        if 500 * i > nInput {
            break
        }
        for j := 0; j <= n100yen; j++ {
            if (500 * i + 100 * j)  > nInput {
                break
            }
            for k := 0; k <= n50yen; k++ {
                if  (500 * i + 100 * j + 50 * k) == nInput {
                    ret++;
                }
            }
        }
    }
    fmt.Println(ret)
}
