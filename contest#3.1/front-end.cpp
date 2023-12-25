#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	if (n % 2 == 0)
	{
		for (int i = 0; i < n / 2; i++)
		{
			cout << arr[i] << " " << arr[n - i - 1] << " ";
		}
	}
	else
	{
		for (int i = 0; i < ((n + 1) / 2); i++)
		{
			if(i == (((n+1) / 2 ) - 1)) {
				cout << arr[i];
			} else {
				cout << arr[i] << " " << arr[n - i - 1] << " ";
			}
		}
	}

	return 0;
}