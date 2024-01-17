#include <iostream>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(long long n)
{

	string s = bitset<64>(n).to_string();
	const auto loc1 = s.find('1');

	if (loc1 != string::npos)
		return s.substr(loc1);

	return "0";
}

int main()
{

	int t;
	cin >> t;

	while (t > 0)
	{

		long long n;
		cin >> n;
		
		cout << decimalToBinary(n);
		cout << endl;

		--t;
	}
	

	return 0;
}