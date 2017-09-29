/* Lauren Shultz
hw2b - primes
9/29/17
no collaboration*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


bool isPrime (unsigned long long p){
if (p > 1){ // this part makes sure that 1 does not return prime
  if (p % 2 != 0 && p % 3 != 0 && p % 5 != 0 && p % 7 != 0){ //if && is if and
    return 1;
}
  else if (p == 2 || p == 3 || p == 5 || p == 7){
    return 1;
}
  else
    return 0;
}
else
  return 0;
} // this function is to determine if it is a prime number

int main(){

unsigned long long n;
  cout << "Enter a number to see if it is prime " << '\n';
  cin >> n;

  if (isPrime(n) == 1)
    cout << "Your number is prime" << '\n';

  if (isPrime(n) == 0)
    cout << "Your number is not prime" << '\n';

}
