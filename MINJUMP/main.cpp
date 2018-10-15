/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : Given an array of integers where each element represents the max
  number of steps that can be made forward from that element. Write a function
  to return the minimum number of jumps to reach the end of the array (starting
  from the first element). If an element is 0, then cannot move through that
  element.
 */

#include <iostream>

using std::cout;
using std::endl;
using std::min;

int main() {
  int arr[10] = {2, 1, 3, 2, 3, 4, 5, 1, 2, 8};
  int jump[10];
  int pred[10];
  int jumps;
  jump[0] = 0;
  for (int i = 1; i < 10; i++)
    jump[i] = 1000;
  for (int i = 1; i < 10; i++) {
    for (int j = 0; j < i; j++) {
      if (i <= j + arr[j]) {
        jumps = jump[j] + 1;
        if (jumps < jump[i]) {
          jump[i] = jumps;
          pred[i] = j;
        }
      }
    }
  }
  cout << jump[9] << endl;
  cout << pred[9] << endl;
  return 0;
}
