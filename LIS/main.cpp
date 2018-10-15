/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : solve longest increasing subSeq
 */
#include <iostream>

using std::cout;
using std::endl;
using std::max;

int main() {
  int size = 12;
  int arr[size] = {0, 4, 12, 2, 10, 6, 9, 13, 3, 11, 7, 15};
  int len[12] = {1};
  int subSeq[12] = {0};
  int maximum = 1;
  for (int i = 0; i < size; i++) {
    len[i] = 1;
  }
  for (int i = 1; i < size; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[i] > arr[j]) {
        len[i] = max(len[i], len[j] + 1);
        subSeq[i] = j;
        maximum = max(maximum, len[i]);
      }
    }
  }
  cout << "max = " << maximum << endl;
  return 0;
}
