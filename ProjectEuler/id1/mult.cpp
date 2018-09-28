// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int a = 3;
  int b = 5;
  int sum = 0;
  int num = 0;
  cout << "enter the limit number - ";
  cin >> num;
  for (int i = 1; i < num; i++) {
    if ((i % 3 == 0) || (i % 5 == 0))
      sum = sum + i;
  }
  cout << "the sum is " << sum << "." << endl;
  return 0;
}
