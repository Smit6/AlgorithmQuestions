/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : given a string find out if any char repeats it's self.
 */

#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::list;
using std::string;

list<char>::iterator it;

class Hash {
public:
  int hashFunc(char ins) {
    int number = (unsigned int) ins;
    return number % 10;
  }
  /* function name : insert
   * arg : current character
   * brief : before insearting it checks if the char already exists in the map
   * retruns : int
   */
  int insert(char curr) {
    int number = hashFunc(curr);
    it = hashTable[number].begin();
    while (it != hashTable[number].end()) {
      if (*it == curr)
        return 1;
    }
    hashTable[number].push_back(curr);
    return 0;
  }
private:
  list<char> hashTable[10];
};

int main() {
  Hash h;
  string str = "ABDRCSFDV";
  int ret = 0;
  // iterate over the whole list
  for (unsigned int i = 0; i < str.length(); i++) {
    ret = h.insert(str[i]);
    if (ret == 1) {
      cout << str[i] << endl;
      break;
    }
  }
  return 0;
}
