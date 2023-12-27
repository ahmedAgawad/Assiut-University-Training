#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t > 0)
	{
		string str, ans = "Bad";
		cin >> str;

		if (str.size() >= 3)
		{
			for (int i = 0; i < str.size() - 4; i++)
			{
				string sub = str.substr(i, 3);
				if (sub == "010" || sub == "101")
				{
					ans = "Good";
					break;
				}
			}
		}

		cout << ans;
		cout << endl;

		--t;
	}

	return 0;
}