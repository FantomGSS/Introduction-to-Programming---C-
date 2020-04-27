#include <iostream>
using namespace std;

int main()
{
	long long creditCardNumber;
	int countDigits = 0;
	long long copyOfCardNumber;
	long sum = 0;

	cin >> creditCardNumber;
	copyOfCardNumber = creditCardNumber;

	while (creditCardNumber != 0)
	{
		creditCardNumber /= 10;
		countDigits++;
	}

	int* array = new int[countDigits];      //Използвал съм динамичен масив, тъй като при нормалния се изисква константа.

	for (int i = 0; i < countDigits; i++)
	{
		array[i] = copyOfCardNumber % 10;
		copyOfCardNumber /= 10;
	}

	bool isValidCreditCardNumber = true;

	if (countDigits % 2 == 0)
	{
		for (int i = 0; i < countDigits; i++)
		{
			if (i % 2 == 0) sum += (array[i] * array[i]);
			else sum += array[i];
		}

		if (sum % 3 != 0) isValidCreditCardNumber = false;
	}
	else isValidCreditCardNumber = false;

	if(isValidCreditCardNumber) cout << "Valid credit card!" << endl;
	else cout << "Fake credit card!" << endl;
}
