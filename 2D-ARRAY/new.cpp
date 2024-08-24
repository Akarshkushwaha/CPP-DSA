#include <iostream>
using namespace std;
class Divyanshu
{
public:
  Divyanshu()
  {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Constructor called" << endl;
  }
  ~Divyanshu()
  {
    cout << "Destructor called";
  }
};

int main()
{
  Divyanshu D1;
}