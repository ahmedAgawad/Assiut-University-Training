#include <iostream>
using namespace std;

int main()
{
	int size, min{0} , count{0};
	cin >> size;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if(arr[i] < min) {
			min = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if(arr[i] == min) {
			count++;
		}
	}
	
	if(count % 2 == 0) {
		cout << "Unlucky";
	} else  {
		cout << "Lucky";
	}

	return 0;
}