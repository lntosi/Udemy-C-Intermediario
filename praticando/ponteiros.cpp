/*
Operadores de Ponteiros:
 Existem dois �novos� operadores que s�o utilizados
com ponteiros em C :
 & - Utilizado para obter o endere�o de uma vari�vel.
 * - Pode se comportar de duas maneiras:
    - Quando usado na declara��o indica que a vari�vel ser� um ponteiro.
    - Quando usado na manipula��o das vari�veis retorna o conte�do do ponteiro � utilizado para obter o conte�do do endere�o apontado.
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	int h;  // inteiro h
	int *x; // ponteiro pra inteiro, ainda n�o inicializado
	h = 5;  // valor atribu�do a h
	x = &h; // inicializa��o do ponteiro x

	cout << "h = " << h << "\t&h = "  << &h << endl;
	cout << "&x = " << &x << "\t*x = "  << *x << "\tx = "  << x << endl << endl;

	// h  -> conte�do de h
	// &h -> endere�o de h
	// x  -> endere�o da vari�vel que x est� apontando
	// &x -> endere�o do ponteiro x
	// *x -> conte�do da vari�vel que x est� apontando

	int y = 10;
	int *ptr;
	ptr = &y;
	*ptr = *ptr * y;

	cout << "*ptr = " << *ptr << endl;
	cout << "y = " << y << endl;
	cout << "ptr = " << ptr << endl;

	return 0;
}
