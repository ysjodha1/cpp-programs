#include <iostream>
#include <cmath>
 
// WAP to find roots of quadratic equation
using namespace std;
 
int main() {
  int a, b, c;
  double root1, root2;
  char choice;
 
  do {
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
 
    int discriminant = (b * b) - (4 * a * c);
 
    if (discriminant >= 0) {
      root1 = (-b + sqrt(discriminant)) / (2 * a);
      root2 = (-b - sqrt(discriminant)) / (2 * a);
 
      cout << "First Root : " << root1 << endl;
      cout << "Second Root : " << root2 << endl;
    } else {
      double real = (-b) / (2 * a);
      double imaginary = sqrt(-discriminant) / (2 * a);
 
      cout << "First Root : " << real << "+" << round(imaginary) << "i" << endl;  
      cout << "Second Root : " << real << "-" << round(imaginary) << "i" << endl;
    }
 
    cout << "Do you want to continue ?? ";
    cin >> choice;
  } while (choice == 'y' || choice == 'Y');
 
  return 0;
}
