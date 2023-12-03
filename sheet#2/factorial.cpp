#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n;
	long long facRes = 1;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;

		if (n != 0)
		{
			while (n > 1)
			{
				facRes *= n;
				--n;
			}
		}
		else
		{
			facRes = 1;
		}

		if (i != t)
		{
			cout << facRes << endl;
		}
		else
		{
			cout << facRes;
		}
		facRes = 1;
	}

	return 0;
}