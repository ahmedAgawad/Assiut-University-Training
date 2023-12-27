#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string str, str2;
	cin >> str;
	str2 = str;
	for (int i = 0; i < str.size(); i++)
	{
		str2[str.size() - 1 - i] = str[i];
	}

	if(str == str2) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}