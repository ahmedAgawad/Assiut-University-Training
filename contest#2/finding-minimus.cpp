#include <iostream>
using namespace std;
 
int main()
{
	int n, k, count {0}, min;
	long long x;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if(count == 0) {
			min = x;
		} else if(x < min) {
			min = x;
		}
		

		count++;

		if(count == k || i == n) {
			cout << min << " ";
			count = 0;
		} 
	}
	
	
	return 0;
}