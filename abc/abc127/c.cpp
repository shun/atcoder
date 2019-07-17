#include <iostream>

int
main(int argc, char** argv) {
    int N, M, L, R;
    std::cin >> N >> M;


    int l = 1, r = N;
    for (int i = 0; i < M; i++) {
        std::cin >> L >> R;
        //std::printf("%d, %d, %d %d\n", l, r, L, R);
        if (l < L) {
            l = L;
        }
        if (r > R) {
            r = R;
        }
        //std::printf("%d, %d, %d %d\n", l, r, L, R);
    }
    int ans = r - l + 1;
    std::printf("%d\n", ans < 0 ? 0 : ans);
    return 0;
}

