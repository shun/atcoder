#include <iostream>

int main(int argc, char ** argv)
{
  //
  std::string s, t, u;
  int a, b;
  std::cin >> s >> t;
  std::cin >> a >> b;
  std::cin >> u;

  if (s == u) {
    a--;
  } else {
    b--;
  }
  std::printf("%d %d\n", a, b);
  return 0;
}
