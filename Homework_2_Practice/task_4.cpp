#include <iostream>
using namespace std;

int PascalTriangleValue(int row, int position)
{
	if (position == 1 || position == row)
	{
		return 1;
	}
	else
	{
		return PascalTriangleValue(row - 1, position - 1) + PascalTriangleValue(row - 1, position);
	}
}
int main()
{
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) 
		{
			cout << PascalTriangleValue(i, j) << " ";
		}
		cout << endl;
	}
	
}
