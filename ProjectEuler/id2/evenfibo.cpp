// Each new term in the Fibonacci sequence is generated by adding the previous
//two terms. By starting with 1 and 2, the first 10 terms will be:
//
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
// By considering the terms in the Fibonacci sequence whose values do not
// exceed four million, find the sum of the even-valued terms.

#include <iostream>

using std::cout;
using std::endl;

int fibo(int n1, int n2, int *current_sum) {
  if (n2 > 4000000)
    return *current_sum;
  if (n2 % 2 == 0) {
    *current_sum = *current_sum + n2;
  }
  return fibo(n2, n2 + n1, current_sum);
}

int main() {
  int sum = 0;
  cout << "sum of even valued term is " << fibo(1, 2, &sum) << "." << endl;
  return 0;
}
