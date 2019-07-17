#include <iostream>
#include <set>

int
main(int argc, char** argv) {
    int n;
    std::cin >> n;

    std::multiset<int> mst;
    for (int i = 0; i < n; i++) {
        int d;
        std::cin >> d;
        mst.insert(d);
    }

    int ans = 0;
    int i = 0;
    int len = mst.size();
    int tmp;
    for (auto v: mst) {
        i++;
        if (i == (len/2)) {
            tmp = v;
        } else if (i == (len/2) + 1) {
            ans = v - tmp;
            break;
        }
    }
    std::printf("%d\n", ans);
    return 0;
}

