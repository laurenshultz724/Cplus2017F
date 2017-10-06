#include <iostream>
#include <cstdint>
#include <string>
using namespace std;

int f (int x) { // x is a COPY of a
  int y = 2*x;
  x = 19;
  return y;
}
int g(int& x ) {  //while in here, x IS a
  int y = 2*x;
  x = 19; // this changes a
  return y;
}

int main(){
  int a = 2;
  cout << f(a) << '\n';
  cout << f(a) << '\n'; //second time does not = 19 because x = 19  is not passed to a
  cout << g(a) << '\n';//first time prints 4
  cout << g(a) << '\n'; //second time makes a = 19 prints 38
}
