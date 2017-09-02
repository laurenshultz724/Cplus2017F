#include <iostream>
#include <cstdint>
using namespace std;
int x ; //global variable =if outside main and not set to value, then =0
int main() {
cout << "hello";
int a = 1; //see session1notes for description of integer sizes and declaring variables and strings
short int b = 2;
long c; // variables on stack (auto) are unitialized RANDOM
long long d;
unsigned int e = 2;
char f = 'x'; //single quotes

for (int32_t i=0; i<100000; i++);


cout << 3 * 4 << '\n'; //cout is print, does math operator, '\n' new line character
cout << 3+4 << '\n';
cout << 3-4 << '\n'; //int has to be signed
cout << 3 / 4 << '\n'; //c language will print 0
cout << 3 % 4 << ' ' << 4%4 << 5 % 4 << 6 % 4 << '\n'; //% is remainder
cout << -3 / 4 << '\n'; //will give negative

cout << 2 + 3 * 4 << '\n' ; //order of operations
cout << 2 / 3 * 3 + 1 / 2 * 2 << '\n';//left to right = 0
cout << 2 * 3 / 3 + 1 * 2 / 2 << '\n';// 3

}
