#include <iostream>
using namespace std;

class Fraction{
private:
  int numerator;
  int denominator;//general rule - always make data private
public: //public section for what it can do with data
  Fraction() {numerator = 0; denominator = 1;}
  Fraction(int n, int d) {
    numerator = n;
    denominator = d;
  }
  //method (object oriented terminology)
  //member function (c++) - lets you access private variables
  int getNum() const { return numerator;} //read only methods have const AFTER the method name
  int getDen() const { return denominator;}
  void setNum(int n) {numerator = n;}
  void setDen (int d) {denominator = d;}
};

int main() {
  Fraction a;
  cout << a.getNum() << "/" << a.getDen() << '\n';//print 0/1
  a.setNum(5)
  cout << a.getNum() << "/" << a.getDen() << '\n';//print 5/1

  const int x = 5; //set constant - "read only variable"
//  x++; //ERROR because int x is constant
  const double pi = 3.141592; //ex: pi

  const Fraction c(1,2);//saying "this fraction" is not allowed to change
  cout << c.getNum() << "/" << c.getDen() << '\n';
  //c.setNum(19);//will get error because const Fractionc

}
