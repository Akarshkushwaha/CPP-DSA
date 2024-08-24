#include <iostream>
using namespace std;

int main(){
    int n, first, second, third, sum;
    n = 234;
    first = n/100;
    n = n%100;
    second = n/10;
    third = n%10;
    sum = first + second + third;
    cout << "sum of three digit no is: " <<sum <<endl;
    return 0;
}
