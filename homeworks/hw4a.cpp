#include <iostream>
#include <string>
using namespace std;

/*
friend functions outside look like:
  operator+ (a,b)
  operator -(a)
*/

class Complex {
private:
  double real, imag;
public:
  Complex (){
    real = 0;
    imag = 0;
  }
  Complex (double a){
    real = a;
    imag = 0;
  }
  Complex (double a, double b){
    real = a;
    imag = b;
  }
  double getReal () const {return real;}
  double getImag () const {return imag;}

  friend Complex operator+(Complex x, Complex y){
    Complex z(x.getReal() + y.getReal(), x.getImag() + y.getImag());
    return z;
  }
  friend Complex operator- (Complex x){
    Complex z(-x.getReal(), -x.getImag());
    return z;
  }
  friend std::ostream& operator<< (std::ostream& s, const Complex& x){
    return s << x.getReal() << " + " << x.getImag() << "i" << '\n';
  }
};


int main() {
	Complex c1(1.5,2.0);
	Complex c2(-1.3); // -1.3 + 0.0i
	Complex c5;  // 0+0i
	Complex c3 = c1 + c2;
	Complex c4 = -c1; // unary operator has only one parameter
	cout << c1 << c3 << c4 << '\n';
}
