/*lauren Shultz
HW 2e - functions
9/30/17
no collaboration*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long long fact(int n){ // factorial using loop
  long long x = 1;
  while (n >= 1) {
    x = x * n;
    n = n-1;
  }
return x;
}

long long fact2(int n){ //factorial using recursion
  if (n==1){
    return 1;
  }
  return n * fact2(n-1);
//recursion is just using the function inside itself to use a previous term
}
long long fibo(int n){ //fibonacci number in sequence n using loop
  long long sum = 0;
  int term1 = 1;
  int term2 = 1;

  for (int x = 3; x <= n; x++){
    sum = term1 + term2;
    term1 = term2;
    term2 = sum;
  }
return sum;

}
long long fibo2(int n){ //fibonacci number in sequence n using recursion
  if (n <=2){
    return 1;
  }
  return (fibo2(n-1) + fibo2(n-2));
}
long long choose(int n, int r){//Cnr - choose probability
  long long x = 1;
  int y = 1;
  long long sum = 1; // n-r factorial
  int i = n - r;
  long long c = 0;

/*  while (i >= 1){ // sum = n - r factorial
    sum = sum * i;
    i = i - 1;
  }*/
  while (n > i) { // x = n factorial
    x = x * n;
    n = n-1;
  }
  while (r >= 1) { // y = r factorial
    y = y * r;
    r = r-1;
  }
  c = x / y; //choose
  return c;
}

int main(){
  cout << fact(5) << ' ' << fact2(5) << '\n';
  cout << fact(15) << ' ' << fact2(15) << '\n';
  cout << fibo(5) << ' ' << fibo2(5) << '\n';
  cout << fibo(13) << ' ' << fibo2(13) << '\n';
  cout << choose(52,6) << '\n';
}
