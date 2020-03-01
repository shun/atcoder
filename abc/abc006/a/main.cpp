#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  if ((n % 3) == 0) {
    std::puts("YES");
  } else {
    std::puts("NO");
  }
  return 0;
}
