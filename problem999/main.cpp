/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : reverse the number and add 1 to it and reverse the number again.
  and print it.
 */

#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

/* function name : adder
 * paramenter : array, array size
 * brief : input - 8999 output - 9999, input  - 2345 output - 3345
 *
 * returns array.
 */
int* adder(int* a, int size) {
  for (int j = size - 1; j >= 0; j--) {
    if (a[j] != 9) {
      a[j] += 1;
      for (int i = 0; i < size; i++) {
         cout << a[i] << endl;
      }
      return a;
    }
  }
  int *b = new int(size + 1);
  for (int i = 1; i <= size; i++) {
    b[i] = 0;
  }
  b[0] = 1;
  for (int i = 0; i <= size; i++) {
     cout << b[i] << endl;
  }
  return b;
}

int main() {
  int a[4] = {8, 9, 9, 9};
  int *b = adder(a, 4);
  return 0;
}
