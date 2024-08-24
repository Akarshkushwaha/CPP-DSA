#include <iostream>
using namespace std;

double circumference(int r){
  double cir = 2 * 3.14 * r;
  return cir;
}

double area (int r){
  double ar = 3.14 * r * r;
  return ar;
}

int main() {
  int r;
  cout << "enter the radius: ";
  cin >> r;
  cout << "Area: " << area(r)<< endl;
  cout << "Circumference: " << circumference(r)<< endl;
    
}