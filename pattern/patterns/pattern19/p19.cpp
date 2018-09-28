#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main() {
    int rows;
    cout << "\n\nenter the number of rows : ";
    cin >> rows;
    cout << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= (rows * 2) - 1; j++) {
            if (j >= (rows + 1) - i && j <= (rows * 2) - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}