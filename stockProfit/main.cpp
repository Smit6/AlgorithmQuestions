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
