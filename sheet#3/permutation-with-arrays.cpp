#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	string ans = "yes";

	long long a[n];
	long long b[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n);

	for (int i = 0; i < n; i++)
	{
		if(a[i] != b[i]) {
			ans = "no";
			break;
		} 
	}

	cout << ans;

	return 0;
}