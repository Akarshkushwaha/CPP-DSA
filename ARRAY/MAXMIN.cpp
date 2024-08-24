#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int arr[n];

  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  int currmin = arr[0];
  int currmax = arr[0];

  for(int i = 0; i<n; i++){
    if(arr[i]>currmax){
      currmax=arr[i];
    }
    if(arr[i]<currmin){
      currmin=arr[i];
    }
  }
  cout<<"maxvalue"<<currmax<<endl;
  cout<<"minvalue"<<currmin<<endl;
  return 0;
}