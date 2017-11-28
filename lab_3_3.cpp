#include <iostream>

using namespace std;

int main() {

  const float pi = 3.14315926536;
  float r;
  int k = 2 ,h = 15;
  cout <<"Please enter radius : ";
  cin >> r;
  cout <<"Area of Circle : "<<pi*r*r<<endl;

  cout <<"Circumference of Circle : "<<k*pi*r<<endl;

  cout <<"Cylindrical space : "<<pi*(r*r)*h<<endl;
  return 0;
}
