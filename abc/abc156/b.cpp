#include <complex>
#include <iostream>

using ll = long long;
int main(int argc, char ** argv)
{
  //
  int n, k;
  std::cin >> n >> k;
  int ans = 0;
  for (int i = 0; n >= std::pow(k, i); i++) {
    ans = i;
  }

  std::printf("%d\n", ans + 1);
  return 0;
}
