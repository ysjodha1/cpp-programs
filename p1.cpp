#include <iostream>
 
// Program to print right pyramid of 'n' lines, n is entered by user
using namespace std;
 
int main() {
  int n;
  cout << "n: ";
  cin >> n;
 
  if (n < 0) {
    cout << "Enter positive numbers";
    return 0;
  }
 
  cout << endl;
 
  for (int i=0; i < n; i++) {
    for (int j=0; j <= i; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
 
}
