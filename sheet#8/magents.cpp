#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, counter = 0;
	cin >> n;
	string s1, s2;
	for (int i = 0; i < n; i++)
	{
		cin >> s1;
		if(s1 == s2) {
			s2 = s1;
		} else {
			counter++;
			s2 = s1;
		}
	}

	cout << counter;

	return 0;
}