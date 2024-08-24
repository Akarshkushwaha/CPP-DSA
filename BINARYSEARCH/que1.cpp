// find the first occurence of element
#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int target) {
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s<=e){
    if(arr[mid] == target){
      //ans store and then left search
      ans = mid;
      e = mid-1;
    }
    else if(target<arr[mid]){
      e = mid-1;
    }
    else if(target>arr[mid]){
      s = mid+1;
    }
    mid = (s+e)/2;
  }
  return ans;
}

int main(){
  vector<int> arr{1,2,4,3,4,5,6,4,7,8};
  int target = 4;
  int indexOfFirstOcc = firstOcc(arr, target);
  cout<<"ans is: "<<indexOfFirstOcc<<endl;
  return 0;
}