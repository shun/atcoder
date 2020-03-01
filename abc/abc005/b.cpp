#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int min = 10000;
  for (int i  = 0; i< n;i++) {
    int a;
    std::cin >> a;
    min = std::min(min,a);
  }
  std::printf("%d\n", min);
  return 0;
}

