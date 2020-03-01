#include <iostream>

int main(int argc, char ** argv)
{
  const int eom[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int m1, d1, m2, d2;
  std::cin >> m1 >> d1 >> m2 >> d2;

  std::printf("%d\n", eom[m1 - 1] == d1 ? 1 : 0);
  return 0;
}
