#include <iostream>
using namespace std;

int main()
{
	int number;
	int countNumber = 0;
	cin >> number;
	int copyOfNumber = number;
	while(copyOfNumber != 0)
	{
		copyOfNumber /= 10;
		countNumber++;
	}

	int* array = new int[countNumber];

	for (int i = 0; i < countNumber; i++)
	{
		array[i] = number % 10;
		number /= 10;
	}
	
	int sum = 0;

	if (countNumber % 2 == 0) 
	{
		for (int i = 0; i < countNumber / 2; i++)
		{
			sum += array[i] * array[countNumber - i - 1];
		}
	}
	else 
	{
		for (int i = 0; i < countNumber / 2; i++)
		{
			sum += array[i] * array[countNumber - i - 1];
		}
		sum += array[countNumber / 2] * array[countNumber / 2];
	}

	cout << sum;
}
