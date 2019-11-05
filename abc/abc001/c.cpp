#include <iostream>

std::string
get_winddir(const int angle) {
    const std::string dirs[] = {
        "N",
        "NNE",
        "NE",
        "ENE",
        "E",
        "ESE",
        "SE",
        "SSE",
        "S",
        "SSW",
        "SW",
        "WSW",
        "W",
        "WNW",
        "NW",
        "NNW"
    };

    int dir = (angle * 10 + 1125) / 2250 % 16;
    return dirs[dir];
}

int
get_windpower(const int m) {
    int wp = 12;
    const int wps[] = {
        2,
        15,
        33,
        54,
        79,
        107,
        138,
        171,
        207,
        244,
        284,
        326};

    const int mps = (m + 3) / 6;
    for (int i = 0; i < 12; i++) {
        if (mps <= wps[i]) {
            wp = i;
            break;
        }
    }

    return wp;
}

int
main(int argc, char** argv) {
    int d1, d2;
    std::cin >> d1 >> d2;

    std::string dir;
    int w;

    w = get_windpower(d2);
    dir = w == 0 ? "C" : get_winddir(d1);
    std::printf("%s %d\n",dir.c_str(), w);
    return 0;
}

