#include <iostream>

using std::endl;
using std::cout;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j >= 6 - i && j <= i + 4 && i % 2 == 0) {
                if (j % 2 == 0)
                    cout << "*";
                else
                    cout << " ";
            } else if (j >= 6 - i && j <= i + 4 && i % 2 == 1) {
                if (j % 2 == 1)
                    cout << "*";
                else
                    cout << " ";
            } else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}