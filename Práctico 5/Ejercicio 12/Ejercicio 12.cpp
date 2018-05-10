// Ejercicio 12.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int M[10][10] = {{2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 2, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, -1, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
									 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

	int total = 0;
	for(int i = 0; i < 10; i++) {
		total += M[i][i];
	}
	cout << total<< endl;
	system("pause");
  return 0;
}

