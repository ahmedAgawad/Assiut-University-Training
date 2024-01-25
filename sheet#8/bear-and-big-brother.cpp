#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int main()
{
	int a, b, yearsCount = 0;
	cin >> a >> b;

	while(a <= b) {
		a *= 3;
		b *= 2;
		yearsCount++;
	}

	cout << yearsCount;

	return 0;
}