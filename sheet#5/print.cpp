#include <iostream>
using namespace std;
 
void print(int n) {
	for (int i = 1; i <= n; i++)
	{
		if(i == n) {
			cout << i;
		} else {
			cout << i << " ";
		}
	}
	
}

int main()
{
	int num;
	cin >> num;
	print(num);
	return 0;
}