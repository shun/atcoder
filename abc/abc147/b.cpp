#include <iostream>

int main(int argc, char ** argv)
{
  std::string s;
  std::cin >> s;

  int ans = 0;
  const int len = s.size();
  for (int i = 0; i < len / 2; ++i) {
    if (s.at(i) != s.at(len - 1 - i)) {
      ans++;
    }
  }
  std::printf("%d\n", ans);
  return 0;
}
