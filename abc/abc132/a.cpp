#include <iostream>
#include <map>

int
main(int argc, char** argv) {
    std::string S;
    std::cin >> S;

    int ans = 0;
    std::map<char, int> dic;

    const char* wp = S.c_str();
    for (char wc : S) {
        auto search = dic.find(wc);
        if (search != dic.end()) {
            dic[wc]++;
        } else {
            dic[wc] = 1;
        }
    }

    std::printf("%s\n", dic.size() == 2 ? "Yes" : "No");
    return 0;
}

