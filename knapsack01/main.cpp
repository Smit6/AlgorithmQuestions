#include <iostream>

using std::cout;
using std::endl;
using std::max;

int main() {
  int n = 4;
  int m = 8;
  int p[4] = {1, 2, 5, 6};
  int w[4] = {2, 3, 4, 5};
  int r[n + 1][m + 1] = {0};
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 8; j++) {
      if (j - w[i - 1] >= 0) {
        r[i][j] = max(r[i - 1][j], r[i - 1][j - w[i - 1]] + p[i - 1]);
      } else {
        r[i][j] = r[i - 1][j];
      }
    }
  }
  cout << "max = " << r[n][m] << endl;
  return 0;
}
