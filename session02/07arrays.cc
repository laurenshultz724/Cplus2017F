#include <iostream>
using namespace std;

int main(){
  int a = 5;
  //string s = "abc"; // s[0] = 'a', s[1] = 'b', s[2] = 'c'

  int x[5]; //x[0]....x[1]...x[4] //not initialized

  int y[5] = {5,1,-9,-9,16}; //initialized
  int z[] = {5,4,3}; //will automatically be three
  int w[10] = {5,4,3};// will initialize first three, will fill in zeros for the rest of the digits
  const int SIZE = 10
  int b[SIZE] = {0}; //standard way to fill array with 0

  for (int i = 0; i < SIZE; i++){
    b[i] = i; //writes array [0 1 2 3 4 5 6 7 8 9]
  }
  for (int i = 0; i <sizeof(b) / sizeof(int);/*shows how many elements in b */i++){
    b[i] = SIZE - i - 1; //gives array [9 8 7 6 5 4 3 2 1 0]
  }
  //make table -> identity matrix (1's in diagonal) 4x4
  double m[4][4] = {
    {1,0,0,0},
    {0,1,0,0},
    {0,0,1,0},
    {0,0,0,1}
  };//manual way
  for (int i = 0; i < 4; i++){
    for (int j = 0; j<4; j++)
    m[i][j] *= 2; //these two loops double every item in the matrix m
  }

  cout << "please enter matrix size";
  int n;
  cin >> n;
  double m2[n]; //double *m2 = new double[n]
  for (int i = 0; i < n; i++)
    m2[i] = 0;

  double m3 [n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cout << m3[i][j] << " ";
      cout << '\n';

}
