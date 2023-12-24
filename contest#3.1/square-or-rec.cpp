#include <iostream>
using namespace std;
 
int main()
{
	int t;
	cin >> t;

	long long w, h;
	while (t--)
	{
		cin >> w >> h;

		if(w == h) {
			cout << "Square";
		} else {
			cout << "Rectangle";
		}

		cout << endl;
	}
	
	return 0;
}