#include <iostream>

int
main(int argc, char** argv) {
    int n, l;
    std::cin >> n >> l;
    int min = l -1;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += l + i - 1;
    }

    int ans;
    if (l > 0) {
        ans = sum - l;
    } else if (n > -l) {
        ans = sum;
    } else {
        ans = sum - (n - 1 + l);
    }
    std::printf("%d\n", ans);


    return 0;
}

