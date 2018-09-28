#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int num1, num, flag;
    for (int i = 1; i <= 5; i++) {
        i == 1 ? num = 1 : num = num + 7 - i;
        // num1 = num;
        flag = 6 - i;
        for (int j = 1; j <= 5; j++) {
            if (j <= i) {
                if (j == 1)
                    num1 = num;
                cout << num1;
                num1 = num1 - flag;
                flag++;
            } else
                cout << " ";
        }
        cout << endl;
    }
}