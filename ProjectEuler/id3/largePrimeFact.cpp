// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

// #define NUMBER 600851475143

using std::cout;
using std::endl;

bool prime(long long int num) {
  for (long long int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      cout << "here " << num << endl;
      return false;
    }
  }
  return true;
}

// long long int largest_prime_factor(long long int num) {
//   bool turefale;
//   for (long long int i = num / 2; i > 0; i--) {
//     turefale = prime(i);
//     // cout << i << " " << turefale << endl;
//     if ((num % i == 0) &&  turefale)
//       return i;
//   }
//   return 0;
// }

// long long int largest_prime_factor(long long int num) {
//   bool turefale;
//   for (long long int i = num / 2; i > 0; i--) {
//     // turefale = prime(i);
//     // cout << i << " " << turefale << endl;
//     if ((num % i == 0) &&  prime(i)) {
//       cout << i << endl;
//       return i;
//     }
//   }
//   return 0;
// }


long long int largest_prime_factor(long long int num) {
  bool turefale;
  for (long long int i = 2; i <= 9; i++) {
    // turefale = prime(i);
    // cout << i << " " << turefale << endl;
    if ((num % i == 0) &&  prime(num / i)) {
      cout << i << endl;
      return i;
    }
  }
  return 0;
}


int main() {
  long long int number = 600851475143;
  cout << "largest prime factor is " << largest_prime_factor(number) << "." << endl;
  return 0;
}
