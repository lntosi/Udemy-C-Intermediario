// Ponteiro: vari�vel que cont�m o endere�o de outra vari�vel

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int* vet = new int[10];

	cout << "Digite um numero: ";
	cin >> *(vet);
	cout << "Voce digitou: " << *(vet) << endl;

	cout << "Digite outro numero: ";
	cin >> *(vet + 1);
	cout << "Voce digitou: " << *(vet + 1) << endl;

	delete[] vet;
	vet = NULL;

	return 0;
}
