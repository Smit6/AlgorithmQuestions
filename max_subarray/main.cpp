#include <iostream>

using std::cout;
using std::endl;

int main() {
  int n = 5;
  int a[n] = {1, -3, 2, 1, -1};

  int max_so_far = a[0];
  int end = a[0];
  for (int i = 1; i < n; i++) {
    end += a[i];
    if (max_so_far < end) {
      max_so_far = end;
    }
    if (end < 0) {
      end = 0;
    }
  }
  cout << "max sum = " << max_so_far << endl;
  return 0;
}
