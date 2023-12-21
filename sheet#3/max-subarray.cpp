#include <iostream>
using namespace std;
 
int main()
{

	int t, size;
	cin >> t;
	while (t > 0)
	{
		cin >> size;
		long long arr[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			for (int j = i; j < size; j++)
			{
				long long max = -100001;
				for (int k = i; k <= j; k++)
				{
					if(arr[k] > max) {
						max = arr[k];
					}
				}
				cout << max << " ";
			}
		}
		
		cout << endl;
		t--;
	}
	

	return 0;
}