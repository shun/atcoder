#include <iostream>
#include <vector>

using lint = long long;

int
main(int argc, char** argv) {
    lint n;
    std::cin >> n;

    std::vector<lint> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (0 == i) {
            std::printf("%lld: %lld ^ %lld\n", a[i], a[i+1], a[n-1]);
            if (a[i] != (a[i+1] ^ a[n-1])) {
                ans = 0;
                break;
            }
        } else if ((n-1) == i) {
            std::printf("%lld: %lld ^ %lld\n", a[i], a[0], a[n-2]);
            if (a[i] != (a[0] ^ a[n-2])) {
                ans = 0;
                break;
            }
        } else {
            std::printf("%lld: %lld ^ %lld\n", a[i], a[i+1], a[i-1]);
            if (a[i] != (a[i+1] ^ a[i-1])) {
                ans = 0;
                break;
            }
        }
    }

    std::puts(ans == 0 ? "No" : "Yes");
    return 0;
}

