#include <iostream>
#include <tuple>
#include <vector>

//int
//main() {
//    int N;
//    std::cin >> N;
//    using T = std::tuple<std::string, int, int>;
//    std::vector<T> vp;
//
//    std::string s;
//    int p;
//    for (int i = 0; i < N; i++) {
//        std::cin >> s >> p;
//        vp.emplace_back(s, p, i+1);
//    }
//
//    for (int i = 0; i < N; i++) {
//        auto tmp = vp.begin();
//        std::printf("%s, %d, %d\n", 
//                std::get<0>(vp[i]).c_str(),
//                std::get<1>(vp[i]),
//                std::get<2>(vp[i]));
//    }
//    std::printf("\n");
//    std::sort(vp.begin(), vp.end());
//    for (int i = 0; i < N; i++) {
//        auto tmp = vp.begin();
//        std::printf("%s, %d, %d\n", 
//                std::get<0>(vp[i]).c_str(),
//                std::get<1>(vp[i]),
//                std::get<2>(vp[i]));
//    }
//
//    for (int i = 0; i < N; i++) {
//        auto tmp = vp.begin();
//        std::printf("%d\n", 
//                std::get<2>(vp[i]));
//    }
//    return 0;
//}
//
int main() {
    int N;
    std::cin >> N;
    using T = std::pair<std::string, int>;
    std::vector<T> vp;

    std::string s;
    int p;
    for (int i = 0; i < N; i++) {
        std::cin >> s >> p;
        vp.emplace_back(s, -p);
    }

    for (int i = 0; i < N; i++) {
        auto tmp = vp.begin();
        std::printf("%s, %d\n", 
                std::get<0>(vp[i]).c_str(),
                std::get<1>(vp[i])
                );
    }
    std::printf("\n");
    std::sort(vp.begin(), vp.end());
    for (int i = 0; i < N; i++) {
        auto tmp = vp.begin();
        std::printf("%s, %d\n", 
                std::get<0>(vp[i]).c_str(),
                std::get<1>(vp[i])
                );
    }

    return 0;
}
