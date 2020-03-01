#include <iostream>

int main(int argc, char ** argv)
{
  int a, b;
  std::cin >> a >> b;
  a--;
  b--;
  int ans = 3;
  ans &= ~a;
  ans &= ~b;
  std::printf("%d\n", ++ans);
  return 0;
}
