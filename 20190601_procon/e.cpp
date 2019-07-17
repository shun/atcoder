#include <iostream>

const long long MOD = 1000003;
int
main(int argc, char** argv) {
    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int x, d, n;
        std::cin >> x >> d >> n;

        long long ans = x;
        for (int j = 1; j < n; j++) {
            ans *= (x + j * d) % MOD;
            std::printf("%lld\n", ans);
        }
        std::printf("%lld\n\n", ans);
    }
    return 0;
}

