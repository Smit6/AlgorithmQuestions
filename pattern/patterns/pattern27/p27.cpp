#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char c = 'A';
    int flag1 = 0;
    int flag2 = 4;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j >= 6 - i) {
                j == 6 - i ? c = 4 + c - flag2 + flag1 : c--;
                cout << c;
            } else
                cout << " ";
        }
        flag1++;
        flag2--;
        cout << endl;
    }
}