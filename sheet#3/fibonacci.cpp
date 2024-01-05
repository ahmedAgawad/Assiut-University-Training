#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long fib[50] = {0};
	for (int i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			fib[i] = 0;
		}
		else if (i == 1)
		{
			fib[i] = 1;
		}
		else
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}
	}

	cout << fib[n - 1];

	return 0;
}