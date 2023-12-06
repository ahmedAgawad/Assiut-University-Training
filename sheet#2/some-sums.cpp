#include <iostream>
using namespace std;

int main()
{
	int n, a, b, sum{0};
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		int currentNum{i}, sumDigits{0};

		while (currentNum > 0)
		{
			sumDigits += (currentNum % 10);
			currentNum /= 10;
		}

		if(sumDigits >= a && sumDigits <= b) {
			sum += i;
		}
	}

	cout << sum;
	return 0;
}