#include <iostream>

using std::cout;
using std::endl;
using std::cin;

// int main() {
//   for (int i = 1; i <= 7; i++) {
//     for (int j = 1; j <= 4; j++) {
//       if (i <= 4 && j <= i)
//         cout << "*";
//       else if (i > 4 && j <= 8 - i)
//         cout << "*";
//       else
//         cout << " ";
//     }
//     cout << endl;
//   }
// }

int main() {
  int k = 0, rows;
  cout << "please enter the number of rows : ";
  cin >> rows;
  for (int i = 1; i <= rows; i++) {
    if (rows % 2 == 0) {
      if (i <= (rows)/2)
        k++;
      else if (i >((rows)/2)+1)
        k--;
    } else {
      i <= (rows + 1) / 2 ? k++ : k--;
    }
    for (int j = 1; j <= (rows + 1) / 2; j++) {
      if (j <= k) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}