#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char c;
    int rows;
    cout << "\n\nenter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        c = '1';
        for (int j = 1; j <= (rows * 2) - 1; j++) {
            if (j >= (rows + 1) - i && j <= i + (rows - 1)) {
                if (j == (rows + 1))
                    c = 'A';
                cout << c;
                c++;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
