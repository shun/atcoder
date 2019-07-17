#include <iostream>
#include <set>

void
trace(std::set<int> s) {
    std::printf("    [");
    for (auto x : s) {
        std::printf("%d ", x);
    }
    std::printf("]\n");

}

int
gcd(const int a, const int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int
main(int argc, char** argv) {
    int N;
    std::cin >> N;

    std::set<int> s;
    int g = 0;
    for (int i = 0; i < N; i++) {
        int a;
        std::cin >> a;
        std::set<int> p;

        std::printf("\n");
        std::printf("\n");
        std::printf("s:\n");
        trace(s);
        std::printf("p:\n");
        trace(p);

        std::swap(s, p);

        std::printf("\n");
        std::printf("s:\n");
        trace(s);
        std::printf("p:\n");
        trace(p);

        for (int x : p) {
            s.insert(gcd(x, a));
        }
        s.insert(g);
        trace(s);
        g = gcd(g, a);
    }

    std::printf("%d\n", *(s.rbegin()));
    return 0;
}

