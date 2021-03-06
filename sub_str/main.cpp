/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : Given two strings ‘X’ and ‘Y’, find the length of the longest common
  substring.
 */
#include <iostream>

using std::endl;
using std::cout;
using std::max;
using std::string;

int main() {
  string str1 = "abcdaf";
  string str2 = "zbcdf";
  int n1 = str1.length();
  int n2 = str2.length();
  int lcs[n1 + 1][n2 + 1] = {0};
  int maximum = 0;
  for (int i = 1; i <= n1; i++) {
    for (int j = 1; j <= n2; j++) {
      if (str1[i - 1] == str2[j - 1]) {
        lcs[i][j] = 1 + lcs[i - 1][j - 1];
        maximum = max(maximum, lcs[i][j]);
      } else
        lcs[i][j] = 0;
    }
  }
  cout << maximum << endl;
  return 0;
}
