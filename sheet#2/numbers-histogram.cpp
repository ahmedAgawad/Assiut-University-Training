#include <iostream>
using namespace std;
 
int main()
{
	char s;
	int n, x;
	cin >> s >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		while (x > 0)
		{
			cout << s;
			x--;
		}
      
		if(i != n) {
			cout << endl;
		}
	}
	
	return 0;
}