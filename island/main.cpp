#include <iostream>

using std::cout;
using std::endl;

int nums = 0;

void dfs(int grid[5][5], int i, int j) {
  if (i < 0 || i >= 5 || j < 0 || j >= 5) {
    return;
  }
  if (grid[i][j] == 1) {
    grid[i][j] = 0;
    dfs(grid, i - 1, j);
    dfs(grid, i + 1, j);
    dfs(grid, i, j - 1);
    dfs(grid, i, j + 1);
  }
}

int island(int grid[5][5], int m, int n) {
  if (m == 0 || n == 0) {
    return 0;
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (grid[i][j] == 0) {
        continue;
      }
      nums++;
      dfs(grid, i, j);
    }
  }
  return nums;
}

int main() {
  int grid[5][5] = {
    {1, 1, 0, 0, 0},
    {0, 1, 0, 0, 1},
    {0, 0, 0, 1, 1},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1}
  };
  cout << island(grid, 5, 5) << endl;
  return 0;
}
