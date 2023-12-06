#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int x, y, sumOdd{0};
		cin >> x >> y;
		for (int i = (min(x, y) + 1); i < max(x, y); i++)
		{
			if (i % 2 != 0)
			{
				sumOdd += i;
			}
		}

		cout << sumOdd << endl;

		--t;
	}

	return 0;
}