// Ponteiro: vari�vel que cont�m o endere�o de outra vari�vel

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
