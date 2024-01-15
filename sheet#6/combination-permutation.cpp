#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long long factorial(long long n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int main()
{
	long long a, b;
	cin >> a >> b;

	long long comb = factorial(a) / (factorial(a - b) * factorial(b));
	long long perm = factorial(a) / (factorial(a - b));

	cout << comb << " " << perm;

	return 0;
}