/*Lauren Shultz
HW 2 c - counting primes
9/29/17
no collaboration */

#include <iostream>
#include <string>
#include <cmath>
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

int countPrimes (unsigned long int a, unsigned long int b){
  unsigned long int sum = 0;
  for (unsigned long int n = a; n <= b; n++){
  sum = isPrime(n) + sum;
  }
  return sum;
}


int main(){

unsigned long int i;
unsigned long int j;
cout << "Enter a range of numbers (2 numbers)" << '\n';
cin >> i;
cout << '\n';
cin >> j;
cout << "The number of primes in your range is "<< countPrimes(i,j) << '\n';

}
