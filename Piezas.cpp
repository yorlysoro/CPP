#include <iostream>
#define PIEZAS 10
using namespace std;

int main(){
	struct Piezas {
		int codigo;
		float precio;
		char condicion;
		float peso;
	}piezas[PIEZAS], AUXPieza;
	
	int i, j, cambio = 1, cantPiezasMalas = 0;
	float montoTotal = 0, porcjPiezMal;
	for(i = 0; i < PIEZAS; i++){
		cout << "codigo: ";
		cin >> piezas[i].codigo;
		cout << "precio: ";
		cin >> piezas[i].precio;
		cout << "condicion: ";
		cin >> piezas[i].condicion;
		cout << "peso: ";
		cin >> piezas[i].peso;
		cin.ignore();
	}	
	
	for(i = 0; i < PIEZAS; i++){
		montoTotal += piezas[i].precio;
	}
	
	for(i = 0; i < PIEZAS; i++){
		if(piezas[i].condicion == 'm' || piezas[i].condicion == 'M'){
			if(piezas[i].precio < 10000)
				cantPiezasMalas += 1;
		}
	}
	
	porcjPiezMal = cantPiezasMalas * PIEZAS / 100;
	
	while(cambio == 1){
		cambio = 0;
		for(i = 0; i < PIEZAS-j; i++)
		{
			if(piezas[i].peso > piezas[i+1].peso){
				AUXPieza = piezas[i+1];
				piezas[i+1] = piezas[i];
				piezas[i] = AUXPieza;
				cambio = 1;
			}
		}
		j++;
	}
	for(i = 0; i < PIEZAS; i++){
		cout << "Codigo: " << piezas[i].codigo << endl;
		cout << "Peso: " << piezas[i].peso << endl;
	}
	cout << "Porcentaje Malas: " << porcjPiezMal << endl;
	return 0;
}
