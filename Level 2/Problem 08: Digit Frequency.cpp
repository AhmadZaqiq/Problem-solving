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

int DigitFrequency(int Number, unsigned short Digit)
{
	int Reminder = 0, FreqCount = 0;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number /= 10;

		if (Reminder == Digit)
			FreqCount++;
	}

	return FreqCount;
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter A Number");
	unsigned short Digit = ReadPositiveNumber("Please Enter A Digit To Check ");

	cout << DigitFrequency(Number, Digit) << " Time(s)";

	system("pause>0");

	return 0;
}

