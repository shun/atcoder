#include <iostream>

int
main(int argc, char** argv) {
    std::string w;
    std::string ans = "";
    std::cin >> w;

    for (int i = 0; i < w.length(); i++) {
        switch (w[i]) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
                break;
            default:
                ans += w[i];
        }
    }
    std::printf("%s\n", ans.c_str());
    return 0;
}

