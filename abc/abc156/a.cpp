#include <iostream>

using ll = long long;
int main(int argc, char ** argv)
{
  //
  int n, r;
  std::cin >> n >> r;

  std::printf("%d\n", n > 10 ? r : r + 100 * (10 - n));
  return 0;
}
