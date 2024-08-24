#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity)
    {
      arr new int(capacity);
      size = capacity;
      top = -1;
      top = size;
    }
    void push1(int value)
    {
      // if space available, then push
      // else stack overflow ho jayega
      if (top2 - top1 == 1)
      {
        // cannot insert
        cout << "stack overflow" << endl;
      }
      else
      {
        top++;
        arr[top1] = value;
      }
    }

    void push2(int value)
    {
      if (top2 - top1 == 1)
      {
        cout << "stack overflow" << endl;
      }
      else
      {
        top2--;
        arr[top] = value;
      }
    }

    void pop1()
    {
      // if element available then pop
      //  if stack empty, then dont pop
      if (top1 == -1)
      {
        // stack is empty
        cout << "stack underflow" << endl;
      }
      else
      {
        arr[top1] = 0;
        top1--;
      }
    }

    void pop2()
    {
      if (top2 == size)
      {
        // stack 2 is empty
        cout << "stack underflow" << endl;
      }
      else
      {
        arr[top2] = 0;
        top++;
      }
    }
    void print()
    {
      cout << "Top1: " << top1 << endl;
      cout << "Top2: " < top2 << endl;

      for (int i = 0; i < size; i++)
      {
        cout << arr[i] << " ";
        cout << endl;
      }
    }

    int main(){
      Stack s(5);
      s.push(10);
      s.print();
      s.push
    }
}