/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : given a list of non-negative integers representing the amount of
  money of each house, determine the maximum amount of money you can rob
  tonight without alerting the police.
  can rob : 2 , 4
  can rob : 1, 3, 5
 */

#include <iostream>

using std::cout;
using std::endl;
using std::max;

/* function name : rob_it
 * paramenter : array size, array
 * brief : gives us the maximum number of money we can stole without alerting
   police.
 * returns max money.
 */
int rob_it(int n, int* h) {
  // stores maximum value robber can rob (with respect to all house)
  int s[n];
  int temp = 0;
  // max value robber can rob from house one
  s[0] = h[0];
  // max value robber can rob from frist two houses
  s[1] = max(h[0], h[1]);
  // iterate over all remaining houses so in the end we can get real value
  for (int i = 2; i < n; i++) {
    // we can't rob two adj houses
    // so we have to take maximum of value stolen at prev house and value
    // and (value stolen at prev prev index + value can be stolen in current
    // house)
    s[i] = max(s[i - 2] + h[i], s[i - 1]);
  }
  return s[n - 1];
}

int main() {
  int n = 7;
  int houses[n] = {6, 7, 1, 3, 8, 2, 4};
  cout << rob_it(n, houses) << endl;
  return 0;
}
