#include <iostream>
#include <vector>

std::vector<int> a;
int N, K;

bool dfs (int i, int sum) {
    if (i == N) return sum == K;

    if (dfs(i + 1, sum)) return true;
    if (dfs(i + 1, sum + a[i])) return true;
    return false;
}

int
main(int argc, char** argv) {
    std::cin >> N >> K;

    a.resize(N);
    for (int i = 0; i < N; i++) {
        int tmp;
        std::cin >> tmp;
        a[i] = tmp;
    }

    dfs(0,0);
    std::printf("%d\n",c);
    return 0;
}

