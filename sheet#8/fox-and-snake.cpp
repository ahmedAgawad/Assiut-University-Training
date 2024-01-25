#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int n, m, lastHashRow = 0;
	cin >> n >> m;
	bool right = true;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i % 2 != 0)
			{
				cout << "#";
			}
			else if (i % 2 == 0 && right == true && j == m && lastHashRow != i)
			{
				cout << "#";
				right = false;
				lastHashRow = i;
			}
			else if (i % 2 == 0 && right == false && j == 1 && lastHashRow != i)
			{
				cout << "#";
				right = true;
				lastHashRow = i;
			}
			else if (i % 2 == 0)
			{
				cout << ".";
			}
		}
		cout << endl;
	}

	return 0;
}