#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// rule 1. always use double (never float)
int main(){
  double x = 6.023e+22;
  double y = 1.23456789012345e-300;
  double z = 1.23456789012345e+308;

  for (float i = 0.0; i < 10.0; i+= 0.1)
    cout << i << ' ';
  cout << '\n';

  double j = 0;
  for (int i=0; i < 100; i++, j += 0.1)
    cout << j << " ";
  cout << '\n'; // gets rid of roundoff error

  double sum = 0;
  for (double x = 0; x < 1000000; x += 0.1)
    sum +=x;
  cout << sum << '\n'; // should be 50000005000000 -> shows roundoff error
}
