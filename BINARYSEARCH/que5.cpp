// FIND THE ODD OCCURING ELEMENT IN AN ARRAY

#include<iostream>
using namespace std;
#include<vector>

int solve(vector <int> arr){
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;
  while(s<=e){
    if(s==e){
      return s;
    }
    if(mid%2==0){
      if(arr[mid] == arr[mid+1]){
        s = mid+2;
      }
      else{
        e = mid;
      }
      else{
        
      }
    }
  }

}