#include <iostream>
#include <vector>

bool is_divide(int n, int div_a, int div_b) {
    for (int i = 1; i*i <= n; ++i) {
        if (n%i != 0) continue;
        std::printf("%d: %d\n", n, i);
        if(n/i == i) continue;
        std::printf("%d: %d\n", n, n/i);


    }
    std::printf("%d: %d\n", n, n);
    return false;
}

int
main(int argc, char** argv) {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    for (int i = a; i <= b; i++) {
        is_divide(i, c, d);
    }
    std::printf("%d\n",c);
    return 0;
}

