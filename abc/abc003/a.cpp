#include <iostream>

int
main(int argc, char** argv) {
    int n;
    std::cin >> n;
    double ans = 0.0;

    for (int i = 0; i < n; i++) {
        ans += 10000 * (i + 1.0) / n;
    }

    std::printf("%lf\n", ans);
    return 0;
}

