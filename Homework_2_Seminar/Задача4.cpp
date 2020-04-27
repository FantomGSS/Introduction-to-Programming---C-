#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the size of the square matrix: ";
	int size;
	cin >> size;

	int** matrix = new int* [size];
	for (int i = 0; i < size; ++i)
		matrix[i] = new int[size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << "Enter N: ";
	int n;
	cin >> n;

	int rightUp, rightBottom, leftBottom, leftUp;

	for (int i = 0; i < n; i++)
	{
		leftUp = matrix[0][0];
		rightUp = matrix[0][size - 1];
		rightBottom = matrix[size - 1][size - 1];
		leftBottom = matrix[size - 1][0];
		matrix[0][0] = leftBottom;
		matrix[0][size - 1] = leftUp;
		matrix[size - 1][size - 1] = rightUp;
		matrix[size - 1][0] = rightBottom;
	}

	if (size >= 4)
	{
		for (int i = 0; i < n; i++)
		{
			leftUp = matrix[1][1];
			rightUp = matrix[1][size - 2];
			rightBottom = matrix[size - 2][size - 2];
			leftBottom = matrix[size - 2][1];
			matrix[1][1] = rightUp;
			matrix[1][size - 2] = rightBottom;
			matrix[size - 2][size - 2] = leftBottom;
			matrix[size - 2][1] = leftUp;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}