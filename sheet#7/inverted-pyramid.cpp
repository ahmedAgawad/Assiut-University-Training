#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
void printPyInv(int num, int spaces) {
	if(num == 0) {
		return;
	}

	for (int i = 0; i < spaces ; i++)
	{
		cout << " ";
	}

	for (int i = 1; i <= (2*num - 1); i++)
	{
		cout << "*";
	}

	cout << endl;
	printPyInv(num - 1, spaces + 1);
}

int main()
{
	int n;
	cin >> n;

	printPyInv(n, 0);

	return 0;
}