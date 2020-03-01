#include <iostream>

int main(int argc, char ** argv)
{
  const int v[] = {100, 101, 102, 103, 104, 105};
  const int MAX_N = 1000000;
  const int INF = 1000001;
  const int MAX_V = 6;
  int x;
  std::cin >> x;

  int ans = 0;
  int dp[MAX_V + 1][MAX_N + 1];
  std::fill(dp[0], dp[0] + x + 1, INF);

  for (int i = 0; i < MAX_V; ++i) {
    for (int j = 0; j <= x; ++j) {
      if (j >= MAX_N) {
        dp[i + 1][j] = std::min(dp[i][j], dp[i + 1][j - MAX_V] + 1);
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  std::printf("%d\n", dp[MAX_V][x]);
  return 0;
}
