/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : this program tries to find the max sum continuous subarray.
 */

// includes
#include <iostream>

// using statements
using std::cout;
using std::endl;

// main
int main() {
  int n = 5;
  int a[n] = {1, -3, 2, 1, -1};
  // global maximum
  int max_so_far = a[0];
  // curr_sum_of_sub_array
  int end = a[0];
  for (int i = 1; i < n; i++) {
    end += a[i];
    // if global max is less than curr_sum_of_sub_array, UPDATE global max
    if (max_so_far < end) {
      max_so_far = end;
    }
    // if curr_sum_of_sub_array is less than 0 update it to 0.
    if (end < 0) {
      end = 0;
    }
  }
  cout << "max sum = " << max_so_far << endl;
  return 0;
}
