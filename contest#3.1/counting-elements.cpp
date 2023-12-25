#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == arr[i] + 1)
			{
				count++;
				break;
			}
		}
	}

	cout << count;

	return 0;
}