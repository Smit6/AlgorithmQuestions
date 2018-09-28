#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
    int k;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i <= 3) {
                if (j >= 6 - i)
                    cout << "*";
                else
                    cout << " ";
            } else if (i <= 6) {
                k = 0;
                if (j == 3) {
                    k = 1;
                    cout << "|";
                }
                if (j <= i - 4) {
                    k = 1;
                    cout << "*";
                }
                if (j >= i) {
                    k = 1;
                    cout << "*";
                }
                if (k == 0)
                    cout << " ";
            } else if (i <= 9) {
                if (j <= 10 - i)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}