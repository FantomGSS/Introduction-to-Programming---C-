#include <iostream>
using namespace std;

int main()
{
	int sumOfNums = 0;

	for (int i = 1; i <= 999; i++) 
	{
		int num = i;
		int copyOfNum = num;
		int digit = 0;
		int reverseNum = 0;

		while (copyOfNum != 0)
		{
			digit = copyOfNum % 10;
			reverseNum = (reverseNum * 10) + digit;
			copyOfNum = copyOfNum / 10;
		}

		if (num == reverseNum) 
		{
			string binaryNum;
			while (num != 0) 
			{ 
				binaryNum = (num % 2 == 0 ? "0" : "1") + binaryNum; 
				num /= 2; 
			}

			bool isPalindrome = true;
			int length = binaryNum.length();
			for (int i = 0; i < length; i++)
			{
				if (binaryNum[i] != binaryNum[length - i - 1])
				{
					isPalindrome = false;
					break;
				}
			}
			if (isPalindrome) sumOfNums += reverseNum; 
		}
	}
	cout << sumOfNums << endl;
}

