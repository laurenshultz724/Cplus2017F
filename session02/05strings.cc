#include <iostream>
#include <string>
using namespace std;

int main(){
  string a = "abc";
  cout << a << '\n';
  cout << a[0] << '\n'; //prints first letter of string a
  cout << a[a.size()-1] << '\n'; //prints last letter of string

  a += "def";
  a += a[3];
  cout << a << '\n';
  //use for building string in reverse!

}
