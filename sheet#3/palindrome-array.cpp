#include <iostream>
using namespace std;
 
int main()
{
	int size;
	string answer = "YES";
	cin >> size;
	long long arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		if(arr[i] != arr[size - i - 1]) {
			answer = "NO";
			break;
		}
	}

	cout << answer;

	return 0;
}