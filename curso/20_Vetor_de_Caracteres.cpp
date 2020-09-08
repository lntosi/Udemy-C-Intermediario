//Strings são vetores de caracteres;

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
Algumas funções da biblioteca string.h:

isalpha = Retorna TRUE se o caracter for alfabético:

if (isalpha(nome[0]))
{
	cout << "caracter alfabetico" << endl;
}
else
{
	cout << "caracter numerico" << endl;
}

isdigit = Retorna TRUE se o caracter for um dígito:

if (isdigit (nome[0]))
{
	cout << "letra" << endl;
}
else
{
	cout << "numero" << endl;
}

isupper / islower = Retorna TRUE se o caracter for um maiúsculo:

if (isupper (nome[0]))
{
	cout << "maiúsculo" << endl;
}
else
{
	cout << "minúsculo" << endl;
}

if (isspace (nome[0]))
{
	cout << "espaco em branco" << endl;
}
else
{
	cout << "nao eh espaco em branco" << endl;
}

strcmp(nome1, nome2) = Compara se são strings iguais

tolower / toupper = Converte para minúsculo e maiúsculo

strcat (nome, sobrenome) = Concaternar strings

www.cplusplus.com/reference

*/