#include <iostream>
using namespace std;

int main()
{
	int n;
	long long x, max;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (i == 0 || x > max)
		{
			max = x;
		}

	}

	cout << max;

	return 0;
}