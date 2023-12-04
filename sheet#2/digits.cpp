#include <iostream>
using namespace std;

int main()
{
	int t;
	long long n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;

		if (n == 0)
		{
			cout << 0;
		}
		
		while (n > 0)
		{
			cout << n % 10 << " ";
			n /= 10;
		}
		cout << endl;
	}

	return 0;
}