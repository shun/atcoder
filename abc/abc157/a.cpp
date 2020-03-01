#include <iostream>

using ll = long long;
int main(int argc, char ** argv)
{
  //
  int n;
  std::cin >> n;
  std::printf("%d\n", n / 2 + ((n & 0x01) == 1 ? 1 : 0));
  return 0;
}
