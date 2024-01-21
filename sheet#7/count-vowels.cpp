#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int countVowels(string sentence, int currentIndex, int &count)
{

	if (currentIndex == 0)
	{
		if (sentence[0] == 'a' || sentence[0] == 'e' || sentence[0] == 'i' || sentence[0] == 'o' || sentence[0] == 'u' || sentence[0] == 'A' || sentence[0] == 'E' || sentence[0] == 'I' || sentence[0] == 'O' || sentence[0] == 'U')
		{
			count++;
		}

		return count;
	}

	if (sentence[currentIndex] == 'a' || sentence[currentIndex] == 'e' || sentence[currentIndex] == 'i' || sentence[currentIndex] == 'o' || sentence[currentIndex] == 'u' || sentence[currentIndex] == 'A' || sentence[currentIndex] == 'E' || sentence[currentIndex] == 'I' || sentence[currentIndex] == 'O' || sentence[currentIndex] == 'U')
	{
		count++;
	}

	countVowels(sentence, currentIndex - 1, count);
}

int main()
{
	string s;
	getline(cin, s);
	int count = 0;

	countVowels(s, s.length() - 1, count);
	cout << count;
}