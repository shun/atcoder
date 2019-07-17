#include <iostream>
#include <vector>
#include <algorithm>

int
main(int argc, char** argv) {
    int N, M, B, C;
    std::cin >> N >> M;

    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A.at(i);
    }
    std::sort(A.begin(), A.end());

    for (int i = 0; i < M; i++) {
        std::cin >> B >> C;
        int tmp = 0;
        for (int j = 0; j < B; j++) {
            tmp = A.at(j);
            if (tmp < C) {
                A.at(j) = C;
            }
        }
        std::sort(A.begin(), A.end());
    }
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        ans += A.at(i);
    }
    std::printf("%lld\n", ans);
    return 0;
}

