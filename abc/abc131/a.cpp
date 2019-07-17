#include <iostream>

int
main(int argc, char** argv) {
    std::string S;
    std::cin >> S;

    int ans = 0;
    const char* wp = S.c_str();
    for (int i = 1; i < S.length(); i++) {
        if (*(wp + i - 1) == *(wp + i)) {
            ans = 1;
            break;
        }
    }

    std::printf("%s\n", ans == 0 ? "Good" : "Bad");
    return 0;
}

