#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int rows;
    cout << "---------------------" << endl;
    cout << "---------------------" << endl;
    cout << "---------------------" << endl;
    cout << endl;
    cout << "number of rows : ";
    cin >> rows;
    cout << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= (rows * 2) - 1; j++) {
            if (j >= i && j <= (rows * 2) - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
