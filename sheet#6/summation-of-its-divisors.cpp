#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n, sum = 0;
	cin >> n;

	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			sum += i;
			if (n / i != i)
			{
				sum += (n / i);
			}
		}
	}

	cout << sum;
	return 0;
}