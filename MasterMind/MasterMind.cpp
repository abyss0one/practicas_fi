#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

using namespace std;
int Aleatori(int min, int max){
	int num;
	num = min + rand() % max + 1;
	return num;
}

int Menu(){
	cout << "MASTER MIND" << endl << endl;
	cout << "Escull una opcio:" << endl << endl;
	cout << "Opcio 1 Ajuda" << endl;
	cout << "Opcio 2 Jugar" << endl;
	cout << "Opcio 3 Sortir" << endl;
	return 0;
}
int GenerarCodiOcult(int CodiMaster[], int dim){
	for (int i = 0; i < dim; i++){
		CodiMaster[i] = Aleatori(0,9);
	}
	for (int i = 0; i < dim; i++){
	cout <<	CodiMaster[i] << " ";
	}
	cout << endl;
	return 0;
}

void IntToArray (int Nombre, int Codi[], int dim){
	for (int i = dim; i > 0; i-- ){
		Codi[i-1] = Nombre % 10;
		Nombre = Nombre	/ 10;
	}
	for (int i = 0; i < dim; i++){
	cout <<	Codi[i] << " ";
	}
	cout << endl;
}

int NombreEncerts(int CodiMaster[], int CodiBreaker[], int dim){
    int Encerts;
    for (int i = 0; i < dim; i++){
	if (CodiMaster[i] == CodiBreaker[i]) Encerts++;
    }
    return Encerts;
}

int main(){
	int dim = 4;
	int CodiMaster[dim], CodiBreaker[dim];
	int Nombre;

	srand((unsigned)time(NULL));
	GenerarCodiOcult(CodiMaster, dim);
	cin >> Nombre;
	IntToArray(Nombre, CodiBreaker, dim);
	cout << NombreEncerts(CodiMaster, CodiBreaker, dim);
	return 0;
}
