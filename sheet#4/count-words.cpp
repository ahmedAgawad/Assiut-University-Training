#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	string str;
	getline(cin, str);

	for (int i = 1; i < str.size(); i++)
	{
		if(!(str[i] >= 'A' && str[i] <= 'z') && str[i+1] >= 'A' && str[i+1] <= 'z') {
			count++;
		} else {
			continue;
		}
	}

	cout << count;

	return 0;
}