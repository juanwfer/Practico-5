// Ejercicio 17.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char phrase[100];
	int start, finish;
	cout << "Ingrese una frase de hasta 100 caracteres:\n>>> ";
	cin.getline(phrase, 100);
	int n = 0;
	while(phrase[n] != '\0') {
		n++;
	}
	do {
		cout << "Ingrese el primer numero:\n>>> ";
		cin >> start;
		start--;
	} while(start < 0 || start >= n);
	do {
		cout << "Ingrese el ultimo numero:\n>>> ";
		cin >> finish;
	} while(finish > n || finish < start);
	for(int i = start; i < finish; i++)
		cout << phrase[i];
	cout << endl;
	system("pause");
  return 0;
}

