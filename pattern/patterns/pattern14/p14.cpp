#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main() {
    int k = 0, num, rows;
    cout << "\n\nenter the number of rows : ";
    cin >> rows;
    cout << endl;
    for (int i = 1; i <= rows; i++) {
        if (rows % 2 == 0) {
            if (i <= (rows + 1) / 2)
                k++;
            else if (i > (rows + 3) /2)
                k--;
        } else {
            i <= (rows + 1) / 2 ? k++ : k--;
        }
        num = 1;
        for (int j = 1; j <= (rows + 1) / 2; j++) {
            if (j >= ((rows + 1) / 2) + 1 - k) {
                cout << num;
                num++;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}