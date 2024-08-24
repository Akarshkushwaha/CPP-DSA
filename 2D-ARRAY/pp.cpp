#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int search(vector<int> &nums, int n)
  {
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
      if (nums[mid] >= nums[0])
      {
        s = mid + 1;
      }
      else
      {
        e = mid;
      }
      mid = (s + e) / 2;
    }
    return s;
  }

public:
  int binarysearch(vector<int> &nums, int s, int e, int target)
  {
    int start = s;
    int end = e;
    int mid = (s + e) / 2;
    while (s <= e)
    {
      if (nums[mid] == target)
      {
        return mid;
      }
      else if (target > nums[mid])
      {
        s = mid + 1;
      }
      else if (target < nums[mid])
      {
        e = mid - 1;
      }
      mid = (s + e) / 2;
    }
    return -1;
  }

public:
  int findposition(vector<int> &nums, int n, int target)
  {
    int pivot = search(nums, n);
    if (target >= nums[pivot] && target <= nums[n - 1])
    {
      return binarysearch(nums, pivot, n - 1, target);
    }
    else
    {
      return binarysearch(nums, 0, pivot - 1, target);
    }
  }
};
int main()
{
  int nums[] = {4, 5, 6, 7, 0, 1, 2};
  int n = 7;
  int target = 1;
  int b = findposition(nums, n, target);

  cout << b << endl;
}