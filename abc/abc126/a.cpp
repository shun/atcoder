#include <iostream>

int
main(int argc, char** argv) {
    int N, K;
    std::string S;
    std::cin >> N >> K;
    std::cin >> S;

    const char* wp = S.c_str();
    const int gap = 'A' - 'a';
    for (int i = 0; i < N; i++) {
        if ((i + 1) == K) {
            std::printf("%c", *(wp + i) - gap);
        } else {
            std::printf("%c", *(wp + i));
        }
    }

    std::printf("\n");
    return 0;
}

