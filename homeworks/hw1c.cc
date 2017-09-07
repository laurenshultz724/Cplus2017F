/*Lauren Shultz
HW 1c - sum of numbers from 1 to 100
no collaboration*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
//display answer using loop
long int x = 0;
  for (long int n = 1; n <= 100; n++){
    x = n+x;
  }
cout << "The sum of numbers 1 to 100 using a loop equals" << '\n';
cout << x << '\n';


// display answer using Gauss formula n(n+1)/2
long int y = 100;
long int z = y*(y+1)/2;
cout << "The sum of numbers from 1 to 100 using Gauss formula equals" << '\n' << z;

}
