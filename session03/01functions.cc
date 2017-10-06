#include <iostream>
#include <cstdint>
#include <string>
using namespace std;

inline int f(int x) { // equivalent f(x) = x*x
  return x*x;} //inline = paste inside code wherever f is used

int main(){
  double y = 0;
  for (uint64_t i = 0; i < 1000000000LL; i++){
  y = f(2); // inefficient than 2*2
}//loops a billion times, use time a.exe takes only 2.2 seconds, with optimization -O2 runs 0.021 seconds
  cout << y << '\n';
  //optimizer doesn't make it faster it just eliminates repeated things
}
