/*HW 1a
Lauren Shultz
did not collaborate with anyone
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  int x;

  cout << "Please enter a number" << '\n';
  cin >> x;

while (x> 1){
  int y = x % 2;

  if (y == 0) {
    x = x/2;
    cout << x << " ";
  }
  else {
    x = (3*x)+1;
    cout << x << " ";
  }
}

}
