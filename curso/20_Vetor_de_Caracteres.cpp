//Strings s�o vetores de caracteres;

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
	char str1[100], str2[100];

	cout << "Digite a primeira string: ";
	cin >> str1;
	cout << "Digite a segunda string: ";
	cin >> str2;

	if(strstr(str1, str2))
		cout << "eh substring" << endl;
	else
		cout << "nao eh substring" << endl;
	
	return 0;
}


/*
Algumas fun��es da biblioteca string.h:

isalpha = Retorna TRUE se o caracter for alfab�tico:

if (isalpha(nome[0]))
{
	cout << "caracter alfabetico" << endl;
}
else
{
	cout << "caracter numerico" << endl;
}

isdigit = Retorna TRUE se o caracter for um d�gito:

if (isdigit (nome[0]))
{
	cout << "letra" << endl;
}
else
{
	cout << "numero" << endl;
}

isupper / islower = Retorna TRUE se o caracter for um mai�sculo:

if (isupper (nome[0]))
{
	cout << "mai�sculo" << endl;
}
else
{
	cout << "min�sculo" << endl;
}

if (isspace (nome[0]))
{
	cout << "espaco em branco" << endl;
}
else
{
	cout << "nao eh espaco em branco" << endl;
}

strcmp(nome1, nome2) = Compara se s�o strings iguais

tolower / toupper = Converte para min�sculo e mai�sculo

strcat (nome, sobrenome) = Concaternar strings

www.cplusplus.com/reference

*/