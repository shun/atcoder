#include <iostream>

bool
is_month(const int val) {
    if ((1 <= val) && (val <= 12)) {
            return true;
    }
    return false;
}

int
main(int argc, char** argv) {
    std::string S;
    std::cin >> S;

    int vin, d1, d2;
    vin = std::atoi(S.c_str());
    d1 = vin / 100;
    d2 = vin % 100;

    bool flg_m1 = is_month(d1);
    bool flg_m2 = is_month(d2);
    if (flg_m1 && flg_m2) {
        std::printf("AMBIGUOUS\n");

    } else if (!flg_m1 && flg_m2) {
        std::printf("YYMM\n");

    } else if (flg_m1 && !flg_m2) {
        std::printf("MMYY\n");

    } else {
        std::printf("NA\n");

    }
    return 0;
}

