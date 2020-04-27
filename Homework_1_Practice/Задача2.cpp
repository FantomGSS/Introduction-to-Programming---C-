#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << "|";
		if (i % 2 == 0)
		{
			for (int p = 1; p <= num / 2; p++) cout << " #";
			if (num % 2 != 0) cout << " ";
		}
		else
		{
			for (int p = 1; p <= num / 2; p++) cout << "# ";
			if (num % 2 != 0) cout << "#";
		}
		cout << "|" << endl;
	}
}
