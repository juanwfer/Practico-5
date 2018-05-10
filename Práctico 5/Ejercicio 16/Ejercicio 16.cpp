// Ejercicio 16.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char table[128];
	for(int i = 0; i < 128; i++) {
		table[i] = i;
	}

	int choice;
	char ans;
	do {
		cout << "\nIngrese un numero para visualizar su representacion ASCII:\n>>> ";
		cin >> choice;
		cout << table[choice] << endl;
		cout << "Repetir(s/n)?\n>>> ";
		cin >> ans;
	} while(ans != 'n');

	cout << "Saliendo...";
  return 0;
}