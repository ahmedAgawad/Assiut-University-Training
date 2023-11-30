#include <iostream>
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	if (letter >= 'a' && letter <= 'y')
	{
		cout << (char)(letter + 1);
	}
	else if (letter == 'z')
	{
		cout << 'a';
	}
	return 0;
}