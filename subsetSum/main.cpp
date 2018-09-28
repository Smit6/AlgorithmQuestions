#include <iostream>

using std::cout;
using std::endl;

int main() {
  int n = 5;
  int w[n] = {2, 3, 7, 8, 10};
  int sum = 11;
  int a[n + 1][sum + 1];
  for (int i = 0; i <= n; i++) {
    a[i][0] = 1;
  }
  for (int i = 1; i <= sum; i++) {
    a[0][i] = 0;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= sum; j++) {
      if (j - w[i - 1] >= 0) {
        if (a[i - 1][j] || a[i - 1][j - w[i - 1]]) {
          a[i][j] = 1;
        } else {
          a[i][j] = 0;
        }
      } else {
        a[i][j] = a[i - 1][j];
      }
    }
  }
  cout << a[n][sum] << endl;
  return 0;
}
