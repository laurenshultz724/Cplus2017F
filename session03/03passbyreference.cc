#include <iostream>
#include <cstdint>
#include <string>
#include <cmath>
using namespace std;
/* (x,y) ==> (r,theta)
(r,theta) ==> (x,y)
r = sqrt(x^2+y^2)
theta = arctan(y/x)*/

void rect2polar(double x, double y, double& r, double& theta){ // cannot use function to return 2 values, so use reference
  r = sqrt(x*x + y*y);
  theta = atan2(y, x);

}
int main() {
  double x, y, r ,theta;
cout << "Enter x and y "<< '\n';
  cin >> x >> y;
  rect2polar(x,y,r,theta);
  cout << r << '\t' << theta << '\n';
}
