#include <iostream>
#include <set>

int
main(int argc, char** argv) {
    int A, B;
    std::cin >> A >> B;

    int ans = 0;
    if (A == B) {
        ans = A * 2;
    } else {
        int maxV = std::max(A, B);
        ans = maxV + maxV - 1;
    }

    std::printf("%d\n", ans);
    return 0;
}

