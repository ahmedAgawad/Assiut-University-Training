#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n, reversed{0}, powerCount{0};
	cin >> n;
	long long n2 = n;
	long long n3 = n;

	while (n > 0)
	{
		powerCount++;
		n = n / 10;
	}

	powerCount--;

	while (n2 > 0)
	{
		reversed += ((n2 % 10) * pow(10, powerCount));
		powerCount--;
		n2 = n2 / 10;
	}

	cout << reversed << endl;

	if(n3 == reversed) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}