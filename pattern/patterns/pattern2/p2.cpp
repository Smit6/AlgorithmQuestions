#include <iostream>
using std::cout;
using std::endl;

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j >= i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
