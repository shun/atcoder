#include <iostream>
#include <vector>

int
is_change(
        const std::vector<int> A,
        const int H,
        const int W,
        const int h,
        const int w) {

    int idx = h * H + w;
    return 0;
}

int
main(int argc, char** argv) {
    int H, W;
    std::cin >> H >> W;

    std::vector<int> A(H * W);
    int idx = 0;
    std::string s;

    for (int i = 0; i < H; i++) {
        std::cin >> s;

        const char* wp = s.c_str();
        for (int j = 0; j < W; j++) {
            idx = i * H + j;
            if ('.' == *(wp + j)) {
                A[idx] = 0;
            } else {
                A[idx] = 1;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            idx = i * H + j;
            std::printf("%d", A[idx]);

            if (1 == A[idx]) {
                if (0 == j) {

                } else if ((W-1) == j) {

                }

                if (0 == i) {

                } else if ((H-1) == i) {

                }
            } else {

            }
        }
        std::printf("\n");
    }

    return 0;
}

