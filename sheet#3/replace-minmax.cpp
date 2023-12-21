#include <iostream>
using namespace std;
 
int main()
{
	int size, min , max, indexMin, indexMax;
	cin >> size;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if(i == 0) {
			min = arr[i], max = arr[i], indexMin = i, indexMax = i;
		}

		if(arr[i] < min) {
			min = arr[i];
			indexMin = i;
		} else if(arr[i] > max ) {
			max = arr[i];
			indexMax = i;
		}
	}

	swap(arr[indexMax], arr[indexMin]);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	

	return 0;
}