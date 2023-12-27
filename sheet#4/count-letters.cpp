#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;

	sort(str.begin(), str.end());

	int count = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (i != (str.size() - 1))
		{
			if(str[i] == str[i+1]) {
				count++;
			} else {
				cout << str[i] << " : " << (count+1) << endl;
				count = 0;
			}
		} else {
			if(str[i] == str[i -1]) {
				cout << str[i] << " : " << (count + 1);

			} else {
				cout << str[i] << " : " << 1;
			}
		}
	}

	return 0;
}