#include <iostream>
using namespace std;
 
int main()
{
	int size;
	cin >> size;

	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if(arr[j] < arr[i]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
	

	return 0;
}