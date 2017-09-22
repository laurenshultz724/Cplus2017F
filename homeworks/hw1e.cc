/*Lauren Shultz
HW 1e EE553WS*/

#include <iostream>
using namespace std;

int main() {
  long long x = 1;
  int n;
  cout << "Please enter a number" << '\n';
  cin >> n;

  while (n >= 1) {
    x = x * n;
    n = n-1;
  }

  cout << "The factorial of your number is " << x;
  return x;

}
