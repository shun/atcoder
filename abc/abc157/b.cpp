#include <iostream>
#include <vector>

using ll = long long;
int main(int argc, char ** argv)
{
  //
  std::vector<int> a(9);
  for (int i = 0; i < 9; i++) {
    std::cin >> a[i];
  }

  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int tmp;
    std::cin >> tmp;
    for (int j = 0; j < 9; j++) {
      if (a[j] == tmp) {
        a[j] = -1;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < 3; i++) {
    int row = i * 3;
    if ((a[row] == a[row + 1]) && (a[row + 1] == a[row + 2])) {
      std::puts("Yes");
      return 0;
    }
  }
  for (int i = 0; i < 3; i++) {
    if ((a[i] == a[i + 3]) && (a[i + 3] == a[i + 6])) {
      std::puts("Yes");
      return 0;
    }
  }
  if ((a[0] == a[4]) && (a[4] == a[8])) {
    std::puts("Yes");
    return 0;
  }
  if ((a[2] == a[4]) && (a[4] == a[6])) {
    std::puts("Yes");
    return 0;
  }
  std::puts("No");

  return 0;
}
