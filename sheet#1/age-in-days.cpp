#include <iostream>
using namespace std;

int main()
{
	long long n, years, months, days;
	cin >> n;

	years = n / 365;
	months = (n % 365) / 30;
	days = (n - ((years * 365) + (months * 30)));

	cout << years << " years" << endl
		  << months << " months" << endl
		  << days << " days" << endl;
	return 0;
}