#include <iostream>
#include <set>

int
main(int argc, char** argv) {
    std::multiset<int> s;
    for (int i = 0; i < 3; i++) {
        int in;
        std::cin >> in;
        s.insert(in);
    }

    int ans = 0;
    for (auto v : s) {
        ans += v;
    }
    std::printf("%d\n", ans - *s.rbegin());
    return 0;
}

