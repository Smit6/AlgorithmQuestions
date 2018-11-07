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
using std::min;

int profit(int n, int* day) {
  // to store max profit
  int profit[n];
  // manitains the min stock price
  int mini = day[0];
  profit[0] = 0;
  for (int i = 1; i < n; i++) {
    mini = min(mini, day[i]);
    // max between prev day profit and the profit can be earned by selling
    // stocks on current day
    profit[i] = max(profit[i - 1], day[i] - mini);
  }
  return profit[n - 1];
}

int main() {
  int n = 6;
  int day[n] = {7, 1, 5, 3, 6, 4};
  cout << profit(n, day) << endl;
}
