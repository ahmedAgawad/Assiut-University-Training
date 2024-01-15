#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
void printNums(int num) {
	if(num == 1) {
		cout << 1;
		return;
	} else {
		cout << num << " ";
		printNums(num - 1);
	}
}

int main()
{
	int num;
	cin >> num;

	printNums(num);

	return 0;
}