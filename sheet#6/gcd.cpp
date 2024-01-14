#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int gcd(int k, int l) {
	while (l != 0)
	{
		int x = k;
		k = l;
		l = x % l;
	}
	return k;
}

int main()
{
	long long a, b;
	cin >> a >> b;

	long long gcdRes = gcd(a, b);
	long long lcmRes = (a * b) / gcdRes;

	cout << gcdRes << " " << lcmRes;
	return 0;
}