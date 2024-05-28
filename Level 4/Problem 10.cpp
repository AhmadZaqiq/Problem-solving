//Ahmad JR
#include <iostream>

using namespace std;

short ReadNumber(string Message)
{
	short Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

bool IsLeapYear(short Year)
{
	return((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInMonth(short Year, short Month)
{
	if (Month < 1 || Month >12)
		return 0;

	short ArrOfMonthDays[12] = { 31,28 + IsLeapYear(Year) ,31,30,31,30,31,31,30,31,30,31 };

	return ArrOfMonthDays[Month - 1];
}

short NumberOfDaysFromTheBeginingOfTheYear(short Year, short Month, short Day)
{
	short TotalDays = 0;

	for (short i = 0; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInMonth(Year, i);
	}
	TotalDays += Day;

	return TotalDays;
}

void PrintResult()
{
	short Year = ReadNumber("Plese Enter A Year: ");
	short Month = ReadNumber("Plese Enter A Month: ");
	short Day = ReadNumber("Plese Enter A Day:");

	cout << "\nNumber of Days from the begining of the year is "
		<< NumberOfDaysFromTheBeginingOfTheYear(Year, Month, Day);
}

int main()
{
	PrintResult();

	system("Pause>0");
}
