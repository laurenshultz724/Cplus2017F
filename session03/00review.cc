#include <iostream>
#include <cstdint> //also use c++11
#include <string>
using namespace std;

int main(){
  uint8_t a= 0; //unsigned integer 8bits, 0-255, sizeof(a) = #of bytes = 1
  uint16_t b = 0; // usnigned integer 16bit 0 - 65535, sizeof(b) = 2 bytes
  uint32_t c = 1241241; //all for c++ 11 size = 4 bytes
  uint64_t d= 0; //size = 8 bytes

  int32_t i = -1241241;

  bool x = false; //sizeof(x)
  x = true;

  double d1 = 1.2345; //sizeof(d1) == 8
  float f = 1.5f;
  long double d2 = 1.2345L;
  char y = 'x';
  y = '\n'; //special character
  //also \t tab   \x0f character 0*16+15(hex)    \\    \'

  string s = "abc";


}
