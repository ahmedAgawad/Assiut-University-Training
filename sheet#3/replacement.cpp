#include <iostream>
using namespace std;

int main()
{
	const int size = 1000;
	long long arr[size];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > 0)
		{
			arr[i] = 1;
		}
		else if (arr[i] < 0)
		{
			arr[i] = 2;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}