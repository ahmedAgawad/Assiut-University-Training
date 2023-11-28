#include <iostream>
using namespace std;
 
int main()
{
	long long n, m, lastn, lastm;
	cin >> n >> m;
	lastn = n % 10;
	lastm = m % 10;
	cout << lastn + lastm;
	return 0;
}