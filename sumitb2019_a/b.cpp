#include <iostream>

int main(int argc, char ** argv)
{
  int n;
  std::cin >> n;

  int org = static_cast<int>((n / 1.08) + 0.5);
  if (n == static_cast<int>(org * 1.08)) {
    std::printf("%d\n", org);
  } else {
    std::printf(":(\n");
  }
  return 0;
}
