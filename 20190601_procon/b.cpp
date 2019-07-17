#include <iostream>

int
main(int argc, char** argv) {
    std::string S;
    std::cin >> S;

    int cnt = 0;
    for (int i=0; i < S.length(); i++) {
        auto wp = S.c_str() + i;
        if (*wp == 'x') {
            cnt++;
        }
    }
    std::printf("%s\n", cnt < 8 ? "YES" : "NO");
    return 0;
}

