#include <iostream>
#include <vector>

using lint = long long;

const int MOD = 1000000007;
int
main(int argc, char** argv) {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> dp, a;
    a.resize(N + 1, 0);
    dp.resize(N + 1, 0);
    for (int i = 0; i < M; i++) {
        int tmp;
        std::cin >> tmp;
        a[tmp] = 1;
    }

    dp[0] = 1;
    for (int i = 1; i <= N; i++) {
        if (0 == a[i]) {
            dp [i] = dp[i - 1] + dp[i -2];
            dp[i] %= MOD;
            std::printf("dp[%d]: %d\n", i, dp[i]);
        }
    }
    std::printf("%d\n", dp[N]);
    return 0;
}

