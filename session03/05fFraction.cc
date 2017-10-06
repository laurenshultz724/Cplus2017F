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
  friend Fraction add(Fraction x, Fraction y); //gives rights to Fraction add function

  Fraction add(Fraction y) {//method to add fractions
    Fraction ans;
    ans.numerator = numerator * y.denominator + y.numerator * denominator;
    ans.denominator = denominator * y.denominator;
    return ans;
  }
};

/*
1/2 + 1/3 = 1*3 + 1*2
            _____
              6

*/
Fraction add(Fraction x, Fraction y){ //adding fractions
  Fraction ans;
  ans.numerator = x.numerator * y.denominator + x.denominator * y.numerator;
  ans.denominator = x.denominator * y.denominator;
  return ans;
}

int main() {
  Fraction a(1/2);
  Fraction b(1/3);
  a.print(); cout << " "; b.print (); cout << '\n';
  Fraction c = add(a, b);//function saying add a and b
  Fraction d = a.add(b);//method calling a and say add b to yourself
  c.print(); cout << " "; d.print (); cout << '\n';
  //Fraction e = a + b;
}
