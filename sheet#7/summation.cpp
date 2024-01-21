#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
long long sumArr(long long arr[], int currentIndex, long long &sum) {
	if(currentIndex == 0) {
		sum += arr[0];

		return sum;
	}

	sum += arr[currentIndex];
	sumArr(arr, currentIndex - 1, sum);
}

int main()
{
	int n;
	cin >> n;

	long long arr[n];
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sumArr(arr, n - 1, sum);

	cout << sum;

	return 0;
}