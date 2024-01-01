#include <iostream>
using namespace std;

long long getMin(long long arr[], int size) {
	long long min {arr[0]};
	for (int i = 0; i < size; i++)
	{
		if(arr[i] < min) {
			min = arr[i];
		}
	}

	return min;
}

long long getMax(long long arr[], int size) {
	long long max{arr[0]};
	for (int i = 0; i < size; i++)
	{
		if(arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}

int main()
{
	int n;
	cin >> n;
	long long nums[n];

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	cout << getMin(nums, n) << " ";
	cout << getMax(nums, n);

	return 0;
}