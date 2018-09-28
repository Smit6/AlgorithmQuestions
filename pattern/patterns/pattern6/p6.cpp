#include <iostream>

using std::endl;
using std::cout;

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 9; j++) {
      if (j <= 6 - i || j >= i + 4)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}