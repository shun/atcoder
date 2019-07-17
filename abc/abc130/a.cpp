#include <iostream>

int
main(int argc, char** argv) {
    int X, A;
    std::cin >> X >> A;

    std::printf("%d\n",X < A ? 0 : 10);
    return 0;
}

