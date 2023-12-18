#include <iostream>
using namespace std;

int main()
{
	int n;
	long long num, maxf = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		long long divisons = 0;
		while (num % 2 == 0)
		{
			divisons++;
			num = num / 2;
		}
		if(divisons > maxf) {
			maxf = divisons;
		}
	}

	cout << maxf;

	return 0;
}