#include <iostream>
using namespace std;

int main()
{
	int t;
	long long l, r;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		long long res = 0;
		cin >> l >> r;

		if (l > r)
		{
			res = (l * (l + 1) / 2) - ((r * (r + 1) / 2) - r);
		}
		else
		{
			res = (r * (r + 1) / 2) - ((l * (l + 1) / 2) - l);
		}

		cout << res << endl;
	}

	return 0;
}