#include <iostream>
using namespace std;

int main()
{
	int size, mainSum{0}, secSum{0};
	cin >> size;
	int matrix[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];

			if (i == j)
			{
				mainSum += matrix[i][j];
			}
			if ((i + j) == (size - 1))
			{
				secSum += matrix[i][j];
			}
		}
	}

	cout << abs(mainSum - secSum);

	return 0;
}