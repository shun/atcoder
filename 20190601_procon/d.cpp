#include <iostream>
#include <vector>
#include <algorithm>

int
main(int argc, char** argv) {
    int N;
    std::cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int a,b;
        std::cin >> a >> b;
    }


    int sum= 0;
    int max = 0;
    std::vector<int> c(N);
    for (int i = 0; i < N; i++) {
        int C;
        std::cin >> C;
        sum += C;
        if (max < C) max = C;
        c[i] = -C;
    }

    std::printf("%d\n", sum - max);
    std::sort(c.begin(), c.end());
    for (int i = 0; i < N; i++) {
        std::printf("%d ", -c[i]);
    }
    return 0;
}

