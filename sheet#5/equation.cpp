#include <iostream>
#include <cmath>
using namespace std;

long long equation(int x, int n)
{
	long long sum{0};

	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			long long result = 1;
			int exponent = i;
			while (exponent != 0)
			{
				result *= x;
				--exponent;
			}
			sum += result;
		}
	}
	return (sum - 1);
}

int main()
{
	int x, n;
	cin >> x >> n;
	cout << equation(x, n);
	return 0;
}