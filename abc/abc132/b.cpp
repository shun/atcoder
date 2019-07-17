#include <iostream>

int
main(int argc, char** argv) {
    int n;
    std::cin >> n;

    int ans = 0;
    int p, prev1, prev2;
    p = prev1 = prev2 = -1;
    for (int i = 0; i < n; i++) {
        std::cin >> p;

        //std::printf("%d, %d, %d\n", prev1, prev2, p);
        if ( (i >= 2) &&
             ( ((prev1 < prev2) && (prev2 < p)) ||
               ((prev1 > prev2) && (prev2 > p)) ) ) {
            ans++;
        }
        prev1 = prev2;
        prev2 = p;


    }
    std::printf("%d\n", ans);
    return 0;
}

