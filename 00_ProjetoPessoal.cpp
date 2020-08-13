#include <iostream>

using namespace std;

void fatorial();
void soma();

int main(int argc, char *argv[])
{
	char op;

	cout << "Operacoes Disponiveis:" << endl;
	cout << "1 - Fatorial" << endl;
	cout << "2 - Soma" << endl;
	cout << "Digite a operacao desejada: ";
	cin >> op;

	switch(op)
	{
	case '1':
		fatorial();
		break;
	case '2':
		soma();
		break;
	default:
		break;
	}

	return 0;

}

void fatorial()
{
	int num, fat = 1;

	cout << "Digite um numero: ";
	cin >> num;

	for(int i = 1; i < num ; i++)
	{
		fat = fat * (i + 1);
	}
	cout << "Fatorial: " << fat << endl;
}

void soma()
{
	int num1, num2, resultado;

	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;

	resultado = num1 + num2;
	
	cout << "Soma: " << resultado << endl;
}
