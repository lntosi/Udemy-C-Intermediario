#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	s2=s1;
	reverse(s2.begin(), s2.end());

	cout << s2 << endl;

	if (s1 == s2)
	{
		cout << "A palavra digitada eh palindrome." << endl;
	}
	else
	{
		cout << "A palavra digitada nao eh palindrome." << endl;
	}

	return 0;
}
