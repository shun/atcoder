#include <iostream>
#include <map>
#include <vector>

int main(int argc, char ** argv)
{
  //
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  std::map<std::string, int> m;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    m[std::to_string(a)]++;
  }

  bool flg = false;
  for (auto i = m.begin(); i != m.end(); i++) {
    int val = i->second;
    if (1 != val) {
      flg = true;
      break;
    }
  }

  if (flg == false) {
    std::puts("YES");
  } else {
    std::puts("NO");
  }
  return 0;
}
