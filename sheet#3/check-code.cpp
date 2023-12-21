#include <iostream>
using namespace std;

int main()
{
	int a, b, aCount{0}, bCount{0};
	bool hypen = false;
	cin >> a >> b;
	string pattern;
	cin >> pattern;

	for (int i = 0; i < a; i++)
	{
		if ((pattern[i] - '0') >= 0 && (pattern[i] - '0') <= 9)
		{
			aCount++;
		}
	}

	if (pattern[a] == '-')
	{
		hypen = true;
	}

	for (int i = a + 1; i < pattern.size(); i++)
	{
		if ((pattern[i] - '0') >= 0 && (pattern[i] - '0') <= 9)
		{
			bCount++;
		}
	}

	if (bCount == b && aCount == a && hypen == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
