#include <iostream>
using namespace std;

int main()
{
	int n, evenCount {0};
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			++evenCount;
			cout << i << endl;
		}
	}

	if(evenCount == 0) {
		cout << -1;
	}

	return 0;
}