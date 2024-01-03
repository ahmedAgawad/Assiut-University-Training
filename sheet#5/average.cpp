#include <iostream>
#include <iomanip>
using namespace std;
 
double average(double arr[], int size) {
	double average, sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	average = sum / size;
	return average;
}

int main()
{
	int n;
	cin >> n;
	double arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << fixed << setprecision(6) <<  average(arr, n);
	return 0;
}