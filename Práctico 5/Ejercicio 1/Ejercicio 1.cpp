// Ejercicio 1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float values[10];
	float avg = 0;
	int less = 0, more = 0;
	for(int i = 0; i < 10; i++) {
		cout << "Ingrese un valor:\n>>> ";
		cin >> values[i];
		avg += values[i];
	}
	avg /= 10;
	cout << endl << "El promedio es de " << avg << "\n\n";
	for(int i = 0; i < 10; i++) {
		if(values[i] < avg) less++;
		else more++;
	}
	cout << "Hay " << less << " numeros menores al promedio y " << more << " numeros mayores o iguales.\n\n";
	system("pause");
  return 0;
}

