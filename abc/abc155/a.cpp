#include <iostream>

int main(int argc, char ** argv)
{
  //
  int a[9];
  bool flg = false;
  for (int i = 0; i < 10; i++) {
    a[i] = 0;
  }
  for (int i = 0; i < 3; i++) {
    int v;
    std::cin >> v;
    a[v]++;
  }

  int max = 0;
  for (int i = 0; i < 10; i++) {
    max = std::max(max, a[i]);
  }
  if (max == 2) {
    std::printf("Yes\n");
  } else {
    std::printf("No\n");
  }
  return 0;
}
