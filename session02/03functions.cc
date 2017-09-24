#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void f(){ //takes no parameters and returns nothing
  cout <<"hello" << '\n'; //will print hello
}

int add( int a, int b){
  return a+b;//functions use temporary memory
}//input 2 numbers, then returns addition

double hypot(double a, double b){
  return sqrt(a*a + b*b);
}
void print (string msg, int n){//print string, how many times, cout << msg will print
  while (n>0){
    cout << msg;
    n = n-1;
  }
  cout << '\n';
}
//return a string repeating msg n times with space
string repeat(string msg, int n){
    string big = "";
    //??? doesn't work
}

// return a string that is in opposite order, example hello -> olleh
string reverse (string msg) {
  return "your answer goes here"; //doesn't work
}

int factorial (int n){
  long int x = 1;
  while (n >= 1) {
    x = x * n;
    n = n-1;
  }

}

char nextChar (char c){
  char d = c + 1;
  cout << d;
}

int main (){
  f(); //execute the function ->print hello

  int z = add(3,3);
  cout << z << '\n'; // will print 5
  cout << hypot(3,4) << '\n';

  print ("hello", 4);
  string big = repeat("yo",9);
  cout << big << '\n';
  cout << factorial (5) << '\n';
  nextChar('p');
}
