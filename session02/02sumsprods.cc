#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  for (int i = 0/* will crash because divide by 0*/; i <100; i++){
    sum += 1/i; // would not print decimal because int
  }
  cout << sum << '\n';


}
