#include <iostream>
#include <stdlib.h>

using namespace std;
void LlegirSenar(){
  int senar;
  bool on = true;
  while (on){
	cout << "Introduir un nombre senar" << endl;
	cin >> senar;
		if (senar % 2){
		cout << "Correcte" << endl;
		on = false;
		}
		else{
			cout << "ERROR: El nombre introduit es parell" << endl;
		}
	}
}

int main(){
	LlegirSenar();
	
  return 0;
}

int Aleatori(int NumMin,int NumMax){
	int a;
	a = 1 + (rand() % (5));
	return a;
}

int JocRPSLS(){
	
}

int MissatgeRPSLS(){
	int player1; player2;
	player1 = LlegirNombre();
	player2 = Aleatori()
	
	switch (player1){
		case 1:
			switch (player2){
				case 1:
					cout << "Empate";
				case 2:
					cout << "Guanya paper. player 2"
				case 3:
					cout << "Guanya pedra. player 1"
				case 4:
					
				case 5:
				
				default:
			}
				
		case 2:
		
		case 3:
		
		case 4:
		
		case 5:
		
		default: 
	}
}

