/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : Given a rod of length n inches and an array of prices that contains
  prices of all pieces of size smaller than n. Determine the maximum value
  obtainable by cutting up the rod and selling the pieces. For example, if
  length of the rod is 8 and the values of different pieces are given as
  following, then the maximum obtainable value is 22 (by cutting in two pieces
  of lengths 2 and 6)
 */
#include <iostream>

using std::endl;
using std::cout;

int my_rev(int *a, int n) {
  int array[n + 1];
  array[0] = 0;
  int max = -1;
  int temp = 0;
  for (int i = 1 ; i <= n; i++) {
    max = -1;
    for (int j = 1; j <= n; j++) {
      temp = a[j - 1] + array[i - j];
      if (temp > max)
        max = temp;
    }
    array[i] = max;
  }
  return array[n];
}

int main() {
  int n = 5;
  int a[n] = {1, 5, 8, 9, 10};
  cout << my_rev(a, n) << endl;
  return 0;
}
