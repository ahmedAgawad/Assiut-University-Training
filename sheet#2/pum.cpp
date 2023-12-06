#include <iostream>
using namespace std;

int main()
{
	int n, counter{1};
	cin >> n;
	while (n > 0)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (i == 3)
			{
				cout << "PUM";
			}
			else
			{
				cout << counter << " ";
				++counter;
			}
		}
		++counter;
		cout << endl;
		--n;
	}

	return 0;
}