#include <iostream>
using namespace std;
 
int main()
{
	double n, k, a;
	cin >> n >> k >> a;
	long long result = (n * k) / a;
	double result2 = (n * k) / a, test = result2 - result;

	if(test > 0) {
		cout << "double" << endl;
	} else if(result2 > 2147483647) {
		cout << "long long" << endl;

	} else {
		cout << "int" << endl;
	}
	return 0;
}