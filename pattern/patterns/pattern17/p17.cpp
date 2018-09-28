#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main() {
    char c;
    for (int i = 1; i <= 4; i++) {
         c = 'A';
        for (int j = 1; j <= 7; j++) {
            if (j >= 5 - i && j <= i + 3) {
                cout << c;
                j < 4 ? c++ : c--;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}