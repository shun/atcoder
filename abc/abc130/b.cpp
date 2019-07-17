#include <iostream>

int
main(int argc, char** argv) {
    int N, X;
    std::cin >> N >> X;

    int ans = 1;
    int D = 0;
    for (int i = 0; i < N; i++) {
        int L;
        std::cin >> L;

        D = D + L;
        if (D <= X) {
            ans++;
        } else {
            break;
        }

    }
    std::printf("%d\n", ans);
    return 0;
}
