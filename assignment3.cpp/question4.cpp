#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number: ";
    cin >> num;
    if (num > 0){
        cout << "positive number";
    }else {
        cout << "The number is negative and skipped";
    }
    return 0;
}