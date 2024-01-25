#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int main()
{
	int n, m, sumA = 0, sumB = 0;
	cin >> n >> m;
	long long a[n], b[m];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sumA += a[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		sumB += b[i];
	}

	if(sumA == sumB) {
		cout << "Yes";
	}else {
		cout << "No";
	}

	return 0;
}