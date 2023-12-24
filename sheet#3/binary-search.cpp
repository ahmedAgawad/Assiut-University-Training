#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	long long arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);
	long long x;

	while (q > 0)
	{

		cin >> x;
		string ans = "not found";
		int low = 0, high = n - 1;

		while (low <= high)
		{
			int mid = low + (high - low) / 2;

			if (arr[mid] == x)
			{
				ans = "found";
				break;
			}
			if (arr[mid] < x)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}

		cout << ans << endl;
		q--;
	}

	return 0;
}