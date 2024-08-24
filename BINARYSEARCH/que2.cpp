// SQUARE ROOT OF NUMBER USING BINARY SEARCH

#include<iostream>
//#include<cmath>
using namespace std;

int findsqrt(int n){
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  int target = n;
  int ans = -1;

  while(s<=e){
    if(mid*mid == target){
      return mid;
    }
    else if(mid*mid>target){
      e = mid-1;
    }
    else{
      ans = mid;
      s = mid+1;
    }
    mid = s+(e-s)/2;
  }
}

int main(){
  //vector<int> arr{2,3,4,5,6,7,8,9,16,25,36,49};
  int n;
  cout<<"enter number: "<<endl;
  cin>>n;
  int ans = findsqrt(n);
  cout<<"ans is"<<ans<<endl;
  return 0;
}

