#include <iostream>

int
main(int argc, char** argv) {
    int W, H, x, y;
    std::cin >> W >> H >> x >> y;

    double a = double(W) * H / 2;
    int div = 0;
    if ((x == (W/2)) && (y == (H/2))) {
        div = 1; 
    } 
    std::printf("%lf %d\n",a, div);
    return 0;
}

