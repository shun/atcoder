#include <iostream>
#include <set>
#include <vector>

int main(int argc, char ** argv)
{
  int n, k;
  std::cin >> n >> k;
  std::vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  std::multiset<long long> ms;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      long long v = a[i] * a[j];
      ms.insert(v);
    }
  }

  int i = 0;
  for (auto ite = ms.begin(); ite != ms.end(); ite++, i++) {
    if (i == k - 1) {
      std::printf("%lld\n", (long long)*ite);
      break;
    }
  }
  return 0;
}
