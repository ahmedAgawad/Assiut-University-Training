#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void printEvenIndices(long long arr[], int currentIndex)
{

	if(currentIndex == 0) {
		cout << arr[currentIndex];
		return;
	}

	if((currentIndex % 2) == 0) {
		cout << arr[currentIndex] << " ";
	}

	printEvenIndices(arr, currentIndex - 1);
}

int main()
{
	int n;
	cin >> n;

	long long arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	printEvenIndices(arr, n - 1);

	return 0;
}