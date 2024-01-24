#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
void seq(int n, int &counter) {
	if(n == 1) {
		return;
	}

	if(n % 2 == 0) {
		++counter;
		seq(n / 2, counter);
	} else {
		++counter;
		seq(3 * n + 1, counter);
	}
}

int main()
{
	int n, counter = 1;
	cin >> n;

	seq(n, counter);

	cout << counter;
	return 0;
}