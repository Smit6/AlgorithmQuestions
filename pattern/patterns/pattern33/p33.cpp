#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int k = 0, flag = 1;
    for (int i = 1; i <= 7; i++) {
        if (i < 4 - k) {
            cout << " ";
        } else {
            if (flag)
                cout << "*";
            else
                cout << " ";
            flag = 1 - flag;
        }
        if (i == 4 + k) {
            cout << endl;
            flag = 1;
            k++;
        }
    }
}