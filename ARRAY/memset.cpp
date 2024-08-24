//
#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int arr[5] = {4, 3, 4, 2, 6};
  memset(arr,3,sizeof(arr)/sizeof(arr[0]));
  for(int i = 0; i<5; i++){
    cout<<arr[i];
  }
  return 0;
}