#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int k;
    for (int i = 1; i <= 4; i++) {
        k = i;
        for (int j = 1; j <= 7; j++) {
            if (j >= 5 - i && j <= i + 3) {
                cout << k;
                j < 4 ? k-- : k++;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}