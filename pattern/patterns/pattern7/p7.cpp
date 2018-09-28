#include <iostream>

using std::cout;
using std::endl;

int main() {
    int k;
    for (int i = 1; i <= 4; i++) {
        k = 1;
        for (int j = 1; j <= 7; j++) {
            if (j >= 5 - i && j <= i + 3) {
                // if (j <= 3) {
                //     cout << k;
                //     k++;
                // } else {
                //     cout << k;
                //     k--;
                // }
                cout << k;
                j < 4 ? k++ : k--;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}