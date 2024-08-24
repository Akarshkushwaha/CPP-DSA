#include <iostream>
using namespace std;
int main()
{
  int a = 0, b = 1, c, n;
  cout << "Enter the number of terms you want for fibonacci: ";
  cin >> n;
  cout << a << endl
       << b << endl;
  for (int i = 1; i <= n - 2; i++)
  {
    c = a + b;
    a = b;
    b = c;
    cout << c << endl;
  }
}