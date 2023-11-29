#include <iostream>
using namespace std;
 
int main()
{
	char x;
	cin >> x;
	if(x >=  65 && x <= 123) {
		cout << "ALPHA" << endl;
		if(x <= 91) {
			cout << "IS CAPITAL";
		} else {
			cout << "IS SMALL";
		}
	} else if(x >= '0' && x <= '9') {
		cout << "IS DIGIT";
	}
	return 0;
}