#include <iostream>

using std::endl;
using std::cout;
using std::max;
using std::string;

int main() {
  string str1 = "stone";
  string str2 = "longest";
  int n1 = str1.length();
  int n2 = str2.length();
  int lcs[n1 + 1][n2 + 1] = {0};
  for (int i = 1; i <= n1; i++) {
    for (int j = 1; j <= n2; j++) {
      if (str1[i - 1] == str2[j - 1])
        lcs[i][j] = 1 + lcs[i - 1][j - 1];
      else
        lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
    }
  }
  cout << lcs[n1][n2] << endl;
  return 0;
}
