/*#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i = 1;
  int count = 1;
  while(i<=n){
    int j = 1;
    while(j<=i){
      cout<<count<<" ";
      count++;
      j = j+1;
    }
    cout<<endl;
    i = i+1;
  }
}*/

#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i = 1;
  char value = 'A';
  while(i<=n){
    int j = 1;
    while(j<=i){
      cout<<value<<" ";
      value++;
      j = j+1;
    }
    cout<<endl;
    i = i+1;
  }
}
