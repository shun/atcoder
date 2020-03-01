#include <iostream>
#include <string>

bool
has_letter(const char c) {

    std::string s = "atcoder";
    auto pos = s.find_first_of(c);

    return pos == std::string::npos ? false : true;
}

int
main(int argc, char** argv) {
    std::string s,t;
    std::cin >> s;
    std::cin >> t;

    bool ans = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            break;
        }
        else if (s[i] == '@') {
        }
        else if (t[i] == '@') {
        }
    }

    std::printf("%s\n",ans ? "You can win\n" : "You will lose");
    return 0;
}

