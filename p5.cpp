#include <iostream>
 
// WAP to find the entered number is Armstrong number or not
using namespace std;
int main()
{
  int n, r;
  int sum = 0, temp;
 
  cout << "Enter a Number: ";
  cin >> n;
  temp = n;
 
  while (n > 0)
  {
    r = n % 10;
    sum = sum + (r * r * r);
    n = n / 10;
  }
  if (temp == sum)
  {
    cout << temp << " is an Armstrong Number." << endl;
  }
 
  else
  {
    cout << temp << "is not Armstrong Number." << endl;
  }
 
  return 0;
}
