#include <iostream>
#include <ctime>
using namespace std;
int main() {
  srand(time(NULL));
  int var, i, x;
  cout << "Escoge una opción: 1. Piedra 2. Papel 3. Tijeras\n";
  cin >> x;
  var = rand() % (4 - 1) + 1;
  while (x > 3 || x < 0){
    cout << "Escoge una opción valida: ";
    cin >> x;
  }
  if(x == 1){
    cout << "Tú: Piedra.\n";
  }
  if(x == 2){
    cout << "Tú: Papel.\n";
  }
  if(x == 3){
    cout << "Tú: Tijeras.\n";
  }
  if(var == 1){
    cout << "Máquina: Piedra.\n";
  }
  if(var == 2){
    cout << "Máquina: Papel.\n";
  }
  if(var == 3){
    cout << "Máquina: Tijeras.\n";
  }
  while(x == var){
    cout << "Empate. Vuelve a escoger una opción\n";
    cin >> x;
    while(x < 0 || x > 3){
      cout << "Escoge una opción válida: ";
      cin >> x;
    }
    if(x == 1){
      cout << "Tú: Piedra.\n";
    }
    if(x == 2){
      cout << "Tú: Papel.\n";
    }
    if(x == 3){
      cout << "Tú: Tijeras.\n";
    }
    var = rand() % (4 - 1) + 1;
    if(var == 1){
      cout << "Máquina: Piedra.\n";
    }
    if(var == 2){
      cout << "Máquina: Papel.\n";
    }
    if(var == 3){
      cout << "Máquina: Papel.\n";
    }
  }
  if((x==1 && var==2)||(x==2 && var==3)||(x==3 && var==1)){
    cout << "Perdiste.";
  }
  if((x==1 && var==3)||(x==2 && var==1)||(x==3 && var==2)){
    cout << "Felicitaciones. Ganaste.";
  }
  return 0;
}