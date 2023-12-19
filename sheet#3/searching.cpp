#include <iostream>
using namespace std;

int main()
{
	const int size{100000};
	long long arr[size];

	int n, pos{-1};
	cin >> n;

	long long x;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			pos = i;
			break;
		}
	}

	cout << pos;

	return 0;
}