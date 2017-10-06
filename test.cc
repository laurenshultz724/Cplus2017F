#include <iostream>
using namespace std;

void f(int x) { cout << "hello" << x; }
void g(float x) { cout << "goodbye"; }
void g(double x) {}

class A {
public:
  void h() { cout << "f"; }
  void i() const { cout << "g"; }

};
/*class B {
public:
  void a() { cout << "f"; }

  void b() const { cout << "g"; }
};*/


int main() {

  int a = 3;
  int& b = a;
  const int& c = b;// does all references before b++ and a--
  b++;
  a--;
  cout << a << b << c; // prints 333

  f(1);
  g(1.0); //prints hello1

  A a1;
  a1.h();
  a1.i();//prints fg
  
  cout << '\n';

  /*a(); //will not work because a() is in class*/
}
