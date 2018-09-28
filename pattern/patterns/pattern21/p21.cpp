#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num, rows;
    cout << "\n\nenter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        num = 1;
        for (int j = 1; j <= rows; j++) {
            if (j <= i) {
                cout << num;
                num == 1 ? num = 0 : num = 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
