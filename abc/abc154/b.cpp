#include <iostream>

int main(int argc, char ** argv)
{
  //
  std::string s;
  std::cin >> s;
  for (int i = 0; i < s.length(); i++) {
    std::putchar('x');
  }
  std::puts("");
  return 0;
}
