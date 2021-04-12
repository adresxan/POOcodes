#include <iostream>
#include <cmath>
using namespace std;
using std::string;

int suma(int a, int b){
  return a + b;
}
int resta(int a, int b){
  return a - b;
}
int multiplicacin(int a, int b){
  int i;
  int c = 0;
  for(i=1; i<=b; i++){
    c = suma(c, a);
  }
  return c;
}
float division(int a, int b){
  if(b!=0){
    return a/b;
  }
}
int potencia(int a, int b){
  int i;
  int c = 1;
  for(i=1; i<=b; i++){
    c = multiplicacin(c, a);
  }
  return c;
}
int cuadrado(int a){
  return potencia(a, 2);
}
float modulo(int a, int b){
  return a%b;
}
float raizEnesima(int a, float b){
  return pow(a, 1/b);
}
float raiz(int a){
  return raizEnesima(a, 2);
}
float logaritmo(double a){
  return log(a);
}
string binario(int a){
  string c;
  while(a/2 != 0){
    if(a%2==1){
      c = "1" + c;
      a = a/2;
    }
    else{
      c = "0" + c;
      a = a/2;
    }
  }
  if(a==1){
    c = "1" + c;
  }
  else{
    c = "0" + c;
  }
  return c;
}

int main() {
  int b, c, n, d, i;
  float a;
  cout<<"1. Suma de n numeros"<<endl;
  cout<<"2. Resta de n numeros"<<endl;
  cout<<"3. Multiplicacion de 2 numeros (usando la operacion suma)"<<endl;
  cout<<"4. Division de 2 numeros"<<endl;
  cout<<"5. Potenciacion (usando la operacion multiplicacion)"<<endl;
  cout<<"6. Cuadrado de un numero (usando la operacion potenciacion)"<<endl;
  cout<<"7. Modulo"<<endl;
  cout<<"8. Raiz n-sima de un numero"<<endl;
  cout<<"9. Raiz cuadrada de un numero (usando la operacion raiz n-sima)"<<endl;
  cout<<"10. Logaritmo natural de un numero"<<endl;
  cout<<"11. Cambio de base de un numero (decimal a binario)"<<endl;
  cout<<"\nDigite una opción: ";
  cin>>n;
  if(n==1){
    cout << "Indique cuántos números va a sumar: ";
    cin >> d;
    a = 0;
    for(i=1; i<=d; i++){
      cout << "Ingrese un valor: ";
      cin >> b;
      a = suma(a, b);
    }
    cout << a;
  }
  if(n==2){
    cout << "Indique cuántos números va a restar: ";
    cin >> d;
    cout << "Ingrese el primer valor: ";
    cin >> a;
    for(i=1; i<d; i++){
      cout << "Ingrese un valor: ";
      cin >> b;
      a = resta(a, b);
    }
    cout << a;
  }
  if(n==3){
    cout << "Indique cuántos números va a multiplicar: ";
    cin >> d;
    cout << "Ingrese el primer valor: ";
    cin >> a;
    for(i=1; i<d; i++){
      cin >> b;
      a = multiplicacin(a, b);
    }
    cout << a;
  }
  if(n==4){
    cout << "Indique cuántos números va a dividir: ";
    cin >> d;
    cout << "primer valor: ";
    cin >> a;
    for(i=1; i<d; i++){
      cout << "Ingrese un valor distinto a 0: ";
      cin >> b;
      a = division(a, b);
    }
    cout << a;
  }
  if(n==5){
    cout << "Ingrese la base y la potencia.\n";
    cout << "base: ";
    cin >> a;
    cout << "potencia: ";
    cin >> b;
    cout << "Resultado: " << potencia(a, b);
  }
  if(n==6){
    cout << "Ingrese el valor que quiere elevar al cuadrado: ";
    cin >> a;
    cout << "Resultado: " << cuadrado(a);
  }
  if(n==7){
    cout << "Ingrese los valores para realizar la modulación(a%b)\n";
    cout << "a: ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "Resultado: " << modulo(a, b);
  }
  if(n==8){
    cout << "Ingrese el valor al que le quiere sacar raíz: ";
    cin >> a;
    cout << "Ingrese el tipo de raíz (3, 4, 5, etc.): ";
    cin >> b;
    cout << "El resultado es: " << raizEnesima(a, b);
  }
  if(n==9){
    cout << "Ingrese el valor al que le quiere sacar raiz: ";
    cin >> a;
    cout << "Resultado: " << raiz(a);
  }
  if(n==10){
    cout << "ingrese el número al cuál quiere hallarle logaritmo: ";
    cin >> a;
    cout << "Resultado: " << logaritmo(a);
  }
  if(n==11){
    cout << "Ingrese el decimal a convertir a binario: ";
    cin >> a;
    cout << "Resultado: " << binario(a);
  }

  return 0;
}