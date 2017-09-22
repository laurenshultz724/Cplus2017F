/*Lauren Shultz
HW 1c - sum of numbers from 1 to 100
no collaboration*/

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
int main(){
float n;
float s = 0;

  for (n = 1.0; n <= 100.0f; n += 1.0f){
  s = 1/(n*n) + s;
  }
  float sqrs = sqrt(6*s);
cout << "The square root is " << sqrs << '\n';
//at about 100 the square root of (6*s) stops increasing after the 3rd digit after decimal
//about 3.13

float n1;
float s1 = 0;

  for (n1 = 1.0; n1 <= 500.0f; n1 += 1.0f){
    s1 = 1/(n1 * n1) + s1;
  }
  float sqrts1 = sqrt(6*s1);
  cout << "The new square root is "<< sqrts1 << '\n';

float n2;
float s2 = 0;

  for (n2 = 500.0; n2 > 1.0f; n2 -= 1.0f){
    s2 = 1/(n2 * n2) + s2;
  }
  float sqrts2 = sqrt(6*s2);
  cout << "The square root of the sum backwards is " << sqrts2 << '\n';
}
//the sum forwards at a higher number is much more accurate than the sum backwards
