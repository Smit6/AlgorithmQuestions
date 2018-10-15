/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : Given a value N, if we want to make change for N cents, and we have
  infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways
  can we make the change? The order of coins doesn’t matter.
 */
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::sort;

int main() {
  int amount = 4;
  int coins = 3;
  int arr[amount + 1][coins + 1];
  int c[coins] = {1, 2, 3};
  sort(c, c + coins);
  arr[0][0] = 1;
  for (int i = 1; i <= amount; i++) {
    arr[0][i] = 0;
  }
  for (int i = 1; i <= coins; i++) {
    arr[i][0] = 1;
  }
  for (int i = 1; i <= coins; i++) {
    for (int j = 1; j <= amount; j++) {
      if (j < c[i - 1])
        arr[i][j] = arr[i - 1][j];
      else
        arr[i][j] = arr[i - 1][j] + arr[i][j - c[i - 1]];
    }
  }
  cout << arr[coins][amount] << endl;
  return 0;
}
