#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	string S, T;

	while (t > 0)
	{
		cin >> S >> T;
		int sLength = S.size();
		int tLength = T.size();

		if (sLength > tLength)
		{
			for (int i = 0; i < tLength; i++)
			{
				cout << S[i] << T[i];
			}

			cout << S.substr(tLength, (sLength - tLength));
		}
		else if (tLength > sLength)
		{
			for (int i = 0; i < sLength; i++)
			{
				cout << S[i] << T[i];
			}

			cout << T.substr(sLength, (tLength - sLength));
		} else {
			for (int i = 0; i < tLength; i++)
			{
				cout << S[i] << T[i];
			}
			
		}

		cout << endl;
		--t;
	}

	return 0;
}