/*Lauren Shultz
HW 1d EE553WS
no collaboration*/

#include <iostream>
#include <sstream>
using namespace std;

int main(){
  float n;
  float sum1 = 0;
  float sum2 = 0;

  for (n = 1; n <= 100; n++){
    sum1 = 1/n + sum1;
  }

  cout << "The sum forwards is " << sum1 << '\n';

  for (n = 100; n >= 1; n--){
    sum2 = 1/n + sum2;
  }

  cout <<"The sum backwards is " << sum2 << '\n';
  cout << "The difference is " << sum1 - sum2 << '\n';

  double n1;
  double sum11 = 0;
  double sum22 = 0;

  for (n1 = 1; n1 <= 100; n1++){
    sum11 = 1/n1 + sum11;
  }

  cout << "The sum forwards is " << sum11 << '\n';

  for (n1 = 100; n1 >= 1; n1--){
    sum22 = 1/n1 + sum22;
  }

  cout <<"The sum backwards is " << sum22 << '\n';
  cout << "The difference is " << sum11 - sum22;

}
