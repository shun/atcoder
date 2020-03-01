#include <iostream>

int main(int argc, char ** argv)
{
  int n;
  std::cin >> n;

  int expect = 1;
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int temp = 0;
    std::cin >> temp;

    if (temp == expect) {
      expect++;
    } else {
      ans++;
    }
  }

  if (ans == n) {
    std::printf("-1\n");
  } else {
    std::printf("%d\n", ans);
  }
  return 0;
}
