#include <iostream>

using std::cout;
using std::endl;

// int main() {

//   for (int i = 1; i <= 5; i++) {
//     for (int j = 1; j <= 9; j++) {
//       if (j >= (6 - i) && j <= (i + 4))
//         cout << "*";
//       else
//         cout << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

int main() {

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 9; j++) {
      if (j >= (4 - i) && j <= (i + 4))
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
