#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	while (n > 0 && m > 0)
	{
		int greater, smaller, sum{0};

		if (n > m)
		{
			greater = n;
			smaller = m;
		}
		else
		{
			greater = m;
			smaller = n;
		}

		for (int i = smaller; i <= greater; i++)
		{
			cout << i << " ";
			sum += i;
		}

		cout << "sum =" << sum << endl;
		cin >> n >> m;
	}

	return 0;
}