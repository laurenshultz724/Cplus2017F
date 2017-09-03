#include <iostream>
using namespace std;

int main() {
  for (int i=1; i<=10; i++) { //counts from 1 to 10, adds 1
    cout << i; }
  cout << '\n';
  float x; //x is visible after the loop is over
  for (x = 0.0; x <=10.0f; x += 0.1f) // counts from 0.0 to 10, adds 0.1
    cout << x << " "; //causes roundoff error
  cout << '\n';

  //float x;
  //for (x = 0.0, x <= 10000000.0f; x+= 0.1f) // float is 8bit, cannot go past 10,000,000, x+y = x
    //;
    //cout << x << '\n';
    //cout << '\n';
  double y;
    for (y = 0.0, y <= 10000000.0f; y+= 0.1f) // double is 16 bit, works fine
    ;
  cout << x << '\n';
  cout << '\n';
/*

1/2 = 0.5
1/4 = 0.25
1/10 = 0.1
1/3 = 0.33333333333
BUT
for a computer, stored in base 2 2^-1, 2^-2, 2^-3, 1/2, 1/4, 1/8
1/10 = (in binary) 1/16 + 1/64 + 1/256 + ...
1/10 = .00010101010101.... ---> when you add 0.1 repeatedly, bad error



*/

}
