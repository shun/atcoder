#include <iostream>

int
main(int argc, char** argv) {
    int r, D, xi;
    std::cin >> r >> D >> xi;


    for (int i = 0; i < 10; i++) {
        xi = r * xi -D;
        std::printf("%d\n", xi);
    }
    return 0;
}

