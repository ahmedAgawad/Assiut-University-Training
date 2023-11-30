#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, p;
	cin >> x >> p;
	double originalPrice = p / ((100 - x) / 100);
	cout << ceil(originalPrice * 100) / 100.0;
	return 0;
}
