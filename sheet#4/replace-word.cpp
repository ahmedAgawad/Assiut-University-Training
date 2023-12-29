#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
	string s;
	cin >> s;


	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'E') {
			string sub = s.substr(i, 5);
			if(sub == "EGYPT") {
				s.erase(i, 5);
				s.insert(i, " ");
			}
		}
	}

	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
	
	return 0;
}