#include <iostream>
using namespace std;

int main()
{
	int m;
	cin >> m;
	int counter = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = i; j <= 9 * m; j++)
		{
			if (counter >= 9)
			{
				counter = 0;
				break;
			}
			cout << j % 9 + 1 << " ";
			counter++;
		}
		cout << endl;
	}
}
