#include <iostream>
#include <vector>
#include <cstdlib>


int
main(int argc, char** argv) {
    int N;
    std::cin >> N;

    std::vector<int> W(N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
        std::cin >> W[i];
        sum += W[i];
    }

    int min = 0x7fffffff;
    int s1 = 0, s2 = sum;
    for (int i = 0; i < N; i++) {
        s1 += W[i];
        s2 -= W[i];

        int tmp = std::abs(s1 - s2);
        if (min > tmp) {
            min = tmp;
        }
    }
    std::printf("%d\n", min);

    return 0;
}

