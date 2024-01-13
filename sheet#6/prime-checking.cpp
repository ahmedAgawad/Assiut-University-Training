#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	if(n == 2) {
		cout << "YES";
		return 0;
	}

	if(n < 2 || n%2 ==0) {
		cout << "NO";
		return 0;
	}

	for (int i = 3; i <= sqrt(n); i+=2)
	{
		if(n % i == 0) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}