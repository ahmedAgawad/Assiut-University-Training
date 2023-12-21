#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	string A;

	cin >> N;
	cin >> A;

	long long sum = 0;
	for (char digitChar : A)
	{
		int digit = digitChar - '0';
		sum += digit;
	}

	cout << sum;

	return 0;
}