#include <iostream>
#include <vector>

void dump(const std::vector<std::vector<std::vector<int>>> root)
{
  std::printf("[%ld]\n", root.size());
  for (int i = 0; i < root.size(); ++i) {
    std::printf("[%ld]\n", root[i].size());
    for (int j = 0; j < root[i].size(); ++j) {
      std::printf("[%d] %d, %d\n", i, root[i][j][0], root[i][j][1]);
    }
  }
}

int main(int argc, char ** argv)
{
  int n;
  std::cin >> n;
  std::vector<std::vector<std::vector<int>>> root;

  for (int i = 0; i < n; ++i) {
    int ai;
    std::cin >> ai;
    std::vector<std::vector<int>> an;
    for (int j = 0; j < ai; ++j) {
      int x, y;
      std::cin >> x >> y;
      std::vector<int> axy;
      axy.emplace_back(x);
      axy.emplace_back(y);
      an.emplace_back(axy);
    }
    root.emplace_back(an);
  }

  dump(root);
  return 0;
}
