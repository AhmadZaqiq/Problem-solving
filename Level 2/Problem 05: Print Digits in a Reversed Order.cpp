//Ahmad JR
#include<iostream>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Num = 0;
	do
	{
		cout << Massage << "\n";
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void CalculateReverseDigits(int Number)
{
	int Reminder = 0;

	while (Number > 0)
	{
		Reminder = Number % 10;
		Number /= 10;

		cout << Reminder << endl;
	}
}

int main()
{
	CalculateReverseDigits(ReadPositiveNumber("Please Enter A Number"));

	system("pause>0");

	return 0;
}

