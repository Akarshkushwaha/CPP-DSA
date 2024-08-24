#include <iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;
    cout << "enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "enter the number: ";
    cin >> num1;
    cout << "enter the number: ";
    cin >> num2;
    switch(op){
        case'+':
        cout << "sum is = " << num1 + num2 << endl;
        break;
        case'-':
        cout << "sub is = " << num1 - num2 << endl;
        break;
        case'*':
        cout << "mul is = " << num1 * num2 << endl;
        break;
        case'/':
        cout << "div is = " << num1 / num2 << endl;
        break;
        default:
        cout << "error! the operator is not correct";
        break;
    }
    return 0;
}