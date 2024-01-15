#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long long maxValue(long long arr[], long long &max , int currentIndex)
{
	
	if(currentIndex == 0) {
		if(arr[0] > max) {
			max = arr[0];
		}

		return max;
	}

	if(arr[currentIndex] > max) {
		max = arr[currentIndex];
	}

	maxValue(arr, max, currentIndex - 1);
}

int main()
{
	int n;
	cin >> n;
	long long arr[n], max;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	max = arr[n - 1];

	cout << maxValue(arr, max, n - 1);

	return 0;
}