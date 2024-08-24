#include <iostream>
using namespace std;

int main(){
     int cp, sp;
     cout << "enter the price: ";
     cin >> cp;
     cout << "enter the price: ";
     cin >> sp;
     if (sp > cp) {
        cout << "profit";
     }else {
        cout << "loss";
     }
     return 0;
}