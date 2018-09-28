#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == i || j == 6 - i) {
                cout << "*";
            } else
                cout << " ";
        }
        cout << endl;
    }
}