#include <iostream>

int main(int argc, char ** argv)
{
  int n;
  std::string s, t, ans;
  ans = "";
  std::cin >> n >> s >> t;

  for (int i = 0; i < n; ++i) {
    std::printf("%c", s.at(i));
    std::printf("%c", t.at(i));
  }

  std::puts("");
  return 0;
}
