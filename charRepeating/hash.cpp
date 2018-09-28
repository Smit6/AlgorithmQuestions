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
  for (unsigned int i = 0; i < str.length(); i++) {
    ret = h.insert(str[i]);
    if (ret == 1) {
      cout << str[i] << endl;
      break;
    }
  }
  return 0;
}
