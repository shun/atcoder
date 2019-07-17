#include <iostream>

int
main(int argc, char** argv) {
    std::string s;
    std::cin >> s;

    std::printf("%s\n", s.c_str());
    int len = s.length();
    int ans = 0;

    const char* wp = s.c_str();
    int pos, neg;
    pos = neg = 0;
    const char h = *wp;
    for(int i = 1; i < len; i++) {
        if (*wp == *(wp + i)) {

        } else {

        }

    }
    std::printf("\n");
    std::printf("%d\n", ans);
    return 0;
}

