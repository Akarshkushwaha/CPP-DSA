//for converting the whole array into one
#include<iostream>
using namespace std;
int main(){
  int arr[5];
  cout<<"enter the no."; 
  //for taking input
  for(int i = 0; i<5; i++){
    cin>> arr[i];
  }

  for(int i =0; i<5; i++){
    cout<<arr[i]/arr[i];

  }
  return 0;
}