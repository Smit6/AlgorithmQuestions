/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : Climbing Stairs (you can climb 1, 2 or 3 stairs with one step).
 *        How many diffrent ways can you climb n stairs?
 */

// includes
#include <iostream>

// usings
using std::cout;
using std::endl;

// main
int main() {
  int n = 20;
  int arr[n + 1];
  // we know from 0th step we can reach 1th step by only one way
  arr[1] = 1;
  // to reach 2nd step, we can directly cum from 0th or 1st step
  arr[2] = 2;
  // 0 -> 3, 0 -> 1 -> 3, 0 -> 2 -> 3, 0 -> 1 -> 2 -> 3
  arr[3] = 4;
  /* now we know that each next level will be the sum of number of times we
    can reach to the last three level */
  for (int i = 4; i <= n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
  }
  cout << arr[n] << endl;
  return 0;
}
