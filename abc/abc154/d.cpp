#include <iostream>
#include <vector>

int main(int argc, char ** argv)
{
  int n, k;
  std::cin >> n >> k;
  std::vector<int> a(n);
  std::vector<double> K(n);

  double tmp_max = 0.0;
  double max = 0.0;
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
    K[i] = (1 + a[i]) / 2.0;

    tmp_max += K[i];
    if (i < k) {
      max = tmp_max;
      continue;
    }
    tmp_max -= K[i - k];
    max = std::max(max, tmp_max);
  }

  std::printf("%f\n", max);
  return 0;
}
