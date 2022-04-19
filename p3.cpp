#include <iostream>
 
// WAP to find factors of entered number and count them
using namespace std;
 
 
int main() {
  int n, factors_count = 0;
 
  cout << "Enter a number: ";
  cin >> n;
 
  if (n < 0) {
    cout << "Enter positive number";
    return 0;
  }
 
  cout << "Factors: " << endl;
  for (int i=1; i <= n; i++) {
    if (n % i == 0) {
      cout << "\t" << i << endl;
      factors_count++;
    }
  }
  cout << endl;
  cout << n << " have " << factors_count << " factors.";
}
