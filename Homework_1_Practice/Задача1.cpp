#include <iostream>
using namespace std;

int main()
{
	int countNumbers;
	int leftRotation;
	cin >> countNumbers >> leftRotation;

	int* array = new int[countNumbers];       //Използвал съм динамичен масив, тъй като при нормалния се изисква константа.
	for (int i = 0; i < countNumbers; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < countNumbers; i++)
	{
		cout << array[(i + leftRotation) % countNumbers] << " ";
	}
	cout << endl;
}
