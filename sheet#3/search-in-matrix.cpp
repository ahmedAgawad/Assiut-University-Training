#include <iostream>
using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;
	long long x;
	bool isThere = 0;
	long long arr[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}

	cin >> x;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == x)
			{
				isThere = true;
			}
		}
	}

	if (isThere)
	{
		cout << "will not take number";
	} else {
		cout << "will take number";
	}

	return 0;
}