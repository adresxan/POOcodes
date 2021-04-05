#include <iostream>
using namespace std;

int a = 1;

int funcion(int numln){
  a = a + 1;
  int numFin = numln * numln;

  return numFin;
}

int main(){
  cout << a + 2 * funcion(2) << endl;
  cout << a + 2 * funcion(2);

  return 0;
}