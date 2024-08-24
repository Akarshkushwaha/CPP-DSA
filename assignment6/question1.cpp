#include <iostream>
using namespace std;

int count(int arr[], int n)
{

  int count_odd = 0;
  int even_count = 0;

  for (int i = 0; i < n; ++i)
  {
    if (arr[i] % 2 == 0)
    {
      even_count++;
    }
    else
    {
      count_odd++;
    }
  }

  cout << "count of even no is: " << even_count << endl;
  cout << "count of odd no is: " << count_odd << endl;
  
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  count(arr, n);

  return 0;

}