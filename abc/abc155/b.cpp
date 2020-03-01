#include <iostream>

int main(int argc, char ** argv)
{
  //
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    if ((a & 0x01) == 0) {
      if (((a % 3) == 0) || ((a % 5) == 0)) {
      } else {
        std::puts("DENIED");
        return 0;
      }
    }
  }

  std::puts("APPROVED");
  return 0;
}
