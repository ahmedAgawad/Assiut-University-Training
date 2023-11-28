#include <iostream>
using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	string answer{(a >= b ? "Yes" : "No")};
	cout << answer;
	return 0;
}