// Ponteiro: variável que contém o endereço de outra variável

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int* parray = new int[10];

	cout << "Digite um numero: ";
	cin >> *(parray);
	cout << "Voce digitou: " << *(parray) << endl;
	cout << "Endereco da variavel: " << &(parray) << endl;
	
	delete[] parray;
	parray = NULL;

	return 0;
}
