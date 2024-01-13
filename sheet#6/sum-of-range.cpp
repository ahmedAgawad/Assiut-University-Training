#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long a, b, sumAll = 0, sumEven = 0, sumOdd = 0;
	cin >> a >> b;

	if (a > b)
	{
		swap(a, b);
	}

	sumAll = (b * (b + 1) / 2) - (a * (a + 1) / 2) + a;

	sumEven = ((b / 2) * ((b / 2) + 1)) - (((a - 1) / 2) * (((a - 1) / 2) + 1));

	sumOdd = pow(((b + 1) / 2), 2) - pow(((a) / 2), 2);
	cout << sumAll << endl
		  << sumEven << endl << sumOdd;
	return 0;
}