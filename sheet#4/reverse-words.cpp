#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s, sub{""};
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			reverse(sub.begin(), sub.end());
			cout << sub << " ";
			sub = "";
		}
		else if (i == (s.size() - 1))
		{
			sub += s[i];
			reverse(sub.begin(), sub.end());
			cout << sub;
		}
		else
		{
			sub += s[i];
		}
	}

	return 0;
}