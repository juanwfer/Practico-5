// Ejercicio 3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int in[5];
	for(int i = 0; i < 5; i++) {
		do {
			cout << "Ingrese un valor entre 0 y 30:\n>>>";
			cin >> in[i];
		} while(in[i] < 0 || in[i] > 30);
	}
	cout << endl;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < in[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
  return 0;
}

