#include <iostream>

int
main(int argc, char** argv) {
    int A, B, c;
    std::cin >> A >> B;

    c = B;
    if (A <= 5) {
        c = 0;
    } else if ((6 <= A) && (A <= 12)) {
        c = B/2;
    }

    std::printf("%d\n",c);
    return 0;
}

