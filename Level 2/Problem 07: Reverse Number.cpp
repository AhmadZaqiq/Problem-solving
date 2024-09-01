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

int CalculateNumberInReverse(int Number)
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

int main()
{
	cout << CalculateNumberInReverse(ReadPositiveNumber("Please Enter A Number"));

	system("pause>0");

	return 0;
}

