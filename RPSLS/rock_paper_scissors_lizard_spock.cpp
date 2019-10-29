#include <iostream>
#include <stdlib.h>

using namespace std;
int Aleatori(int min, int max){
	int num;
	num = 1 + rand() % 5;
	return num;
}

int PresentacioJoc() {
	cout << "Pedra, paper, tisores, llangardaix, Spock es un joc d'atzar aplicacio del popular Pedra, paper, tisores " << endl;
	cout << "Creat per Sam  Kass amb Karen Bryla http://www.samkass.com/theories/RPSSL.html" << endl;
	cout << "Popularitzat per Sheldon Cooper a la serie Big Bang Theory." << endl;
	cout << "Es fa servir per solucionar una entre disputa Sheldon i Raj en el capitol The Lizard - Spcok Expansion" << endl << endl;
	cout << "El joc es al millor de N partides on N es un nombre senar"<<endl<<endl;
	return 0;
}

int LlegirSenar() {
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
	return senar;
}

int MenuRPSLS() {
	
	cout << "Escull entre:" << endl;
	cout << "1 - Rock" << endl;
	cout << "2 - Paper" << endl;
	cout << "3 - Scissors" << endl;
	cout << "4 - Lizard" << endl;
	cout << "5 - Spock" << endl<<endl;
	return 0;
	}

int LlegirNombre(){
	int opcion;
	//cout << "Entra un valor entre 1 i 5:"<<endl;
	do
	{
		cout << "Entra un valor entre 1 i 5:" << endl;
		cin >> opcion;
		if (opcion > 5 || opcion < 1) {
			cout << "Error: valor fora de l'interval" << endl << endl;;
			//cout << "Entra un valor entre 1 i 5:" << endl;
			//cin >> opcion;
		}
	
	} while ((opcion<1) || (opcion>5));
	return opcion;
}

int JocRPSLS(int player1,int player2) {
	
int  win;

if (player1 == player2) cout << "Empat!!!";
if ((player1 == 1 && player2 == 3) || (player2 == 1 && player1 == 3))
    cout << "Rock crushes Scissors. ";
if ((player1 == 1 && player2 == 4) || (player2 == 1 && player1 == 4)) 
    cout << "Rock crushes Lizard. ";
if ((player1 == 2 && player2 == 1) || (player2 == 2 && player1 == 1)) 
    cout << "Paper covers Rock .";
if ((player1 == 2 && player2 == 5) || (player2 == 2 && player1 == 5)) 
    cout << "Paper disproves Spock. ";
if ((player1 == 3 && player2 == 2) || (player2 == 3 && player1 == 2)) 
    cout << "Scissors cuts Paper. ";
if ((player1 == 3 && player2 == 4) || (player2 == 3 && player1 == 4)) 
    cout << "Scissors decapitates Lizard. ";
if ((player1 == 4 && player2 == 2) || (player2 == 4 && player1 == 2)) 
    cout << "Lizard eats Paper. ";
if ((player1 == 4 && player2 == 5) || (player2 == 4 && player1 == 5)) 
    cout << "Lizard poisons Spock. ";
if ((player1 == 5 && player2 == 1) || (player2 == 5 && player1 == 1)) 
    cout << "Spock vaporizes Rock. ";
if ((player1 == 5 && player2 == 3) || (player2 == 5 && player1 == 3)) 
    cout << "Spock smashes Scissors. ";

if (player1 == 1 && player1 != player2 && (player2 != 3 && player2 != 4)){
	cout << "Guanya Sheldon Cooper!!!" << endl;
	win = 0;
}
else if (player1 == 1 && player1 != player2 && (player2 == 3 || player2 == 4)){
	cout << "Guanyes Tu!!!" << endl;
	win = 1;
}
if (player1 == 2 && player1 != player2 && (player2 != 1 && player2 != 5)){
	cout << "Guanya Sheldon Cooper!!!" << endl;
	win = 0;
}
else if (player1 == 2 && player1 != player2 && (player2 == 1 || player2 == 5)){
	cout << "Guanyes Tu!!!" << endl;
	win = 1;
}
if (player1 == 3 && player1 != player2 && (player2 != 2 && player2 != 4)){
	cout << "Guanya Sheldon Cooper!!!" << endl;
	win = 0;
}
else if (player1 == 3 && player1 != player2 && (player2 == 2 || player2 == 4)){
	cout << "Guanyes Tu!!!" << endl;
	win = 1;
}
if (player1 == 4 && player1 != player2 && (player2 != 2 && player2 != 5)){
	cout << "Guanya Sheldon Cooper!!!" << endl;
	win = 0;
}
else if (player1 == 4 && player1 != player2 && (player2 == 2 || player2 == 5)){
	cout << "Guanyes Tu!!!" << endl;
	win = 1;
}
if (player1 == 5 && player1 != player2 && (player2 != 1 && player2 != 3)){
	cout << "Guanya Sheldon Cooper!!!" << endl;
	win = 0;
}
else if (player1 == 5 && player1 != player2 && (player2 == 1 || player2 == 3)){
	cout << "Guanyes Tu!!!" << endl;
	win = 1;
}
return win;
}

int MissatgeRPSLS(int win1,int win2, int numPartides){
	if (win1 == ((numPartides/2) + 1)) return 1;
	else if (win2 == ((numPartides/2) + 1)) return 0;
	else {
	return 2;
	}
}



int main() {
    int player1, player2, numPartides, on = 2, win1 = 0, win2 = 0, numP, win;
		PresentacioJoc();
		numPartides = LlegirSenar();
		numP = numPartides;
		do{
	    	MenuRPSLS();
	    	player2 = Aleatori(1, 5);
	    	player1 = LlegirNombre();
	    	win = JocRPSLS(player1, player2);
			
			if (win == 1) {
				win1++;
				numP--;
			}
			if (win == 0) {
				win2++;
				numP--;
			}
				on = MissatgeRPSLS(win1, win2, numPartides);
		}while(on == 2);
		cout << "MARCADOR -- Sheldon " << win2 << " Tu " << win1 << endl;
		if (on == 1){
			cout << "Tu ets el guanyador";
		}
		else if (on == 0){
			cout << "El guanyador es Sheldon";
		}
	return 0;
}


