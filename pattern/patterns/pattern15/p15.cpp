#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int rows;
    cout <<"\n\nenter number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (j == i) {
                cout <<"\\";
            } else if ((j == (rows + 1) - i && (i != (rows + 1) / 2))) {
                cout << "/";
            } else if (rows % 2 == 0 && i == rows / 2 && j == (rows + 1) - i) {
                cout << "/";
            }
            else {
            cout << "*";
            }
        }
        cout << endl;
    }
}