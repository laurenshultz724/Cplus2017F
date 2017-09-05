#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  int x;

  cout << "Please enter a number " << "\n";
  cin >> x;

  int y = x % 2;

  if (y == 0) {
    cout << "\n" << "Your number is even";
  }
  else {
    cout << "\n" << "Your number is odd";
  }

return 0;
}
