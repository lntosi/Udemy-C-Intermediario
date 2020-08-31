/* Esse módulo contém funções matemáticas */

#include <iostream>

using namespace std;

void fatorial()
{
	int n, fat = 1;
	cout << "Digite um numero para calcular o fatorial: ";
	cin >> n;
	for(int i = 1; i < n ; i++)
	{
		fat = fat * (i + 1);
	}
	cout << "Rasultado do Calculo do Fatorial: " << fat << endl;
}

void area_quadrado()
{
	int lado, area;
	cout << "Digite o lado do Quadrado: ";
	cin >> lado;
	area = lado * lado;
	cout << "Resultado do Area do Quadrado: " << area << endl;
}
