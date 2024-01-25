#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int main()
{
	int n, p ,q, roomsCount = 0;
	cin >> n;


	while (n > 0)
	{
		cin >> p >> q;

		if(p+2 <= q)
			roomsCount++;


		--n;
	}

	cout << roomsCount;

	return 0;
}