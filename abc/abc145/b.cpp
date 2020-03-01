#include <iostream>

bool
is_echo(const std::string &s) {
    const int sz = s.length();
    if (0 != (sz & 0x01)) return false;

    const int wsz = sz / 2;
    for( int i = 0; i < wsz; i++) {
        if (s[i] != s[i + wsz]) return false;
    }
    return true;
}

int
main(int argc, char** argv) {
    int n;
    std::string s;

    std::cin >> n;
    std::cin >> s;
    std::printf("%s\n", is_echo(s) ? "Yes" : "No");
    return 0;
}

