#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char c;
    for (int i = 1; i <= 4; i++) {
        c = 'A' + i - 1;
        for (int j = 1; j <= 4; j++) {
            if (j <= i) {
                cout << c;
                c--;
            }
            else
            cout << " ";
        }
        cout << endl;
    }
}