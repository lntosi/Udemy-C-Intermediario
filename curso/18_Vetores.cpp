#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	char vetorA[5] = {'1', '2', '3', '4', '5'};
	//Para imprimir o tamanho do vetor
	cout << sizeof(vetorA) << endl;

	int vetorB[5] = {1, 2, 3, 4, 5};
	
	//Para imprimir o tamanho do vetor - 5 inteiros = 4 Bytes
	cout << sizeof(vetorB) << endl;
	
	//Para imprimir um índice específico
	cout << vetorB[2] << endl;
	
    //For para imprimir todos os índices
	for(int i = 0; i < 5; i++)
	{
		cout << vetorB[i] << endl;
	}
	
	return 0;
}
