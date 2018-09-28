#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char c;
    int rows;
    cout << "\n\nenter the number of rows : ";
    cin >> rows;
    cout << endl;
    for (int i = 1; i <= rows; i++) {
        c = 'A';
        for (int j = 1; j <= rows * 2; j++) {
            if (j >= (rows + 1) - i && j <= i + rows) {
                if (j == (rows + 1))
                    c = '1';
                cout << c;
                c++;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}