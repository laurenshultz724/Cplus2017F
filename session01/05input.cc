#include <iostream>
#include <string>
#include <sstream> //read from string

using namespace std;

int main() {
  string line;
  double x,y,z;
  while (!cin.eof()) {
    getline(cin, line);
    istringstream thisline(line); //each time you read a line create new string
    thisline >> x >> y >> z;
    cout << x << "," << y <<  "," << z << '\n';
  }


  return 0;
}
