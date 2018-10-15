/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : a set of n items, where item i has weight w[i] and value v[i], and
    a knapsack with capacity W.
    suppose to pick a "few" elements from the n elements such that their weight
    is less than or equal to W but their summed value is maximized
 */

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
