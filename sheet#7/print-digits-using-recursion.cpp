#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
void printDigits(string num, long long maxIndex, long long currentIndex) {
	if(currentIndex == maxIndex) {
		cout << num[currentIndex] << endl;
		return;
	}

	cout << num[currentIndex] << " ";
	printDigits(num, maxIndex, currentIndex + 1);
}

int main()
{
	int t;
	cin >> t;

	while (t > 0)
	{
		long long num;
		cin >> num;

		string stringifiedNum = to_string(num);

		printDigits(stringifiedNum, stringifiedNum.length() - 1, 0);

		--t;
	}
	

	return 0;
}