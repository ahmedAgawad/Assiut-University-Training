#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int z = 1;
	int n = str.size();
	for (int i = 0; i <= str.size() / 2; i++)
	{
		if (str[n-z] == '?' && str[i] == '?')
		{
			str[n-z] = 'a';
			str[i] = 'a';
		}
		else if (str[n-z] == '?' && str[i] != '?')
		{
			str[n-z] = str[i];
		}
		else if (str[n-z] != '?' && str[i] == '?')
		{
			str[i] = str[n-z];
		}
		z++;
	}

	if (str.size() % 2 != 0)
	{
		if (str[str.size() / 2 + 1] == '?')
		{
			str[str.size() / 2 + 1] = 'a';
		}
	}

	string x = str;
	reverse(str.begin(), str.end());

	if(x == str) {
		cout << x;
	} else {
		cout << -1;
	}

	return 0;
}