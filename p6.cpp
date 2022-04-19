#include <iostream>
 
// Write a program to print only prime fibonacci numbers
using namespace std;
 
bool isPrime(int n)
{
  bool is_prime = true;
  if (n == 0 || n == 1)
  {
    is_prime = false;
  }
 
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      is_prime = false;
      break;
    }
  }
 
  return is_prime;
}
int main()
{
  int n, t1 = 0, t2 = 1, nextTerm = 0;
 
  cout << "Enter number of terms: ";
  cin >> n;
 
  cout << "Only prime Fibonnaci numbers: " << endl;
  for (int i = 1; i <= n; ++i)
  {
    if (i == 1)
    {
      cout << t1 << ", ";
      continue;
    }
    if (i == 2)
    {
      cout << t2 << ", ";
      continue;
    }
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
    if (isPrime(nextTerm))
    {
      cout << nextTerm << ", ";
    }
  }
  return 0;
}
