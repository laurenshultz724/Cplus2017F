#include <iostream>
using namespace std;

class Fraction{
private:
  int numerator;
  int denominator;
public:
  Fraction() {numerator = 0; denominator = 1;}//called a constructor, same name as class
  Fraction(int n, int d) {//these constructors are the functions Fraction can use
    numerator = n;
    denominator = d;
  }
  //method (object oriented terminology)
  //member function (c++) - lets you access private variables
  int getNum(){ return numerator;}
  int getDen(){ return denominator;}
};

int main() {
  Fraction a; //0/0
Fraction b[100];
  //a.getNum() sending object a message saying "give me the numerator"
  cout << a.getNum() << "/" << a.getDen() << '\n';
  Fraction c(1,2); //1/2
  cout << c.getNum() << "/" << c.getDen() << '\n';
}
