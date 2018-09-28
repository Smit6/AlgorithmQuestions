#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int k, rows;
    cout << "\nenter the number of rows - ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        k = rows - i;
        for (int j = 1; j <= rows; j++) {
            j <= (rows + 1) - i ? cout << k-- : cout <<" ";
        }
        cout << endl;
    }
    return 0;
}