#include <iostream>
// WAP to find entered number is prime or not
using namespace std;
int main() {
  int n;
  bool is_prime = true;
 
  cout << "Enter a number: ";
  cin >> n;
 
  if (n < 0) {
    cout << "Enter positive number";
    return 0;
  }
 
  if (n == 0 || n == 1) {
    is_prime = false;
  }
 
  for (int i=2; i <= n/2; i++) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }
 
  if (is_prime) {
    cout << n << " is prime" << endl;
  } else {
    cout << n << " is not prime" << endl;
  }
}
