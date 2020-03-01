#include <iostream>
#include <queue>

int main(int argc, char ** argv)
{
  int r, c, sy, sx, gy, gx;
  std::cin >> r >> c >> sy >> sx >> gy >> gx;
  sy--;
  sx--;
  gy--;
  gx--;

  char maze[r * c];

  int idx;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      idx = i * c + j;
      std::cin >> maze[idx];
    }
  }

  std::queue<std::pair<int, int>> que;
  que.emplace(sx, sy);

  const int dx[] = {1, 0, -1, 0};
  const int dy[] = {0, 1, 0, -1};

  int d[r * c];
  std::memset(d, -1, sizeof(d));
  idx = sy * c + sx;
  d[idx] = 0;

  int ans = 0;
  while (!que.empty()) {
    int i = que.front().first;   // x
    int j = que.front().second;  // y
    que.pop();

    idx = j * c + i;
    if ((i == gx) && (j == gy)) {
      break;
    }

    for (int k = 0; k < 4; k++) {
      int nx = i + dx[k];
      int ny = j + dy[k];

      idx = ny * c + nx;
      if ((0 <= nx) && (nx < c) && (0 <= ny) && (ny < r) &&
          ('#' != maze[idx]) && (-1 == d[idx])) {
        que.emplace(nx, ny);
        d[idx] = d[j * c + i] + 1;
      }
    }
  }

  idx = gy * c + gx;
  std::printf("%d\n", d[idx]);
  return 0;
}
