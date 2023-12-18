#include <iostream>
using namespace std;

int main()
{
	long long id;
	cin >> id;

	long long  row = id / 4;
	int column;
	if (row % 2 == 0)
	{
		column = 0;
		for (long long i = row * 4; i <= (i + 3); i++)
		{
			if (i == id)
			{
				break;
			}

			column++;
		}
	}
	else
	{
		column = 3;
		for (long long i = row*4; i <= (i+3); i++)
		{
			if(i == id) {
				break;
			}

			column--;
		}
	}

	cout << row << " " << column;
	return 0;
}