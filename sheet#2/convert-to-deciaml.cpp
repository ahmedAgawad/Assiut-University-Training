#include <iostream>
using namespace std;

int main()
{
	int t;
	int n;
	cin >> t;

	while (t > 0)
	{
		int binary{0}, remainder{0}, product{1}, newDecimal{0}, placeValue{1};
		cin >> n;
		while (n != 0)
		{
			remainder = n % 2;
			if (remainder == 1)
			{
				binary = binary + (remainder * product);
				product *= 10;
			}
			n /= 2;
		}

		while (binary != 0)
		{
			newDecimal = newDecimal + placeValue;
			placeValue *= 2;
			binary /= 10;
		}

		cout << newDecimal << endl;
		--t;
	}

	return 0;
}