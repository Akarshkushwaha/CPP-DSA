//For converting the values of array to doubled
#include<iostream>
using namespace std;

int main(){
  int arr[5];
  cout<<"enter the no."; 
  //for taking input
  for(int i = 0; i<5; i++){
    cin>> arr[i];
  }
  //for printing output 
  cout<<"the doubled values are"<<endl;
  for(int i = 0; i<5; i++){
    cout<<arr[i]*2<<endl;
  }
  return 0;

}
