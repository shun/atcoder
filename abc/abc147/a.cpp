#include <iostream>

int main(int argc, char ** argv)
{
  int a1, a2, a3;
  std::cin >> a1 >> a2 >> a3;
  std::printf("%s\n", a1 + a2 + a3 >= 22 ? "bust" : "win");
  return 0;
}
