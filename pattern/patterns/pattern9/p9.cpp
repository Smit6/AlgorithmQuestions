#include <iostream>

using std::cout;
using std::endl;

int main() {
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i <= 4 && j >= 5 - i && j <= i+3)
                cout << "*";
            else if (i > 4 && j >= i - 3 && j <= 11 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}