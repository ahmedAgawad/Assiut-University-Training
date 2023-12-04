#include <iostream>
using namespace std;

int main()
{
	int a, b, luckyNumCount{0};
	cin >> a >> b;
	for (int i{a}; i <= b; i++)
	{
		int luckyDigitsNum{0}, numberOfDigits{0}, currentNum{i};

		while (currentNum > 0)
		{
			if (currentNum % 10 == 4 || currentNum % 10 == 7)
			{
				luckyDigitsNum++;
			}

			numberOfDigits++;
			currentNum = currentNum / 10;
		}

		if (luckyDigitsNum == numberOfDigits)
		{
			cout << i << " ";
			luckyNumCount++;
		}
	}

	if (luckyNumCount == 0)
	{
		cout << -1;
	}

	return 0;
}