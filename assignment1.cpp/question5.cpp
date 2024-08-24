#include <iostream>
using namespace std;

int main(){
    cout << "\n\n swap two numbers : \n";
    cout << " --------------------\n";
    int n1=2, n2=5, n3;
    cout << "Before swapping the first number is : " << n1 << "\n";
    cout << "Before swapping the second number is : " << n2 << "\n";
    n3 = n2;
    n2 = n1;
    n1 = n3;
    cout << "After swapping the first number is : " << n1 << "\n";
    cout << "After swapping the second number is : " << n2 << "\n";
    return 0;
}