// full solution in book -- please check
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int flag, num = 1;
    for (int i = 1; i <= 5; i++) {
        flag = 1;
        for (int j = 1; j <= 9; j++) {
            if (j <= (2 * i) - 1) {
                if (flag == 1) {
                    if (i % 2 == 0) {
                        j == 1 ? num = num + (((2 * i) - 1 + 1) / 2) : num--;
                    } else {
                        j == 1 ? num = num+ (((2 * i) - 1 - 2 + 1) / 2) : num++;
                    }
                    cout << num;
                } else {
                    cout << "*";
                }
                flag = 1 - flag;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}