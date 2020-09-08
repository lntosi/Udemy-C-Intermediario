//Strings são vetores de caracteres;

#include <iostream>
#include <string.h>

using namespace std;

void inverte (char nome[])
{
	// Obter o tamanho da string
	// int tam;
	// for (tam  = 0; nome[tam]; tam++);
	int tam = strlen(nome);
	cout << tam << endl;

	// inverter a string
	for(int i = tam - 1; i >= 0 ; i--)
		cout << nome[i];
}

int main(int argc, char *argv[])
{
	char nome[] = "lucas";
	inverte (nome);

	return 0;
}