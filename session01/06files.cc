#include <iostream>
#include <fstream> //read or write to/from file stream
using namespace std;

int main() {
  ofstream f("test.dat"); //ofstream prints to file test.dat
  f << "hello" << 5 << 2 + 3;
//in command window after you run it, type "cat" command then file name to view what's in file
  for (int i=0; i< 1000000; i++) // all numbers up to 1M, about 6M bytes = very big
    f << i; //input all numbers in loop to file
  return 0;
  //ifstream = read in from file
}
//c++ can write 60M bytes in 1 sec
