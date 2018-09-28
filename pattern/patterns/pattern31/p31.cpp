#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char c;
    for (int i = 1; i <= 4; i++) {
        c = 'A';
        for (int j = 1; j <= 7; j++) {
            if (j <= 5 - i || j >= 3 + i) {
                cout << c;
            } else
                cout << " ";
            c++;
        }
        cout << endl;
    }
}