#include <iostream>
using namespace std;

int main()
{
	int day, hours;
	cin >> day >> hours;
	double price = 0;
	if (day == 1) price = 4.50 * hours;
	else if (day == 2) price = 6 * hours;
	else if (day == 3) price = 4.50 * hours;
	else if (day == 4) price = 6 * hours;
	else if (day == 5) price = 6 * hours;
	else if (day == 6) price = 8.25 * hours;
	else if (day == 7) price = 8.25 * hours;
	else cout << "Invalid day!";
	cout << price << endl;
}