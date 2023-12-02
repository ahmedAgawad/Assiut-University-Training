#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int firstDigit, secondDigit;
	firstDigit = n % 10;
	secondDigit = n / 10;

	if (firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}