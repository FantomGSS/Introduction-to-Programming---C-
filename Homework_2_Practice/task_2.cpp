#include <iostream>
using namespace std;

bool IsUpper(string word) 
{
	bool allLettersAreUppercase = false;
	int counterLettersUppercase = 0;

	for (int i = 0; i < word.size(); i++)
	{
		if (isupper(word[i]))
		{
			counterLettersUppercase++;
		}
	}

	if (counterLettersUppercase == word.size()) allLettersAreUppercase = true;
	
	return allLettersAreUppercase;
}

int main()
{
	string wordOne;
	string wordTwo;

	cin >> wordOne;
	cin >> wordTwo;

	if (wordOne.size() > 15 || wordTwo.size() > 15 || !IsUpper(wordOne) || !IsUpper(wordTwo))
	{
		cout << "Word size must be less than 15 letters and they should be uppercase! Try again!";
	}

	char letterWordOne;
	char letterWordTwo;
	int indexWordOne = 0;
	int indexWordTwo = 0;
	bool concurrence = false;

	for (int i = 0; i < wordOne.size(); i++)
	{
		letterWordOne = wordOne[i];
		for (int j = 0; j < wordTwo.size(); j++)
		{
			letterWordTwo = wordTwo[j];
			if (letterWordOne == letterWordTwo)
			{
				indexWordOne = i;
				indexWordTwo = j;
				concurrence = true;
				break;
			}
		}

		if (concurrence)
		{
			break;
		}
	}

	cout << endl;

	if (concurrence)
	{
		for (int i = 0; i < indexWordTwo; i++)
		{
			for (int j = 0; j < indexWordOne; j++)
			{
				cout << " ";
			}
			cout << wordTwo[i];
			for (int j = 0; j < wordOne.size() - indexWordOne - 1; j++)
			{
				cout << " ";
			}
			cout << endl;
		}

		cout << wordOne << endl;

		for (int i = indexWordTwo + 1; i < wordTwo.size(); i++)
		{
			for (int j = 0; j < indexWordOne; j++)
			{
				cout << " ";
			}
			cout << wordTwo[i];
			for (int j = 0; j < wordOne.size() - indexWordOne - 1; j++)
			{
				cout << " ";
			}
			cout << endl;
		}
	}

	else
	{
		cout << wordOne;
		cout << endl;
		for (int i = 0; i < wordTwo.size(); i++)
		{
			for (int j = 0; j < wordOne.size(); j++)
			{
				cout << " ";
			}
			cout << wordTwo[i] << endl;
		}
	}
}
