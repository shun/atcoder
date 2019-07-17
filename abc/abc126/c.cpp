#include <iostream>

int
main(int argc, char** argv) {
    int N, K;
    std::cin >> N >> K;

    double ret =  0.0;
    double ret1 =  0.0;
    int v = 0;

    for (int i = 1; i < (N + 1); i++) {

        ret1 = 1.0 / N;
        v = i;
        for ( ;v < K; ) {
            v *= 2;
            ret1 /= 2;
        }
        ret += ret1;
    }

    std::printf("%lf\n", ret);
    return 0;
}

