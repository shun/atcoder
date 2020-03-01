#include <iostream>

using ll = long long;
int main(int argc, char ** argv)
{
  //
  int n, m;
  std::cin >> n >> m;

  int ans = -1;

  int d[] = {1, 0, 0};
  int flg[] = {0, 0, 0};

  if ((n == 1) && (m == 0)) {
    d[0] = 0;
  }
  for (int i = 0; i < m; i++) {
    int s, c;
    std::cin >> s >> c;

    if ((n != 1) && (s == 1) && (c == 0)) {
      std::puts("-1");
      return 0;
    } else {
      if (flg[s - 1] == 0) {
        d[s - 1] = c;
        flg[s - 1] = 1;
      } else {
        if (d[s - 1] != c) {
          std::puts("-1");
          return 0;
        }
      }
    }
  }

  ans = d[0] * 100 + d[1] * 10 + d[2];

  for (int i = 0; i < 3 - n; i++) {
    ans /= 10;
  }
  std::printf("%d\n", ans);
  return 0;
}
