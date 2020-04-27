#include <iostream>
using namespace std;

int index = -1;

int f(string one, string two)
{
	index++;
	int countNo = 0;
	char symbol = one[index];
	for (int i = 0; i < two.size(); i++)
	{
		if (symbol == two[i] && index < one.size())
		{
			return 1 * f(one, two);
		}
		else if (index == one.size())
		{
			return 1;
		}
		else
		{
			countNo++;
			if (countNo == two.size()) return 0;
		}
	}
}

int main()
{
	string one;
	string two;
	cin >> one >> two;

	int boolResult = f(one, two);

	if (boolResult == 1) cout << "Yes" << endl;
	else cout << "No" << endl;
}
