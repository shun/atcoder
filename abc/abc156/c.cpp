#include <iostream>
#include <vector>

using ll = long long;
int main(int argc, char ** argv)
{
  //
  int n;
  std::cin >> n;
  std::vector<int> x(n);

  for (int i = 0; i < n; i++) {
    std::cin >> x[i];
  }

  int ans = 10e7;
  int i = 0;
  while (true) {
    int tmp = 0;
    for (int j = 0; j < n; j++) {
      tmp += (x[j] - (i + 1)) * (x[j] - (i + 1));
    }
    if (tmp >= ans) {
      break;
    }
    ans = tmp;
    i++;
  }
  std::printf("%d\n", ans);
  return 0;
}
