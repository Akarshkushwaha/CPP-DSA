// sum of Array

#include <iostream>
using namespace std;

int main()
{
  int n;
  long fact = 1.0;

  cin >> n;

  if (n < 0)
  {
    cout << "err";
  }
  else if (n = 0)
  {
    cout << "factorial is : " <<" "<< 1 << endl;
  }
  else
  {
    for (int i = n; i >= 1; i--)
    {
      fact = fact * i;
    }
    cout << "factorial is" << fact;
  }
  return 0;
}