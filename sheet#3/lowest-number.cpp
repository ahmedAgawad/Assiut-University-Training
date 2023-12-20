#include <iostream>
using namespace std;
 
int main()
{
	int size, min {10001}, index;
	cin >> size;

	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];

		if(arr[i] < min) {
			min = arr[i];
			index = i+1;
		}
	}

	cout << min << " " << index;

	return 0;
}