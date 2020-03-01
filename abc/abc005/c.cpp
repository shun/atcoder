#include <iostream>
#include <vector>

int solve(const int & t, std::vector<int> & a, const std::vector<int> & b)
{
  for (int i = 0; i < b.size(); i++) {
    for (int j = std::max(0, b[i] - t); j <= b[i]; j++) {
      if (a[j] > 0) {
        a[j]--;
        break;
      }

      if (j == b[i]) {
        return -1;
      }
    }
  }
  return 0;
}

int main(int argc, char ** argv)
{
  int t, n, m;
  std::cin >> t >> n;
  std::vector<int> a = std::vector<int>(101);
  for (int i = 0; i < n; i++) {
    int tmp;
    std::cin >> tmp;
    a[tmp]++;
  }

  std::cin >> m;
  std::vector<int> b = std::vector<int>(m);
  for (int i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  if (n < m) {
    std::puts("no");
  } else {
    std::puts(solve(t, a, b) == 0 ? "yes" : "no");
  }

  return 0;
}
