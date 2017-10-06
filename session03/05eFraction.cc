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
  void print() const {
      cout << numerator << "/" << denominator;
  }
};

int main() {
  Fraction a;
  a.print(); cout << " ";
  a.setNum(5)
  a.print(); cout << '\n';

  const Fraction c(1,2);//saying "this fraction" is not allowed to change
  c.print(); cout << '\n';

}
