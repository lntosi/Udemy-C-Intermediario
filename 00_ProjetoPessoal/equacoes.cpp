#include <iostream>
#include <math.h>

using namespace std;

void calcularFatorial()
{
	int num, fat = 1;
	cout << "Digite um numero: ";
	cin >> num;
	for(int i = 1; i < num ; i++)
	{
		fat = fat * (i + 1);
	}
	cout << "Fatorial: " << fat << "\n\n";
}

void calcularPotencia()
{
	double base, expoente, resultado;
	cout << "Digite a base: ";
	cin >> base;
	cout << "Digite o expoente: ";
	cin >> expoente;
	resultado = pow(base, expoente);
	cout << base << " elevado a " << expoente << ": " << resultado << "\n\n";
}

void calcularRaiz()
{
	double radicando, indice, raiz;
	cout << "Digite o radicando: ";
	cin >> radicando;
	cout << "Digite o indice: ";
	cin >> indice;
	raiz = pow(radicando, 1 / indice);
	cout << "Raiz: " << raiz << "\n\n";
}
