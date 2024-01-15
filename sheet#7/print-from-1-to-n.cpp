#include <iostream>
#include <cmath>
#include <string>
using namespace std;



void printNums(int n, int start)
{
	if(start == n) {
		cout << n;
		return;
	}	else {
		cout << start << endl;
		printNums(n,start + 1);
	}
}

int main()
{
	int num;
	cin >> num;

	printNums(num, 1);

	return 0;
}