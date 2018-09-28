# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int k;
    char c;
    for (int i = 1; i <= 4; i++) {
        k = 1;
        i % 2 == 1 ? c = '1' : c = 'A';
        for (int j = 1; j <= 7; j++) {
            if (j >= 5 - i && j <= i + 3) {
                if (k == 1) {
                    cout << c;
                    c++;
                    k = 0;
                } else {
                    cout << " ";
                    k = 1;
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}