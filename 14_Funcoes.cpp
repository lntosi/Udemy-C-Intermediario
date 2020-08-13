#include <iostream>

using namespace std;

void fatorial();

int main(int argc, char *argv[])
{
	fatorial();
	return 0;
}


void fatorial()
{
	int num, fat = 1;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	for(int i = 1; i < num ; i++)
	{
		fat = fat * (i + 1);
	}
	cout << "Fatorial: " << fat << endl;
}
