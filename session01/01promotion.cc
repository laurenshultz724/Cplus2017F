#include <iostream>
using namespace std;

int main() {
float f = 1.5f; // 1.5000000 - don't use float!
double d = 1.5; // 1.50000000000000
long double e = 1.50000000000000000000000L;//depends on implementation
std::string dummyVariable;

double Na = 6.022e+23; //exponential notation

double d1 = 1 + 1.5; //type promote 1 --> double (1.0)
double d2 = 3/2; // first compute integer 3/2 then convert to double so =1
double d3 = 1.5f * 3; //promote 3 --> float (3.0f) --> convert to double
//subtle question, does it do teh arithmetic at full precision? Don't know!

cout << d1 << '\n' << d2 << '\n' << d3 << '\n';
cout << "press any key and enter to continue";
cin >> dummyVariable;

return 0;
}
