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
  // size of arr
  int size = 12;
  // array to store numbers
  int arr[size] = {0, 4, 12, 2, 10, 6, 9, 13, 3, 11, 7, 15};
  // to store the length of longest increasing subSeq till current index
  int len[12] = {1};
  int subSeq[12] = {0};
  int maximum = 1;
  // initialize len array
  for (int i = 0; i < size; i++) {
    len[i] = 1;
  }
  // for each index in our arr we have to find the longest length we can achive
  for (int i = 1; i < size; i++) {
    // for current index, we will iterate over all the previous indexes
    for (int j = 0; j < i; j++) {
      // if current index value in array is greater than the value we are
      // iterating over, than try to increment length at curr array index
      if (arr[i] > arr[j]) {
        len[i] = max(len[i], len[j] + 1);
        subSeq[i] = j;
        maximum = max(maximum, len[i]);
      }
    }
  }
  // print possible longest increasing subSeq
  cout << "max = " << maximum << endl;
  return 0;
}
