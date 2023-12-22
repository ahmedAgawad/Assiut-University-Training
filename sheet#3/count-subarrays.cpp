#include <iostream>
using namespace std;
 
int main()
{
	int t, size;
	cin >> t;

	while (t > 0)
	{
		int subNumber {0};
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
				if(arr[j] > arr[j - 1]) {
					subNumber++;
				} else {
					break;
				}
			}
		}

		cout << subNumber + size << endl;
		--t;
	}
	
	return 0;
}