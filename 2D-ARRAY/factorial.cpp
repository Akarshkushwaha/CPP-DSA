#include <iostream>
using namespace std;
int main()
{
  int fact = 1, a, i;
  cout << "Enter the number whose factorial you want to know: ";
  cin >> a;
  for (i = a; i >= 1; i--)
  {
    fact = fact * i;
  }
  cout << "The factorial of the given number is " << fact;
}