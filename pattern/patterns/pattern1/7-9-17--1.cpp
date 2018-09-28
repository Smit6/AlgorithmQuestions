#include <iostream>
using std::cout;
using std::endl;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= 5; j++) {
//             if (j >= (6 - i))
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 4 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}