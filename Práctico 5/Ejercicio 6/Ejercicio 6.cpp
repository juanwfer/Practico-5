// Ejercicio 6.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int V[150];
	int B[150];
	for(int i = 0; i < 150; i++) {
		V[i] = rand() % 50;
		cout << V[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < 150; i++) {
		B[i] = V[150 - 1 - i];
		cout << B[i] << " ";
	}
	cout << endl;
	system("pause");
  return 0;
}