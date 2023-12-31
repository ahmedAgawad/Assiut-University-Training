#include <iostream>
#include <cmath>
using namespace std;

string checkPrime(int n)
{

	if (n <= 1)
	{
		return "NO";
	}

	long long sqrtN = sqrt(n);

	for (int i = 2; i <= sqrtN; i++)
	{
		if(n % i == 0) {
			return "NO";
		}
	}
	return "YES";
}

int main()
{
	int t;
	cin >> t;

	long long num;
	while (t > 0)
	{
		cin >> num;

		cout << checkPrime(num) << endl;
		--t;
	}

	return 0;
}