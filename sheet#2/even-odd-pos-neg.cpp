#include <iostream>
using namespace std;

int main()
{
	int n, input, evCount{0}, ngCount{0}, odCount{0}, posCount{0};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input < 0 && input % 2 == 0)
		{
			ngCount++;
			evCount++;
		}
		else if (input < 0 && input % 2 != 0)
		{
			ngCount++;
			odCount++;
		}
		else if (input > 0 && input % 2 == 0)
		{
			posCount++;
			evCount++;
		}
		else if (input > 0 && input % 2 != 0)
		{
			posCount++;
			odCount++;
		}
		else
		{
			evCount++;
		}
	}
	cout << "Even: " << evCount << endl;
	cout << "Odd: " << odCount << endl;
	cout << "Positive: " << posCount << endl;
	cout << "Negative: " << ngCount;
	return 0;
}