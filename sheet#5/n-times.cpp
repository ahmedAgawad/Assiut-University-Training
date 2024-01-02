#include <iostream>
using namespace std;
 
void printChar(int n, char c) {
	for (int i = 0; i < n; i++)
	{
		cout << c << " ";
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t > 0)
	{
		int n;
		char c;
		cin >> n >> c;

		printChar(n, c);
		--t;
	}
	
	return 0;
}