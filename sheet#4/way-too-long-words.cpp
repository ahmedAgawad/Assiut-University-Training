#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int t;
	cin >> t;
	while (t > 0)
	{
		cin >> s;
		if (s.size() > 10)
		{
			cout << s[0] << s.size() - 2 << s[s.size() - 1];
		}
		else
		{
			cout << s;
		}

		cout << endl;
		--t;
	}

	return 0;
}