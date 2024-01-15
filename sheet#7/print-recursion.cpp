#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
void printRec(int n) {
	if(n == 1) {
		cout << "I love Recursion";
		return;
	} else {
		cout << "I love Recursion" << endl;
		printRec(n - 1);
	}
} 

int main()
{
	int n;
	cin >> n;
	printRec(n);
	return 0;
}