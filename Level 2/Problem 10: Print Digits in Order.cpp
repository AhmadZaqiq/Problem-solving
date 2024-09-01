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

void PrintDigitsInOrder()
{
	int Digits = CalculateNumberInReverse(ReadPositiveNumber("Please Enter A Number"));

	int Reminder = 0, NumInRev = 0;
	while (Digits > 0)
	{
		Reminder = Digits % 10;
		Digits /= 10;

		cout << Reminder << endl;
	}
}

int main()
{
	PrintDigitsInOrder();

	system("pause>0");

	return 0;
}
