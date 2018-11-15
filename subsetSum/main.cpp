/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : Given a set of non-negative integers, and a value sum, determine if
  there is a subset of the given set with sum equal to given sum.
 */
#include <iostream>

using std::cout;
using std::endl;

int main() {
  // w size
  int n = 5;
  // w to store numbers
  int w[n] = {2, 3, 7, 8, 10};
  // sum to check
  int sum = 11;
  // matrix for dynamic programming calculation
  int a[n + 1][sum + 1];
  // we can get sum 0 by empty set so always true
  for (int i = 0; i <= n; i++) {
    a[i][0] = 1;
  }
  // with value 0 we can't get sum equals morethan 0
  for (int i = 1; i <= sum; i++) {
    a[0][i] = 0;
  }
  // for each number in w
  for (int i = 1; i <= n; i++) {
    // to check value of sum for 1... to 11
    for (int j = 1; j <= sum; j++) {
      // if value curr sum is greater than or equal to current w value
      if (j - w[i - 1] >= 0) {
        /* if upper box is true or in upper row's current sum - the current
            w is true */
        if (a[i - 1][j] || a[i - 1][j - w[i - 1]]) {
          a[i][j] = 1;
        } else {
          /* if both are false */
          a[i][j] = 0;
        }
      } else {
        // just take teh value for the upper box
        a[i][j] = a[i - 1][j];
      }
    }
  }
  /* ture or false */
  cout << a[n][sum] << endl;
  return 0;
}
