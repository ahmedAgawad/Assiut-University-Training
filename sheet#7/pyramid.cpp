#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void printPyramid(int num, int input)
{
	if(num == 0) {
		return;
	}

	printPyramid(num - 1, input);
	for (int i = 1; i <= input - num ; i++)
	{
		cout << " ";
	}

	for (int i = 1; i <= num * 2 - 1; i++)
	{
		cout << "*";
	}

	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	printPyramid(n, n);
	return 0;
}