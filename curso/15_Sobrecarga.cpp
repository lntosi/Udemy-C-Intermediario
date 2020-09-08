//Sobrecarga de nomes de funções significa utilizar o mesmo nome de funções
//com argumentos diferentes (tipo ou quantidade).

#include <iostream>

using namespace std;

int soma(int n1, int n2)
{
	return n1 + n2;
}

int soma(int n1, int n2, int n3)
{
	return n1 + n2 + n3;
}

int main(int argc, char *argv[])
{
	cout << soma(1, 2) << endl;
	cout << soma(1, 2, 3) << endl;
	return 0;
}
