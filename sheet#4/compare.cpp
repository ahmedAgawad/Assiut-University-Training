#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x, y;
	cin >> x >> y;

	int minSize = min(x.size(), y.size());
	string s = "";
	for (int i = 0; i < minSize; i++)
	{
		if (x[i] < y[i])
		{
			s = x;
			break;
		}
		else if (x[i] > y[i])
		{
			s = y;
			break;
		}
	}

	if(s == "") {
		if(x.size() < y.size()) {
			cout << x;
		}
		else if (x.size() > y.size())
		{
			cout << y;
		} else {
			cout << x;
		}
	} else {
		cout << s;
	}

	return 0;
}