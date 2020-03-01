#include <iostream>
#include <complex>
#include <vector>


struct Point {
    int x;
    int y;
};

double
get_dist(
        const int &x1,
        const int &y1,
        const int &x2,
        const int &y2) {

    return std::sqrt(std::pow((x1 - x2) * 1.0, 2) + std::pow((y1 - y2) * 1.0, 2));
}

int
get_fact(const int n) {
    int fact = 1; 
    for (int i = n; i > 1; i--) {
        fact *= i;
    }
    return fact;
}

int
main(int argc, char** argv) {
    int n;
    std::cin >> n;

    std::vector<Point> ary = std::vector<Point>(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        ary[i].x = x;
        ary[i].y = y;
    }


    std::vector<double> cols = std::vector<double>(n);
    std::vector<std::vector<double>> rows = std::vector<std::vector<double>>(n);
    for (int i = 0; i < ary.size() - 1; i++) {
        auto row = rows[i];
        for (int j = 0; j < ary.size() - 1; j++) {
            auto col = row[i];

            if (i == j) {
                col = 0.0;
            } else {
                col = get_dist(
                      ary[i].x,
                      ary[i].y,
                      ary[i+1].x,
                      ary[i+1].y
                      );
            }
        }
    }


    return 0;
}

