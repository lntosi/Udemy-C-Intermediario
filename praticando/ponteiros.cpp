/*
Operadores de Ponteiros:
 Existem dois “novos” operadores que são utilizados
com ponteiros em C :
 & - Utilizado para obter o endereço de uma variável.
 * - Pode se comportar de duas maneiras:
    - Quando usado na declaração indica que a variável será um ponteiro.
    - Quando usado na manipulação das variáveis retorna o conteúdo do ponteiro é utilizado para obter o conteúdo do endereço apontado.
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	int h;  // inteiro h
	int *x; // ponteiro pra inteiro, ainda não inicializado
	h = 5;  // valor atribuído a h
	x = &h; // inicialização do ponteiro x

	cout << "h = " << h << "\t&h = "  << &h << endl;
	cout << "&x = " << &x << "\t*x = "  << *x << "\tx = "  << x << endl << endl;

	// h  -> conteúdo de h
	// &h -> endereço de h
	// x  -> endereço da variável que x está apontando
	// &x -> endereço do ponteiro x
	// *x -> conteúdo da variável que x está apontando

	int y = 10;
	int *ptr;
	ptr = &y;
	*ptr = *ptr * y;

	cout << "*ptr = " << *ptr << endl;
	cout << "y = " << y << endl;
	cout << "ptr = " << ptr << endl;

	return 0;
}
