#include <iostream>
using namespace std;

int main(){
  int x = 0;
  while ( x < 8)
    cout << x; //would go forever printing 0
  //x = 9 - would execute zero times
  //semicolon ends loop - put curly braces
  /*while (x<8){
      cout << x;
      x ++;} - would give 1 2 3 4 5 6 7 8*/

  for (int i = 0; i < 5; i++)
    cout << i << "hello"; //single quotes only one character
  cout <<'\n';

  for (int i = 5; i > -2; i--)
    cout << i; // print 5 4 3 2 1 0 -1

  int sum = 0;
  for (int j = 2; j < 12; j +=2)
    sum+=j; //j = 2, 4, 6 ,8 10, += is the same thing as sum =  sum + j = add all numbers
  cout << sum;

  for (int i = 1, i < 1024; i *=2)
    cout << i; //1, 2, 4, 8, 16, 32,.. 512 last
  cout << '\n'

  for (int j = 2; j < 100; j *=3)
    cout << j; //2, 6, 18, 54
  cout << '\n'

  for (int j = 3; j < 100; j *= 3 + 1)//same thing as j*=4
    cout << j; //3, 12, 48
  cout << '\n'

  for (int j = 3; j < 100; j = j*3+1)//this is j *3 + 1
    cout << j;//3, 10, 31, 94
  cout << '\n'

  for (int k = 0; k<10; k *=2)
    cout <<k// =  0 and goes forever
  cout << '\n'
}
