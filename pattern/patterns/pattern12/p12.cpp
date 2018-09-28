#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int k, rows;
    cout << endl;
    cout << "enter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        k = i;
        for (int j = 1; j <= (rows * 2) - 1; j++) {
            if (j >= (rows + 1) - i && j <= i + (rows - 1)) {
                cout << k;
                j < rows ? k++ : k--;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}