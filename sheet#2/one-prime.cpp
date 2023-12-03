#include <iostream>
using namespace std;

int main()
{
	long long x, factorNum{0};
	cin >> x;

	for (long long i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			++factorNum;
		}
	}

	if (factorNum == 2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}