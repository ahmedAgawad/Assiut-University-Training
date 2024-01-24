#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
void suffSum(long long arr[], int n, int m, int currentIndex, long long &sum) {
	if(currentIndex == (n - m)) {
		sum += arr[currentIndex];
		return;
	}

	sum += arr[currentIndex];
	suffSum(arr, n, m, currentIndex - 1, sum);
}

int main()
{
	int n,m;
	cin >> n >> m;

	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	long long sum = 0;

	suffSum(arr, n, m, n-1, sum);

	cout << sum;

	return 0;
}