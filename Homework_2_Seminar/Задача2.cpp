#include <iostream>
using namespace std;

int main()
{
	string wordOne, wordTwo;
	cin >> wordOne >> wordTwo;
	char symbol;
	for (int i = 0; i < wordOne.size(); i++) 
	{
		symbol = wordOne[i];
		for (int j = 0; j < wordTwo.size(); j++) 
		{
			if (toupper(symbol) == toupper(wordTwo[j])) wordOne[i] = toupper(wordOne[i]);
		}
	}
	cout << wordOne << endl;
}