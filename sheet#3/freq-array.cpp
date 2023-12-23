#include <iostream>
using namespace std;
 
int main()
{
	int n, m;
	cin >> n >> m;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int freq[m + 1]{0};

	for (int i = 0; i < n; i++)
	{
		freq[arr[i]]++;
	}
	

	for (int i = 1; i < m + 1; i++)
	{
		cout << freq[i] << endl;
	}
	
	
	return 0;
}