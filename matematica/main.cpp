#include <iostream>
#include "equacoes.h"

using namespace std;


int main(int argc, char *argv[])
{
	char op;
	while (op != 'x')
	{
		cout << "Operacoes Disponiveis:" << endl
			 << "1 - Fatorial" << endl
			 << "2 - Potencia" << endl
			 << "3 - Raiz" << endl
			 << "4 - Bhaskara" << endl
			 << "x - Fechar o Programa" << endl
			 << "Digite a operacao desejada: ";
		cin >> op;

		switch(op)
		{
		case '1':
			calcularFatorial();
			break;
		case '2':
			calcularPotencia();
			break;
		case '3':
			calcularRaiz();
			break;
		case '4':
			calcularBhaskara();
			break;
		default:
			if(op == 'x')
			{
				continue;
			}
			cout << "Opcao invalida. Escolha a opcao do menu." << "\n\n";
			break;
		}
	}
	if(op == 'x')
		cout << "O programa foi finalizado." << endl;

	return 0;

}
