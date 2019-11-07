#include <iostream>
#include <complex>

int
main(int argc, char** argv) {
    int xa, ya, xb, yb, xc, yc;
    std::cin >> xa >> ya >> xb >> yb >> xc >> yc;
    int a = xb - xa;
    int b = yb - ya;
    int c = xc - xa;
    int d = yc - ya;

    std::printf("%lf\n", std::abs(((a * d) - (b * c)) / 2.0));
    return 0;
}

