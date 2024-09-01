//Ahmad JR
#include<iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << "\n";
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

int RrverseNumber(int Number)
{
	int Reminder = 0, NumInRev = 0;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number /= 10;

		NumInRev = NumInRev * 10 + Reminder;
	}

	return NumInRev;
}

bool CheckIfNumberIsPalindrome(int Number)
{
	return (Number == RrverseNumber(Number));
}

int main()
{
	if (CheckIfNumberIsPalindrome(ReadPositiveNumber("Please Enter A Number")))
		cout << "Yes, Its Palindrome Number :)";
	else
		cout << "No, Its Not Palindrome Number...";

	system("pause>0");

	return 0;
}
