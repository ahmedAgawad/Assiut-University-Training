#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	double res = log2(n) / log2(2);

	if(res - (int)res == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}