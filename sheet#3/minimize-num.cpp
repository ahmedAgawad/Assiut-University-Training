#include <iostream>
using namespace std;
 
int main()
{
	int size, maxCount {0};
	cin >> size;
	long long arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	

	for (int i = 0; i < size; i++)
	{
		if(arr[i] % 2 == 0) {
			arr[i] = (arr[i] / 2);
		} else {
			break;
		}

		if (i == (size - 1))
		{
			maxCount++;
			i = 0;
		}
	}
	

	cout << maxCount;

	return 0;
}