#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string str;
	getline(cin, str);

	int i = 0;
	while (str[i] != '\\')
	{
		cout << str[i];
		i++;
	}
	
	return 0;
}