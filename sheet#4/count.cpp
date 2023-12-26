#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string num;
	cin >> num;
	int sum = 0;

	for (int i = 0; i < num.size(); i++)
	{
		sum = sum + (num[i] - '0');
	}

	cout << sum;

	return 0;
}