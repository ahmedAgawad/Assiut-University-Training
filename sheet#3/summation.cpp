#include <iostream>
using namespace std;
 
int main()
{
	const int size = 100000;
	long long arr[size];

	int n;
	cin >> n;

	long long sum{0};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	if(sum  < 0) {
		cout << sum * -1;
	} else {
		cout << sum;
	}
	
	return 0;
}