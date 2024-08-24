#include<iostream>
#include<stack>
using namespace std;

class Stack{
  public:
  int* arr;
  int size;
  int top;

  Stack(int capacity){
    arr = new int[capacity];
    size = capacity;
    top = -1;
  }

  void push(int val){
    if(top == size-1){
      //stack is alrady full, agar insert karoge, toh stack overflow ho jayega
      cout<<"stack overflow"<<endl;
    }
    else{
      //normal case -> stack me khali jgh h
      top++;
      arr[top] = val;
    }

  }

  void pop(){
    if(top == -1){
      //stack is empty, cannot pop in this case
      cout<<"stack underflow"<<endl;
    }
    else{
      //normal case
      arr[top] = -1;
      top--;
    }
  }

  int getSize(){
    return top+1;
  }

  bool isEmpty(){
    if(top == -1){
      return true;
    }
    else{
      return false; 
    }
  }

  int getTop(){
    if(top == -1){
      cout<<"there is no element at the top as stack is empty";
      return -1;
    }
    else{
      return arr[top];
    }
  }

  void print(){
    cout<<"printing stack"<<endl;
    for(int i=0; i<size; i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
  }


};

int main(){
  Stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.print();

  // cout<<s.size()<<endl;

  // cout<<s.empty()<<endl;

  // cout<<s.top()<<endl;

  // s.pop();
  // cout<<s.top()<<endl;

  cout<<s.getTop()<<endl;
  cout<<s.getSize()<<endl;
  cout<<s.isEmpty()<<endl;


   s.pop();

  return 0;
}