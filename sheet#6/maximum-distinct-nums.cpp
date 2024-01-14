#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int main()
{
	long long n, sum =0, disNum = 1, numCount = 0;
	cin >> n;

	while (sum <= n)
	{
		sum += disNum;
		disNum++;
		numCount++;
	}

	cout << numCount - 1;

	return 0;
}