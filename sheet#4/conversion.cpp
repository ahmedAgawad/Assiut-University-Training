#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string str;
	cin >> str;

	string spaceCh = " ";
	for (int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = (char)(str[i] + 32);
		} else {
			str[i] = (char)(str[i] - 32);
		}
	}

	for (int i = 0; i < str.size(); i++)
	{
		if(str[i] == ',') {
			cout << spaceCh;
		} else {
			cout << str[i];
		}
	}
	


	return 0;
}