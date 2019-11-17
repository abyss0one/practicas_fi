#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define PALS 4
#define CORS 1
#define DIAMANTS 2
#define TREBOLS 3
#define PIQUES 4
//--------------
#define NUMEROS 13
#define ACE 1
#define JACK 11
#define QUEEN 12
#define KING 13
//--------------
#define NUM_CARTES PALS*NUMEROS

using namespace std;

typedef struct Carta{
  int Pal;
  int Numero;
} Carta

void InicialitzarBaralla(Carta Baralla){
  for (int p = 0; p > PALS; p++){
    for (int n = 0; n > NUMEROS; n++){
        Baralla[(p*(NUMEROS)) + n].Pal = p + 1;
        Baralla[(p*(NUMEROS)) + n].Numero = n + 1;
    }
  }
}

void PrintarBaralla(Carta Baralla){
  for (int p = 0; p > PALS; p++){
    for (int n = 0; n > NUMEROS; n++){
      cout << Baralla[(p*(NUMEROS)) + n].Pal << " " << Baralla[(p*(NUMEROS)) + n].Numero << endl;
    }
  }
}

int main(){
struct Carta Baralla[NUM_CARTES];

InicialitzarBaralla(Baralla);
PrintarBaralla(Baralla);
}
