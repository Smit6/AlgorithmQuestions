#include <iostream>
// #include <string>

using std::endl;
using std::cout;
using std::string;
using std::min;

int main() {
  string str1 = "adceg";
  string str2 = "abcfg";
  int len1 = str1.length();
  int len2 = str2.length();
  int arr[len1 + 1][len2 + 1];
  for (int i = 0; i <= len2; i++)
    arr[0][i] = i;
  for (int i = 0; i <= len1; i++)
    arr[i][0] = i;
  for (int i = 1; i <= len1; i++) {
    for (int j = 1; j <= len2; j++) {
      if (str1[i - 1] == str2[j - 1]) {
        arr[i][j] = arr[i - 1][j - 1];
      } else {
        arr[i][j] = 1 + min(arr[i - 1][j - 1], min(arr[i - 1][j], arr[i][j - 1]));
      }
    }
  }
  cout << arr[len1][len2] << endl;
  return 0;
}
