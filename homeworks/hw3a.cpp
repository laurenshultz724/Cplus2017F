/*Lauren Shultz
10/10/17
HW3a - Complex numbers class
no collaboration */

#include <iostream>
#include <cmath>
using namespace std;

class Complex{
private:
  double real;
  double imaginary;
public:
  Complex () {real = 1; imaginary = 0;}
  Complex (double r, double i){
    real = r;
    imaginary = i;
  }
  double getReal() const { return real;} //read only methods have const AFTER the method name
  double getImag() const { return imaginary;}
  void print () const {
    cout << real << " + " << imaginary << 'i';
  }
friend Complex add (Complex x, Complex y);
    Complex add (Complex y){
        Complex sum;
        sum.real = real + y.real;
        sum.imaginary = imaginary + y.imaginary;
        return sum;
    }
};


int main(){

	Complex c1(1.0, 2.5); // real=1.0, imag = 2.5
	Complex c2(2.0, 1.5);
	const Complex c3 = c1.add(c2);  // add two complex numbers
	c3.print(); cout << "\n";
	cout << c3.getReal() << ", " << c3.getImag();

}
