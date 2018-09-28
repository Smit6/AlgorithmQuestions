#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    // int k = 0;
    // for (int i = 1; i <= 5; i++) {
    //     i <= 3 ? k++ : k--;
    //     for (int j = 1; j <= 5; j++) {
    //         if (j >= 4 - k && j <= k + 2) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // int k = 0;
    // int rows;
    // cout << "\n\nenter the number of rows : ";
    // cin >> rows;
    // cout << endl;
    // for (int i = 1; i <= rows; i++) {
    //     i <= (rows + 1) / 2 ? k++ : k--;
    //     for (int j = 1; j <= rows; j++) {
    //         if (j >= ((rows + 1) / 2) + 1 - k && j <= k + (rows / 2)) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    int k = 0, num = 0, result;
    for (int i = 1; i <= 21; i++) {
        i <= 11 ? k++ : k--;
        num = k - 1;
        for (int j = 1; j <= 21; j++) {
            if (j >= 12 - k && j <= k + 10) {
                if (j < 11) {
                    result = (num++) % 10;
                    cout << result;
                } else {
                    result = (num--) % 10;
                    cout << result;
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}