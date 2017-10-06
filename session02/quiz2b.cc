#include <iostream>
using namespace std;

void f(int& x) { //what does int& do?
  cout << x;

  x = 2;
}

int main() {
  int a = 5;
  f(a);
  f(a);


  int c = 5;
  int&d = c;
  cout << d << " ";
  d = 4;
  cout << c; //prints 5 4



  int e = 5;
  const int& f = e;
  cout << e << f;// reference can be constant but int being referenced cannot

/*  const int g = 5;
   int& h = g;
   cout << g<< h;// error because const int g cannot be referenced later*/

   const int i = 5;
   const int& j = i;
   cout << i << j; // works because both are constant
}
