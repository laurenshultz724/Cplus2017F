//in hw will give main and build class 

int main(){
  Complex c1(1.0, 2.5); //real 1.0, imaginary = 2.5
  Complex c2 (2.0, 1.5);
  Complex c3 = c1.add(c2); //add 2 complex numbers
  c3.print (); cout << '\n'
  cout << c3.getReal() << "," << c3.getImag();
}
