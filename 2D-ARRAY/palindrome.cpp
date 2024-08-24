#include <iostream>
using namespace std;
int main()
{
  int num, original, reverse = 0, digit;
  cout << "Enter the number to check for palindrome :";
  cin >> num;
  original = num;
  while (num > 0)
  {
    digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10;
  }
  if (reverse == original)
  {
    cout << "The number is a palindrome. ";
  }
  else
  {
    cout << "The number is not a palindrome. ";
  }
}