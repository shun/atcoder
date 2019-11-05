#include <iostream>
#include <string>

int
main(int argc, char** argv) {
    int m;
    std::string vv;
    std::cin >> m;

    if (m < 100) {
        vv = "00";

    } else if ((100 <= m) && (m <= 5000)) {
        int tmp = m * 10 / 1000;
        vv = tmp < 10 ? "0" + std::to_string(tmp) : std::to_string(tmp);

    } else if ((6000 <= m) && (m <= 30000)) {
        int tmp = m / 1000;
        vv = std::to_string(tmp + 50);

    } else if ((35000 <= m) && (m <= 70000)) {
        int tmp = m / 1000;
        vv = std::to_string((tmp -30) / 5 + 80);

    } else if (m > 70000) {
        vv = "89";

    }

    std::printf("%s\n", vv.c_str());
    return 0;
}

