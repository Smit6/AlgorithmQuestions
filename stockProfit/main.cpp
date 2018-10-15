/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : The cost of a stock on each day is given in an array, find the max
 profit that you can make by buying and selling in those days. For example, if
 the given array is {7, 1, 5, 3, 7, 4}, the maximum profit can
 earned by buying on day 0, selling on day 3. Again buy on day 4 and sell on
 day 6. If the given array of prices is sorted in decreasing order, then profit
 cannot be earned at all.
 */
#include <iostream>

using std::cout;
using std::endl;
using std::max;

int profit(int n, int* day) {
  int profit[n];
  // int max = -1000;
  int temp = -1000;
  profit[0] = 0;
  profit[1] = day[1] - day[0];
  for (int i = 2; i < n; i++) {
    // max = -1000;
    for (int j = i-1; j >= 0; j--) {
      temp = max(day[i] - day[j], temp);
    }
    profit[i] = max(temp, day[i - 1]);
  }
  return profit[n - 1];
}

int main() {
  int n = 5;
  int day[n] = {7, 1, 5, 3, 7, 4};
  cout << profit(n, day) << endl;
}
