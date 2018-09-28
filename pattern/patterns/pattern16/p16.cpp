#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int k = 0, rows;
    cout << "\n\nenter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        if (rows % 2 == 0) {
            if (i <= (rows / 2))
                k++;
            else if (i > (rows / 2) + 1)
                k--;
        } else {
            i <= (rows + 1) / 2 ? k++ : k--;
        }
        for (int j = 1; j <= rows; j++) {
            if (j <= ((rows + 1) / 2 + 1)  - k || j >= k + (rows / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}