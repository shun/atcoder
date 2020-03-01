#include <iostream>
#include <map>

int main(int argc, char ** argv)
{
  //
  int n;
  std::cin >> n;

  std::map<std::string, int> m;
  for (int i = 0; i < n; i++) {
    std::string s;
    std::cin >> s;
    if (0 == m.count(s)) {
      m[s] = 1;
    } else {
      m[s] += 1;
    }
  }
  int max = 0;
  for (auto ite = m.begin(); ite != m.end(); ite++) {
    max = std::max(ite->second, max);
  }

  for (auto ite = m.begin(); ite != m.end(); ite++) {
    if (ite->second == max) {
      std::printf("%s\n", ite->first.c_str());
    }
  }
  return 0;
}
