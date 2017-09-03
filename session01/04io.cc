#include <iostream>
using namespace std;

int main () { //returns integer "main"
  cout << "hello";
  cerr << "testing\n"; //if you redirect output cout to file, cerr will still show in command line
  //to redirect to file, in command > filename
int a;
float b;
cin >> a >>  b;
cout << a << " " << b << '\n';
cout << a + b; //if you type not number, it fails defaults to zero and doesn't read anything else


return 0;

}
