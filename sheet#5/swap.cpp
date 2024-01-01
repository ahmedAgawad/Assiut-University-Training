#include <iostream>
using namespace std;
 
void swapNums(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

	cout << x << " " << y;
}


int main()
{
	int x, y;
	cin >> x >> y;

	swapNums(x, y);
	return 0;
}